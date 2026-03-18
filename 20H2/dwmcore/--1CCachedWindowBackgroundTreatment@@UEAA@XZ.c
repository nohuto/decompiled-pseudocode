/*
 * XREFs of ??1CCachedWindowBackgroundTreatment@@UEAA@XZ @ 0x180011ABC
 * Callers:
 *     ??_ECCachedWindowBackgroundTreatment@@UEAAPEAXI@Z @ 0x180011A80 (--_ECCachedWindowBackgroundTreatment@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveDependentCachedTreatment@CWindowBackgroundTreatment@@QEAAXPEBVCCachedWindowBackgroundTreatment@@@Z @ 0x1800133E0 (-RemoveDependentCachedTreatment@CWindowBackgroundTreatment@@QEAAXPEBVCCachedWindowBackgroundTrea.c)
 *     ?InternalRelease@?$ComPtr@VIDeviceTexture@@@WRL@Microsoft@@IEAAKXZ @ 0x18001CA10 (-InternalRelease@-$ComPtr@VIDeviceTexture@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CCachedWindowBackgroundTreatment::~CCachedWindowBackgroundTreatment(
        CCachedWindowBackgroundTreatment *this)
{
  CWindowBackgroundTreatment *v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &CCachedWindowBackgroundTreatment::`vftable';
  v2 = (CWindowBackgroundTreatment *)*((_QWORD *)this + 2);
  if ( v2 )
    CWindowBackgroundTreatment::RemoveDependentCachedTreatment(v2, this);
  Microsoft::WRL::ComPtr<IDeviceTexture>::InternalRelease((char *)this + 24);
  v3 = *((_QWORD *)this + 2);
  if ( v3 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
