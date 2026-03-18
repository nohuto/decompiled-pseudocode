/*
 * XREFs of ?ProcessSetInput@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EFFECTBRUSH_SETINPUT@@@Z @ 0x1800CE394
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180051DB0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800A8270 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800AB870 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?IsValidInputResource@CEffectBrush@@CA_NPEBVCResource@@@Z @ 0x1800CE45C (-IsValidInputResource@CEffectBrush@@CA_NPEBVCResource@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEffectBrush::ProcessSetInput(
        CEffectBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_EFFECTBRUSH_SETINPUT *a3)
{
  const struct CResource *ResourceWithoutType; // rax
  __int64 v6; // rcx
  struct CResource *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // rbp
  struct CResource *v11; // rdx
  unsigned int v12; // ebx
  unsigned int v14; // [rsp+20h] [rbp-18h]

  if ( *((_QWORD *)this + 11) )
  {
    ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 3));
    v7 = ResourceWithoutType;
    if ( ResourceWithoutType && !CEffectBrush::IsValidInputResource(ResourceWithoutType) )
    {
      v14 = 226;
    }
    else
    {
      v8 = *((unsigned int *)a3 + 2);
      if ( (unsigned int)v8 < *((_DWORD *)this + 34) )
      {
        v9 = *((_QWORD *)this + 14);
        v10 = (unsigned int)v8;
        v11 = *(struct CResource **)(v9 + 8 * v8);
        if ( v11 )
        {
          CResource::UnRegisterNotifierInternal(this, v11);
          *(_QWORD *)(v9 + 8 * v10) = 0LL;
        }
        if ( v7 )
        {
          *(_QWORD *)(*((_QWORD *)this + 14) + 8LL * *((unsigned int *)a3 + 2)) = v7;
          CResource::RegisterNotifier(this, v7);
        }
        (*(void (__fastcall **)(CEffectBrush *, __int64))(*(_QWORD *)this + 72LL))(this, 14LL);
        return 0;
      }
      v14 = 231;
    }
    v12 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2003303421, v14, 0LL);
    return v12;
  }
  return 0;
}
