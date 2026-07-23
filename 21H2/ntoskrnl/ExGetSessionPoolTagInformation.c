/*
 * XREFs of ExGetSessionPoolTagInformation @ 0x1405E413C
 * Callers:
 *     ExpQuerySystemInformation @ 0x140645E90 (ExpQuerySystemInformation.c)
 * Callees:
 *     MmDetachSession @ 0x140215920 (MmDetachSession.c)
 *     MmAttachSession @ 0x1402159C0 (MmAttachSession.c)
 *     ExUnlockUserBuffer @ 0x1402161DC (ExUnlockUserBuffer.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     MmGetNextSession @ 0x1402872E0 (MmGetNextSession.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ExGetAttachedSessionPoolTagInfo @ 0x1405E4328 (ExGetAttachedSessionPoolTagInfo.c)
 *     ExLockUserBuffer @ 0x1405E45FC (ExLockUserBuffer.c)
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
  struct _DMA_ADAPTER *NextSession; // rdi
  _QWORD *v13; // r15
  unsigned int v14; // r13d
  unsigned int v15; // [rsp+30h] [rbp-39h] BYREF
  _QWORD *v16; // [rsp+38h] [rbp-31h] BYREF
  _DWORD *v17; // [rsp+40h] [rbp-29h]
  PVOID P; // [rsp+48h] [rbp-21h] BYREF
  _DWORD *v19; // [rsp+50h] [rbp-19h]
  _OWORD v20[3]; // [rsp+58h] [rbp-11h] BYREF

  v16 = 0LL;
  P = 0LL;
  AttachedSessionPoolTagInfo = 0;
  *a3 = 0;
  v5 = 0LL;
  v15 = 0;
  v17 = a4;
  v7 = a3;
  v19 = a3;
  v8 = a2;
  memset(v20, 0, sizeof(v20));
  if ( (_DWORD)a2 )
  {
    LOBYTE(a3) = KeGetCurrentThread()->PreviousMode;
    result = ExLockUserBuffer(a1, a2, a3, 1LL, &v16, &P);
    AttachedSessionPoolTagInfo = result;
    if ( (int)result < 0 )
      return result;
  }
  SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  if ( *a4 != -1 && *a4 == SessionId )
  {
    v5 = v16;
    AttachedSessionPoolTagInfo = ExGetAttachedSessionPoolTagInfo(v16, v8, v7, SessionId);
    if ( AttachedSessionPoolTagInfo >= 0 )
      goto LABEL_15;
    goto LABEL_18;
  }
  v11 = 0;
  NextSession = (struct _DMA_ADAPTER *)MmGetNextSession(0LL);
  if ( !NextSession )
    goto LABEL_14;
  v13 = v16;
  while ( 1 )
  {
    v14 = MmGetSessionIdEx((__int64)NextSession);
    if ( *v17 != -1 && *v17 != v14 )
      goto LABEL_13;
    AttachedSessionPoolTagInfo = MmAttachSession((ULONG_PTR)NextSession);
    if ( AttachedSessionPoolTagInfo < 0 )
      goto LABEL_14;
    AttachedSessionPoolTagInfo = ExGetAttachedSessionPoolTagInfo(v13, v8, &v15, v14);
    MmDetachSession((__int64)NextSession, (__int64)v20);
    if ( AttachedSessionPoolTagInfo < 0 )
    {
      if ( AttachedSessionPoolTagInfo != -1073741820 )
        goto LABEL_30;
      v8 = 0;
      goto LABEL_12;
    }
    if ( v15 > v8 || v15 < 0x38 )
      break;
    v5 = v13;
    v13 = (_QWORD *)((char *)v13 + v15);
    v8 -= v15;
LABEL_12:
    v11 += v15;
    if ( *v17 != -1 )
      goto LABEL_30;
LABEL_13:
    NextSession = (struct _DMA_ADAPTER *)MmGetNextSession(NextSession);
    if ( !NextSession )
      goto LABEL_14;
  }
  AttachedSessionPoolTagInfo = -1073741675;
LABEL_30:
  HalPutDmaAdapter(NextSession);
LABEL_14:
  *v19 = v11;
LABEL_15:
  if ( AttachedSessionPoolTagInfo >= 0 && v5 )
    *v5 = 0LL;
LABEL_18:
  if ( P )
    ExUnlockUserBuffer((struct _MDL *)P);
  return (unsigned int)AttachedSessionPoolTagInfo;
}
