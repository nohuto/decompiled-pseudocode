/*
 * XREFs of MonitorGetMonitorOrientationsFromTarget @ 0x1C0115F20
 * Callers:
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N5@Z @ 0x1C0114C30 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     ?AddingMonitorOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W42@I@Z @ 0x1C01287D0 (-AddingMonitorOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W42@I@Z.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C01358BC (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MonitorGetMonitorOrientationsFromTarget(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v3; // edi
  __int64 v4; // r14
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 i; // rax
  __int64 v14; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax

  v3 = 0;
  v4 = (unsigned int)a2;
  if ( !a1 || (_DWORD)a2 == -1 )
    return 3221225485LL;
  v7 = *(_QWORD *)(a1 + 2672);
  if ( !v7 )
  {
    v16 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v16);
    v7 = *(_QWORD *)(a1 + 2672);
  }
  v8 = *(_QWORD *)(v7 + 96);
  if ( !v8 )
  {
    v17 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v17 + 24) = a1;
    WdLogEvent5_WdError(v17);
    return 3221225485LL;
  }
  if ( v8 == -168 )
  {
    v18 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v18);
  }
  KeAcquireGuardedMutex((PKGUARDED_MUTEX)(v8 + 168));
  v12 = v8 + 128;
  for ( i = *(_QWORD *)(v8 + 128); i != v12; i = *(_QWORD *)(v14 + 16) )
  {
    v14 = i - 16;
    if ( !i )
      v14 = 0LL;
    if ( !v14 )
      break;
    if ( *(_DWORD *)(v14 + 44) == (_DWORD)v4 )
    {
      if ( *(_DWORD *)(v14 + 432) != 1 )
        v14 = *(_QWORD *)(v14 + 440);
      if ( v14 )
      {
        if ( v8 == -168 )
        {
          v19 = WdLogNewEntry5_WdAssertion(v12, v9);
          WdLogEvent5_WdAssertion(v19);
        }
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v8 + 168));
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite((PERESOURCE)(v14 + 296), 1u);
        if ( a3 )
        {
          if ( *(_DWORD *)(v14 + 456) != *(_DWORD *)(v14 + 448) )
            v3 = *(_DWORD *)(v14 + 456);
          *a3 = v3;
        }
        ExReleaseResourceLite((PERESOURCE)(v14 + 296));
        KeLeaveCriticalRegion();
        return 0LL;
      }
      break;
    }
  }
  v20 = WdLogNewEntry5_WdTrace(v12, v9, v10, v11);
  *(_QWORD *)(v20 + 24) = v4;
  *(_QWORD *)(v20 + 32) = v8;
  if ( v8 == -168 )
  {
    v23 = WdLogNewEntry5_WdAssertion(v22, v21);
    WdLogEvent5_WdAssertion(v23);
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v8 + 168));
  return 3221226021LL;
}
