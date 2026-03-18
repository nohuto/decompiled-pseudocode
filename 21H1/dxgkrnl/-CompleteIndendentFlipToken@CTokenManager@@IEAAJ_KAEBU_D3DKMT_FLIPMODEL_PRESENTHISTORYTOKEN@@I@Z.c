/*
 * XREFs of ?CompleteIndendentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z @ 0x1C001BA00
 * Callers:
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C0005880 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C0016724 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     ?RemoveIndependentFlipSkipTokenFromList@CTokenManager@@IEAAXU_LUID@@IPEAPEAVCToken@@@Z @ 0x1C001BBD4 (-RemoveIndependentFlipSkipTokenFromList@CTokenManager@@IEAAXU_LUID@@IPEAPEAVCToken@@@Z.c)
 *     ?UpdateStatsAndCustomPresentDuration@CompositionSurfaceObject@@QEAAX_KAEBUDXGI_FRAME_STATISTICS@@IW4BufferFlipMode@@@Z @ 0x1C001BC84 (-UpdateStatsAndCustomPresentDuration@CompositionSurfaceObject@@QEAAX_KAEBUDXGI_FRAME_STATISTICS@.c)
 *     ?SetSyncRefreshCount@CompositionSurfaceObject@@QEAAXI@Z @ 0x1C001BD54 (-SetSyncRefreshCount@CompositionSurfaceObject@@QEAAXI@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ?Feature_Servicing_2103c_29815990__private_IsEnabled@@YAHXZ @ 0x1C0026188 (-Feature_Servicing_2103c_29815990__private_IsEnabled@@YAHXZ.c)
 *     ?FindTokenQueue@CTokenManager@@IEAAJPEAVCompositionSurfaceObject@@PEAPEAVCTokenQueue@@@Z @ 0x1C00261F0 (-FindTokenQueue@CTokenManager@@IEAAJPEAVCompositionSurfaceObject@@PEAPEAVCTokenQueue@@@Z.c)
 *     ?CompleteIndependentFlipNotifyToken@CTokenQueue@@QEAAX_KI@Z @ 0x1C0026254 (-CompleteIndependentFlipNotifyToken@CTokenQueue@@QEAAX_KI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     DxgkGetPresentStats @ 0x1C015D6E0 (DxgkGetPresentStats.c)
 */

__int64 __fastcall CTokenManager::CompleteIndendentFlipToken(
        CTokenManager *this,
        unsigned __int64 a2,
        const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *a3,
        unsigned int a4)
{
  __int64 v7; // r8
  int v8; // r13d
  UINT PresentCount; // r8d
  LUID compSurfLuid; // rdx
  struct CTokenQueue *v11; // r14
  int v12; // eax
  unsigned int v13; // r12d
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  void (__fastcall *v18)(_QWORD, _QWORD, __int64, __int64); // rbx
  unsigned int v19; // eax
  PVOID Object; // [rsp+30h] [rbp-49h] BYREF
  struct CTokenQueue *v22; // [rsp+38h] [rbp-41h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-39h]
  _DWORD v24[4]; // [rsp+48h] [rbp-31h] BYREF
  __int64 v25; // [rsp+58h] [rbp-21h]
  __int64 v26; // [rsp+60h] [rbp-19h]
  __int128 v27; // [rsp+68h] [rbp-11h]
  __int128 v28; // [rsp+78h] [rbp-1h]
  __int64 v29; // [rsp+88h] [rbp+Fh]

  Handle = (HANDLE)a3->hCompSurf;
  v29 = 0LL;
  Object = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  DxgkGetPresentStats(a4);
  v8 = CompositionSurfaceObject::ResolveHandle(Handle, 2u, v7, (struct CompositionSurfaceObject **)&Object);
  if ( v8 >= 0 )
  {
    if ( (unsigned int)Feature_Servicing_2103c_29815990__private_IsEnabled() )
    {
      v22 = 0LL;
      if ( (int)CTokenManager::FindTokenQueue(this, (struct CompositionSurfaceObject *)Object, &v22) >= 0 )
        CTokenQueue::CompleteIndependentFlipNotifyToken(v22, a2, a3->PresentCount);
    }
    v24[0] = a3->PresentCount;
    v24[1] = DWORD1(v27);
    v24[2] = v28;
    v25 = *((_QWORD *)&v28 + 1);
    v26 = *((_QWORD *)&v28 + 1);
    v24[3] = 0;
    CompositionSurfaceObject::UpdateStatsAndCustomPresentDuration(Object, a2, v24, (unsigned int)v29);
    PresentCount = a3->PresentCount;
    compSurfLuid = a3->compSurfLuid;
    v22 = 0LL;
    CTokenManager::RemoveIndependentFlipSkipTokenFromList(this, compSurfLuid, PresentCount, &v22);
    v11 = v22;
    if ( v22 )
    {
      v12 = (*(__int64 (__fastcall **)(struct CTokenQueue *, _QWORD))(*(_QWORD *)v22 + 136LL))(v22, (unsigned int)v28);
      v13 = v12 + 1;
      if ( v12 != -1 )
      {
        CompositionSurfaceObject::SetSyncRefreshCount((CompositionSurfaceObject *)Object, v13);
        v14 = *((_QWORD *)v11 + 5);
        v15 = *(_QWORD *)(*((_QWORD *)v11 + 4) + 24LL);
        v18 = *(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(*((_QWORD *)DXGGLOBAL::GetGlobal(v17, v16)
                                                                        + 38033)
                                                                      + 112LL);
        v19 = (*(__int64 (__fastcall **)(struct CTokenQueue *))(*(_QWORD *)v11 + 112LL))(v11);
        v18(v13, v19, v15, v14);
      }
      (**(void (__fastcall ***)(struct CTokenQueue *, __int64))v11)(v11, 1LL);
    }
    ObfDereferenceObject(Object);
    ObCloseHandle(Handle, 1);
  }
  return (unsigned int)v8;
}
