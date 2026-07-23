/*
 * XREFs of MiInitializeColorBase @ 0x1403081C8
 * Callers:
 *     MiMakeZeroedPageTablesEx @ 0x140307B4C (MiMakeZeroedPageTablesEx.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1403BA398 (MiDemoteValidLargePageOneLevel.c)
 *     MmCreateShadowMapping @ 0x1407A02AC (MmCreateShadowMapping.c)
 * Callees:
 *     MiInitializePageColorBase @ 0x1402E3AD0 (MiInitializePageColorBase.c)
 *     MiGetSessionVm @ 0x14031CEEC (MiGetSessionVm.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 */

unsigned int *__fastcall MiInitializeColorBase(unsigned __int64 a1, int a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned __int64 *SessionVm; // rcx

  if ( (unsigned int)MiGetSystemRegionType(a1) == 1 )
  {
    SessionVm = (unsigned __int64 *)MiGetSessionVm(v7, v6, v8);
  }
  else if ( a1 > 0x7FFFFFFEFFFFLL
         && (a1 < qword_140C4FB78 || a1 > qword_140C4E3A8)
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
