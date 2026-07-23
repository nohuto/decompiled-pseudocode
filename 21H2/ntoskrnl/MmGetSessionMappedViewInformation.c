/*
 * XREFs of MmGetSessionMappedViewInformation @ 0x1408C4A30
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
 *     ExLockUserBuffer @ 0x1405E45FC (ExLockUserBuffer.c)
 *     MiGetSystemPteStatistics @ 0x1408D7B94 (MiGetSystemPteStatistics.c)
 */

__int64 __fastcall MmGetSessionMappedViewInformation(unsigned __int64 a1, unsigned int a2, _DWORD *a3, _DWORD *a4)
{
  __int64 v4; // rbx
  _DWORD *v5; // r13
  __int64 result; // rax
  __int64 v8; // rsi
  int v9; // r15d
  __int64 v10; // r14
  struct _DMA_ADAPTER *i; // rcx
  __int64 NextSession; // rax
  struct _DMA_ADAPTER *v13; // rdi
  int SessionId; // r13d
  unsigned int v15; // eax
  unsigned __int64 v16; // rbx
  int v17; // eax
  __int64 v18; // [rsp+30h] [rbp-49h] BYREF
  __int64 v19; // [rsp+38h] [rbp-41h] BYREF
  __int64 v20; // [rsp+40h] [rbp-39h] BYREF
  _DWORD *v21; // [rsp+48h] [rbp-31h]
  PVOID P; // [rsp+50h] [rbp-29h] BYREF
  _DWORD *v23; // [rsp+58h] [rbp-21h]
  _OWORD v24[3]; // [rsp+60h] [rbp-19h] BYREF

  v4 = 0LL;
  v21 = a4;
  P = 0LL;
  v20 = 0LL;
  v5 = a3;
  v19 = 0LL;
  v23 = a3;
  v18 = 0LL;
  memset(v24, 0, sizeof(v24));
  if ( a2 )
  {
    result = ExLockUserBuffer(a1, a2, KeGetCurrentThread()->PreviousMode, IoWriteAccess, &v18, (struct _MDL **)&P);
    if ( (int)result < 0 )
      return result;
    v4 = v18;
  }
LABEL_4:
  *v5 = 0;
  LODWORD(v8) = 0;
  v9 = 0;
  v10 = 0LL;
  for ( i = 0LL; ; i = v13 )
  {
    NextSession = MmGetNextSession(i);
    v13 = (struct _DMA_ADAPTER *)NextSession;
    if ( !NextSession )
      break;
    v10 = v4 + (unsigned int)v8;
    SessionId = MmGetSessionId(NextSession);
    if ( *v21 == -1 || SessionId == *v21 )
    {
      if ( (int)MmAttachSession((ULONG_PTR)v13) >= 0 )
      {
        v15 = v8 + 32;
        if ( (int)v8 + 32 < (unsigned int)v8 )
        {
          MmDetachSession((__int64)v13, (__int64)v24);
          HalPutDmaAdapter(v13);
          v5 = v23;
          goto LABEL_4;
        }
        v8 = v15;
        if ( v15 <= a2 )
        {
          v16 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5];
          MiGetSystemPteStatistics(v16 + 880, &v19, &v20);
          *(_QWORD *)(v10 + 16) = v19 << 12;
          *(_QWORD *)(v10 + 24) = v20 << 12;
          *(_DWORD *)(v10 + 8) = SessionId;
          v17 = *(_DWORD *)(v16 + 220);
          v4 = v18;
          *(_DWORD *)(v10 + 12) = v17;
          *(_QWORD *)v10 = v8;
        }
        else
        {
          v9 = -1073741820;
        }
        MmDetachSession((__int64)v13, (__int64)v24);
      }
      if ( *v21 != -1 )
      {
        HalPutDmaAdapter(v13);
        break;
      }
    }
  }
  if ( v9 >= 0 && v10 )
    *(_QWORD *)v10 = 0LL;
  if ( v4 )
    ExUnlockUserBuffer((struct _MDL *)P);
  *v23 = v8;
  return (unsigned int)v9;
}
