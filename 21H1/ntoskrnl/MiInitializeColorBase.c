/*
 * XREFs of MiInitializeColorBase @ 0x140310E1C
 * Callers:
 *     MiMakeZeroedPageTablesEx @ 0x1402A9A00 (MiMakeZeroedPageTablesEx.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1403B5F58 (MiDemoteValidLargePageOneLevel.c)
 *     MmCreateShadowMapping @ 0x1407824F8 (MmCreateShadowMapping.c)
 * Callees:
 *     MiGetSessionVm @ 0x14022B5AC (MiGetSessionVm.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     MiInitializePageColorBase @ 0x1402B7AA0 (MiInitializePageColorBase.c)
 */

unsigned int *__fastcall MiInitializeColorBase(unsigned __int64 a1, int a2, __int64 a3)
{
  unsigned __int64 *SessionVm; // rcx

  if ( (unsigned int)MiGetSystemRegionType(a1) == 1 )
  {
    SessionVm = (unsigned __int64 *)MiGetSessionVm();
  }
  else if ( a1 > 0x7FFFFFFEFFFFLL
         && (a1 < qword_140C4FA78 || a1 > qword_140C4E2A8)
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
