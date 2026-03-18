/*
 * XREFs of ?ProcessSetPropertySet@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EFFECTBRUSH_SETPROPERTYSET@@@Z @ 0x1800B6504
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A643C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800A61E4 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?HasValidTemplate@CEffectBrush@@AEBA_NXZ @ 0x1800B7408 (-HasValidTemplate@CEffectBrush@@AEBA_NXZ.c)
 *     ?InternalRelease@?$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C5020 (-InternalRelease@-$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEffectBrush::ProcessSetPropertySet(
        CEffectBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_EFFECTBRUSH_SETPROPERTYSET *a3)
{
  __int64 Resource; // rax
  __int64 v5; // rcx
  __int64 v6; // rdi
  unsigned int v7; // ebx
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 12) )
  {
    v7 = -2003303422;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003303422, 0x64u, 0LL);
  }
  else
  {
    Resource = CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0x86u);
    v6 = Resource;
    if ( Resource )
    {
      if ( *((_QWORD *)this + 12) != Resource )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)Resource + 8LL))(Resource);
        v9 = *((_QWORD *)this + 12);
        *((_QWORD *)this + 12) = v6;
        Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease(&v9);
      }
      if ( CEffectBrush::HasValidTemplate(this) )
        *(_QWORD *)(*((_QWORD *)this + 12) + 72LL) = (char *)this + 80;
      return 0;
    }
    else
    {
      v7 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2003303421, 0x6Au, 0LL);
    }
  }
  return v7;
}
