/*
 * XREFs of ??0CVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1C009A814
 * Callers:
 *     ?CompleteAddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIIVResourceHandle@@HI0@Z @ 0x1C0002604 (-CompleteAddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIIVResourceHand.c)
 *     ?CreateSystemVisualForCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1C00028A4 (-CreateSystemVisualForCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVR.c)
 *     ?Create@CHostVisualMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C003A5C4 (-Create@CHostVisualMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z.c)
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0097BF0 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CVisualMarshaler *__fastcall DirectComposition::CVisualMarshaler::CVisualMarshaler(
        DirectComposition::CVisualMarshaler *this)
{
  DirectComposition::CVisualMarshaler *result; // rax

  *(_QWORD *)((char *)this + 20) = 1LL;
  *((_QWORD *)this + 6) = 0LL;
  *(_QWORD *)this = &DirectComposition::CVisualMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 10) = 194;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_DWORD *)this + 78) = 0;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_DWORD *)this + 84) = 0;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_DWORD *)this + 90) = 0;
  return result;
}
