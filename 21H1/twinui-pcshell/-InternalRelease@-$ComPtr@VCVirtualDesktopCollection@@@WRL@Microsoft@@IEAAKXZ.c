/*
 * XREFs of ?InternalRelease@?$ComPtr@VCVirtualDesktopCollection@@@WRL@Microsoft@@IEAAKXZ @ 0x180413CF0
 * Callers:
 *     ??$MakeAndInitialize@VCVirtualDesktopCollection@@V1@AEAPEAUIVirtualDesktopFactory@@AEAPEAUIVirtualDesktopPersistence@@AEA_N@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopCollection@@AEAPEAUIVirtualDesktopFactory@@AEAPEAUIVirtualDesktopPersistence@@AEA_N@Z @ 0x180413200 (--$MakeAndInitialize@VCVirtualDesktopCollection@@V1@AEAPEAUIVirtualDesktopFactory@@AEAPEAUIVirtu.c)
 *     ??1?$ComPtr@VCVirtualDesktopCollection@@@WRL@Microsoft@@QEAA@XZ @ 0x180413330 (--1-$ComPtr@VCVirtualDesktopCollection@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?CVirtualDesktopCollection_CreateInstance@@YAJPEAUIVirtualDesktopFactory@@PEAUIVirtualDesktopPersistence@@_NAEBU_GUID@@PEAPEAX@Z @ 0x1804135DC (-CVirtualDesktopCollection_CreateInstance@@YAJPEAUIVirtualDesktopFactory@@PEAUIVirtualDesktopPer.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVirtualDesktopCollection@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180413D90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVirtualDesktopC.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CVirtualDesktopCollection>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IVirtualDesktopCollection>::Release(v1);
  }
  return result;
}
