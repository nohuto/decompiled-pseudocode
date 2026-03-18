/*
 * XREFs of _CCD_TOPOLOGY::EnumerateFunctionalModesWorker_::_2_::_AUTO_USING_PM_PathChangeReason1686::__AUTO_USING_PM_PathChangeReason1686 @ 0x1C0168060
 * Callers:
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z @ 0x1C0137854 (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z.c)
 *     ?EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C02EA5EC (-EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCD_TOPOLOGY::EnumerateFunctionalModesWorker_::_2_::_AUTO_USING_PM_PathChangeReason1686::__AUTO_USING_PM_PathChangeReason1686(
        __int64 *a1)
{
  unsigned int i; // r8d
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 result; // rax

  for ( i = 0; i < *((_DWORD *)a1 + 2); *(_DWORD *)(v3 + *a1 + 232) &= ~1u )
  {
    v2 = i++;
    v3 = 272 * v2;
    *(_DWORD *)(v3 + *a1 + 236) = 0;
    result = *a1;
  }
  return result;
}
