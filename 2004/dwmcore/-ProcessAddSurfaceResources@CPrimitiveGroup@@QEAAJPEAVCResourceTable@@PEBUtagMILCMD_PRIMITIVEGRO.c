/*
 * XREFs of ?ProcessAddSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_ADDSURFACERESOURCES@@PEBXI@Z @ 0x18009E5F4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A643C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ @ 0x18009E4C4 (-ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x18009E750 (-ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800A3DC0 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800AC2C0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrimitiveGroup::ProcessAddSurfaceResources(
        CPrimitiveGroup *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PRIMITIVEGROUP_ADDSURFACERESOURCES *a3,
        unsigned int *a4)
{
  int v4; // ebx
  unsigned int i; // ebp
  struct CResource *ResourceWithoutType; // rax
  __int64 v11; // rcx
  unsigned int v12; // eax
  unsigned int v13; // r8d
  int v15; // eax
  __int64 v16; // rcx
  struct CResource *v17; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  for ( i = 0; i < *((_DWORD *)a3 + 2); ++i )
  {
    ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *a4);
    v17 = ResourceWithoutType;
    v11 = (__int64)ResourceWithoutType;
    if ( !ResourceWithoutType
      || !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 56LL))(
            ResourceWithoutType,
            40LL) )
    {
      v4 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2003303421, 0xDBu, 0LL);
      goto LABEL_18;
    }
    v12 = *((_DWORD *)this + 50);
    v13 = v12 + 1;
    if ( v12 + 1 < v12 )
    {
      v4 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2147024362, 0xB5u, 0LL);
    }
    else
    {
      if ( v13 <= *((_DWORD *)this + 49) )
      {
        v4 = 0;
        *(_QWORD *)(*((_QWORD *)this + 22) + 8LL * v12) = v17;
        *((_DWORD *)this + 50) = v13;
        goto LABEL_7;
      }
      v15 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 176, 8LL, 1LL, &v17);
      v4 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xC0u, 0LL);
    }
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v4, 0xE3u, 0LL);
      goto LABEL_9;
    }
LABEL_7:
    (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v17 + 8LL))(v17);
    ++a4;
  }
  CPrimitiveGroup::ReleasePrimitiveCaches(this, 1);
LABEL_9:
  if ( v4 < 0 )
LABEL_18:
    CPrimitiveGroup::ReleaseSurfaceResources(this);
  return (unsigned int)v4;
}
