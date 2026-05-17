/*
 * XREFs of _TppAlpcpExecuteCallback@16 @ 0x4B2B6DC0
 * Callers:
 *     _TppWorkerThread@4 @ 0x4B2B58A0 (_TppWorkerThread@4.c)
 * Callees:
 *     _TppCompleteThreadData@4 @ 0x4B2B6E8F (_TppCompleteThreadData@4.c)
 *     _TppStartThreadData@16 @ 0x4B2B6F0C (_TppStartThreadData@16.c)
 *     _TppCleanupGroupMemberCallbackProlog@8 @ 0x4B2B6FC7 (_TppCleanupGroupMemberCallbackProlog@8.c)
 *     _TppFastAlpcAdjustConcurrencyCount@4 @ 0x4B2B7189 (_TppFastAlpcAdjustConcurrencyCount@4.c)
 *     _LdrAddRefDll@8 @ 0x4B2D20F0 (_LdrAddRefDll@8.c)
 *     _TppBarrierAdjust@12 @ 0x4B2DDB10 (_TppBarrierAdjust@12.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _TppETWCallbackStart@20 @ 0x4B384AA9 (_TppETWCallbackStart@20.c)
 *     _TppETWCallbackStop@20 @ 0x4B384B22 (_TppETWCallbackStop@20.c)
 */

int __stdcall TppAlpcpExecuteCallback(_DWORD *a1, int a2, int a3, int a4)
{
  int v4; // esi
  _DWORD *SharedData; // eax
  int v6; // eax
  _DWORD *v7; // eax
  int v8; // eax
  int result; // eax

  v4 = *(_DWORD *)(a2 + 136);
  if ( v4 )
  {
    result = LdrAddRefDll(0, *(_DWORD *)(a2 + 136));
    if ( result < 0 )
      return result;
    a1[20] |= 0x100u;
    a1[25] = v4;
  }
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 48));
  TppFastAlpcAdjustConcurrencyCount(a2);
  TppBarrierAdjust(0);
  TppCleanupGroupMemberCallbackProlog(a1, a2 + 48);
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v6 = (int)NtCurrentPeb()->SharedData + 556;
  else
    v6 = 2147353478;
  if ( *(_BYTE *)v6 )
    TppETWCallbackStart(*(_DWORD *)(a2 + 96), *(_DWORD *)(a2 + 100), *(_DWORD *)(a2 + 108));
  TppStartThreadData(*(_DWORD *)(a2 + 100), *(_DWORD *)(a2 + 108));
  a1[12] = *(_DWORD *)(a2 + 96);
  a1[13] = *(_DWORD *)(a2 + 100);
  if ( (*(_BYTE *)(a2 + 180) & 1) != 0 )
  {
    a1[19] = a2;
    (*(void (__thiscall **)(_DWORD, _DWORD *, _DWORD, int, int))(a2 + 96))(
      *(_DWORD *)(a2 + 96),
      a1,
      *(_DWORD *)(a2 + 100),
      a2,
      a3);
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, _DWORD *, _DWORD, int))(a2 + 96))(
      *(_DWORD *)(a2 + 96),
      a1,
      *(_DWORD *)(a2 + 100),
      a2);
  }
  v7 = NtCurrentPeb()->SharedData;
  if ( v7 && *v7 )
    v8 = (int)NtCurrentPeb()->SharedData + 556;
  else
    v8 = 2147353478;
  if ( *(_BYTE *)v8 )
    TppETWCallbackStop(*(_DWORD *)(a2 + 96), *(_DWORD *)(a2 + 100), *(_DWORD *)(a2 + 108));
  return TppCompleteThreadData();
}
