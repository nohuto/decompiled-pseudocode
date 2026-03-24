/*
 * XREFs of ?AddToBspPolygonList@CVisual@@IEAAJPEAVCPolygon@@@Z @ 0x1801AD124
 * Callers:
 *     ?BuildPolygonList@CBspNode@@QEAAJPEAVCVisual@@@Z @ 0x1801FA78C (-BuildPolygonList@CBspNode@@QEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180059EE0 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetBspPolygonList@CVisual@@QEBAPEAV?$DynArray@PEAVCPolygon@@$0A@@@XZ @ 0x18009F4BC (-GetBspPolygonList@CVisual@@QEBAPEAV-$DynArray@PEAVCPolygon@@$0A@@@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B8AF4 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?SetBspPolygonList@CVisual@@QEAAXPEAV?$DynArray@PEAVCPolygon@@$0A@@@@Z @ 0x1801AEAA0 (-SetBspPolygonList@CVisual@@QEAAXPEAV-$DynArray@PEAVCPolygon@@$0A@@@@Z.c)
 */

__int64 __fastcall CVisual::AddToBspPolygonList(CVisual *this, struct CPolygon *a2)
{
  __int64 v3; // rcx
  __int64 BspPolygonList; // rbx
  struct CPolygon *v5; // r10
  _QWORD *v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  unsigned int v9; // eax
  unsigned int v10; // edx
  __int64 v11; // rcx
  int v12; // eax
  struct CPolygon *v14; // [rsp+48h] [rbp+10h] BYREF

  v14 = a2;
  BspPolygonList = CVisual::GetBspPolygonList((__int64)this);
  if ( BspPolygonList )
  {
LABEL_8:
    v9 = *(_DWORD *)(BspPolygonList + 24);
    v10 = v9 + 1;
    if ( v9 + 1 >= v9 )
    {
      if ( v10 <= *(_DWORD *)(BspPolygonList + 20) )
      {
        *(_QWORD *)(*(_QWORD *)BspPolygonList + 8LL * *(unsigned int *)(BspPolygonList + 24)) = v5;
        *(_DWORD *)(BspPolygonList + 24) = v10;
        v8 = 0;
LABEL_15:
        (**(void (__fastcall ***)(struct CPolygon *))v14)(v14);
        return v8;
      }
      v12 = DynArrayImpl<0>::AddMultipleAndSet(BspPolygonList, 8, 1, &v14);
      v8 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v12, 0xC0u, 0LL);
    }
    else
    {
      v8 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, -2147024362, 0xB5u, 0LL);
    }
    if ( (v8 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v8, 0x16BEu, 0LL);
      return v8;
    }
    goto LABEL_15;
  }
  v6 = DefaultHeap::Alloc(0x20uLL);
  BspPolygonList = (__int64)v6;
  if ( v6 )
  {
    *v6 = 0LL;
    v6[1] = 0LL;
    *((_DWORD *)v6 + 4) = 0;
    *((_DWORD *)v6 + 5) = 0;
    *((_DWORD *)v6 + 6) = 0;
  }
  else
  {
    BspPolygonList = 0LL;
  }
  if ( BspPolygonList )
  {
    CVisual::SetBspPolygonList(this, BspPolygonList);
    v5 = v14;
    goto LABEL_8;
  }
  v8 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0x16BAu, 0LL);
  return v8;
}
