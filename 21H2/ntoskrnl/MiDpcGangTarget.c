/*
 * XREFs of MiDpcGangTarget @ 0x140560560
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiDoGangAssignment @ 0x1405603B0 (MiDoGangAssignment.c)
 *     MiGetGangAssignment @ 0x140560734 (MiGetGangAssignment.c)
 */

__int64 __fastcall MiDpcGangTarget(
        __int64 a1,
        struct _KPRCB *CurrentPrcb,
        unsigned __int64 CoreProcessorSet,
        __int64 a4)
{
  volatile signed __int32 *v5; // r14
  __int64 v6; // rbx
  int GangAssignment; // ebp
  signed __int32 v8; // eax
  unsigned int v9; // esi
  __int64 result; // rax
  signed __int32 v11; // eax
  unsigned int v12; // ebx
  int i; // [rsp+20h] [rbp-28h] BYREF
  ULONG_PTR *v14[4]; // [rsp+28h] [rbp-20h] BYREF
  int v15; // [rsp+58h] [rbp+10h] BYREF

  v14[0] = 0LL;
  v5 = (volatile signed __int32 *)CoreProcessorSet;
  v6 = (__int64)CurrentPrcb;
  if ( KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0] != LODWORD(CurrentPrcb->ParentNode) )
    goto LABEL_8;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->Group != *(_WORD *)(v6 + 208) )
    goto LABEL_8;
  CoreProcessorSet = CurrentPrcb->CoreProcessorSet;
  if ( (CoreProcessorSet & *(_QWORD *)(v6 + 200)) == 0
    || (CoreProcessorSet = ~CoreProcessorSet,
        _m_prefetchw((const void *)(v6 + 200)),
        (_InterlockedAnd64((volatile signed __int64 *)(v6 + 200), CoreProcessorSet) & CurrentPrcb->CoreProcessorSet) == 0) )
  {
    CurrentPrcb = 0LL;
  }
  if ( CurrentPrcb )
    GangAssignment = MiGetGangAssignment(v6, v14);
  else
LABEL_8:
    GangAssignment = 0;
  if ( (*(_DWORD *)(v6 + 184) & 2) != 0 )
  {
    v15 = 0;
    v8 = _InterlockedDecrement((volatile signed __int32 *)a4);
    v9 = ~v8 & 0x80000000;
    if ( (v8 & 0x7FFFFFFF) != 0 )
    {
      while ( (*(_DWORD *)a4 & 0x80000000) != v9 )
        KeYieldProcessorEx(&v15, (__int64)CurrentPrcb, CoreProcessorSet, a4);
    }
    else
    {
      *(_DWORD *)a4 = v9 | *(_DWORD *)(a4 + 4);
    }
  }
  if ( GangAssignment )
    MiDoGangAssignment(v6, v14);
  result = *(unsigned int *)(v6 + 184);
  if ( (result & 2) != 0 )
  {
    v11 = _InterlockedDecrement((volatile signed __int32 *)a4);
    v12 = ~v11 & 0x80000000;
    if ( (v11 & 0x7FFFFFFF) != 0 )
    {
      for ( i = 0; ; KeYieldProcessorEx(&i, (__int64)CurrentPrcb, CoreProcessorSet, a4) )
      {
        result = *(_DWORD *)a4 & 0x80000000;
        if ( (_DWORD)result == v12 )
          break;
      }
    }
    else
    {
      result = v12 | *(_DWORD *)(a4 + 4);
      *(_DWORD *)a4 = result;
    }
  }
  _InterlockedDecrement(v5);
  return result;
}
