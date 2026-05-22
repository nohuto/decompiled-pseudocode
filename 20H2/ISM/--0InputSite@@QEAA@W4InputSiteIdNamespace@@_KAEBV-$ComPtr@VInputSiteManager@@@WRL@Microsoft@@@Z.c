/*
 * XREFs of ??0InputSite@@QEAA@W4InputSiteIdNamespace@@_KAEBV?$ComPtr@VInputSiteManager@@@WRL@Microsoft@@@Z @ 0x180004EE8
 * Callers:
 *     ??$Make@VInputSite@@AEAW4InputSiteIdNamespace@@AEA_KPEAVInputSiteManager@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VInputSite@@@12@AEAW4InputSiteIdNamespace@@AEA_K$$QEAPEAVInputSiteManager@@@Z @ 0x180004E40 (--$Make@VInputSite@@AEAW4InputSiteIdNamespace@@AEA_KPEAVInputSiteManager@@@Details@WRL@Microsoft.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180001E50 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x180004F84 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 *     memset_0 @ 0x18003C540 (memset_0.c)
 */

__int64 __fastcall InputSite::InputSite(__int64 a1, int a2, __int64 a3, _QWORD *a4)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>();
  *(_DWORD *)(a1 + 16) = a2;
  *(_QWORD *)a1 = &InputSite::`vftable';
  *(_QWORD *)(a1 + 24) = a3;
  memset_0((void *)(a1 + 33), 0, 0x16FuLL);
  *(_BYTE *)(a1 + 32) = 0;
  *(_BYTE *)(a1 + 392) = 0;
  *(_QWORD *)(a1 + 400) = 0LL;
  *(_QWORD *)(a1 + 408) = 0LL;
  *(_QWORD *)(a1 + 416) = 0LL;
  *(_QWORD *)(a1 + 424) = *a4;
  Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))(a1 + 424));
  return a1;
}
