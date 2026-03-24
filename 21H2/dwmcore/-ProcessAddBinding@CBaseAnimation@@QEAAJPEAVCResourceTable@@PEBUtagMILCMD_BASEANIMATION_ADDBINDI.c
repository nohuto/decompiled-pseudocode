/*
 * XREFs of ?ProcessAddBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEANIMATION_ADDBINDING@@@Z @ 0x1800D5994
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A325C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800A0B90 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B8AF4 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseAnimation::ProcessAddBinding(
        CBaseAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_BASEANIMATION_ADDBINDING *a3)
{
  struct CResource *ResourceWithoutType; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  struct CResource *v7; // rdi
  unsigned int v8; // eax
  unsigned int v9; // edx
  int v10; // eax
  int v11; // ebx
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v15; // [rsp+20h] [rbp-28h]
  __int128 v16; // [rsp+30h] [rbp-18h] BYREF

  ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 2));
  v7 = ResourceWithoutType;
  if ( !ResourceWithoutType )
  {
    v11 = -2003303421;
    v15 = 28;
    goto LABEL_14;
  }
  *(_QWORD *)&v16 = ResourceWithoutType;
  DWORD2(v16) = *(_DWORD *)(v6 + 12);
  v8 = *((_DWORD *)this + 22);
  v9 = v8 + 1;
  if ( v8 + 1 < v8 )
  {
    v11 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147024362, 0xB5u, 0LL);
LABEL_6:
    if ( v11 >= 0 )
      goto LABEL_7;
    v15 = 35;
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v11, v15, 0LL);
    return (unsigned int)v11;
  }
  if ( v9 > *((_DWORD *)this + 21) )
  {
    v10 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 64, 16, 1, &v16);
    v11 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v10, 0xC0u, 0LL);
    goto LABEL_6;
  }
  *(_OWORD *)(*((_QWORD *)this + 8) + 16LL * *((unsigned int *)this + 22)) = v16;
  *((_DWORD *)this + 22) = v9;
LABEL_7:
  (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v7 + 8LL))(v7);
  v12 = (*(__int64 (__fastcall **)(CBaseAnimation *, __int128 *))(*(_QWORD *)this + 200LL))(this, &v16);
  v11 = v12;
  if ( v12 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x29u, 0LL);
  return (unsigned int)v11;
}
