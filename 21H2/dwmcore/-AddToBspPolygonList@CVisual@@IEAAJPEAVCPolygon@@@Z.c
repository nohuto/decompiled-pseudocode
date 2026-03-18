/*
 * XREFs of ?AddToBspPolygonList@CVisual@@IEAAJPEAVCPolygon@@@Z @ 0x1801F6C30
 * Callers:
 *     ?BuildPolygonList@CBspNode@@QEAAJPEAVCVisual@@@Z @ 0x180246E14 (-BuildPolygonList@CBspNode@@QEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?GetBspPolygonList@CVisual@@QEBAPEAV?$DynArray@PEAVCPolygon@@$0A@@@XZ @ 0x180047450 (-GetBspPolygonList@CVisual@@QEBAPEAV-$DynArray@PEAVCPolygon@@$0A@@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800CB358 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetBspPolygonList@CVisual@@QEAAXPEAV?$DynArray@PEAVCPolygon@@$0A@@@@Z @ 0x1801F835C (-SetBspPolygonList@CVisual@@QEAAXPEAV-$DynArray@PEAVCPolygon@@$0A@@@@Z.c)
 */

__int64 __fastcall CVisual::AddToBspPolygonList(CVisual *this, struct CPolygon *a2)
{
  __int64 v3; // rcx
  unsigned __int64 BspPolygonList; // rbx
  struct CPolygon *v5; // r10
  _QWORD *v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // eax
  unsigned int v9; // edx
  unsigned int v10; // ebx
  int v11; // edi
  __int64 v12; // rcx
  int v14; // eax
  __int64 v15; // rcx
  struct CPolygon *v16; // [rsp+48h] [rbp+10h] BYREF

  v16 = a2;
  BspPolygonList = CVisual::GetBspPolygonList((__int64)this);
  if ( !BspPolygonList )
  {
    v6 = DefaultHeap::Alloc(0x20uLL);
    BspPolygonList = (unsigned __int64)v6;
    if ( !v6 )
    {
      v10 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, -2147024882, 0x174Fu);
      return v10;
    }
    *v6 = 0LL;
    v6[1] = 0LL;
    *((_DWORD *)v6 + 4) = 0;
    *((_DWORD *)v6 + 5) = 0;
    *((_DWORD *)v6 + 6) = 0;
    CVisual::SetBspPolygonList(this, v6);
    v5 = v16;
  }
  v8 = *(_DWORD *)(BspPolygonList + 24);
  v9 = v8 + 1;
  if ( v8 + 1 < v8 )
  {
    v10 = -2147024362;
    v11 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, v11, 0x1753u);
    return v10;
  }
  if ( v9 > *(_DWORD *)(BspPolygonList + 20) )
  {
    v14 = DynArrayImpl<0>::AddMultipleAndSet(BspPolygonList, 8u, 1, &v16);
    v11 = v14;
    v10 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0LL, v14, 0xC0u);
      goto LABEL_14;
    }
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)BspPolygonList + 8LL * *(unsigned int *)(BspPolygonList + 24)) = v5;
    *(_DWORD *)(BspPolygonList + 24) = v9;
    v10 = 0;
  }
  (**(void (__fastcall ***)(struct CPolygon *))v16)(v16);
  return v10;
}
