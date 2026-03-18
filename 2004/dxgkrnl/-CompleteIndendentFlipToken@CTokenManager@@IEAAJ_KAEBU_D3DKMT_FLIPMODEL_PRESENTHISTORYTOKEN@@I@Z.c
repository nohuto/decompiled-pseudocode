/*
 * XREFs of ?CompleteIndendentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z @ 0x1C001BBF0
 * Callers:
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C0002F70 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C00160A4 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     ?RemoveIndependentFlipSkipTokenFromList@CTokenManager@@IEAAXU_LUID@@IPEAPEAVCToken@@@Z @ 0x1C001BD9C (-RemoveIndependentFlipSkipTokenFromList@CTokenManager@@IEAAXU_LUID@@IPEAPEAVCToken@@@Z.c)
 *     ?UpdateStatsAndCustomPresentDuration@CompositionSurfaceObject@@QEAAX_KAEBUDXGI_FRAME_STATISTICS@@IW4BufferFlipMode@@@Z @ 0x1C001BE4C (-UpdateStatsAndCustomPresentDuration@CompositionSurfaceObject@@QEAAX_KAEBUDXGI_FRAME_STATISTICS@.c)
 *     ?SetSyncRefreshCount@CompositionSurfaceObject@@QEAAXI@Z @ 0x1C001BF1C (-SetSyncRefreshCount@CompositionSurfaceObject@@QEAAXI@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     DxgkGetPresentStats @ 0x1C016D140 (DxgkGetPresentStats.c)
 */

__int64 __fastcall CTokenManager::CompleteIndendentFlipToken(
        CTokenManager *this,
        __int64 a2,
        const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *a3,
        unsigned int a4)
{
  void *v4; // rdi
  __int64 v8; // r8
  int v9; // r13d
  UINT PresentCount; // ecx
  UINT v11; // r8d
  LUID compSurfLuid; // rdx
  struct CToken *v13; // r14
  int v14; // eax
  unsigned int v15; // r15d
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  void (__fastcall *v20)(_QWORD, _QWORD, __int64, __int64); // rbx
  unsigned int v21; // eax
  PVOID Object; // [rsp+30h] [rbp-49h] BYREF
  struct CToken *v24; // [rsp+38h] [rbp-41h] BYREF
  void *hCompSurf; // [rsp+40h] [rbp-39h]
  _DWORD v26[4]; // [rsp+48h] [rbp-31h] BYREF
  __int64 v27; // [rsp+58h] [rbp-21h]
  __int64 v28; // [rsp+60h] [rbp-19h]
  __int128 v29; // [rsp+68h] [rbp-11h]
  __int128 v30; // [rsp+78h] [rbp-1h]
  __int64 v31; // [rsp+88h] [rbp+Fh]

  hCompSurf = (void *)a3->hCompSurf;
  v4 = hCompSurf;
  v31 = 0LL;
  Object = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  DxgkGetPresentStats(a4);
  v9 = CompositionSurfaceObject::ResolveHandle(hCompSurf, 2u, v8, (struct CompositionSurfaceObject **)&Object);
  if ( v9 >= 0 )
  {
    PresentCount = a3->PresentCount;
    v26[2] = v30;
    v26[0] = PresentCount;
    v27 = *((_QWORD *)&v30 + 1);
    v28 = *((_QWORD *)&v30 + 1);
    v26[1] = DWORD1(v29);
    v26[3] = 0;
    CompositionSurfaceObject::UpdateStatsAndCustomPresentDuration(Object, a2, v26, (unsigned int)v31);
    v11 = a3->PresentCount;
    compSurfLuid = a3->compSurfLuid;
    v24 = 0LL;
    CTokenManager::RemoveIndependentFlipSkipTokenFromList(this, compSurfLuid, v11, &v24);
    v13 = v24;
    if ( v24 )
    {
      v14 = (*(__int64 (__fastcall **)(struct CToken *, _QWORD))(*(_QWORD *)v24 + 136LL))(v24, (unsigned int)v30);
      v15 = v14 + 1;
      if ( v14 != -1 )
      {
        CompositionSurfaceObject::SetSyncRefreshCount((CompositionSurfaceObject *)Object, v15);
        v16 = *((_QWORD *)v13 + 5);
        v17 = *(_QWORD *)(*((_QWORD *)v13 + 4) + 24LL);
        v20 = *(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(*((_QWORD *)DXGGLOBAL::GetGlobal(v19, v18)
                                                                        + 38048)
                                                                      + 112LL);
        v21 = (*(__int64 (__fastcall **)(struct CToken *))(*(_QWORD *)v13 + 112LL))(v13);
        v20(v15, v21, v17, v16);
        v4 = hCompSurf;
      }
      (**(void (__fastcall ***)(struct CToken *, __int64))v13)(v13, 1LL);
    }
    ObfDereferenceObject(Object);
    ObCloseHandle(v4, 1);
  }
  return (unsigned int)v9;
}
