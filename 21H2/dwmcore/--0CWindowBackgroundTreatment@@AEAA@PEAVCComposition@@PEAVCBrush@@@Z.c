/*
 * XREFs of ??0CWindowBackgroundTreatment@@AEAA@PEAVCComposition@@PEAVCBrush@@@Z @ 0x1800D5090
 * Callers:
 *     ?ProcessSetWindowBackgroundTreatment@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETWINDOWBACKGROUNDTREATMENT@@@Z @ 0x1800D48AC (-ProcessSetWindowBackgroundTreatment@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETW.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180046EF0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UpdateBackdropFlags@CWindowBackgroundTreatment@@AEAAXXZ @ 0x1800D5278 (-UpdateBackdropFlags@CWindowBackgroundTreatment@@AEAAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

CWindowBackgroundTreatment *__fastcall CWindowBackgroundTreatment::CWindowBackgroundTreatment(
        CWindowBackgroundTreatment *this,
        struct CComposition *a2,
        struct CBrush *a3)
{
  char v4; // al
  char v5; // al
  struct CResource *v6; // rdx
  int v7; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CWindowBackgroundTreatment::`vftable'{for `CResource'};
  *((_QWORD *)this + 8) = &CWindowBackgroundTreatment::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 9) = a3;
  *((_QWORD *)this + 10) = 0LL;
  *(_OWORD *)((char *)this + 88) = TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  *((_QWORD *)this + 13) = qword_1803D26D0;
  *((_OWORD *)this + 7) = TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  *((_QWORD *)this + 16) = qword_1803D26D0;
  *(_OWORD *)((char *)this + 136) = TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  *((_QWORD *)this + 19) = qword_1803D26D0;
  *((_QWORD *)this + 20) = 1065353216LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_DWORD *)this + 44) = 0;
  *(_QWORD *)((char *)this + 180) = 1065353216LL;
  *(_QWORD *)((char *)this + 188) = 0LL;
  *((_DWORD *)this + 49) = 0;
  *((_QWORD *)this + 25) = 1065353216LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_DWORD *)this + 54) = 0;
  *((_DWORD *)this + 55) = 1065353216;
  v4 = *((_BYTE *)this + 225);
  *((_BYTE *)this + 224) = 85;
  *((_BYTE *)this + 225) = v4 & 0xC0 | 0x17;
  *((_DWORD *)this + 57) = 0;
  *((_QWORD *)this + 29) = 1065353216LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_DWORD *)this + 62) = 0;
  *(_QWORD *)((char *)this + 252) = 1065353216LL;
  *(_QWORD *)((char *)this + 260) = 0LL;
  *((_DWORD *)this + 67) = 0;
  *((_QWORD *)this + 34) = 1065353216LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_DWORD *)this + 72) = 0;
  *((_DWORD *)this + 73) = 1065353216;
  v5 = *((_BYTE *)this + 297);
  *((_BYTE *)this + 296) = 85;
  *((_BYTE *)this + 297) = v5 & 0xC0 | 0x17;
  v6 = (struct CResource *)*((_QWORD *)this + 9);
  *((_DWORD *)this + 75) = 1;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  v7 = CResource::RegisterNotifier(this, v6);
  if ( v7 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v7, retaddr);
  CWindowBackgroundTreatment::UpdateBackdropFlags(this);
  return this;
}
