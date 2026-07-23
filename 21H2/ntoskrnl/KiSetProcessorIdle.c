/*
 * XREFs of KiSetProcessorIdle @ 0x14027878C
 * Callers:
 *     KiSchedulerApc @ 0x140267BA0 (KiSchedulerApc.c)
 *     KiSearchForNewThread @ 0x140278228 (KiSearchForNewThread.c)
 *     KiSelectNextThread @ 0x1402785FC (KiSelectNextThread.c)
 *     KiGroupSchedulingGenerationEnd @ 0x14027AF4C (KiGroupSchedulingGenerationEnd.c)
 *     KeTransitionProcessorParkState @ 0x1405256EC (KeTransitionProcessorParkState.c)
 *     KiCompleteKernelInit @ 0x14099F010 (KiCompleteKernelInit.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall KiSetProcessorIdle(__int64 a1, int a2, char a3)
{
  __int64 v3; // r9
  unsigned __int64 result; // rax
  __int64 v5; // rdx
  int v6; // eax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  int v9; // eax

  v3 = *(_QWORD *)(a1 + 192);
  result = *(unsigned __int8 *)(a1 + 35);
  if ( a2 )
  {
    v5 = *(_QWORD *)(a1 + 33976);
    if ( v5 )
      *(_BYTE *)(v5 + 16) = 1;
    *(_BYTE *)(a1 + 12587) = a3;
    if ( (result & 1) != 0 )
    {
      v6 = result - 1;
      *(_BYTE *)(a1 + 35) = v6;
      if ( !v6 )
        _interlockedbittestandset64((volatile signed __int32 *)v3, *(unsigned __int8 *)(a1 + 209));
      _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), *(unsigned __int8 *)(a1 + 209));
      v7 = *(_QWORD *)(a1 + 33880);
      if ( (*(_QWORD *)(v3 + 24) & v7) == v7 )
      {
        _InterlockedOr64((volatile signed __int64 *)(v3 + 8), v7);
      }
      else
      {
        v8 = *(_QWORD *)(a1 + 33880) & ~*(_QWORD *)(v3 + 24);
        if ( ((v8 - 1) & v8) == 0 )
          _InterlockedOr64((volatile signed __int64 *)(v3 + 16), v8);
      }
      result = *(unsigned __int8 *)(a1 + 209);
      _interlockedbittestandreset64((volatile signed __int32 *)(v3 + 16), result);
    }
  }
  else
  {
    *(_BYTE *)(a1 + 12587) = 0;
    if ( (result & 1) != 0 )
      __fastfail(0x21u);
    v9 = result + 1;
    *(_BYTE *)(a1 + 35) = v9;
    if ( v9 == 1 )
      _interlockedbittestandreset64((volatile signed __int32 *)v3, *(unsigned __int8 *)(a1 + 209));
    _interlockedbittestandreset64((volatile signed __int32 *)(v3 + 24), *(unsigned __int8 *)(a1 + 209));
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 8), ~*(_QWORD *)(a1 + 33880));
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 16), ~*(_QWORD *)(a1 + 33880));
    result = *(_QWORD *)(a1 + 33880) & ~*(_QWORD *)(v3 + 24);
    if ( result == *(_QWORD *)(a1 + 200) )
    {
      result = *(unsigned __int8 *)(a1 + 209);
      _interlockedbittestandset64((volatile signed __int32 *)(v3 + 16), result);
    }
  }
  return result;
}
