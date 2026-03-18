/*
 * XREFs of ?GetDeviceTexture@CAtlasTexture@@QEBAXPEAPEAVIDeviceTexture@@@Z @ 0x180248CD4
 * Callers:
 *     ?GetDeviceTexture@CAtlasBitmapResource@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180207AB0 (-GetDeviceTexture@CAtlasBitmapResource@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?CopyFrom@CAtlasTexture@@QEAAXPEBV1@PEAI@Z @ 0x18024962C (-CopyFrom@CAtlasTexture@@QEAAXPEBV1@PEAI@Z.c)
 *     ?UpdateGradientStrip@CAtlasTexture@@QEAAXPEBVCAtlasEntry@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x180249CD0 (-UpdateGradientStrip@CAtlasTexture@@QEAAXPEBVCAtlasEntry@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAtlasTexture::GetDeviceTexture(CAtlasTexture *this, struct IDeviceTexture **a2)
{
  __int64 v2; // rcx
  __int64 v4; // rdi
  void (__fastcall *v5)(__int64, __int64, struct IDeviceTexture **); // rbx
  __int64 v6; // rax
  _BYTE v7[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *((_QWORD *)this + 1);
  v4 = v2 + *(int *)(*(_QWORD *)(v2 + 8) + 16LL);
  v5 = *(void (__fastcall **)(__int64, __int64, struct IDeviceTexture **))(*(_QWORD *)(v4 + 8) + 48LL);
  v6 = (**(__int64 (__fastcall ***)(__int64, _BYTE *))v2)(v2, v7);
  v5(v4 + 8, v6, a2);
}
