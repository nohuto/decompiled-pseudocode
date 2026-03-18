/*
 * XREFs of MiReturnWsToExpansionList @ 0x14036DAE4
 * Callers:
 *     KiInSwapProcesses @ 0x14021119C (KiInSwapProcesses.c)
 *     MiProcessWorkingSets @ 0x14030BBF0 (MiProcessWorkingSets.c)
 *     MiAllowWorkingSetExpansion @ 0x14036DA68 (MiAllowWorkingSetExpansion.c)
 *     MiHandleForceTrimWorkingSets @ 0x140373F80 (MiHandleForceTrimWorkingSets.c)
 *     MiEmptyTargetedWorkingSet @ 0x14059676C (MiEmptyTargetedWorkingSet.c)
 * Callees:
 *     KeSignalGate @ 0x14024B0B4 (KeSignalGate.c)
 */

_QWORD *__fastcall MiReturnWsToExpansionList(__int64 a1, int a2)
{
  _QWORD *v2; // r9
  _QWORD *v3; // r8
  _QWORD *result; // rax
  _DWORD *v5; // rcx

  v2 = (_QWORD *)(a1 + 24);
  v3 = (_QWORD *)(*(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(a1 + 174)) + 16608LL);
  if ( !a2 )
  {
    result = *(_QWORD **)(*(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(a1 + 174)) + 16616LL);
    if ( (_QWORD *)*result == v3 )
    {
      *v2 = v3;
      *(_QWORD *)(a1 + 32) = result;
      *result = v2;
      v3[1] = v2;
      goto LABEL_4;
    }
LABEL_8:
    __fastfail(3u);
  }
  result = (_QWORD *)*v3;
  if ( *(_QWORD **)(*v3 + 8LL) != v3 )
    goto LABEL_8;
  *v2 = result;
  *(_QWORD *)(a1 + 32) = v3;
  result[1] = v2;
  *v3 = v2;
LABEL_4:
  v5 = *(_DWORD **)(a1 + 104);
  if ( v5 )
    return (_QWORD *)KeSignalGate(v5, 1);
  return result;
}
