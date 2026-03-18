/*
 * XREFs of ?ProcessAddBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEANIMATION_ADDBINDING@@@Z @ 0x1800EDE08
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800BDA3C (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800CB358 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseAnimation::ProcessAddBinding(
        CBaseAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_BASEANIMATION_ADDBINDING *a3)
{
  struct CResource *ResourceWithoutType; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  struct CResource *v7; // rsi
  unsigned int v8; // eax
  unsigned int v9; // edx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // edi
  unsigned int v13; // ebx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v17; // rcx
  __int128 v18; // [rsp+30h] [rbp-18h] BYREF

  ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 2));
  v7 = ResourceWithoutType;
  if ( !ResourceWithoutType )
  {
    v13 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0LL, -2003303421, 0x1Cu);
    return v13;
  }
  *(_QWORD *)&v18 = ResourceWithoutType;
  DWORD2(v18) = *(_DWORD *)(v6 + 12);
  v8 = *((_DWORD *)this + 24);
  v9 = v8 + 1;
  if ( v8 + 1 < v8 )
  {
    v13 = -2147024362;
    v12 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0LL, -2147024362, 0xB5u);
    goto LABEL_11;
  }
  if ( v9 > *((_DWORD *)this + 23) )
  {
    v10 = DynArrayImpl<0>::AddMultipleAndSet((unsigned __int64)this + 72, 0x10u, 1, &v18);
    v12 = v10;
    v13 = v10;
    if ( v10 >= 0 )
      goto LABEL_5;
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, v10, 0xC0u);
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0LL, v12, 0x23u);
    return v13;
  }
  *(_OWORD *)(*((_QWORD *)this + 9) + 16LL * *((unsigned int *)this + 24)) = v18;
  *((_DWORD *)this + 24) = v9;
LABEL_5:
  (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v7 + 8LL))(v7);
  v14 = (*(__int64 (__fastcall **)(CBaseAnimation *, __int128 *))(*(_QWORD *)this + 184LL))(this, &v18);
  v13 = v14;
  if ( v14 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0LL, v14, 0x29u);
  return v13;
}
