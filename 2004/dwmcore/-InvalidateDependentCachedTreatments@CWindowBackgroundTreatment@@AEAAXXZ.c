/*
 * XREFs of ?InvalidateDependentCachedTreatments@CWindowBackgroundTreatment@@AEAAXXZ @ 0x1800BDA58
 * Callers:
 *     ??1CWindowBackgroundTreatment@@UEAA@XZ @ 0x1800BCE6C (--1CWindowBackgroundTreatment@@UEAA@XZ.c)
 *     ?NotifyInvalidResource@CWindowBackgroundTreatment@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801F95F0 (-NotifyInvalidResource@CWindowBackgroundTreatment@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VIDeviceTexture@@@WRL@Microsoft@@IEAAKXZ @ 0x18001CC20 (-InternalRelease@-$ComPtr@VIDeviceTexture@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CWindowBackgroundTreatment::InvalidateDependentCachedTreatments(CWindowBackgroundTreatment *this)
{
  __int64 v1; // rdi
  __int64 *v2; // r14
  unsigned __int64 v3; // rsi
  __int64 v4; // rbx

  v1 = 0LL;
  v2 = (__int64 *)*((_QWORD *)this + 48);
  v3 = (unsigned __int64)(*((_QWORD *)this + 49) - (_QWORD)v2 + 7LL) >> 3;
  if ( (unsigned __int64)v2 > *((_QWORD *)this + 49) )
    v3 = 0LL;
  if ( v3 )
  {
    do
    {
      v4 = *v2;
      Microsoft::WRL::ComPtr<IDeviceTexture>::InternalRelease((__int64 *)(*v2 + 24));
      ++v1;
      *(_BYTE *)(v4 + 140) = 1;
      ++v2;
    }
    while ( v1 != v3 );
  }
}
