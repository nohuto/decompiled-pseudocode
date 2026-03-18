/*
 * XREFs of MiGetStandbyRepurposed @ 0x140337488
 * Callers:
 *     MiAddWorkingSetEntries @ 0x140211890 (MiAddWorkingSetEntries.c)
 *     MmQuerySystemWorkingSetInformation @ 0x140311CD0 (MmQuerySystemWorkingSetInformation.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x140337094 (MiUseLowIoPriorityForModifiedPages.c)
 *     MiComputeSystemTrimCriteria @ 0x140337124 (MiComputeSystemTrimCriteria.c)
 *     MiWorkingSetVeryLarge @ 0x14052AC64 (MiWorkingSetVeryLarge.c)
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
