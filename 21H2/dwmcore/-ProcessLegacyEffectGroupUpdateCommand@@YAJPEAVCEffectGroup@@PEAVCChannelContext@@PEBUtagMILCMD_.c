/*
 * XREFs of ?ProcessLegacyEffectGroupUpdateCommand@@YAJPEAVCEffectGroup@@PEAVCChannelContext@@PEBUtagMILCMD_EFFECTGROUP@@@Z @ 0x1800CEDDC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A325C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800A3004 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SetTransform3D@?$CEffectGroupGeneratedT@VCEffectGroup@@VCEffect@@@@QEAAJPEAVCTransform3D@@@Z @ 0x1800CEE6C (-SetTransform3D@-$CEffectGroupGeneratedT@VCEffectGroup@@VCEffect@@@@QEAAJPEAVCTransform3D@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ProcessLegacyEffectGroupUpdateCommand(
        struct CEffectGroup *this,
        struct CChannelContext *a2,
        const struct tagMILCMD_EFFECTGROUP *a3)
{
  float v3; // xmm0_4
  __int64 v7; // rax
  int v8; // eax
  unsigned int v9; // edx
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int64 v14; // rcx

  v3 = *((float *)a3 + 2);
  if ( v3 != *((float *)this + 18) )
  {
    v7 = *(_QWORD *)this;
    *((float *)this + 18) = v3;
    (*(void (__fastcall **)(struct CEffectGroup *, _QWORD, _QWORD))(v7 + 72))(this, 0LL, 0LL);
  }
  v8 = *((_DWORD *)a3 + 3);
  if ( v8 != *((_DWORD *)this + 19) )
  {
    *((_DWORD *)this + 19) = v8;
    (*(void (__fastcall **)(struct CEffectGroup *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL, 0LL);
  }
  v9 = *((_DWORD *)a3 + 4);
  if ( !v9 || CResourceTable::GetResource(*((_QWORD *)a2 + 3), v9, 0xBAu) )
  {
    v10 = CEffectGroupGeneratedT<CEffectGroup,CEffect>::SetTransform3D(this);
    v12 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x1AAu, 0LL);
  }
  else
  {
    v12 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2003303421, 0x1A6u, 0LL);
  }
  return v12;
}
