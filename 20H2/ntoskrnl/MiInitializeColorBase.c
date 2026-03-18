/*
 * XREFs of MiInitializeColorBase @ 0x14024F838
 * Callers:
 *     MiMakeZeroedPageTablesEx @ 0x14024EC1C (MiMakeZeroedPageTablesEx.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1403B9828 (MiDemoteValidLargePageOneLevel.c)
 *     MmCreateShadowMapping @ 0x140795B8C (MmCreateShadowMapping.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     MiInitializePageColorBase @ 0x140231F50 (MiInitializePageColorBase.c)
 *     MiGetSessionVm @ 0x14029977C (MiGetSessionVm.c)
 */

unsigned int *__fastcall MiInitializeColorBase(unsigned __int64 a1, int a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 *SessionVm; // rcx

  if ( (unsigned int)MiGetSystemRegionType(a1) == 1 )
  {
    SessionVm = (unsigned __int64 *)MiGetSessionVm(v7, v6);
  }
  else if ( a1 > 0x7FFFFFFEFFFFLL
         && (a1 < qword_140C4F9B8 || a1 > qword_140C4E1E8)
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
