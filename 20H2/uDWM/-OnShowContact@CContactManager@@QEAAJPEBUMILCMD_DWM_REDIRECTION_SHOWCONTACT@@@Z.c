/*
 * XREFs of ?OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z @ 0x18009EDE8
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180015780 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012D2C (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017394 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x1800341DC (-StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ?CancelStationaryAnimation@CContactManager@@AEAAXIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@@Z @ 0x18009D104 (-CancelStationaryAnimation@CContactManager@@AEAAXIW4STATIONARY_ANIMATION_TYPE@CContactStationary.c)
 *     ?CheckShowContact@CContactManager@@AEAA_NW4DWM_SHOWCONTACT@@0@Z @ 0x18009D230 (-CheckShowContact@CContactManager@@AEAA_NW4DWM_SHOWCONTACT@@0@Z.c)
 *     ?UpdateShowContact@CDirectTouchVisual@@QEAAJW4DWM_SHOWCONTACT@@@Z @ 0x1800A0E24 (-UpdateShowContact@CDirectTouchVisual@@QEAAJW4DWM_SHOWCONTACT@@@Z.c)
 *     ?UpdateShowContact@CTouchDragVisual@@QEAAXW4DWM_SHOWCONTACT@@@Z @ 0x1800A4338 (-UpdateShowContact@CTouchDragVisual@@QEAAXW4DWM_SHOWCONTACT@@@Z.c)
 *     ?UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ @ 0x1800A55B0 (-UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CContactManager::OnShowContact(
        CContactManager *this,
        const struct MILCMD_DWM_REDIRECTION_SHOWCONTACT *a2)
{
  __int64 v4; // r8
  unsigned int v5; // edx
  unsigned int v6; // r14d
  __int64 v7; // r9
  __int64 v8; // rdx
  CContactManager *v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx
  struct CTouchVisual *v15; // rbp
  CContactManager *v16; // rcx
  struct CTouchVisual *v17; // rbp
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  char v21; // dl
  CPenBarrelKeyVisual *v22; // rcx
  __int64 v23; // rcx
  struct _RTL_CRITICAL_SECTION *v25; // [rsp+40h] [rbp+8h] BYREF

  v25 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0xFFFFFFFFLL;
  v5 = 0;
  v6 = -2147024809;
  v7 = 0xFFFFFFFFLL;
  if ( *((_DWORD *)this + 20) )
  {
    while ( *(_DWORD *)(112LL * v5 + *((_QWORD *)this + 7)) != *((_DWORD *)a2 + 1) )
    {
      if ( ++v5 >= *((_DWORD *)this + 20) )
        goto LABEL_6;
    }
    v4 = v5;
  }
LABEL_6:
  v8 = 0LL;
  if ( *((_DWORD *)this + 28) )
  {
    while ( *(_DWORD *)(*((_QWORD *)this + 11) + 40 * v8) != *((_DWORD *)a2 + 1) )
    {
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= *((_DWORD *)this + 28) )
        goto LABEL_11;
    }
    v7 = (unsigned int)v8;
  }
LABEL_11:
  if ( (int)v4 < 0 )
  {
    if ( (int)v7 >= 0 )
    {
      v6 = 0;
      *(_DWORD *)(*((_QWORD *)this + 11) + 40LL * (unsigned int)v7 + 24) = *((_DWORD *)a2 + 2);
      if ( *(_QWORD *)(*((_QWORD *)this + 11) + 40LL * (unsigned int)v7 + 8) )
      {
        _mm_lfence();
        v21 = (*((_DWORD *)a2 + 2) & 0x10) != 0;
        v22 = *(CPenBarrelKeyVisual **)(*((_QWORD *)this + 11) + 40LL * (unsigned int)v7 + 8);
        if ( *((_BYTE *)v22 + 340) != v21 )
        {
          *((_BYTE *)v22 + 340) = v21;
          CPenBarrelKeyVisual::UpdateBarrelAlpha(v22);
        }
      }
    }
  }
  else
  {
    v9 = (CContactManager *)*((_QWORD *)this + 7);
    v6 = 0;
    v10 = 112LL * (unsigned int)v4;
    *(_DWORD *)((char *)v9 + v10 + 40) = *((_DWORD *)a2 + 2);
    v11 = *((_QWORD *)this + 7);
    if ( *((_BYTE *)this + 324) )
    {
      v12 = *(_QWORD *)(v10 + v11 + 48);
      if ( v12 )
      {
        CDirectTouchVisual::UpdateShowContact(v12, 4294967291LL, v4, v7);
        v11 = *((_QWORD *)this + 7);
      }
      v13 = *(_QWORD *)(v10 + v11 + 56);
      if ( v13 )
        *(_DWORD *)(v13 + 348) = -5;
    }
    else
    {
      v14 = *((unsigned int *)a2 + 2);
      if ( (_DWORD)v14 )
      {
        v18 = *(_QWORD *)(v11 + v10 + 48);
        if ( v18 )
        {
          CDirectTouchVisual::UpdateShowContact(v18, v14, v4, v7);
          v11 = *((_QWORD *)this + 7);
          v14 = *((unsigned int *)a2 + 2);
        }
        v19 = *(_QWORD *)(v10 + v11 + 88);
        if ( v19 )
          CTouchDragVisual::UpdateShowContact(v19, v14, v4, v7);
      }
      else
      {
        v15 = *(struct CTouchVisual **)(v11 + v10 + 48);
        CContactManager::StopAndRemoveFromRootNode(v9, v15);
        if ( v15 )
          CBaseObject::Release(v15);
        v17 = *(struct CTouchVisual **)(v10 + *((_QWORD *)this + 7) + 88);
        CContactManager::StopAndRemoveFromRootNode(v16, v17);
        if ( v17 )
          CBaseObject::Release(v17);
        *(_QWORD *)(v10 + *((_QWORD *)this + 7) + 48) = 0LL;
        *(_QWORD *)(v10 + *((_QWORD *)this + 7) + 88) = 0LL;
      }
      v20 = *(_QWORD *)(v10 + *((_QWORD *)this + 7) + 56);
      if ( v20 )
        *(_DWORD *)(v20 + 348) = *((_DWORD *)a2 + 2);
    }
  }
  if ( !CContactManager::CheckShowContact((__int64)this, *((_DWORD *)a2 + 2), 2) )
    CContactManager::CancelStationaryAnimation(v23, *((unsigned int *)a2 + 1));
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v25);
  return v6;
}
