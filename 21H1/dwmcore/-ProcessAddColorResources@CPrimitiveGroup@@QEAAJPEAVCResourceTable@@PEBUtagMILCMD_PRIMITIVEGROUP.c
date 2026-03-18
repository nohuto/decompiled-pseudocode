/*
 * XREFs of ?ProcessAddColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_ADDCOLORRESOURCES@@PEBXI@Z @ 0x1801E7448
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x1800382C8 (-ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18007B22C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18007E580 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008C000 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800A9948 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ @ 0x1800CB540 (-ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrimitiveGroup::ProcessAddColorResources(
        CPrimitiveGroup *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PRIMITIVEGROUP_ADDCOLORRESOURCES *a3,
        unsigned int *a4)
{
  int v4; // ebx
  unsigned int i; // esi
  struct CResource *ResourceWithoutType; // rax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // eax
  unsigned int v15; // r8d
  __int64 v16; // rcx
  int v17; // eax
  struct CResource *v19; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  for ( i = 0; i < *((_DWORD *)a3 + 2); ++i )
  {
    ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *a4);
    v19 = ResourceWithoutType;
    v11 = (__int64)ResourceWithoutType;
    if ( !ResourceWithoutType
      || !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 56LL))(
            ResourceWithoutType,
            126LL) )
    {
      v4 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2003303421, 0x112u, 0LL);
      goto LABEL_15;
    }
    v12 = CResource::RegisterNotifier(this, v19);
    v4 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x11Au, 0LL);
      goto LABEL_14;
    }
    v14 = *((_DWORD *)this + 66);
    v15 = v14 + 1;
    if ( v14 + 1 >= v14 )
    {
      if ( v15 <= *((_DWORD *)this + 65) )
      {
        v4 = 0;
        *(_QWORD *)(*((_QWORD *)this + 30) + 8LL * *((unsigned int *)this + 66)) = v19;
        *((_DWORD *)this + 66) = v15;
        goto LABEL_12;
      }
      v17 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 240, 8, 1, &v19);
      v4 = v17;
      if ( v17 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v17, 0xC0u, 0LL);
    }
    else
    {
      v4 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024362, 0xB5u, 0LL);
    }
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v4, 0x11Cu, 0LL);
      CResource::UnRegisterNotifierInternal(this, v19);
      goto LABEL_14;
    }
LABEL_12:
    ++a4;
  }
  CPrimitiveGroup::ReleasePrimitiveCaches(this, 1);
LABEL_14:
  if ( v4 < 0 )
LABEL_15:
    CPrimitiveGroup::ReleaseColorResources(this);
  return (unsigned int)v4;
}
