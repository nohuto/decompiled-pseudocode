/*
 * XREFs of MiInitializeColorBase @ 0x14034E4AC
 * Callers:
 *     MiMakeZeroedPageTablesEx @ 0x1402509D0 (MiMakeZeroedPageTablesEx.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1403B6D88 (MiDemoteValidLargePageOneLevel.c)
 *     MmCreateShadowMapping @ 0x140787E7C (MmCreateShadowMapping.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     MiInitializePageColorBase @ 0x14025EA70 (MiInitializePageColorBase.c)
 *     MiGetSessionVm @ 0x1402BE22C (MiGetSessionVm.c)
 */

unsigned int *__fastcall MiInitializeColorBase(unsigned __int64 a1, int a2, __int64 a3)
{
  unsigned __int64 *SessionVm; // rcx

  if ( (unsigned int)MiGetSystemRegionType(a1) == 1 )
  {
    SessionVm = (unsigned __int64 *)MiGetSessionVm();
  }
  else if ( a1 > 0x7FFFFFFEFFFFLL
         && (a1 < qword_140C4F938 || a1 > qword_140C4E168)
         && (a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    SessionVm = 0LL;
  }
  else
  {
    SessionVm = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  }
  return MiInitializePageColorBase((__int64)SessionVm, a2, a3);
}
