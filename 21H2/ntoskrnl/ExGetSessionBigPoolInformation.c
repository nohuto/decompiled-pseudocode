/*
 * XREFs of ExGetSessionBigPoolInformation @ 0x14094A130
 * Callers:
 *     ExpQuerySystemInformation @ 0x140645E90 (ExpQuerySystemInformation.c)
 * Callees:
 *     MmDetachSession @ 0x140215920 (MmDetachSession.c)
 *     MmAttachSession @ 0x1402159C0 (MmAttachSession.c)
 *     ExUnlockUserBuffer @ 0x1402161DC (ExUnlockUserBuffer.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     MmGetSessionId @ 0x1402863C0 (MmGetSessionId.c)
 *     MmGetNextSession @ 0x1402872E0 (MmGetNextSession.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ExGetBigPoolInfo @ 0x1405B398C (ExGetBigPoolInfo.c)
 *     ExLockUserBuffer @ 0x1405E45FC (ExLockUserBuffer.c)
 */

__int64 __fastcall ExGetSessionBigPoolInformation(unsigned __int64 a1, unsigned int a2, unsigned int *a3, _DWORD *a4)
{
  unsigned int *v4; // r14
  __int64 v5; // r12
  unsigned int v6; // esi
  int v7; // edi
  _QWORD *v8; // r13
  __int64 result; // rax
  struct _DMA_ADAPTER *NextSession; // rbx
  __int64 v11; // r14
  int SessionId; // eax
  int v13; // r15d
  _DWORD *v14; // rcx
  unsigned int v15; // edx
  int BigPoolInfo; // eax
  int v17; // [rsp+30h] [rbp-49h]
  unsigned int v18; // [rsp+34h] [rbp-45h] BYREF
  __int64 v19; // [rsp+38h] [rbp-41h] BYREF
  unsigned int *v20; // [rsp+40h] [rbp-39h]
  unsigned int v21; // [rsp+48h] [rbp-31h]
  _DWORD *v22; // [rsp+50h] [rbp-29h]
  PVOID P; // [rsp+58h] [rbp-21h] BYREF
  _OWORD v24[3]; // [rsp+60h] [rbp-19h] BYREF

  v22 = a4;
  v20 = a3;
  v21 = a2;
  v4 = a3;
  v19 = 0LL;
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
    result = ExLockUserBuffer(a1, a2, KeGetCurrentThread()->PreviousMode, IoWriteAccess, &v19, (struct _MDL **)&P);
    if ( (int)result < 0 )
      return result;
    v5 = v19;
  }
  NextSession = (struct _DMA_ADAPTER *)MmGetNextSession(0LL);
  if ( !NextSession )
    goto LABEL_29;
  while ( 1 )
  {
    v11 = v6 + v5;
    SessionId = MmGetSessionId((__int64)NextSession);
    LODWORD(v19) = SessionId;
    if ( *v22 == -1 || SessionId == *v22 )
      break;
LABEL_20:
    NextSession = (struct _DMA_ADAPTER *)MmGetNextSession(NextSession);
    if ( !NextSession )
      goto LABEL_24;
  }
  if ( (int)MmAttachSession((ULONG_PTR)NextSession) < 0 )
  {
LABEL_19:
    if ( *v22 != -1 )
      goto LABEL_23;
    goto LABEL_20;
  }
  if ( v6 >= 0xFFFFFFD8 )
  {
    v7 = -1073741675;
    MmDetachSession((__int64)NextSession, (__int64)v24);
    HalPutDmaAdapter(NextSession);
    goto LABEL_28;
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
  if ( BigPoolInfo >= 0 || (v7 = BigPoolInfo, BigPoolInfo == -1073741820) )
  {
    if ( v13 == 1 && BigPoolInfo >= 0 )
    {
      v8 = (_QWORD *)(v6 + v5);
      *(_DWORD *)(v11 + 8) = v19;
      *(_QWORD *)v11 = (unsigned int)(24 * *(_DWORD *)(v11 + 12) + 16);
    }
    v6 += v18;
    MmDetachSession((__int64)NextSession, (__int64)v24);
    goto LABEL_19;
  }
  MmDetachSession((__int64)NextSession, (__int64)v24);
LABEL_23:
  HalPutDmaAdapter(NextSession);
LABEL_24:
  if ( v7 < 0 )
  {
LABEL_28:
    v4 = v20;
    goto LABEL_29;
  }
  v4 = v20;
  if ( v8 )
    *v8 = 0LL;
LABEL_29:
  if ( v5 )
    ExUnlockUserBuffer((struct _MDL *)P);
  *v4 = v6;
  return (unsigned int)v7;
}
