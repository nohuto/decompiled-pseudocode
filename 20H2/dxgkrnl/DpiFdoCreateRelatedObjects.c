/*
 * XREFs of DpiFdoCreateRelatedObjects @ 0x1C0182350
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C01815E4 (DpiFdoStartAdapter.c)
 * Callees:
 *     memset @ 0x1C0027400 (memset.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C011E01C (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C011E380 (DxgkAcquireAdapterCoreSync.c)
 *     DpiFdoInvalidateChildRelations @ 0x1C01738B0 (DpiFdoInvalidateChildRelations.c)
 *     DpiGdoCreateGdiObjects @ 0x1C0182E64 (DpiGdoCreateGdiObjects.c)
 *     ?DmmInitializeAdapter@@YAJQEAX@Z @ 0x1C01844E8 (-DmmInitializeAdapter@@YAJQEAX@Z.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay @ 0x1C02CA180 (DpiFdoQueryAdapterInfoIntegratedDisplay.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay2 @ 0x1C02CA3F0 (DpiFdoQueryAdapterInfoIntegratedDisplay2.c)
 *     DpiFdoValidateIntegratedDisplayDescriptor @ 0x1C02CB738 (DpiFdoValidateIntegratedDisplayDescriptor.c)
 *     DpiPdoRemovePdoObjects @ 0x1C02D85D8 (DpiPdoRemovePdoObjects.c)
 *     DpiGdoDestroyGdiObjects @ 0x1C02D8AC0 (DpiGdoDestroyGdiObjects.c)
 */

__int64 __fastcall DpiFdoCreateRelatedObjects(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // r14
  unsigned int v7; // r15d
  __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v15; // r14d
  _QWORD *v16; // r15
  _QWORD *v17; // rdi
  __int64 v18; // rax
  PVOID PoolWithTag; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  int AdapterInfoIntegratedDisplay; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx

  v4 = *(_QWORD *)(a1 + 64);
  v5 = a4;
  v6 = a3;
  v7 = a2;
  LODWORD(v9) = 0;
  if ( (*(_BYTE *)(v4 + 3905) & 4) == 0 )
  {
LABEL_2:
    LODWORD(v9) = DpiFdoInvalidateChildRelations(a1, 6u, v5);
    if ( (int)v9 < 0 )
      goto LABEL_30;
    if ( (*(_BYTE *)(v4 + 3904) & 1) != 0 )
    {
      DxgkAcquireAdapterCoreSync(*(_QWORD *)(v4 + 3896), 2, v10);
      v9 = (int)DmmInitializeAdapter(*(DXGADAPTER **)(v4 + 3896));
      DxgkReleaseAdapterCoreSync(*(_QWORD *)(v4 + 3896), 2u, v11);
      if ( (int)v9 < 0 )
      {
        v35 = WdLogNewEntry5_WdError(v13, v12);
        *(_QWORD *)(v35 + 24) = v9;
        WdLogEvent5_WdError(v35);
      }
      else
      {
        LODWORD(v9) = DpiGdoCreateGdiObjects(a1, v7, v6);
      }
    }
    if ( (int)v9 < 0 )
    {
LABEL_30:
      DpiGdoDestroyGdiObjects(a1);
      LOBYTE(v36) = 1;
      DpiPdoRemovePdoObjects(a1, v36, v5);
    }
    return (unsigned int)v9;
  }
  v15 = 0;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)(v4 + 3304), 1u);
  v16 = *(_QWORD **)(v4 + 3464);
  if ( v16 == (_QWORD *)(v4 + 3464) )
    goto LABEL_25;
  while ( 1 )
  {
    v17 = v16 - 4;
    v16 = (_QWORD *)*v16;
    v18 = *((unsigned __int16 *)v17 + 46);
    if ( !(_WORD)v18 )
      goto LABEL_18;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v18 + 128, 0x74727044u);
    v17[13] = PoolWithTag;
    if ( !PoolWithTag )
      break;
    memset(PoolWithTag, 0, *((unsigned __int16 *)v17 + 46) + 128LL);
    v24 = v17[13] + 128LL;
    v17[14] = v24;
    v17[15] = v24;
    if ( *(int *)(*(_QWORD *)(v4 + 3896) + 2596LL) < 2400 )
      AdapterInfoIntegratedDisplay = DpiFdoQueryAdapterInfoIntegratedDisplay(a1, v17);
    else
      AdapterInfoIntegratedDisplay = DpiFdoQueryAdapterInfoIntegratedDisplay2(a1, v17);
    v9 = AdapterInfoIntegratedDisplay;
    if ( AdapterInfoIntegratedDisplay < 0 )
    {
      v30 = WdLogNewEntry5_WdError(v27, v26);
      *(_QWORD *)(v30 + 24) = v9;
LABEL_22:
      WdLogEvent5_WdError(v30);
      goto LABEL_24;
    }
    LODWORD(v9) = DpiFdoValidateIntegratedDisplayDescriptor(v4, v17);
    if ( (int)v9 < 0 )
      goto LABEL_24;
    LOBYTE(v29) = *(_BYTE *)(v17[13] + 122LL);
    if ( ((1 << v29) & v15) != 0 )
    {
      LODWORD(v9) = -1073741811;
      v30 = WdLogNewEntry5_WdError(v29, v28);
      *(_QWORD *)(v30 + 24) = *(unsigned __int8 *)(v17[13] + 122LL);
      *(_QWORD *)(v30 + 32) = *((unsigned int *)v17 + 6);
      goto LABEL_22;
    }
    v15 |= 1 << v29;
LABEL_18:
    if ( v16 == (_QWORD *)(v4 + 3464) )
      goto LABEL_24;
  }
  v31 = WdLogNewEntry5_WdLowResource(v21, v20, v22, v23);
  *(_QWORD *)(v31 + 24) = (int)v9;
  WdLogEvent5_WdLowResource(v31);
  LODWORD(v9) = -1073741670;
LABEL_24:
  v5 = a4;
LABEL_25:
  ExReleaseResourceLite((PERESOURCE)(v4 + 3304));
  KeLeaveCriticalRegion();
  if ( ((v15 + 1) & v15) != 0 )
  {
    LODWORD(v9) = -1073741811;
    v34 = WdLogNewEntry5_WdError(v33, v32);
    *(_QWORD *)(v34 + 24) = v15;
    WdLogEvent5_WdError(v34);
  }
  if ( (int)v9 >= 0 )
  {
    v6 = a3;
    v7 = a2;
    goto LABEL_2;
  }
  return (unsigned int)v9;
}
