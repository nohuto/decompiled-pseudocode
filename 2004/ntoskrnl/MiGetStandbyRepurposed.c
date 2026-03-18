/*
 * XREFs of MiGetStandbyRepurposed @ 0x1402F2348
 * Callers:
 *     MiAddWorkingSetEntries @ 0x1402A43A0 (MiAddWorkingSetEntries.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x1402F1F54 (MiUseLowIoPriorityForModifiedPages.c)
 *     MiComputeSystemTrimCriteria @ 0x1402F1FE4 (MiComputeSystemTrimCriteria.c)
 *     MmQuerySystemWorkingSetInformation @ 0x14034F4C0 (MmQuerySystemWorkingSetInformation.c)
 *     MiWorkingSetVeryLarge @ 0x14052B2B4 (MiWorkingSetVeryLarge.c)
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
