/*
 * XREFs of ?GetAnimationTime@CApplicationChannel@DirectComposition@@QEAAJI_KPEA_J@Z @ 0x1C01D717C
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C008DB70 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C00B9354 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     ?GetAnimationTime@CAnimationMarshaler@DirectComposition@@IEAAX_KPEA_J@Z @ 0x1C01D82A8 (-GetAnimationTime@CAnimationMarshaler@DirectComposition@@IEAAX_KPEA_J@Z.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::GetAnimationTime(
        union _SLIST_HEADER *this,
        int a2,
        unsigned __int64 a3,
        __int64 *a4)
{
  unsigned int v4; // ebx
  ULONGLONG v6; // rcx
  __int64 v9; // rdi

  v4 = 0;
  v6 = (unsigned int)(a2 - 1);
  if ( a2 && v6 < this[5].Alignment )
  {
    _mm_lfence();
    v9 = *(_QWORD *)(v6 * this[5].Region + this[3].Region);
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 96LL))(v9, 2LL) )
  {
    DirectComposition::CApplicationChannel::ProcessReturnedBatches(this);
    DirectComposition::CAnimationMarshaler::GetAnimationTime(
      (DirectComposition::CAnimationMarshaler *)(v9 - 16),
      a3,
      a4);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
