/*
 * XREFs of MiGetStandbyRepurposed @ 0x140266998
 * Callers:
 *     MmQuerySystemWorkingSetInformation @ 0x140263404 (MmQuerySystemWorkingSetInformation.c)
 *     MiComputeSystemTrimCriteria @ 0x140266644 (MiComputeSystemTrimCriteria.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x140266C0C (MiUseLowIoPriorityForModifiedPages.c)
 *     MiAddWorkingSetEntries @ 0x1403234A0 (MiAddWorkingSetEntries.c)
 *     MiWorkingSetVeryLarge @ 0x140583F5C (MiWorkingSetVeryLarge.c)
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
    v3 = (_DWORD *)(a1 + 4LL * a2 + 6696);
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
