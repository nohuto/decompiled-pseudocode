/*
 * XREFs of _TppWorkCallbackPrologRelease@12 @ 0x4B2B7032
 * Callers:
 *     _TppExecuteWaitCallback@12 @ 0x4B2B55E2 (_TppExecuteWaitCallback@12.c)
 *     _TppTimerpExecuteCallback@8 @ 0x4B2B56A0 (_TppTimerpExecuteCallback@8.c)
 *     _TppWorkpExecuteCallback@8 @ 0x4B2B6B30 (_TppWorkpExecuteCallback@8.c)
 *     _TppSimplepExecuteCallback@8 @ 0x4B2EB860 (_TppSimplepExecuteCallback@8.c)
 * Callees:
 *     _TppCleanupGroupMemberRelease@8 @ 0x4B2B1EF6 (_TppCleanupGroupMemberRelease@8.c)
 *     _TppCleanupGroupMemberCallbackProlog@8 @ 0x4B2B6FC7 (_TppCleanupGroupMemberCallbackProlog@8.c)
 *     _TpPostTask@16 @ 0x4B2C1C3F (_TpPostTask@16.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _LdrAddRefDll@8 @ 0x4B2D20F0 (_LdrAddRefDll@8.c)
 *     _TppBarrierAdjust@12 @ 0x4B2DDB10 (_TppBarrierAdjust@12.c)
 *     _LdrLockLoaderLock@12 @ 0x4B2E85B0 (_LdrLockLoaderLock@12.c)
 *     _LdrUnlockLoaderLock@8 @ 0x4B2EA6A0 (_LdrUnlockLoaderLock@8.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _TppWorkCancelPendingCallbacks@4 @ 0x4B384450 (_TppWorkCancelPendingCallbacks@4.c)
 *     _TppETWCallbackEnqueue@20 @ 0x4B384A30 (_TppETWCallbackEnqueue@20.c)
 */

int __fastcall TppWorkCallbackPrologRelease(_DWORD *a1, int a2, int a3)
{
  void *v4; // esi
  unsigned __int32 v5; // ecx
  signed __int32 v6; // edx
  unsigned __int32 v7; // ecx
  int v9; // eax
  int v11; // [esp+14h] [ebp-10h]
  PVOID Cookie; // [esp+18h] [ebp-Ch] BYREF
  int v13; // [esp+1Ch] [ebp-8h]
  int v14; // [esp+20h] [ebp-4h]
  _UNKNOWN *retaddr; // [esp+28h] [ebp+4h]

  v11 = 0;
  Cookie = 0;
  v4 = *(void **)(a2 + 88);
  if ( v4 )
    LdrLockLoaderLock(0, 0, &Cookie);
  v5 = *(_DWORD *)(a2 + 140);
  do
  {
    v6 = v5;
    if ( v5 >> 1 )
    {
      v13 = 1;
      v7 = (2 * (v5 >> 1) - 2) | v5 & 1;
      v14 = 1;
      if ( v7 < 2 )
      {
        v14 = 0;
        v7 |= 1u;
      }
    }
    else
    {
      v13 = 0;
      v14 = 0;
      v7 = v5 | 1;
    }
    v5 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 140), v7, v6);
  }
  while ( v5 != v6 );
  if ( v4 )
  {
    if ( v13 )
    {
      if ( LdrAddRefDll(0, v4) >= 0 )
      {
        a1[20] |= 0x100u;
        a1[25] = v4;
      }
      else
      {
        v13 = 0;
        v14 = 0;
        v11 = 1;
      }
    }
    LdrUnlockLoaderLock(0, Cookie);
    if ( v11 )
    {
      TppBarrierAdjust(0);
      TppWorkCancelPendingCallbacks(a2);
    }
  }
  if ( v14 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)a2, 2u);
    if ( RtlGetCurrentServiceSessionId() )
      v9 = (int)NtCurrentPeb()->SharedData + 556;
    else
      v9 = 2147353478;
    if ( *(_BYTE *)v9 )
      TppETWCallbackEnqueue(*(_DWORD *)(a2 + 48), *(_DWORD *)(a2 + 52), *(_DWORD *)(a2 + 60));
    TpPostTask(*(_DWORD *)(a2 + 116), 0);
    if ( !_InterlockedExchangeAdd((volatile signed __int32 *)a2, 0xFFFFFFFF) )
      (**(void (__thiscall ***)(_DWORD, int))(a2 + 4))(**(_DWORD **)(a2 + 4), a2);
  }
  if ( a3 )
  {
    if ( TppCleanupGroupMemberRelease(a2, 0) )
    {
      *(_DWORD *)(a2 + 112) = retaddr;
      if ( !_InterlockedExchangeAdd((volatile signed __int32 *)a2, 0xFFFFFFFF) )
        (**(void (__thiscall ***)(_DWORD, int))(a2 + 4))(**(_DWORD **)(a2 + 4), a2);
    }
  }
  if ( v13 )
  {
    TppCleanupGroupMemberCallbackProlog(a1, a2);
    return 1;
  }
  else
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)a2) )
      (**(void (__thiscall ***)(_DWORD, int))(a2 + 4))(**(_DWORD **)(a2 + 4), a2);
    return 0;
  }
}
