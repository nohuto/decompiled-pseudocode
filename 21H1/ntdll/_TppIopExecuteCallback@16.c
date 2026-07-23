/*
 * XREFs of _TppIopExecuteCallback@16 @ 0x4B2EB530
 * Callers:
 *     <none>
 * Callees:
 *     _TppCompleteThreadData@4 @ 0x4B2B6E8F (_TppCompleteThreadData@4.c)
 *     _TppStartThreadData@16 @ 0x4B2B6F0C (_TppStartThreadData@16.c)
 *     _TppCleanupGroupMemberCallbackProlog@8 @ 0x4B2B6FC7 (_TppCleanupGroupMemberCallbackProlog@8.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _LdrAddRefDll@8 @ 0x4B2D20F0 (_LdrAddRefDll@8.c)
 *     _LdrLockLoaderLock@12 @ 0x4B2E85B0 (_LdrLockLoaderLock@12.c)
 *     _LdrUnlockLoaderLock@8 @ 0x4B2EA6A0 (_LdrUnlockLoaderLock@8.c)
 *     _TppIopExecuteCallback@16 @ 0x4B2EB530 (_TppIopExecuteCallback@16.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _TppETWCallbackStart@20 @ 0x4B384AA9 (_TppETWCallbackStart@20.c)
 *     _TppETWCallbackStop@20 @ 0x4B384B22 (_TppETWCallbackStop@20.c)
 */

void __stdcall TppIopExecuteCallback(PTP_CALLBACK_INSTANCE Instance, int a2, int a3, int a4)
{
  int v4; // edi
  int v5; // ebx
  int v6; // edx
  signed __int32 v7; // eax
  signed __int32 v8; // ecx
  int v9; // ebx
  int v10; // eax
  _DWORD *v11; // [esp+10h] [ebp-38h] BYREF
  volatile signed __int32 *v12; // [esp+14h] [ebp-34h]
  signed __int32 v13; // [esp+18h] [ebp-30h]
  PVOID Cookie; // [esp+1Ch] [ebp-2Ch] BYREF
  int v15; // [esp+20h] [ebp-28h]
  PVOID DllHandle; // [esp+24h] [ebp-24h]
  int v17; // [esp+28h] [ebp-20h]
  int v18; // [esp+2Ch] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+30h] [ebp-18h]

  Cookie = 0;
  v18 = 0;
  v4 = a2 - 120;
  v15 = a2 - 120;
  DllHandle = *(PVOID *)(a2 - 120 + 88);
  v5 = 1;
  if ( DllHandle )
  {
    v17 = 1;
    LdrLockLoaderLock(0, 0, &Cookie);
    v6 = 1;
  }
  else
  {
    v6 = 0;
    v17 = 0;
  }
  ms_exc.registration.TryLevel = 0;
  v12 = (volatile signed __int32 *)(v4 + 168);
  v7 = *(_DWORD *)(v4 + 168);
  while ( v7 > 0 )
  {
    v8 = v7;
    v13 = v7 - 1;
    v7 = _InterlockedCompareExchange(v12, v7 - 1, v7);
    v4 = v15;
    v6 = v17;
    if ( v7 == v8 )
      goto LABEL_6;
  }
  v5 = 0;
LABEL_6:
  v18 = v5;
  if ( v6 && v5 )
  {
    if ( LdrAddRefDll(0, DllHandle) >= 0 )
    {
      *((_DWORD *)Instance + 25) = DllHandle;
      *((_DWORD *)Instance + 20) |= 0x100u;
    }
    else
    {
      v5 = 0;
      v18 = 0;
    }
  }
  ms_exc.registration.TryLevel = -2;
  if ( v17 )
    LdrUnlockLoaderLock(0, Cookie);
  if ( v5 )
  {
    TppCleanupGroupMemberCallbackProlog(Instance, v4);
    v9 = 2147353478;
    if ( RtlGetCurrentServiceSessionId() )
      v10 = (int)NtCurrentPeb()->SharedData + 556;
    else
      v10 = 2147353478;
    if ( *(_BYTE *)v10 )
      TppETWCallbackStart(*(_DWORD *)(v4 + 48), *(_DWORD *)(v4 + 52), *(_DWORD *)(v4 + 60));
    TppStartThreadData((int *)&v11, *(_DWORD *)(v4 + 48), *(_DWORD *)(v4 + 52), *(_DWORD *)(v4 + 60));
    *((_DWORD *)Instance + 12) = *(_DWORD *)(v4 + 48);
    *((_DWORD *)Instance + 13) = *(_DWORD *)(v4 + 52);
    (*(void (__thiscall **)(_DWORD, PTP_CALLBACK_INSTANCE, _DWORD, int, int, int))(v4 + 48))(
      *(_DWORD *)(v4 + 48),
      Instance,
      *(_DWORD *)(v4 + 52),
      a3,
      a4,
      v4);
    if ( RtlGetCurrentServiceSessionId() )
      v9 = (int)NtCurrentPeb()->SharedData + 556;
    if ( *(_BYTE *)v9 )
      TppETWCallbackStop(*(_DWORD *)(v4 + 48), *(_DWORD *)(v4 + 52), *(_DWORD *)(v4 + 60));
    TppCompleteThreadData(v11);
  }
  else if ( !_InterlockedExchangeAdd((volatile signed __int32 *)v4, 0xFFFFFFFF) )
  {
    (**(void (__thiscall ***)(_DWORD, int))(v4 + 4))(**(_DWORD **)(v4 + 4), v4);
  }
}
