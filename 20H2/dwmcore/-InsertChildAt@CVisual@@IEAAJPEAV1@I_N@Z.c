/*
 * XREFs of ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x1800AC280
 * Callers:
 *     ?ProcessInsertChildAt@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_INSERTCHILDAT@@@Z @ 0x1800AC1D8 (-ProcessInsertChildAt@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_INSERTCHILDAT@@@Z.c)
 *     ?ProcessMoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_MOVECHILD@@@Z @ 0x1800CF638 (-ProcessMoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_MOVECHILD@@@Z.c)
 *     ?SetRootVisual@CDesktopTree@@AEAAJPEAVCVisual@@@Z @ 0x1800DAF24 (-SetRootVisual@CDesktopTree@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18006D9E8 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x1800A82D4 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ?RemoveChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x1800A9C00 (-RemoveChild@CVisual@@IEAAXPEAV1@_N@Z.c)
 *     ?NotifyVisualTreeListeners@CVisual@@IEAAXW4Flags@NotificationEventArgs@@@Z @ 0x1800AC150 (-NotifyVisualTreeListeners@CVisual@@IEAAXW4Flags@NotificationEventArgs@@@Z.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x1800AC66C (-OnClipChanged@CVisual@@AEAAXXZ.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800BD340 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800BD378 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C7124 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x180223B4C (-QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 */

