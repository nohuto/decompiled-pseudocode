/*
 * XREFs of HamConnectForExtendedExecution @ 0x180004F90
 * Callers:
 *     <none>
 * Callees:
 *     HampConnectionDestroy @ 0x1800021E8 (HampConnectionDestroy.c)
 *     HampConnectionInitialize @ 0x180004D90 (HampConnectionInitialize.c)
 *     HampConnectionAllocateState @ 0x1800051B0 (HampConnectionAllocateState.c)
 *     RmpClientWnfCreateSubscription @ 0x180009940 (RmpClientWnfCreateSubscription.c)
 */

__int64 __fastcall HamConnectForExtendedExecution(unsigned __int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  PVOID Heap; // rax
  __int64 v5; // rbx
  int State; // esi
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0LL;
  if ( !a1 )
    return 3221225711LL;
  v8 = a1;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x78uLL);
  v5 = (__int64)Heap;
  if ( !Heap )
    return 3221225495LL;
  HampConnectionInitialize(&v8, &unk_180015790, (__int64)Heap);
  State = HampConnectionAllocateState(v5, &unk_180015790, 0LL, 0LL);
  if ( State < 0 )
    goto LABEL_14;
  if ( *(_DWORD *)(v5 + 112) != 6 )
    goto LABEL_5;
  State = RmpClientWnfCreateSubscription(v5 + 8, HampConnectionDeliverStateChangePayload, v5, v5 + 16);
  if ( State >= 0 )
    State = 0;
  if ( State < 0 )
  {
LABEL_14:
    HampConnectionDestroy(v5);
  }
  else
  {
LABEL_5:
    v3 = v5;
    State = 0;
  }
  if ( State < 0 )
  {
    if ( v3 )
      HampConnectionDestroy(v3);
    return (unsigned int)State;
  }
  else
  {
    *a2 = v3;
    return 0LL;
  }
}
