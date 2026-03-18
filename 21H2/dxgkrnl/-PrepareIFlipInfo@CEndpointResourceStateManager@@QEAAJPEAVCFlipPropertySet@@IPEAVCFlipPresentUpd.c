/*
 * XREFs of ?PrepareIFlipInfo@CEndpointResourceStateManager@@QEAAJPEAVCFlipPropertySet@@IPEAVCFlipPresentUpdate@@PEAPEAUFlipManagerTokenIFlipInfo@@@Z @ 0x1C007FC74
 * Callers:
 *     ?CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_N_KPEAVCFlipPropertySet@@PEAPEAVCFlipPresentUpdate@@PEAPEAUFlipManagerTokenIFlipInfo@@@Z @ 0x1C007D264 (-CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_N_KPEAVCFlipPropertySet@@PEAPEAVCFlipPresent.c)
 * Callees:
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ??_GFlipManagerTokenIFlipInfo@@QEAAPEAXI@Z @ 0x1C0074EF4 (--_GFlipManagerTokenIFlipInfo@@QEAAPEAXI@Z.c)
 *     ??$FindProperty@UPresentParametersInfo@@@CFlipPropertySetBase@@QEAAXPEAPEAUPresentParametersInfo@@@Z @ 0x1C007F3B8 (--$FindProperty@UPresentParametersInfo@@@CFlipPropertySetBase@@QEAAXPEAPEAUPresentParametersInfo.c)
 *     ??$FindProperty@UPresentedContentUpdateHDR10Info@@@CFlipPropertySetBase@@QEAAXPEAPEAUPresentedContentUpdateHDR10Info@@@Z @ 0x1C007F41C (--$FindProperty@UPresentedContentUpdateHDR10Info@@@CFlipPropertySetBase@@QEAAXPEAPEAUPresentedCo.c)
 *     ??$FindProperty@UPresentedContentUpdateHDR10PlusInfo@@@CFlipPropertySetBase@@QEAAXPEAPEAUPresentedContentUpdateHDR10PlusInfo@@@Z @ 0x1C007F480 (--$FindProperty@UPresentedContentUpdateHDR10PlusInfo@@@CFlipPropertySetBase@@QEAAXPEAPEAUPresent.c)
 *     ??$FindProperty@UPresentedContentUpdateInfo@@@CFlipPropertySetBase@@QEAAXPEAPEAUPresentedContentUpdateInfo@@@Z @ 0x1C007F4E4 (--$FindProperty@UPresentedContentUpdateInfo@@@CFlipPropertySetBase@@QEAAXPEAPEAUPresentedContent.c)
 *     ?FindPoolBufferIndex@CEndpointResourceStateManager@@QEAAI_K@Z @ 0x1C007F998 (-FindPoolBufferIndex@CEndpointResourceStateManager@@QEAAI_K@Z.c)
 *     ?FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@@@Z @ 0x1C007F9EC (-FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@.c)
 *     ?IsSimpleUpdatePresent@CEndpointResourceStateManager@@SA_NPEAVCFlipPresentUpdate@@@Z @ 0x1C007FB58 (-IsSimpleUpdatePresent@CEndpointResourceStateManager@@SA_NPEAVCFlipPresentUpdate@@@Z.c)
 */

__int64 __fastcall CEndpointResourceStateManager::PrepareIFlipInfo(
        struct _LIST_ENTRY *this,
        struct CFlipPropertySet *a2,
        int a3,
        struct CFlipPresentUpdate *a4,
        struct FlipManagerTokenIFlipInfo **a5)
{
  unsigned int v5; // edi
  __int64 v8; // r12
  _QWORD *Pool2; // rax
  _QWORD *v10; // rsi
  CEndpointResourceStateManager *v11; // rcx
  struct CFlipResourceState *ResourceState; // rax
  __int64 v13; // r11
  __int64 v14; // rbx
  struct CFlipResourceState *v15; // r15
  __int64 v16; // r9
  __int64 v17; // r14
  _OWORD *v18; // rax
  _OWORD *v19; // r15
  __int64 v21; // r11
  __int64 v22; // rdx
  struct _LIST_ENTRY *v23; // rbx
  struct CFlipResourceState *v24; // rax
  __int64 v25; // rcx
  struct CFlipResourceState *v26; // rcx
  struct _LIST_ENTRY *v27; // r11
  __int64 v28; // [rsp+20h] [rbp-20h] BYREF
  struct CFlipResourceState *v29; // [rsp+28h] [rbp-18h] BYREF
  __int64 v30; // [rsp+30h] [rbp-10h]

