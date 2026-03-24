/*
 * XREFs of ?ValidateDevice@CAtlasEntry@@QEBAJAEBVRenderTargetInfo@@@Z @ 0x18024BA1C
 * Callers:
 *     ?GetDeviceTexture@CAtlasBitmapResource@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18020A680 (-GetDeviceTexture@CAtlasBitmapResource@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasEntry::ValidateDevice(CAtlasEntry *this, const struct RenderTargetInfo *a2)
{
  __int64 v2; // rcx
  unsigned int v4; // ebx
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  _DWORD v9[2]; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v10; // [rsp+38h] [rbp-20h]

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    (***(void (__fastcall ****)(_QWORD, _DWORD *))(v2 + 8))(*(_QWORD *)(v2 + 8), v9);
    if ( v9[0] == *(_DWORD *)a2
      && v9[1] == *((_DWORD *)a2 + 1)
      && ((v5 = v10, v6 = *((_DWORD *)a2 + 2), v10 == DisplayId::None) || v10 == v6 || v6 == DisplayId::All) )
    {
      return 0;
    }
    else
    {
      v4 = -2003304287;
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2003304287, 0x16Eu, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2003304287, 0x78u, 0LL);
    }
  }
  else
  {
    v4 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, -2003304307, 0x75u, 0LL);
  }
  return v4;
}
