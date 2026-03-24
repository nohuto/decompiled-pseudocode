/*
 * XREFs of ?ProcessSetTemplate@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EFFECTBRUSH_SETTEMPLATE@@@Z @ 0x18004823C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A325C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?TryCreateEffectInstance@CEffectBrush@@AEAAJXZ @ 0x1800493B4 (-TryCreateEffectInstance@CEffectBrush@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18009D530 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800A3004 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B8AF4 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ReleaseResources@CEffectBrush@@AEAAXXZ @ 0x1800CFC54 (-ReleaseResources@CEffectBrush@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEffectBrush::ProcessSetTemplate(
        CEffectBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_EFFECTBRUSH_SETTEMPLATE *a3)
{
  struct CResource *Resource; // rax
  unsigned int v6; // ecx
  struct CResource *v7; // rsi
  int EffectInstance; // eax
  int v9; // ebx
  unsigned int v10; // r14d
  int v11; // ebp
  unsigned int v12; // eax
  unsigned int v13; // edx
  int v15; // r9d
  int v16; // eax
  unsigned int v17; // [rsp+20h] [rbp-28h]
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF

  Resource = (struct CResource *)CResourceTable::GetResource(a2, *((unsigned int *)a3 + 2), 26LL);
  v7 = Resource;
  if ( !Resource )
  {
    CEffectBrush::ReleaseResources(this);
    goto LABEL_10;
  }
  if ( *((_QWORD *)this + 11) )
  {
    v9 = -2003303422;
    v17 = 147;
    goto LABEL_14;
  }
  EffectInstance = CResource::RegisterNotifier(this, Resource);
  v9 = EffectInstance;
  if ( EffectInstance < 0 )
  {
    v17 = 152;
    goto LABEL_16;
  }
  *((_QWORD *)this + 11) = v7;
  v10 = *((_DWORD *)a3 + 3);
  v11 = 0;
  if ( !v10 )
  {
LABEL_9:
    EffectInstance = CEffectBrush::TryCreateEffectInstance(this);
    v9 = EffectInstance;
    if ( EffectInstance >= 0 )
    {
LABEL_10:
      v9 = 0;
      (*(void (__fastcall **)(CEffectBrush *, _QWORD, CEffectBrush *))(*(_QWORD *)this + 72LL))(this, 0LL, this);
      return (unsigned int)v9;
    }
    v17 = 162;
LABEL_16:
    v15 = EffectInstance;
    goto LABEL_17;
  }
  while ( 1 )
  {
    v12 = *((_DWORD *)this + 34);
    v18 = 0LL;
    v13 = v12 + 1;
    if ( v12 + 1 < v12 )
    {
      v9 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024362, 0xB5u, 0LL);
      goto LABEL_21;
    }
    if ( v13 > *((_DWORD *)this + 33) )
      break;
    v6 = v12;
    *(_QWORD *)(*((_QWORD *)this + 14) + 8LL * v12) = 0LL;
    *((_DWORD *)this + 34) = v13;
LABEL_8:
    if ( ++v11 >= v10 )
      goto LABEL_9;
  }
  v16 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 112, 8LL, 1LL, &v18);
  v9 = v16;
  if ( v16 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v16, 0xC0u, 0LL);
LABEL_21:
  if ( v9 >= 0 )
    goto LABEL_8;
  v17 = 159;
LABEL_14:
  v15 = v9;
LABEL_17:
  MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v15, v17, 0LL);
  return (unsigned int)v9;
}
