/*
 * XREFs of DpiFdoCreateRelatedObjects @ 0x1C01FBF08
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C01FB06C (DpiFdoStartAdapter.c)
 * Callees:
 *     memset @ 0x1C002CFC0 (memset.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C01B4124 (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C01B45E8 (DxgkAcquireAdapterCoreSync.c)
 *     DpiFdoInvalidateChildRelations @ 0x1C01F3230 (DpiFdoInvalidateChildRelations.c)
 *     DpiGdoCreateGdiObjects @ 0x1C0203500 (DpiGdoCreateGdiObjects.c)
 *     ?DmmInitializeAdapter@@YAJQEAX@Z @ 0x1C0216960 (-DmmInitializeAdapter@@YAJQEAX@Z.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay @ 0x1C038AA48 (DpiFdoQueryAdapterInfoIntegratedDisplay.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay2 @ 0x1C038AC68 (DpiFdoQueryAdapterInfoIntegratedDisplay2.c)
 *     DpiFdoValidateIntegratedDisplayDescriptor @ 0x1C038BC94 (DpiFdoValidateIntegratedDisplayDescriptor.c)
 *     DpiPdoRemovePdoObjects @ 0x1C0397E38 (DpiPdoRemovePdoObjects.c)
 *     DpiGdoDestroyGdiObjects @ 0x1C039834C (DpiGdoDestroyGdiObjects.c)
 */

__int64 __fastcall DpiFdoCreateRelatedObjects(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // r14
  unsigned int v7; // r15d
  int v9; // ebx
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r8
  unsigned int v14; // r14d
  unsigned int v15; // r12d
  _QWORD *v16; // r15
  _QWORD *v17; // rsi
  __int64 v18; // rax
  PVOID PoolWithTag; // rax
  __int64 v20; // rax
  int AdapterInfoIntegratedDisplay; // eax
  int v22; // eax
  __int64 v23; // rdx

  v4 = *(_QWORD *)(a1 + 64);
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v9 = 0;
  if ( (*(_BYTE *)(v4 + 3905) & 4) == 0 )
  {
LABEL_2:
    LODWORD(v10) = DpiFdoInvalidateChildRelations(a1, 6u, v5);
    if ( (int)v10 >= 0 )
    {
      if ( (*(_BYTE *)(v4 + 3904) & 1) == 0 )
        return (unsigned int)v10;
      DxgkAcquireAdapterCoreSync(*(_QWORD *)(v4 + 3896), 2, v11);
      v10 = (int)DmmInitializeAdapter(*(DXGADAPTER **)(v4 + 3896));
      DxgkReleaseAdapterCoreSync(*(_QWORD *)(v4 + 3896), 2u, v12);
      if ( (int)v10 < 0 )
      {
        WdLogSingleEntry1(2LL, v10);
      }
      else
      {
        LODWORD(v10) = DpiGdoCreateGdiObjects(a1, v7, v6);
        if ( (int)v10 >= 0 )
          return (unsigned int)v10;
      }
    }
    DpiGdoDestroyGdiObjects(a1);
    LOBYTE(v23) = 1;
    DpiPdoRemovePdoObjects(a1, v23, v5);
    return (unsigned int)v10;
  }
  v14 = 0;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)(v4 + 3304), 1u);
  v15 = -1073741811;
  v16 = *(_QWORD **)(v4 + 3464);
  if ( v16 == (_QWORD *)(v4 + 3464) )
    goto LABEL_11;
  while ( 1 )
  {
    v17 = v16 - 4;
    v16 = (_QWORD *)*v16;
    v18 = *((unsigned __int16 *)v17 + 46);
    if ( !(_WORD)v18 )
      goto LABEL_9;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v18 + 128, 0x74727044u);
    v17[13] = PoolWithTag;
    if ( !PoolWithTag )
      break;
    memset(PoolWithTag, 0, *((unsigned __int16 *)v17 + 46) + 128LL);
    v20 = v17[13] + 128LL;
    v17[14] = v20;
    v17[15] = v20;
    if ( *(int *)(*(_QWORD *)(v4 + 3896) + 2692LL) < 2400 )
      AdapterInfoIntegratedDisplay = DpiFdoQueryAdapterInfoIntegratedDisplay(a1, v17);
    else
      AdapterInfoIntegratedDisplay = DpiFdoQueryAdapterInfoIntegratedDisplay2(a1, v17);
    v9 = AdapterInfoIntegratedDisplay;
    if ( AdapterInfoIntegratedDisplay < 0 )
    {
      WdLogSingleEntry1(2LL, AdapterInfoIntegratedDisplay);
      goto LABEL_10;
    }
    v9 = DpiFdoValidateIntegratedDisplayDescriptor(v4, v17);
    if ( v9 < 0 )
      goto LABEL_10;
    v22 = 1 << *(_BYTE *)(v17[13] + 122LL);
    if ( (v22 & v14) != 0 )
    {
      v9 = -1073741811;
      WdLogSingleEntry2(2LL, *(unsigned __int8 *)(v17[13] + 122LL), *((unsigned int *)v17 + 6));
      goto LABEL_10;
    }
    v14 |= v22;
LABEL_9:
    if ( v16 == (_QWORD *)(v4 + 3464) )
      goto LABEL_10;
  }
  WdLogSingleEntry1(6LL, v9);
  v9 = -1073741670;
LABEL_10:
  v5 = a4;
LABEL_11:
  ExReleaseResourceLite((PERESOURCE)(v4 + 3304));
  KeLeaveCriticalRegion();
  if ( ((v14 + 1) & v14) != 0 )
  {
    WdLogSingleEntry1(2LL, v14);
  }
  else
  {
    v15 = v9;
    if ( v9 >= 0 )
    {
      v6 = a3;
      v7 = a2;
      goto LABEL_2;
    }
  }
  return v15;
}
