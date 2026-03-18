/*
 * XREFs of ExGetSessionPoolTagInformation @ 0x1406A8B68
 * Callers:
 *     ExpQuerySystemInformation @ 0x14073B5A0 (ExpQuerySystemInformation.c)
 * Callees:
 *     MmDetachSession @ 0x140231240 (MmDetachSession.c)
 *     MmAttachSession @ 0x1402312E0 (MmAttachSession.c)
 *     ExUnlockUserBuffer @ 0x140231450 (ExUnlockUserBuffer.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     MmGetNextSession @ 0x1402A1770 (MmGetNextSession.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ExGetAttachedSessionPoolTagInfo @ 0x1406A8D54 (ExGetAttachedSessionPoolTagInfo.c)
 *     ExLockUserBuffer @ 0x1406A904C (ExLockUserBuffer.c)
 */

__int64 __fastcall ExGetSessionPoolTagInformation(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  int AttachedSessionPoolTagInfo; // ebx
  _QWORD *v5; // r14
  _DWORD *v7; // r12
  unsigned int v8; // esi
  __int64 result; // rax
  unsigned int SessionId; // eax
  int v11; // r12d
  void *NextSession; // rdi
  _QWORD *v13; // r15
  unsigned int v14; // r13d
  bool v15; // sf
  unsigned int v16; // [rsp+30h] [rbp-39h] BYREF
  _QWORD *v17; // [rsp+38h] [rbp-31h] BYREF
  _DWORD *v18; // [rsp+40h] [rbp-29h]
  PVOID P; // [rsp+48h] [rbp-21h] BYREF
  _DWORD *v20; // [rsp+50h] [rbp-19h]
  _OWORD v21[3]; // [rsp+58h] [rbp-11h] BYREF

  v17 = 0LL;
  P = 0LL;
  AttachedSessionPoolTagInfo = 0;
  *a3 = 0;
  v5 = 0LL;
  v16 = 0;
  v18 = a4;
  v7 = a3;
  v20 = a3;
  v8 = a2;
  memset(v21, 0, sizeof(v21));
  if ( (_DWORD)a2 )
  {
    LOBYTE(a3) = KeGetCurrentThread()->PreviousMode;
    result = ExLockUserBuffer(a1, a2, a3, 1LL, &v17, &P);
    AttachedSessionPoolTagInfo = result;
    if ( (int)result < 0 )
      return result;
  }
  SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  if ( *a4 != -1 && *a4 == SessionId )
  {
    v5 = v17;
    AttachedSessionPoolTagInfo = ExGetAttachedSessionPoolTagInfo(v17, v8, v7, SessionId);
    v15 = AttachedSessionPoolTagInfo < 0;
    goto LABEL_15;
  }
  v11 = 0;
  NextSession = (void *)MmGetNextSession(0LL);
  if ( !NextSession )
    goto LABEL_14;
  v13 = v17;
  while ( 1 )
  {
    v14 = MmGetSessionIdEx((__int64)NextSession);
    if ( *v18 != -1 && *v18 != v14 )
      goto LABEL_13;
    AttachedSessionPoolTagInfo = MmAttachSession((ULONG_PTR)NextSession);
    if ( AttachedSessionPoolTagInfo < 0 )
      goto LABEL_14;
    AttachedSessionPoolTagInfo = ExGetAttachedSessionPoolTagInfo(v13, v8, &v16, v14);
    MmDetachSession((__int64)NextSession, (__int64)v21);
    if ( AttachedSessionPoolTagInfo < 0 )
    {
      if ( AttachedSessionPoolTagInfo != -1073741820 )
        goto LABEL_29;
      v8 = 0;
      goto LABEL_12;
    }
    if ( v16 > v8 || v16 < 0x38 )
      break;
    v5 = v13;
    v13 = (_QWORD *)((char *)v13 + v16);
    v8 -= v16;
LABEL_12:
    v11 += v16;
    if ( *v18 != -1 )
      goto LABEL_29;
LABEL_13:
    NextSession = (void *)MmGetNextSession(NextSession);
    if ( !NextSession )
      goto LABEL_14;
  }
  AttachedSessionPoolTagInfo = -1073741675;
LABEL_29:
  ObfDereferenceObject(NextSession);
LABEL_14:
  v15 = AttachedSessionPoolTagInfo < 0;
  *v20 = v11;
LABEL_15:
  if ( !v15 && v5 )
    *v5 = 0LL;
  if ( P )
    ExUnlockUserBuffer((struct _MDL *)P);
  return (unsigned int)AttachedSessionPoolTagInfo;
}
