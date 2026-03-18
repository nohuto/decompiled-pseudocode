/*
 * XREFs of ??1CSuperWetSource@@UEAA@XZ @ 0x18019DE18
 * Callers:
 *     ??1CGenericInk@@EEAA@XZ @ 0x180214FD8 (--1CGenericInk@@EEAA@XZ.c)
 *     ??1?$CSynchronousSuperWetInkGeneratedT@VCSynchronousSuperWetInk@@VCSuperWetSource@@@@MEAA@XZ @ 0x180240AA8 (--1-$CSynchronousSuperWetInkGeneratedT@VCSynchronousSuperWetInk@@VCSuperWetSource@@@@MEAA@XZ.c)
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x1800B1804 (-InternalRelease@CResource@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VCGenericInkTipPointSource@@@WRL@Microsoft@@IEAAKXZ @ 0x1801A0C34 (-InternalRelease@-$ComPtr@VCGenericInkTipPointSource@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CSuperWetSource::~CSuperWetSource(CSuperWetSource *this)
{
  void *v2; // rcx
  void *v3; // rcx
  CResource *v4; // rcx

  v2 = (void *)*((_QWORD *)this + 15);
  if ( v2 )
    DefaultHeap::Free(v2);
  v3 = (void *)*((_QWORD *)this + 14);
  if ( v3 )
    operator delete(v3);
  v4 = (CResource *)*((_QWORD *)this + 13);
  if ( v4 )
  {
    *((_QWORD *)this + 13) = 0LL;
    CResource::InternalRelease(v4);
  }
  Microsoft::WRL::ComPtr<CGenericInkTipPointSource>::InternalRelease((char *)this + 88);
  CResource::~CResource(this);
}