__int64 __fastcall CVisual::InsertChildAt(CVisual *this, struct CVisual *a2, unsigned int a3, char a4)
{
  CVisual *v6; // r14
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // r12d
  CComposition **v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r8
  unsigned int Count; // eax
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rbp
  unsigned int v17; // eax
  __int64 v18; // rax
  __int64 v19; // r15
  __int64 v20; // rbx
  char v21; // al
  char v22; // cl
  int v23; // r8d
  bool v24; // zf
  int v25; // ecx
  __int64 v27; // rax
  __int64 v28; // rbp
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rcx
  _BYTE *v34; // rdx
  unsigned int i; // eax
  _QWORD ***v36; // rcx
  _QWORD **v37; // rcx
  _QWORD *j; // rax
  __int64 v39; // rcx
  _BYTE *v40; // rdx
  unsigned int k; // eax
  _QWORD ***v42; // rcx
  _QWORD **v43; // rcx
  _QWORD *m; // rax
  CVisual *v45; // rax
  __int64 v46; // rbx
  __int64 v47; // rbp
  __int64 v48; // rax
  __int64 v49; // rbx
  __int64 v50; // rbp
  __int64 v51; // rax
  CComposition *v52; // rbx
  struct CManipulationManager *v53; // [rsp+60h] [rbp+8h] BYREF

  v6 = this;
  if ( *((CVisual **)a2 + 10) == this )
  {
    v9 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024809, 0x230u, 0LL);
  }
  else
  {
    v7 = CPtrArrayBase::InsertAt((CVisual *)((char *)this + 72), (unsigned __int64)a2, a3);
    v9 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x233u, 0LL);
    }
    else
    {
      (*(void (__fastcall **)(struct CVisual *))(*(_QWORD *)a2 + 8LL))(a2);
      v10 = (CComposition **)*((_QWORD *)a2 + 10);
      if ( v10 )
        CVisual::RemoveChild(v10, a2, 0);
      *((_QWORD *)a2 + 55) = 0LL;
      *((_QWORD *)a2 + 10) = v6;
      v11 = *((_QWORD *)a2 + 28);
      if ( *(int *)v11 < 0 )
      {
        v33 = *(unsigned int *)(v11 + 4);
        v34 = (_BYTE *)(v11 + 8);
        for ( i = 0; i < (unsigned int)v33; ++v34 )
        {
          if ( *v34 == 1 )
            break;
          ++i;
        }
        if ( i >= (unsigned int)v33 )
          v36 = 0LL;
        else
          v36 = (_QWORD ***)(v33 + 15 + v11 + 8LL * i - (((_BYTE)v33 + 15) & 7));
        v37 = *v36;
        if ( v37 )
        {
          for ( j = *v37; j != v37; j = (_QWORD *)*j )
            *(j - 21) = 0LL;
        }
      }
      *((_QWORD *)a2 + 70) = 0LL;
      v12 = *((_QWORD *)a2 + 28);
      if ( *(int *)v12 < 0 )
      {
        v39 = *(unsigned int *)(v12 + 4);
        v40 = (_BYTE *)(v12 + 8);
        for ( k = 0; k < (unsigned int)v39; ++v40 )
        {
          if ( *v40 == 1 )
            break;
          ++k;
        }
        if ( k >= (unsigned int)v39 )
          v42 = 0LL;
        else
          v42 = (_QWORD ***)(v12 + v39 + 15 + 8LL * k - (((_BYTE)v39 + 15) & 7));
        v43 = *v42;
        if ( v43 )
        {
          for ( m = *v43; m != v43; m = (_QWORD *)*m )
            *(m - 6) = 0LL;
        }
      }
      CVisual::OnClipChanged(a2);
      if ( (*((_BYTE *)a2 + 95) & 2) != 0 )
      {
        Count = CPtrArrayBase::GetCount((CVisual *)((char *)v6 + 24));
        if ( Count )
        {
          v46 = 0LL;
          v47 = Count;
          do
          {
            v48 = CPtrArrayBase::operator[]((char *)v6 + 24, v46);
            if ( v48 != *((_QWORD *)v6 + 10) )
              (*(void (__fastcall **)(__int64, _QWORD, CVisual *))(*(_QWORD *)v48 + 72LL))(v48, 0LL, v6);
            ++v46;
            --v47;
          }
          while ( v47 );
        }
        v14 = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)v6 + 168LL))(v6);
        v15 = *((_QWORD *)v6 + 10);
        *((_BYTE *)v6 + 88) |= 0x11u;
        v16 = v14;
        if ( (*((_BYTE *)v6 + 95) & 2) != 0 )
        {
          do
          {
            if ( !v15 || (*(_BYTE *)(v15 + 88) & 0x11) == 0x11 )
              break;
            v30 = *(_QWORD *)v15;
            *(_BYTE *)(v15 + 88) |= 0x11u;
            v31 = (*(__int64 (__fastcall **)(__int64))(v30 + 168))(v15);
            if ( !v31 )
              v31 = v16;
            v16 = v31;
            CVisual::NotifyVisualTreeListeners(v15, 0);
            v32 = v15;
            v15 = *(_QWORD *)(v15 + 80);
          }
          while ( (*(_BYTE *)(v32 + 95) & 2) != 0 );
        }
        v17 = CPtrArrayBase::GetCount((struct CVisual *)((char *)a2 + 24));
        if ( v17 )
        {
          v49 = 0LL;
          v50 = v17;
          do
          {
            v51 = CPtrArrayBase::operator[]((char *)a2 + 24, v49);
            if ( v51 != *((_QWORD *)a2 + 10) )
              (*(void (__fastcall **)(__int64, __int64, struct CVisual *))(*(_QWORD *)v51 + 72LL))(v51, 1LL, a2);
            ++v49;
            --v50;
          }
          while ( v50 );
        }
        v18 = (*(__int64 (__fastcall **)(struct CVisual *))(*(_QWORD *)a2 + 168LL))(a2);
        *((_BYTE *)a2 + 88) |= 4u;
        v19 = v18;
        if ( v18 )
          ++*(_DWORD *)(v18 + 28);
        v20 = *((_QWORD *)a2 + 10);
        if ( (*((_BYTE *)a2 + 95) & 2) != 0 )
        {
          do
          {
            if ( !v20 )
              break;
            v21 = *(_BYTE *)(v20 + 88);
            if ( v21 < 0 )
              break;
            *(_BYTE *)(v20 + 88) = v21 | 0x80;
            v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 168LL))(v20);
            v28 = v27;
            if ( v27 )
            {
              if ( v27 != v19 )
                ++*(_DWORD *)(v27 + 24);
            }
            else
            {
              v28 = v19;
            }
            CVisual::NotifyVisualTreeListeners(v20, 1u);
            v29 = v20;
            v19 = v28;
            v20 = *(_QWORD *)(v20 + 80);
          }
          while ( (*(_BYTE *)(v29 + 95) & 2) != 0 );
        }
        if ( !a4 && (*((_BYTE *)a2 + 94) & 1) != 0 )
        {
          v53 = 0LL;
          v52 = (CComposition *)*((_QWORD *)v6 + 2);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v53);
          if ( (int)CComposition::GetManipulationManager(v52, &v53) >= 0 )
            CManipulationManager::QueueMidManipulationUpdate(v53, 2LL, a2);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v53);
        }
      }
      v22 = *((_BYTE *)a2 + 264);
      v23 = *((_DWORD *)a2 + 64) + 1;
      if ( (v22 & 1) == 0 )
        v23 = *((_DWORD *)a2 + 64);
      v24 = (v22 & 2) == 0;
      v25 = *((_DWORD *)a2 + 65) + 1;
      if ( v24 )
        v25 = *((_DWORD *)a2 + 65);
      if ( v23 || v25 )
      {
        v45 = v6;
        do
        {
          *((_DWORD *)v6 + 64) += v23;
          *((_DWORD *)v6 + 65) += v25;
          v6 = (CVisual *)*((_QWORD *)v6 + 10);
          if ( v45 )
          {
            v45 = (CVisual *)*((_QWORD *)v45 + 10);
            if ( v45 )
              v45 = (CVisual *)*((_QWORD *)v45 + 10);
          }
        }
        while ( v6 != v45 );
      }
    }
  }
  return v9;
}
