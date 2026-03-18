/*
 * XREFs of ?ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_ADDPRIMITIVES@@@Z @ 0x1800DF3F0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ??$ReplaceInterface@VCSharedSection@@V1@@@YAXAEAPEAVCSharedSection@@PEAV0@@Z @ 0x180046B58 (--$ReplaceInterface@VCSharedSection@@V1@@@YAXAEAPEAVCSharedSection@@PEAV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C07E8 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x1800DF578 (-ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z.c)
 *     ?ResolveSharedMemoryBufferNew@CPrimitiveGroup@@AEAAXXZ @ 0x18010453C (-ResolveSharedMemoryBufferNew@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?ResolveSharedMemoryBufferOld@CPrimitiveGroup@@AEAAXXZ @ 0x18010476C (-ResolveSharedMemoryBufferOld@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_3187573053@@@details@wil@@QEAA_NXZ @ 0x180104A34 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_3187573053@@@details@wil@@QEAA_NX.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qxqq_EventWriteTransfer @ 0x180232668 (McTemplateU0qxqq_EventWriteTransfer.c)
 */

__int64 __fastcall CPrimitiveGroup::ProcessAddPrimitives(
        CResource **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PRIMITIVEGROUP_ADDPRIMITIVES *a3)
{
  unsigned int v6; // esi
  int v7; // edx
  __int64 v8; // rcx
  __int64 Resource; // r14
  char v10; // bp
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int v15; // [rsp+20h] [rbp-18h]

  v6 = 0;
  Resource = CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0xA8u);
  if ( !Resource )
  {
    v15 = 162;
LABEL_3:
    v6 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, -2003303421, v15);
    return v6;
  }
  if ( *((_DWORD *)a3 + 3) < 0x3Cu )
  {
    v15 = 167;
    goto LABEL_3;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
    McTemplateU0qxqq_EventWriteTransfer(
      v8,
      v7,
      *((_DWORD *)a2 + 12),
      (_DWORD)this,
      *((_DWORD *)a3 + 1),
      *((_DWORD *)a3 + 2));
  v10 = (*((__int64 (__fastcall **)(CResource **))*this + 24))(this);
  ReplaceInterface<CSharedSection,CSharedSection>(this + 49, Resource);
  *((_DWORD *)this + 100) = *((_DWORD *)a3 + 3);
  v11 = *((_DWORD *)a3 + 4);
  this[59] = 0LL;
  this[60] = 0LL;
  this[61] = 0LL;
  this[62] = 0LL;
  *((_DWORD *)this + 101) = v11;
  CPrimitiveGroup::ReleasePrimitiveCaches((CPrimitiveGroup *)this, 1);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_3187573053>::__private_IsEnabled(
                          &`wil::Feature<__WilFeatureTraits_Feature_3187573053>::GetImpl'::`2'::impl,
                          v12,
                          v13) )
    CPrimitiveGroup::ResolveSharedMemoryBufferNew((CPrimitiveGroup *)this);
  else
    CPrimitiveGroup::ResolveSharedMemoryBufferOld((CPrimitiveGroup *)this);
  if ( v10 != (*((unsigned __int8 (__fastcall **)(CResource **))*this + 24))(this) )
    (*((void (__fastcall **)(CResource **, __int64))*this + 9))(this, 3LL);
  return v6;
}
