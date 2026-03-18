/*
 * XREFs of ?ProcessSetSurfaces@CCompositionMipmapSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONMIPMAPSURFACE_SETSURFACES@@PEBXI@Z @ 0x1801BE6E8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18007B22C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18007E580 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008C000 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?IsEquivalentTo@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800C64A8 (-IsEquivalentTo@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionMipmapSurface::ProcessSetSurfaces(
        CCompositionMipmapSurface *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONMIPMAPSURFACE_SETSURFACES *a3,
        _DWORD *a4)
{
  unsigned __int64 ResourceWithoutType; // rcx
  CResourceTable *v8; // r9
  unsigned int v9; // ebx
  __int64 v10; // rbp
  int v11; // eax
  __int64 v12; // rbp
  struct CResource *v13; // r12
  struct CResource *v14; // rax
  __int64 v15; // r8
  __int64 v16; // r13
  struct CResource *v17; // r10
  __int64 v18; // r11
  __int64 v19; // r14
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rbx
  struct CResource *v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned int v27; // [rsp+20h] [rbp-68h]
  int v28; // [rsp+30h] [rbp-58h]
  _DWORD v29[20]; // [rsp+38h] [rbp-50h] BYREF
  int v30; // [rsp+90h] [rbp+8h]
  int v32; // [rsp+A0h] [rbp+18h]
  unsigned int v34; // [rsp+B0h] [rbp+28h]

  ResourceWithoutType = *((unsigned int *)a3 + 2);
  v8 = a2;
  if ( ResourceWithoutType > (__int64)(*((_QWORD *)this + 12) - *((_QWORD *)this + 11)) >> 5 )
  {
    v27 = 230;
    goto LABEL_3;
  }
  v10 = 0LL;
  if ( (_DWORD)ResourceWithoutType )
  {
    while ( 1 )
    {
      ResourceWithoutType = (unsigned __int64)CResourceTable::GetResourceWithoutType(v8, a4[6 * v10 + 1]);
      if ( a4[6 * v10] >= *((_DWORD *)this + 32) )
        break;
      if ( ResourceWithoutType )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)ResourceWithoutType + 56LL))(
                ResourceWithoutType,
                40LL) )
          break;
        v8 = a2;
      }
      v11 = a4[6 * v10 + 2];
      if ( v11 < 0 )
        break;
      ResourceWithoutType = (unsigned int)a4[6 * v10 + 3];
      if ( (ResourceWithoutType & 0x80000000) != 0LL
        || a4[6 * v10 + 4] < v11
        || a4[6 * v10 + 5] < (int)ResourceWithoutType )
      {
        break;
      }
      LODWORD(ResourceWithoutType) = *((_DWORD *)a3 + 2);
      v10 = (unsigned int)(v10 + 1);
      if ( (unsigned int)v10 >= (unsigned int)ResourceWithoutType )
        goto LABEL_15;
    }
    v27 = 258;
LABEL_3:
    v9 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(ResourceWithoutType, 0LL, 0, -2003303421, v27, 0LL);
    return v9;
  }
LABEL_15:
  v12 = 0LL;
  if ( !(_DWORD)ResourceWithoutType )
    return 0;
  while ( 1 )
  {
    v13 = 0LL;
    v14 = CResourceTable::GetResourceWithoutType(v8, a4[6 * v12 + 1]);
    v16 = (unsigned int)a4[2 * v15];
    v17 = v14;
    v34 = a4[2 * v15 + 2];
    v29[0] = v34;
    v30 = a4[2 * v15 + 3];
    v29[1] = v30;
    v32 = a4[2 * v15 + 4];
    v29[2] = v32;
    v28 = a4[2 * v15 + 5];
    v29[3] = v28;
    if ( v14 )
    {
      v18 = *((_QWORD *)this + 11);
      v19 = 32LL * (unsigned int)v16;
      v13 = v14;
      if ( *(struct CResource **)(v19 + v18) != v14
        || !TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEquivalentTo(
              (_DWORD *)(v19 + v18 + 8),
              v29) )
      {
        *(_BYTE *)(v19 + v18 + 24) = 1;
        *((_BYTE *)this + 152) = 1;
        if ( *(struct CResource **)(v19 + *((_QWORD *)this + 11)) != v17 )
          break;
      }
    }
LABEL_23:
    v12 = (unsigned int)(v12 + 1);
    v24 = 32 * v16;
    *(_QWORD *)(v24 + *((_QWORD *)this + 11)) = v13;
    v25 = *((_QWORD *)this + 11);
    *(_DWORD *)(v24 + v25 + 8) = v34;
    *(_DWORD *)(v24 + v25 + 12) = v30;
    *(_DWORD *)(v24 + v25 + 16) = v32;
    *(_DWORD *)(v24 + v25 + 20) = v28;
    if ( (unsigned int)v12 >= *((_DWORD *)a3 + 2) )
      return 0;
    v8 = a2;
  }
  v20 = CResource::RegisterNotifier(this, v17);
  v9 = v20;
  if ( v20 >= 0 )
  {
    v22 = *((_QWORD *)this + 11);
    v23 = *(struct CResource **)(v19 + v22);
    if ( v23 )
    {
      CResource::UnRegisterNotifierInternal(this, v23);
      *(_QWORD *)(v19 + v22) = 0LL;
    }
    goto LABEL_23;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x11Du, 0LL);
  return v9;
}
