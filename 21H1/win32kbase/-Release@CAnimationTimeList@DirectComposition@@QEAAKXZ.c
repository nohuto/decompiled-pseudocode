/*
 * XREFs of ?Release@CAnimationTimeList@DirectComposition@@QEAAKXZ @ 0x1C0034614
 * Callers:
 *     ?ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C0006EA4 (-ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ??1CAnimationMarshaler@DirectComposition@@UEAA@XZ @ 0x1C0034574 (--1CAnimationMarshaler@DirectComposition@@UEAA@XZ.c)
 *     ?UpdateAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAX_K@Z @ 0x1C0035630 (-UpdateAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAX_K@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C008F624 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x1C00B9C14 (-Clear@CBatch@DirectComposition@@QEAAXXZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 */

__int64 __fastcall DirectComposition::CAnimationTimeList::Release(DirectComposition::CAnimationTimeList *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 12);
  if ( !v1 )
    Win32FreePool(this);
  return v1;
}
