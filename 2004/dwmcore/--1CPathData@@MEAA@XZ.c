/*
 * XREFs of ??1CPathData@@MEAA@XZ @ 0x18021F970
 * Callers:
 *     ??_GCPathData@@MEAAPEAXI@Z @ 0x18021FAD0 (--_GCPathData@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C7C34 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x1800D080C (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     ?Attach@?$ComPtr@VCScrollScaleKeyframeAnimation@@@WRL@Microsoft@@QEAAXPEAVCScrollScaleKeyframeAnimation@@@Z @ 0x1801C9670 (-Attach@-$ComPtr@VCScrollScaleKeyframeAnimation@@@WRL@Microsoft@@QEAAXPEAVCScrollScaleKeyframeAn.c)
 */

void __fastcall CPathData::~CPathData(CPathData *this)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  *(_QWORD *)this = &CPathData::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CPathData::`vftable'{for `ID2D1GeometrySink'};
  Microsoft::WRL::ComPtr<CScrollScaleKeyframeAnimation>::Attach(&v2, *((_QWORD *)this + 9));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v2);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 6);
  std::vector<unsigned char>::_Tidy((__int64)this + 24);
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
