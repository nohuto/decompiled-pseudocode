/*
 * XREFs of MiInitializeColorBase @ 0x14026E158
 * Callers:
 *     MiMakeZeroedPageTablesEx @ 0x14026DC5C (MiMakeZeroedPageTablesEx.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1403C9590 (MiDemoteValidLargePageOneLevel.c)
 *     MmCreateShadowMapping @ 0x14082A644 (MmCreateShadowMapping.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14027B080 (MiGetSystemRegionType.c)
 *     MiGetSessionVm @ 0x14027B520 (MiGetSessionVm.c)
 *     MiInitializePageColorBase @ 0x140339C20 (MiInitializePageColorBase.c)
 */

__int64 __fastcall MiInitializeColorBase(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned __int64 *SessionVm; // rcx

  v5 = a2;
  if ( (unsigned int)MiGetSystemRegionType(a1, a2, a3, a4) == 1 )
  {
    SessionVm = (unsigned __int64 *)MiGetSessionVm(v8, v7, v9);
  }
  else if ( a1 <= 0x7FFFFFFEFFFFLL
         || a1 <= qword_140C51BF0 && a1 >= qword_140C540C0
         || a1 >= 0xFFFFF68000000000uLL && a1 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    SessionVm = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
  }
  else
  {
    SessionVm = 0LL;
  }
  return MiInitializePageColorBase(SessionVm, v5, a3);
}