  v5 = 0;
  v28 = 0LL;
  v8 = 0LL;
  Pool2 = (_QWORD *)ExAllocatePool2(257LL, 104LL, 1768506182LL, a4);
  v10 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  memset(Pool2, 0, 0x68uLL);
  *(_QWORD *)((char *)v10 + 28) = this[2].Flink;
  v10[5] = this[2].Blink;
  if ( !CEndpointResourceStateManager::IsSimpleUpdatePresent(a4)
    || (ResourceState = CEndpointResourceStateManager::FindResourceState(
                          v11,
                          *(_QWORD *)(*((_QWORD *)a4 + 6) + 8LL),
                          this + 1),
        v14 = *(_QWORD *)(v13 + 24),
        v15 = ResourceState,
        v29 = ResourceState,
        !v14)
    || (CFlipPropertySetBase::FindProperty<PresentedContentUpdateInfo>(v14, &v28), (v17 = v28) == 0) )
  {
LABEL_21:
    *a5 = (struct FlipManagerTokenIFlipInfo *)v10;
    return v5;
  }
  if ( *(_DWORD *)(v28 + 64) == 1 )
  {
    v28 = 0LL;
    CFlipPropertySetBase::FindProperty<PresentedContentUpdateHDR10Info>(v14, &v28);
  }
  else
  {
    if ( *(_DWORD *)(v28 + 64) != 2 )
    {
LABEL_10:
      *(_DWORD *)(v17 + 64) = 0;
      goto LABEL_11;
    }
    v28 = 0LL;
    CFlipPropertySetBase::FindProperty<PresentedContentUpdateHDR10PlusInfo>(v14, &v28);
  }
  v8 = v28;
  if ( !v28 )
    goto LABEL_10;
LABEL_11:
  v30 = *((_QWORD *)v15 + 6);
  if ( !v30 )
    goto LABEL_21;
  v28 = *(_QWORD *)(*((_QWORD *)v15 + 3) + 48LL);
  if ( !v28 )
    goto LABEL_21;
  v18 = (_OWORD *)ExAllocatePool2(65LL, 48LL, 1767981894LL, v16);
  v19 = v18;
  if ( v18 )
  {
    v21 = v28;
    v22 = v30;
    *v18 = 0LL;
    v18[1] = 0LL;
    v18[2] = 0LL;
    *(_QWORD *)v18 = 48LL;
    v23 = (struct _LIST_ENTRY *)*((_QWORD *)v29 + 7);
    v10[5] = v23;
    *((_BYTE *)v10 + 84) = 1;
    *(_QWORD *)((char *)v10 + 28) = *(_QWORD *)(v21 + 24);
    *((_DWORD *)v10 + 9) = CEndpointResourceStateManager::FindPoolBufferIndex(
                             (CEndpointResourceStateManager **)this,
                             *(_QWORD *)(v22 + 40));
    v24 = v29;
    *v10 = v17;
    v10[2] = v8;
    v25 = *(_QWORD *)(*((_QWORD *)v24 + 3) + 40LL);
    *((_DWORD *)v19 + 2) = a3;
    v10[11] = v25;
    v26 = 0LL;
    v10[12] = v19;
    this[2].Flink = v27;
    this[2].Blink = v23;
    v29 = 0LL;
    if ( a2 )
    {
      CFlipPropertySetBase::FindProperty<PresentParametersInfo>((__int64)a2, &v29);
      v26 = v29;
      if ( v29 )
        *((_DWORD *)v19 + 3) = *((_DWORD *)v29 + 2);
    }
    v10[1] = v26;
    goto LABEL_21;
  }
  FlipManagerTokenIFlipInfo::`scalar deleting destructor'(v10);
  return (unsigned int)-1073741801;
}
