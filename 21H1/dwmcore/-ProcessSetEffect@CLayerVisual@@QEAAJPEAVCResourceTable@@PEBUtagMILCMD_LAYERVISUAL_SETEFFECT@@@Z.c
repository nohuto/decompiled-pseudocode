/*
 * XREFs of ?ProcessSetEffect@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LAYERVISUAL_SETEFFECT@@@Z @ 0x1800203E8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?ClearTreeEffect@CLayerVisual@@AEAAXXZ @ 0x180020F24 (-ClearTreeEffect@CLayerVisual@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18007B22C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18007CC28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18007CF48 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800809A4 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008C000 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLayerVisual::ProcessSetEffect(
        CLayerVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_LAYERVISUAL_SETEFFECT *a3)
{
  unsigned int v4; // edi
  __int64 v5; // rdx
  unsigned int v7; // ecx
  struct CResource *Resource; // rsi
  _QWORD *v9; // rax
  struct CResource **v10; // r14
  int v11; // eax
  struct CResource *v12; // rcx
  int v14; // r9d
  unsigned int v15; // [rsp+20h] [rbp-18h]

  v4 = 0;
  v5 = *((unsigned int *)a3 + 2);
  if ( !(_DWORD)v5 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(CLayerVisual *))(*(_QWORD *)this + 224LL))(this) )
      return v4;
    CLayerVisual::ClearTreeEffect(this);
    goto LABEL_11;
  }
  Resource = (struct CResource *)CResourceTable::GetResource(a2, v5, 55LL);
  if ( !Resource )
  {
    v4 = -2003303421;
    v15 = 42;
LABEL_15:
    v14 = v4;
    goto LABEL_17;
  }
  if ( (*(unsigned __int8 (__fastcall **)(CLayerVisual *))(*(_QWORD *)this + 224LL))(this) )
    goto LABEL_6;
  v9 = DefaultHeap::AllocClear(0x10uLL);
  if ( !v9 )
  {
    v4 = -2147024882;
    v15 = 48;
    goto LABEL_15;
  }
  v9[1] = 0LL;
  *v9 = 0LL;
  *((_QWORD *)this + 78) = v9;
LABEL_6:
  v10 = (struct CResource **)(*(__int64 (__fastcall **)(CLayerVisual *))(*(_QWORD *)this + 232LL))(this);
  if ( *v10 != Resource )
  {
    v11 = CResource::RegisterNotifier(this, Resource);
    v4 = v11;
    if ( v11 >= 0 )
    {
      CResource::UnRegisterNotifierInternal(this, *v10);
      if ( *v10 != Resource )
      {
        (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)Resource + 8LL))(Resource);
        v12 = *v10;
        *v10 = Resource;
        if ( v12 )
          (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v12 + 16LL))(v12);
      }
LABEL_11:
      CVisual::PropagateFlags(this, 5LL);
      return v4;
    }
    v14 = v11;
    v15 = 58;
LABEL_17:
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v14, v15, 0LL);
  }
  return v4;
}
