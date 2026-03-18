/*
 * XREFs of ExGetSessionBigPoolInformation @ 0x1409F5D80
 * Callers:
 *     ExpQuerySystemInformation @ 0x14073B5A0 (ExpQuerySystemInformation.c)
 * Callees:
 *     MmDetachSession @ 0x140231240 (MmDetachSession.c)
 *     MmAttachSession @ 0x1402312E0 (MmAttachSession.c)
 *     ExUnlockUserBuffer @ 0x140231450 (ExUnlockUserBuffer.c)
 *     MmGetNextSession @ 0x1402A1770 (MmGetNextSession.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     MmGetSessionId @ 0x140300B40 (MmGetSessionId.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ExGetBigPoolInfo @ 0x14063A8C0 (ExGetBigPoolInfo.c)
 *     ExLockUserBuffer @ 0x1406A904C (ExLockUserBuffer.c)
 */

__int64 __fastcall ExGetSessionBigPoolInformation(unsigned __int64 a1, unsigned int a2, unsigned int *a3, _DWORD *a4)
{
  unsigned int *v4; // r14
  __int64 v5; // r12
  unsigned int v6; // esi
  int v7; // edi
  _QWORD *v8; // r13
  __int64 result; // rax
  void *NextSession; // rbx
  __int64 v11; // r14
  int SessionId; // eax
  int v13; // r15d
  _DWORD *v14; // rcx
  unsigned int v15; // edx
  int BigPoolInfo; // eax
  int v17; // [rsp+30h] [rbp-49h]
  unsigned int v18; // [rsp+34h] [rbp-45h] BYREF
  unsigned int *v19; // [rsp+38h] [rbp-41h]
  __int64 v20; // [rsp+40h] [rbp-39h] BYREF
  unsigned int v21; // [rsp+48h] [rbp-31h]
  _DWORD *v22; // [rsp+50h] [rbp-29h]
  PVOID P; // [rsp+58h] [rbp-21h] BYREF
  _OWORD v24[3]; // [rsp+60h] [rbp-19h] BYREF

  v22 = a4;
  v19 = a3;
  v21 = a2;
  v4 = a3;
  v20 = 0LL;
  v5 = 0LL;
  P = 0LL;
  v17 = 1;
  v6 = 0;
  v18 = 0;
  v7 = 0;
  *a3 = 0;
  v8 = 0LL;
  memset(v24, 0, sizeof(v24));
  if ( a2 )
  {
    result = ExLockUserBuffer(a1, a2, KeGetCurrentThread()->PreviousMode, IoWriteAccess, &v20, (struct _MDL **)&P);
    if ( (int)result < 0 )
      return result;
    v5 = v20;
  }
  NextSession = (void *)MmGetNextSession(0LL);
  if ( !NextSession )
    goto LABEL_24;
  while ( 1 )
  {
    v11 = v6 + v5;
    SessionId = MmGetSessionId((__int64)NextSession);
    LODWORD(v20) = SessionId;
    if ( *v22 != -1 && SessionId != *v22 )
      goto LABEL_20;
    if ( (int)MmAttachSession((ULONG_PTR)NextSession) >= 0 )
    {
      if ( v6 >= 0xFFFFFFD8 )
      {
        v7 = -1073741675;
LABEL_22:
        MmDetachSession((__int64)NextSession, (__int64)v24);
        ObfDereferenceObject(NextSession);
LABEL_23:
        v4 = v19;
        goto LABEL_24;
      }
      if ( (unsigned __int64)v6 + 40 <= v21 && (v13 = v17) != 0 )
      {
        v14 = (_DWORD *)(v6 + v5);
        v15 = v21 - v6;
      }
      else
      {
        v13 = 0;
        v14 = 0LL;
        v17 = 0;
        v15 = 0;
        v7 = -1073741820;
      }
      BigPoolInfo = ExGetBigPoolInfo(v14, v15, 0, &v18);
      if ( BigPoolInfo < 0 )
      {
        v7 = BigPoolInfo;
        if ( BigPoolInfo != -1073741820 )
          goto LABEL_22;
      }
      if ( v13 == 1 && BigPoolInfo >= 0 )
      {
        v8 = (_QWORD *)(v6 + v5);
        *(_DWORD *)(v11 + 8) = v20;
        *(_QWORD *)v11 = (unsigned int)(24 * *(_DWORD *)(v11 + 12) + 16);
      }
      v6 += v18;
      MmDetachSession((__int64)NextSession, (__int64)v24);
    }
    if ( *v22 != -1 )
      break;
LABEL_20:
    NextSession = (void *)MmGetNextSession(NextSession);
    if ( !NextSession )
      goto LABEL_30;
  }
  ObfDereferenceObject(NextSession);
LABEL_30:
  if ( v7 < 0 )
    goto LABEL_23;
  v4 = v19;
  if ( v8 )
    *v8 = 0LL;
LABEL_24:
  if ( v5 )
    ExUnlockUserBuffer((struct _MDL *)P);
  *v4 = v6;
  return (unsigned int)v7;
}
