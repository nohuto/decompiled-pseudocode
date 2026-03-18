/*
 * XREFs of ?PrepareUpdateTokensForDwm@CEndpointResourceStateManager@@QEAAJPEAUFlipManagerObject@@PEAVCFlipPropertySet@@AEAU_LIST_ENTRY@@@Z @ 0x1C006B1F8
 * Callers:
 *     ?ConsumerDwmApplyUpdates@CFlipManager@@QEAAJ_K0AEBUtagCompositionRate@@AEAU_LIST_ENTRY@@PEAW4FlipPresentProcessResult@@@Z @ 0x1C0068F1C (-ConsumerDwmApplyUpdates@CFlipManager@@QEAAJ_K0AEBUtagCompositionRate@@AEAU_LIST_ENTRY@@PEAW4Fli.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ??$FindProperty@UPresentedContentUpdateFlags@@@CFlipPropertySetBase@@QEAAXPEAPEAUPresentedContentUpdateFlags@@@Z @ 0x1C0069F88 (--$FindProperty@UPresentedContentUpdateFlags@@@CFlipPropertySetBase@@QEAAXPEAPEAUPresentedConten.c)
 *     ?PrepareCSMBufferInfo@CEndpointResourceStateManager@@QEAAX_NPEAUFlipManagerObject@@_KPEAUCSM_BUFFER_INFO@@@Z @ 0x1C006A8D8 (-PrepareCSMBufferInfo@CEndpointResourceStateManager@@QEAAX_NPEAUFlipManagerObject@@_KPEAUCSM_BUF.c)
 *     ?RebindCompositionSurfaceBuffer@CContentResource@@QEAAJPEBUCSM_BUFFER_INFO@@@Z @ 0x1C006C248 (-RebindCompositionSurfaceBuffer@CContentResource@@QEAAJPEBUCSM_BUFFER_INFO@@@Z.c)
 *     ?CreateUpdateTokens@CContentResourceState@@QEAAJPEAVCEndpointResourceStateManager@@PEAVCFlipPropertySet@@AEAU_LIST_ENTRY@@@Z @ 0x1C006C814 (-CreateUpdateTokens@CContentResourceState@@QEAAJPEAVCEndpointResourceStateManager@@PEAVCFlipProp.c)
 */

__int64 __fastcall CEndpointResourceStateManager::PrepareUpdateTokensForDwm(
        CEndpointResourceStateManager *this,
        struct FlipManagerObject *a2,
        struct CFlipPropertySet *a3,
        struct _LIST_ENTRY *a4)
{
  int v5; // ebx
  CEndpointResourceStateManager *v7; // r8
  __int64 v8; // rcx
  char v9; // al
  char *v10; // rax
  char *v11; // r12
  __int64 v12; // rdi
  bool v13; // si
  __int64 v14; // rcx
  unsigned __int8 v15; // bp
  unsigned __int8 v16; // r15
  char v17; // al
  __int64 v18; // rax
  char v19; // r11
  __int64 v20; // rax
  char v21; // si
  unsigned int v22; // r10d
  unsigned int v23; // r9d
  int *v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // rax
  int v28; // eax
  char v29; // al
  CContentResource *v30; // rbx
  const struct CSM_BUFFER_INFO *v31; // rdx
  CContentResource *v32; // rcx
  char v33; // al
  int UpdateTokens; // eax
  struct _LIST_ENTRY *v36; // rcx
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *Flink; // rax
  char v39; // [rsp+30h] [rbp-488h]
  __int64 v40; // [rsp+38h] [rbp-480h] BYREF
  CContentResource *v41; // [rsp+40h] [rbp-478h]
  struct FlipManagerObject *v42; // [rsp+48h] [rbp-470h]
  struct CFlipPropertySet *v43; // [rsp+50h] [rbp-468h]
  _BYTE v44[1040]; // [rsp+60h] [rbp-458h] BYREF

