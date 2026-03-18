/*
 * XREFs of MiGetStandbyRepurposed @ 0x140332770
 * Callers:
 *     MiAddWorkingSetEntries @ 0x1402736E0 (MiAddWorkingSetEntries.c)
 *     MmQuerySystemWorkingSetInformation @ 0x140332144 (MmQuerySystemWorkingSetInformation.c)
 *     MiComputeSystemTrimCriteria @ 0x14033240C (MiComputeSystemTrimCriteria.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x140332978 (MiUseLowIoPriorityForModifiedPages.c)
 *     MiWorkingSetVeryLarge @ 0x14052EC84 (MiWorkingSetVeryLarge.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetStandbyRepurposed(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  _DWORD *v3; // rcx
  __int64 v4; // rdx

  result = 0LL;
  if ( a2 < 8 )
  {
    v3 = (_DWORD *)(a1 + 4LL * a2 + 4280);
    v4 = 8 - a2;
    do
    {
      result = (unsigned int)(*v3++ + result);
      --v4;
    }
    while ( v4 );
  }
  return result;
}
