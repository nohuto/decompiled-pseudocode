/*
 * XREFs of MiReturnWsToExpansionList @ 0x1402A3628
 * Callers:
 *     MiAllowWorkingSetExpansion @ 0x1402A35AC (MiAllowWorkingSetExpansion.c)
 *     MiProcessWorkingSets @ 0x1402AC4A0 (MiProcessWorkingSets.c)
 *     KiInSwapProcesses @ 0x1402EED88 (KiInSwapProcesses.c)
 *     MiEmptyTargetedWorkingSet @ 0x14053B468 (MiEmptyTargetedWorkingSet.c)
 * Callees:
 *     KeSignalGate @ 0x140241090 (KeSignalGate.c)
 */

_QWORD *__fastcall MiReturnWsToExpansionList(__int64 a1, int a2)
{
  _QWORD *v2; // r9
  _QWORD *v3; // r8
  _QWORD *result; // rax
  __int64 v5; // rcx

  v2 = (_QWORD *)(a1 + 24);
  v3 = (_QWORD *)(*(_QWORD *)(qword_140C4E688 + 8LL * *(unsigned __int16 *)(a1 + 174)) + 6856LL);
  if ( a2 )
  {
    result = (_QWORD *)*v3;
    if ( *(_QWORD **)(*v3 + 8LL) == v3 )
    {
      *v2 = result;
      *(_QWORD *)(a1 + 32) = v3;
      result[1] = v2;
      *v3 = v2;
      goto LABEL_4;
    }
LABEL_8:
    __fastfail(3u);
  }
  result = *(_QWORD **)(*(_QWORD *)(qword_140C4E688 + 8LL * *(unsigned __int16 *)(a1 + 174)) + 6864LL);
  if ( (_QWORD *)*result != v3 )
    goto LABEL_8;
  *v2 = v3;
  *(_QWORD *)(a1 + 32) = result;
  *result = v2;
  v3[1] = v2;
LABEL_4:
  v5 = *(_QWORD *)(a1 + 104);
  if ( v5 )
    return (_QWORD *)KeSignalGate(v5, 1);
  return result;
}