  v43 = a3;
  v42 = a2;
  v5 = 0;
  memset(v44, 0, sizeof(v44));
  v7 = *(CEndpointResourceStateManager **)this;
  v39 = 0;
  while ( v7 != this )
  {
    v8 = (__int64)v7 + 24;
    if ( !v7 )
      v8 = 32LL;
    v9 = *(_BYTE *)v8;
    if ( (*(_BYTE *)v8 & 1) != 0 )
    {
      v9 |= 4u;
      v39 = 1;
      *(_BYTE *)v8 = v9;
    }
    if ( (v9 & 2) != 0 )
    {
      v39 = 1;
      *(_BYTE *)v8 = v9 | 8;
    }
    v7 = *(CEndpointResourceStateManager **)v7;
  }
  v10 = (char *)this + 16;
  v11 = (char *)*((_QWORD *)this + 2);
  while ( v11 != v10 )
  {
    v40 = 0LL;
    v13 = 0;
    v14 = *(_QWORD *)(((unsigned __int64)(v11 - 8) & -(__int64)(v11 != 0LL)) + 0x28);
    v41 = *(CContentResource **)(((unsigned __int64)(v11 - 8) & -(__int64)(v11 != 0LL)) + 0x18);
    v15 = *((_BYTE *)v41 + 64);
    v16 = v15;
    if ( v14 )
    {
      CFlipPropertySetBase::FindProperty<PresentedContentUpdateFlags>(v14, &v40);
      if ( v40 )
      {
        v17 = *(_BYTE *)(v40 + 1);
        if ( (v17 & 1) != 0 )
        {
          v16 = (v17 & 2) != 0;
          v13 = v16 != v15;
        }
      }
    }
    v18 = *(_QWORD *)(((unsigned __int64)(v11 - 8) & -(__int64)(v11 != 0LL)) + 0x30);
    v19 = v13;
    if ( v39 )
      v19 = 1;
    if ( !v18 )
      goto LABEL_40;
    v20 = *(_QWORD *)(v18 + 32);
    v21 = 0;
    if ( !v20 )
      goto LABEL_37;
    v22 = *(_DWORD *)(v20 + 12);
    v23 = 0;
    v24 = *(int **)(v20 + 24);
    if ( !v22 )
      goto LABEL_37;
    v25 = *(_QWORD *)(v20 + 16);
    while ( 1 )
    {
      v26 = 32LL * v23;
      v27 = *(_QWORD *)(v26 + v25) - *(_QWORD *)&GUID_2d65776f_bd54_4cd7_9bd2_2232e4fcd974.Data1;
      if ( !v27 )
        v27 = *(_QWORD *)(v26 + v25 + 8) - *(_QWORD *)GUID_2d65776f_bd54_4cd7_9bd2_2232e4fcd974.Data4;
      if ( !v27 && *(_DWORD *)(v26 + v25 + 16) == 4 )
        break;
      ++v23;
      v24 = (int *)((char *)v24 + *(unsigned int *)(v26 + v25 + 16));
      if ( v23 >= v22 )
        goto LABEL_37;
    }
    if ( !v24 )
      goto LABEL_37;
    v28 = *v24;
    if ( *v24 == 10 || v28 == 28 || v28 == 87 )
      goto LABEL_37;
    if ( v28 == 103 || v28 > 105 && v28 <= 107 )
    {
      v21 = 1;
LABEL_37:
      if ( !v21 || v16 )
      {
LABEL_40:
        v29 = 0;
      }
      else
      {
        v29 = 1;
        v19 = 1;
      }
      if ( v19 )
      {
        if ( v29 )
        {
          v32 = v41;
          v31 = 0LL;
        }
        else
        {
          v30 = v41;
          CEndpointResourceStateManager::PrepareCSMBufferInfo(
            (CEndpointResourceStateManager **)this,
            v16,
            v42,
            *((_QWORD *)v41 + 5),
            (struct CSM_BUFFER_INFO *)v44);
          v31 = (const struct CSM_BUFFER_INFO *)v44;
          v32 = v30;
        }
        v5 = CContentResource::RebindCompositionSurfaceBuffer(v32, v31);
      }
      if ( v5 >= 0 )
      {
        v33 = *(_BYTE *)(((unsigned __int64)(v11 - 8) & -(__int64)(v11 != 0LL)) + 0x20);
        if ( (v33 & 1) != 0 )
        {
          v33 |= 4u;
          *(_BYTE *)(((unsigned __int64)(v11 - 8) & -(__int64)(v11 != 0LL)) + 0x20) = v33;
        }
        if ( (v33 & 2) != 0 )
          *(_BYTE *)(((unsigned __int64)(v11 - 8) & -(__int64)(v11 != 0LL)) + 0x20) = v33 | 8;
        if ( (*(_BYTE *)(((unsigned __int64)(v11 - 8) & -(__int64)(v11 != 0LL)) + 0x38) & 1) != 0 )
        {
          UpdateTokens = CContentResourceState::CreateUpdateTokens(
                           (CContentResourceState *)((unsigned __int64)(v11 - 8) & -(__int64)(v11 != 0LL)),
                           this,
                           v43,
                           a4);
          v12 = (unsigned __int64)(v11 - 8) & -(__int64)(v11 != 0LL);
          *(_BYTE *)(v12 + 56) |= 2u;
          v5 = UpdateTokens;
        }
      }
      goto LABEL_53;
    }
    v5 = -1073741811;
LABEL_53:
    v11 = *(char **)v11;
    v10 = (char *)this + 16;
    if ( v5 < 0 )
      break;
  }
  if ( v5 < 0 )
  {
    while ( 1 )
    {
      Flink = a4->Flink;
      if ( a4->Flink == a4 )
        break;
      v36 = Flink->Flink;
      if ( Flink->Flink->Blink != Flink || (Blink = Flink->Blink, Blink->Flink != Flink) )
        __fastfail(3u);
      Blink->Flink = v36;
      v36->Blink = Blink;
      if ( Flink != (struct _LIST_ENTRY *)8 )
        ((void (__fastcall *)(struct _LIST_ENTRY **, __int64))Flink[-1].Blink->Flink)(&Flink[-1].Blink, 1LL);
    }
  }
  return (unsigned int)v5;
}
