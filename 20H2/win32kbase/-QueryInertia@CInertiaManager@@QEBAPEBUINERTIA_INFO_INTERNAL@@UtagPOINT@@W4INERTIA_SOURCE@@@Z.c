/*
 * XREFs of ?QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z @ 0x1C01A3D20
 * Callers:
 *     ?StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z @ 0x1C0199F68 (-StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z.c)
 *     ?CacheInertia@CPTPProcessor@@AEAAXXZ @ 0x1C01A035C (-CacheInertia@CPTPProcessor@@AEAAXXZ.c)
 *     ?EndInertiaForContainer@CPTPProcessor@@SAXPEAX_K@Z @ 0x1C01A0870 (-EndInertiaForContainer@CPTPProcessor@@SAXPEAX_K@Z.c)
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z @ 0x1C01A1B84 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z.c)
 *     ?HandleMake@InertiaEndSuppression@CMouseProcessor@@QEAA?AW4InertiaEndSuppressionResult@2@_K@Z @ 0x1C01BAA98 (-HandleMake@InertiaEndSuppression@CMouseProcessor@@QEAA-AW4InertiaEndSuppressionResult@2@_K@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0055364 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C0180B70 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?HasDelegationThread@CInputDest@@QEBA_NXZ @ 0x1C0180E9C (-HasDelegationThread@CInputDest@@QEBA_NXZ.c)
 *     ?ValidateInertiaDest@CInertiaManager@@AEBA_NAEBVCInputDest@@@Z @ 0x1C01A4040 (-ValidateInertiaDest@CInertiaManager@@AEBA_NAEBVCInputDest@@@Z.c)
 *     ApiSetEditionQueryInertiaWorker @ 0x1C01C7B00 (ApiSetEditionQueryInertiaWorker.c)
 */

__int64 __fastcall CInertiaManager::QueryInertia(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // edi
  unsigned __int64 v7; // rdx
  CInertiaManager *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rsi
  __m128i v14[8]; // [rsp+20h] [rbp-A8h] BYREF

  v3 = *(_DWORD *)(a1 + 192);
  if ( (v3 & 1) != 0 && (v7 = *(_QWORD *)(a1 + 128)) != 0 )
  {
    CInputDest::CInputDest(v14, v7, 2 - ((v3 & 0x20) != 0), 1);
    LOBYTE(v3) = CInertiaManager::ValidateInertiaDest(v8, (const struct CInputDest *)v14);
    if ( (_BYTE)v3 && (*(_DWORD *)(a1 + 192) & 2) != 0 )
      LOBYTE(v3) = CInputDest::HasDelegationThread((CInputDest *)v14);
    CInputDest::SetEmpty((CInputDest *)v14, v9, v10, v11);
  }
  else
  {
    v3 = (*(_DWORD *)(a1 + 192) & 0x10u) >> 4;
  }
  if ( (_BYTE)v3 && (LOBYTE(v3) = (a3 & *(_DWORD *)(a1 + 32)) != 0) != 0 )
  {
    v12 = a1 + 8;
    LOBYTE(v3) = (unsigned int)ApiSetEditionQueryInertiaWorker(a2, v12) != 0;
  }
  else
  {
    v12 = a1 + 8;
  }
  return v12 & -(__int64)((_BYTE)v3 != 0);
}
