/*
 * XREFs of NtNotifyPresentToCompositionSurface @ 0x1C00647B0
 * Callers:
 *     ?QuerySwapChainBindingStatus@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C028D7EC (-QuerySwapChainBindingStatus@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJIPEAU_D3DKMT_PRESENTHISTORY.c)
 * Callees:
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C000FB88 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C000FFA8 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C00160A4 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     ?CheckBinding@CCompositionSurface@@QEBA_N_KPEAW4CompositionBufferType@@PEAPEAUHWND__@@PEA_N@Z @ 0x1C0065380 (-CheckBinding@CCompositionSurface@@QEBA_N_KPEAW4CompositionBufferType@@PEAPEAUHWND__@@PEA_N@Z.c)
 *     ?PreNotifyPendingFlipPresent@CCompositionSurface@@QEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@@Z @ 0x1C006572C (-PreNotifyPendingFlipPresent@CCompositionSurface@@QEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOK.c)
 */

__int64 __fastcall NtNotifyPresentToCompositionSurface(CCompositionSurface *a1, unsigned __int64 a2)
{
  signed int v4; // ebx
  unsigned __int64 v5; // r14
  _DWORD *v6; // rdx
  _OWORD *v7; // rcx
  _OWORD *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rax
  _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *v11; // rcx
  _OWORD *v12; // rax
  unsigned __int64 *v13; // r14
  _OWORD *v14; // rax
  _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r8
  PVOID v18; // r12
  CCompositionSurface *v19; // rsi
  bool v21; // [rsp+30h] [rbp-8C8h] BYREF
  PVOID Object; // [rsp+38h] [rbp-8C0h] BYREF
  CCompositionSurface *v23; // [rsp+40h] [rbp-8B8h] BYREF
  signed int v24; // [rsp+48h] [rbp-8B0h]
  unsigned __int64 v25; // [rsp+50h] [rbp-8A8h]
  HWND v26; // [rsp+58h] [rbp-8A0h] BYREF
  _BYTE v27[1072]; // [rsp+60h] [rbp-898h] BYREF
  _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN v28; // [rsp+490h] [rbp-468h] BYREF

  v23 = a1;
  v4 = 0;
  memset(&v28, 0, sizeof(v28));
  Object = 0LL;
  v5 = 0LL;
  v25 = 0LL;
  if ( a2 )
  {
    if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1 )
    {
      v6 = (_DWORD *)a2;
      if ( a2 + 4 < a2 || a2 + 4 > MmUserProbeAddress )
        v6 = (_DWORD *)MmUserProbeAddress;
      if ( *v6 != 2 )
        v4 = -1073741811;
      v24 = v4;
      v7 = (_OWORD *)(a2 + 16);
      if ( a2 + 1080 < a2 + 16 || a2 + 1080 > MmUserProbeAddress )
        v7 = (_OWORD *)MmUserProbeAddress;
      v8 = v27;
      v9 = 8LL;
      v10 = 8LL;
      do
      {
        *v8 = *v7;
        v8[1] = v7[1];
        v8[2] = v7[2];
        v8[3] = v7[3];
        v8[4] = v7[4];
        v8[5] = v7[5];
        v8[6] = v7[6];
        v8 += 8;
        *(v8 - 1) = v7[7];
        v7 += 8;
        --v10;
      }
      while ( v10 );
      *v8 = *v7;
      v8[1] = v7[1];
      *((_QWORD *)v8 + 4) = *((_QWORD *)v7 + 4);
      v11 = &v28;
      v12 = v27;
      do
      {
        *(_OWORD *)&v11->FenceValue = *v12;
        *(_OWORD *)&v11->dxgContext = v12[1];
        *(_OWORD *)&v11->PresentLimitSemaphoreId = v12[2];
        *(_OWORD *)&v11->hCompSurf = v12[3];
        *(_OWORD *)&v11->confirmationCookie = v12[4];
        *(_OWORD *)&v11->RemainingTokens = v12[5];
        *(_OWORD *)&v11->ScrollRect.bottom = v12[6];
        v11 = (_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *)((char *)v11 + 128);
        v11[-1].DirtyRegions.Rects[15] = (RECT)v12[7];
        v12 += 8;
        --v9;
      }
      while ( v9 );
      *(_OWORD *)&v11->FenceValue = *v12;
      *(_OWORD *)&v11->dxgContext = v12[1];
      v11->PresentLimitSemaphoreId = *((_QWORD *)v12 + 4);
      v13 = (unsigned __int64 *)(a2 + 8);
      if ( a2 + 16 < a2 + 8 || a2 + 16 > MmUserProbeAddress )
        v13 = (unsigned __int64 *)MmUserProbeAddress;
      v5 = *v13;
      v25 = v5;
    }
    else
    {
      v14 = (_OWORD *)(a2 + 16);
      v15 = &v28;
      v16 = 8LL;
      do
      {
        *(_OWORD *)&v15->FenceValue = *v14;
        *(_OWORD *)&v15->dxgContext = v14[1];
        *(_OWORD *)&v15->PresentLimitSemaphoreId = v14[2];
        *(_OWORD *)&v15->hCompSurf = v14[3];
        *(_OWORD *)&v15->confirmationCookie = v14[4];
        *(_OWORD *)&v15->RemainingTokens = v14[5];
        *(_OWORD *)&v15->ScrollRect.bottom = v14[6];
        v15 = (_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *)((char *)v15 + 128);
        v15[-1].DirtyRegions.Rects[15] = (RECT)v14[7];
        v14 += 8;
        --v16;
      }
      while ( v16 );
      *(_OWORD *)&v15->FenceValue = *v14;
      *(_OWORD *)&v15->dxgContext = v14[1];
      v15->PresentLimitSemaphoreId = *((_QWORD *)v14 + 4);
      v5 = *(_QWORD *)(a2 + 8);
      v4 = *(_DWORD *)a2 != 2 ? 0xC000000D : 0;
    }
  }
  KeEnterCriticalRegion();
  if ( v4 >= 0 )
  {
    v4 = CompositionSurfaceObject::ResolveHandle(a1, 2u, v17, (struct CompositionSurfaceObject **)&Object);
    v18 = Object;
    if ( v4 >= 0 )
    {
      v23 = 0LL;
      v4 = CompositionSurfaceObject::LockForWrite((char *)Object, &v23);
      if ( v4 >= 0 )
      {
        LODWORD(Object) = 0;
        v21 = 0;
        v19 = v23;
        if ( !CCompositionSurface::CheckBinding(v23, v5, (enum CompositionBufferType *)&Object, &v26, &v21)
          || (_DWORD)Object != 2
          || !v21 )
        {
          v4 = -1073741811;
        }
        if ( v4 >= 0 )
          v4 = CCompositionSurface::PreNotifyPendingFlipPresent(v19, v5, &v28);
        CCompositionSurface::UnlockAndRelease(v19);
      }
      ObfDereferenceObject(v18);
    }
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v4;
}
