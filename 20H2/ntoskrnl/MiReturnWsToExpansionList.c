/*
 * XREFs of MiReturnWsToExpansionList @ 0x140338E08
 * Callers:
 *     MiProcessWorkingSets @ 0x140268EC0 (MiProcessWorkingSets.c)
 *     KiInSwapProcesses @ 0x14030A250 (KiInSwapProcesses.c)
 *     MiAllowWorkingSetExpansion @ 0x140338D8C (MiAllowWorkingSetExpansion.c)
 *     MiEmptyTargetedWorkingSet @ 0x140539728 (MiEmptyTargetedWorkingSet.c)
 * Callees:
 *     KeSignalGate @ 0x1403331D0 (KeSignalGate.c)
 */

char __fastcall MiReturnWsToExpansionList(__int64 a1, int a2)
{
  _DWORD *v2; // r9
  _QWORD *v3; // r8
  _QWORD *v4; // rax
  __int64 v5; // rcx

  v2 = (_DWORD *)(a1 + 24);
  v3 = (_QWORD *)(*(_QWORD *)(qword_140C4E4C8 + 8LL * *(unsigned __int16 *)(a1 + 174)) + 6856LL);
  if ( a2 )
  {
    v4 = (_QWORD *)*v3;
    if ( *(_QWORD **)(*v3 + 8LL) == v3 )
    {
      *(_QWORD *)v2 = v4;
      *(_QWORD *)(a1 + 32) = v3;
      v4[1] = v2;
      *v3 = v2;
      goto LABEL_4;
    }
LABEL_8:
    __fastfail(3u);
  }
  v4 = *(_QWORD **)(*(_QWORD *)(qword_140C4E4C8 + 8LL * *(unsigned __int16 *)(a1 + 174)) + 6864LL);
  if ( (_QWORD *)*v4 != v3 )
    goto LABEL_8;
  *(_QWORD *)v2 = v3;
  *(_QWORD *)(a1 + 32) = v4;
  *v4 = v2;
  v3[1] = v2;
LABEL_4:
  v5 = *(_QWORD *)(a1 + 104);
  if ( v5 )
    LOBYTE(v4) = KeSignalGate(v5, 1LL, (__int64)v3, v2);
  return (char)v4;
}
