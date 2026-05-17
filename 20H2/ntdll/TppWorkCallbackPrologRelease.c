/*
 * XREFs of TppWorkCallbackPrologRelease @ 0x18001FEF8
 * Callers:
 *     TppExecuteWaitCallback @ 0x180010E18 (TppExecuteWaitCallback.c)
 *     TppWorkpExecuteCallback @ 0x180062130 (TppWorkpExecuteCallback.c)
 *     TppSimplepExecuteCallback @ 0x180070C70 (TppSimplepExecuteCallback.c)
 *     TppTimerpExecuteCallback @ 0x180071670 (TppTimerpExecuteCallback.c)
 * Callees:
 *     TppCleanupGroupMemberRelease @ 0x18000F124 (TppCleanupGroupMemberRelease.c)
 *     LdrAddRefDll @ 0x180010140 (LdrAddRefDll.c)
 *     TpPostTask @ 0x180012A98 (TpPostTask.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x180020450 (TppCleanupGroupMemberCallbackProlog.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     TppBarrierAdjust @ 0x18005299C (TppBarrierAdjust.c)
 *     LdrLockLoaderLock @ 0x18007D140 (LdrLockLoaderLock.c)
 *     LdrUnlockLoaderLock @ 0x18007DFB0 (LdrUnlockLoaderLock.c)
 *     TppWorkCancelPendingCallbacks @ 0x180085350 (TppWorkCancelPendingCallbacks.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0B90 (_guard_dispatch_icall_nop.c)
 *     RtlpTpETWCallbackEnqueue @ 0x180112838 (RtlpTpETWCallbackEnqueue.c)
 */

__int64 __fastcall TppWorkCallbackPrologRelease(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  int v4; // r12d
  __int64 v8; // rcx
  signed __int32 v9; // eax
  __int64 v10; // rdx
  int v11; // ebp
  int v12; // esi
  unsigned __int32 v13; // eax
  signed __int32 v14; // ett
  int v16; // eax
  __int64 v17; // rcx
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v19; // [rsp+68h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a2 + 136);
  v4 = 0;
  v19 = 0LL;
  if ( v3 )
    LdrLockLoaderLock(0LL, 0LL, &v19);
  _m_prefetchw((const void *)(a2 + 232));
  LODWORD(v8) = *(_DWORD *)(a2 + 232);
  do
  {
    v9 = v8;
    v10 = (unsigned int)v8 >> 1;
    if ( (unsigned int)v8 >> 1 )
    {
      v10 = v8 & 1 | (unsigned int)(2 * v10 - 2);
      v11 = 1;
      LODWORD(v8) = v10;
      v12 = 1;
      if ( (unsigned int)v10 >= 2 )
        goto LABEL_7;
    }
    else
    {
      v11 = 0;
    }
    v12 = 0;
    LODWORD(v8) = v8 | 1;
LABEL_7:
    v14 = v9;
    v13 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 232), v8, v9);
    v8 = v13;
  }
  while ( v14 != v13 );
  if ( v3 )
  {
    if ( v11 )
    {
      if ( (int)LdrAddRefDll(0, v3) < 0 )
      {
        v11 = 0;
        v12 = 0;
        v4 = 1;
      }
      else
      {
        *(_DWORD *)(a1 + 144) |= 0x100u;
        *(_QWORD *)(a1 + 168) = v3;
      }
    }
    LdrUnlockLoaderLock(0LL, v19);
    if ( v4 )
    {
      TppBarrierAdjust(a2 + 56, 0xFFFFFFFFLL);
      TppWorkCancelPendingCallbacks(a2);
    }
  }
  if ( v12 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)a2, 2u);
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v8, v10) )
      v17 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v17 = 2147353478LL;
    if ( *(_BYTE *)v17 )
      RtlpTpETWCallbackEnqueue(
        *(_QWORD *)(a2 + 144),
        a2 + 200,
        *(_QWORD *)(a2 + 80),
        *(_QWORD *)(a2 + 88),
        *(_QWORD *)(a2 + 104));
    TpPostTask(a2 + 200, *(_QWORD *)(a2 + 144), *(_DWORD *)(a2 + 192), 0LL);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2, 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64))(a2 + 8))(a2);
  }
  if ( a3 )
  {
    LOBYTE(v16) = TppCleanupGroupMemberRelease(a2, 0LL);
    if ( v16 )
    {
      *(_QWORD *)(a2 + 184) = retaddr;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2, 0xFFFFFFFF) == 1 )
        (**(void (__fastcall ***)(__int64))(a2 + 8))(a2);
    }
  }
  if ( v11 )
  {
    TppCleanupGroupMemberCallbackProlog(a1, a2);
    return 1LL;
  }
  else
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2, 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64))(a2 + 8))(a2);
    return 0LL;
  }
}
