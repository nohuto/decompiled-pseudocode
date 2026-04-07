/*
 * XREFs of ?CleanupFinishedAnimations@CContactManager@@AEAAXXZ @ 0x18009D258
 * Callers:
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x18009E03C (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18009FAE4 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017394 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x1800473DC (-RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAt@?$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z @ 0x18008952C (-RemoveAt@-$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z.c)
 *     ?RemoveAt@?$DynArray@PEAVCTouchVisual@@$0A@@@QEAAJI@Z @ 0x180089DA4 (-RemoveAt@-$DynArray@PEAVCTouchVisual@@$0A@@@QEAAJI@Z.c)
 *     ?IsOKToCleanup@CFlickVisual@@UEAA_NXZ @ 0x18009DAC0 (-IsOKToCleanup@CFlickVisual@@UEAA_NXZ.c)
 *     ?RemoveAt@?$DynArray@UCStationaryAnimation@@$0A@@@QEAAJI@Z @ 0x1800A06E8 (-RemoveAt@-$DynArray@UCStationaryAnimation@@$0A@@@QEAAJI@Z.c)
 *     ?IsOKToCleanup@CContactStationaryVisual@@UEAA_NXZ @ 0x1800A1290 (-IsOKToCleanup@CContactStationaryVisual@@UEAA_NXZ.c)
 *     ?IsOKToCleanup@CTouchPressHoldVisual@@UEAA_NXZ @ 0x1800B7B10 (-IsOKToCleanup@CTouchPressHoldVisual@@UEAA_NXZ.c)
 */

void __fastcall CContactManager::CleanupFinishedAnimations(CContactManager *this)
{
  int v2; // ebx
  _QWORD *v3; // r14
  __int64 v4; // rsi
  __int64 *v5; // rbp
  CContactManager *v6; // rcx
  CBaseObject *v7; // rcx
  signed int v8; // ebx
  _QWORD *v9; // r14
  __int64 v10; // rsi
  __int64 v11; // rcx
  CContactManager *v12; // rcx
  CBaseObject *v13; // rcx
  signed int v14; // ebx
  _QWORD *v15; // r14
  __int64 v16; // rsi
  __int64 *v17; // rbp
  CContactManager *v18; // rcx
  CBaseObject *v19; // rcx
  __int64 *v20; // rbx
  CContactManager *v21; // rcx
  CBaseObject *v22; // rcx

  v2 = *((_DWORD *)this + 36) - 1;
  if ( v2 >= 0 )
  {
    v3 = (_QWORD *)((char *)this + 120);
    v4 = 24LL * v2;
    while ( 1 )
    {
      v5 = *(__int64 **)(*v3 + v4 + 16);
      if ( !v5 )
        goto LABEL_7;
      if ( CContactStationaryVisual::IsOKToCleanup(*(CContactStationaryVisual **)(*v3 + v4 + 16)) )
        break;
LABEL_8:
      v4 -= 24LL;
      if ( --v2 < 0 )
        goto LABEL_9;
    }
    CContactManager::RemoveFromTouchNode(v6, v5[36], (struct CVisual *)v5);
    v7 = *(CBaseObject **)(*v3 + v4 + 16);
    if ( v7 )
      CBaseObject::Release(v7);
LABEL_7:
    DynArray<CStationaryAnimation,0>::RemoveAt(v3, (unsigned int)v2);
    goto LABEL_8;
  }
LABEL_9:
  v8 = *((_DWORD *)this + 44) - 1;
  if ( v8 >= 0 )
  {
    v9 = (_QWORD *)((char *)this + 152);
    v10 = 8LL * v8;
    while ( 1 )
    {
      v11 = *(_QWORD *)(v10 + *v9);
      if ( !v11 )
        goto LABEL_15;
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v11 + 208LL))(v11) )
        break;
LABEL_16:
      v10 -= 8LL;
      if ( --v8 < 0 )
        goto LABEL_17;
    }
    CContactManager::RemoveFromTouchNode(
      v12,
      *(_QWORD *)(*(_QWORD *)(v10 + *v9) + 288LL),
      *(struct CVisual **)(v10 + *v9));
    v13 = *(CBaseObject **)(v10 + *v9);
    if ( v13 )
      CBaseObject::Release(v13);
LABEL_15:
    DynArray<CTouchVisual *,0>::RemoveAt((__int64 *)this + 19, v8);
    goto LABEL_16;
  }
LABEL_17:
  v14 = *((_DWORD *)this + 76) - 1;
  if ( v14 >= 0 )
  {
    v15 = (_QWORD *)((char *)this + 280);
    v16 = 16LL * v14;
    while ( 1 )
    {
      v17 = *(__int64 **)(v16 + *v15 + 8);
      if ( !v17 )
        goto LABEL_23;
      if ( CTouchPressHoldVisual::IsOKToCleanup(*(CTouchPressHoldVisual **)(v16 + *v15 + 8)) )
        break;
LABEL_24:
      v16 -= 16LL;
      if ( --v14 < 0 )
        goto LABEL_25;
    }
    CContactManager::RemoveFromTouchNode(v18, v17[36], (struct CVisual *)v17);
    v19 = *(CBaseObject **)(v16 + *v15 + 8);
    if ( v19 )
      CBaseObject::Release(v19);
LABEL_23:
    DynArray<CIconicBitmapPending,0>::RemoveAt((__int64 *)this + 35, v14);
    goto LABEL_24;
  }
LABEL_25:
  v20 = (__int64 *)*((_QWORD *)this + 39);
  if ( v20 && CFlickVisual::IsOKToCleanup(*((CFlickVisual **)this + 39)) )
  {
    CContactManager::RemoveFromTouchNode(v21, v20[36], (struct CVisual *)v20);
    v22 = (CBaseObject *)*((_QWORD *)this + 39);
    if ( v22 )
    {
      CBaseObject::Release(v22);
      *((_QWORD *)this + 39) = 0LL;
    }
  }
}
