/*
 * XREFs of DpiFdoQueryAdapterInfoIntegratedDisplay @ 0x1C02C6BC0
 * Callers:
 *     DpiFdoCreateRelatedObjects @ 0x1C0171238 (DpiFdoCreateRelatedObjects.c)
 * Callees:
 *     memmove @ 0x1C0026580 (memmove.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C00F05E8 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C01271F0 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C012746C (DpiAcquireCoreSyncAccessSafe.c)
 */

__int64 __fastcall DpiFdoQueryAdapterInfoIntegratedDisplay(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v5; // r13
  __int64 v7; // rax
  __int16 v9; // di
  unsigned __int16 v10; // di
  __int64 v11; // rax
  _DWORD *PoolWithTag; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r14
  _DWORD *v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  UINT v26; // eax
  __int64 v27; // rax
  __int64 v28; // rcx
  struct _DXGKARG_QUERYADAPTERINFO v29; // [rsp+20h] [rbp-30h] BYREF
  int v30; // [rsp+80h] [rbp+30h] BYREF

  v3 = *(unsigned __int16 *)(a2 + 92);
  v5 = *(_QWORD *)(a1 + 64);
  v30 = *(_DWORD *)(a2 + 24);
  memset(&v29, 0, sizeof(v29));
  if ( (unsigned int)v3 <= 0x7C )
  {
    v7 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v7 + 24) = *(unsigned __int16 *)(a2 + 92);
LABEL_3:
    WdLogEvent5_WdError(v7);
    return 3221225485LL;
  }
  *(_WORD *)(a2 + 94) = v3 - 124;
  if ( (unsigned __int16)(v3 - 124) < 0x80u )
  {
    v7 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v7 + 24) = v3;
    goto LABEL_3;
  }
  v9 = (v3 - 124) & 0xFF80;
  *(_WORD *)(a2 + 94) = v9;
  v10 = v9 + 124;
  if ( v10 != (_WORD)v3 )
  {
    v11 = WdLogNewEntry5_WdWarning(a1, a2, a3);
    *(_QWORD *)(v11 + 24) = *(unsigned __int16 *)(a2 + 92) - (unsigned __int64)v10;
    WdLogEvent5_WdWarning(v11);
    LOWORD(v3) = *(_WORD *)(a2 + 92);
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned __int16)v3, 0x74727044u);
  v17 = 0LL;
  v18 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, *(unsigned __int16 *)(a2 + 92));
    v21 = DpiAcquireCoreSyncAccessSafe(a1, 0);
    v19 = v21;
    if ( v21 < 0 )
      goto LABEL_11;
    *(_QWORD *)&v29.Type = 0LL;
    v29.pInputData = &v30;
    v26 = *(unsigned __int16 *)(a2 + 92);
    *(&v29.InputDataSize + 1) = 0;
    v29.Type = DXGKQAITYPE_INTEGRATED_DISPLAY_DESCRIPTOR;
    *(_OWORD *)&v29.OutputDataSize = 0LL;
    v29.OutputDataSize = v26;
    v29.InputDataSize = 4;
    v29.pOutputData = v18;
    v19 = (int)DXGADAPTER::DdiQueryAdapterInfo(*(DXGADAPTER **)(v5 + 3896), &v29, v24);
    DpiReleaseCoreSyncAccessSafe(a1, 0);
    if ( (int)v19 < 0 )
    {
LABEL_11:
      v25 = WdLogNewEntry5_WdError(v23, v22);
      *(_QWORD *)(v25 + 24) = v19;
      WdLogEvent5_WdError(v25);
    }
    else
    {
      **(_DWORD **)(a2 + 104) = *v18;
      v27 = *(_QWORD *)(a2 + 104);
      *(_OWORD *)(v27 + 8) = *(_OWORD *)(v18 + 2);
      *(_OWORD *)(v27 + 24) = *(_OWORD *)(v18 + 6);
      *(_OWORD *)(v27 + 40) = *(_OWORD *)(v18 + 10);
      *(_QWORD *)(v27 + 56) = *((_QWORD *)v18 + 7);
      *(_DWORD *)(*(_QWORD *)(a2 + 104) + 64LL) = v18[16];
      v28 = *(_QWORD *)(a2 + 104);
      *(_OWORD *)(v28 + 68) = *(_OWORD *)(v18 + 17);
      *(_OWORD *)(v28 + 84) = *(_OWORD *)(v18 + 21);
      *(_OWORD *)(v28 + 100) = *(_OWORD *)(v18 + 25);
      *(_DWORD *)(v28 + 116) = v18[29];
      do
      {
        *(_BYTE *)(*(_QWORD *)(a2 + 104) + v17 + 120) = *((_BYTE *)v18 + v17 + 120);
        ++v17;
      }
      while ( v17 < 4 );
      memmove(*(void **)(a2 + 112), v18 + 31, *(unsigned __int16 *)(a2 + 94));
    }
    ExFreePoolWithTag(v18, 0);
  }
  else
  {
    LODWORD(v19) = -1073741670;
    v20 = WdLogNewEntry5_WdLowResource(v14, v13, v15, v16);
    *(_QWORD *)(v20 + 24) = -1073741670LL;
    WdLogEvent5_WdLowResource(v20);
  }
  return (unsigned int)v19;
}
