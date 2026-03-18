/*
 * XREFs of ?GetDeviceTexture@CAtlasBitmapResource@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18020C2B0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180211774 (ModuleFailFastForHRESULT.c)
 *     ?GetDeviceTexture@CAtlasTexture@@QEBAXPEAPEAVIDeviceTexture@@@Z @ 0x18024C6F4 (-GetDeviceTexture@CAtlasTexture@@QEBAXPEAPEAVIDeviceTexture@@@Z.c)
 *     ?ValidateDevice@CAtlasEntry@@QEBAJAEBVRenderTargetInfo@@@Z @ 0x18024C78C (-ValidateDevice@CAtlasEntry@@QEBAJAEBVRenderTargetInfo@@@Z.c)
 */

__int64 __fastcall CAtlasBitmapResource::GetDeviceTexture(
        CAtlasBitmapResource *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  char *v3; // rdi
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v3 = (char *)this + 16;
  v5 = CAtlasEntry::ValidateDevice((CAtlasBitmapResource *)((char *)this + 16), a2);
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0xA0u, 0LL);
  }
  else
  {
    if ( !*((_QWORD *)v3 + 1) )
      ModuleFailFastForHRESULT(2291662981LL, retaddr);
    CAtlasTexture::GetDeviceTexture(*(CAtlasTexture **)v3, a3);
  }
  return v7;
}
