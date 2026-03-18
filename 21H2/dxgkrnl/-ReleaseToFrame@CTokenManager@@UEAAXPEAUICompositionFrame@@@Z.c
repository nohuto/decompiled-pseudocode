/*
 * XREFs of ?ReleaseToFrame@CTokenManager@@UEAAXPEAUICompositionFrame@@@Z @ 0x1C00154B0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetSyncRefreshCount@CompositionSurfaceObject@@QEAAXI@Z @ 0x1C0002538 (-SetSyncRefreshCount@CompositionSurfaceObject@@QEAAXI@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00069FC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0007EB4 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?RemoveTokenQueueTableEntry@CTokenManager@@IEAAXPEAUTokenQueueTableEntry@1@@Z @ 0x1C001594C (-RemoveTokenQueueTableEntry@CTokenManager@@IEAAXPEAUTokenQueueTableEntry@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?ConsumerDwmApplyUpdates@CFlipManager@@QEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@@Z @ 0x1C007C908 (-ConsumerDwmApplyUpdates@CFlipManager@@QEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@@.c)
 */

void __fastcall CTokenManager::ReleaseToFrame(CTokenManager *this, struct ICompositionFrame *a2)
{
  char v3; // r12
  __int64 v4; // rcx
  ULONG v6; // ebx
  struct CTokenManager::TokenQueueTableEntry *v7; // rsi
  char *v8; // rbx
  CTokenManager **v9; // rsi
  CTokenManager *v10; // rax
  char *v11; // rax
  CTokenManager *v12; // rax
  CTokenManager *v13; // rcx
  CTokenManager *v14; // rsi
  CTokenManager *v15; // r15
  char v16; // r12
  __int64 v17; // rbx
  _QWORD *v18; // rdx
  _QWORD *i; // rcx
  __int64 v20; // rax
  char *v21; // rcx
  __int64 v22; // rsi
  char v23; // cl
  __int64 v24; // r15
  _QWORD *v25; // rax
  bool v26; // zf
  CompositionSurfaceObject **v27; // rcx
  struct ICompositionFrame **v28; // rcx
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // rax
  struct ICompositionFrame **v32; // rcx
  CTokenManager *v33; // rax
  CTokenManager ***v34; // rax
  char *v35; // rcx
  char **v36; // rcx
  char *v37; // rcx
  void (__fastcall ***v38)(_QWORD, __int64); // r15
  struct ICompositionFrame *v39; // rdx
  __int64 v40; // r8
  struct ICompositionFrame **v41; // r9
  CTokenManager *v42; // r13
  __int64 v43; // rbx
  char *v44; // [rsp+20h] [rbp-38h] BYREF
  CTokenManager **v45; // [rsp+28h] [rbp-30h]
  __int64 v46; // [rsp+80h] [rbp+28h] BYREF
  char v47; // [rsp+88h] [rbp+30h] BYREF
  struct CTokenManager::TokenQueueTableEntry *ElementGenericTable; // [rsp+90h] [rbp+38h]
  void (__fastcall ***v49)(_QWORD, __int64); // [rsp+98h] [rbp+40h]

  v3 = 0;
  v4 = *((_QWORD *)this + 24);
  if ( v4 && (*(_QWORD *)(v4 + 2088) != v4 + 16 || *(_DWORD *)(v4 + 32)) )
  {
    *((_QWORD *)a2 + 13) = v4;
    *(_QWORD *)(v4 + 2088) = v4 + 16;
    *(_BYTE *)(v4 + 2108) = 1;
    *((_BYTE *)a2 + 112) = 1;
    *((_QWORD *)this + 24) = 0LL;
  }
  if ( !*((_DWORD *)this + 22) )
  {
    v3 = 1;
    goto LABEL_7;
  }
  v6 = RtlNumberGenericTableElements((PRTL_GENERIC_TABLE)((char *)this + 200)) - 1;
  ElementGenericTable = (struct CTokenManager::TokenQueueTableEntry *)RtlGetElementGenericTable(
                                                                        (PRTL_GENERIC_TABLE)((char *)this + 200),
                                                                        v6);
  v7 = ElementGenericTable;
  if ( ElementGenericTable )
  {
LABEL_23:
    v22 = *((_QWORD *)v7 + 1);
    v23 = 0;
    LOBYTE(v46) = 0;
    if ( *(_QWORD *)v22 == v22 )
    {
      ++*(_DWORD *)(v22 + 24);
      goto LABEL_41;
    }
    v24 = *(_QWORD *)(v22 + 8);
    if ( *(_QWORD *)v24 != v22 )
      goto LABEL_66;
    v25 = *(_QWORD **)(v24 + 8);
    if ( *v25 != v24 )
      goto LABEL_66;
    *(_QWORD *)(v22 + 8) = v25;
    *v25 = v22;
    if ( v24 == v22 )
      goto LABEL_41;
    while ( 1 )
    {
      v26 = *(_QWORD *)(v22 + 16) == 0LL;
      v27 = (CompositionSurfaceObject **)(v24 - 8);
      v49 = (void (__fastcall ***)(_QWORD, __int64))(v24 - 8);
      v47 = 0;
      if ( !v26 )
      {
        CompositionSurfaceObject::SetSyncRefreshCount(v27[4], 0);
        v27 = (CompositionSurfaceObject **)(v24 - 8);
        if ( *(_QWORD *)(v22 + 16) == v24 - 8 )
          *(_QWORD *)(v22 + 16) = 0LL;
      }
      if ( (*((int (__fastcall **)(CompositionSurfaceObject **, struct ICompositionFrame *, char *))*v27 + 4))(
             v27,
             a2,
             &v47) < 0 )
      {
        v38 = v49;
        ((void (__fastcall *)(void (__fastcall ***)(_QWORD, __int64)))(*v49)[7])(v49);
        (**v38)(v38, 1LL);
      }
      else
      {
        if ( !v47 )
        {
          if ( *(_DWORD *)(v24 + 16) == 2 )
            LOBYTE(v46) = 1;
          v30 = *(_QWORD **)(v22 + 8);
          if ( *v30 != v22 )
            goto LABEL_66;
          *(_QWORD *)v24 = v22;
          *(_QWORD *)(v24 + 8) = v30;
          *v30 = v24;
          *(_QWORD *)(v22 + 8) = v24;
LABEL_40:
          v23 = v46;
LABEL_41:
          v3 |= v23;
          if ( *(_DWORD *)(*((_QWORD *)ElementGenericTable + 1) + 24LL) >= 0x20u )
            CTokenManager::RemoveTokenQueueTableEntry(this, ElementGenericTable);
          ElementGenericTable = (struct CTokenManager::TokenQueueTableEntry *)RtlGetElementGenericTable(
                                                                                (PRTL_GENERIC_TABLE)((char *)this + 200),
                                                                                --v6);
          v7 = ElementGenericTable;
          if ( !ElementGenericTable )
            break;
          goto LABEL_23;
        }
        v28 = (struct ICompositionFrame **)*((_QWORD *)a2 + 19);
        if ( *v28 != (struct ICompositionFrame *)((char *)a2 + 144) )
          goto LABEL_66;
        *(_QWORD *)v24 = (char *)a2 + 144;
        *(_QWORD *)(v24 + 8) = v28;
        *v28 = (struct ICompositionFrame *)v24;
        *((_QWORD *)a2 + 19) = v24;
      }
      v24 = *(_QWORD *)(v22 + 8);
      if ( *(_QWORD *)v24 != v22 )
        goto LABEL_66;
      v29 = *(_QWORD **)(v24 + 8);
      if ( *v29 != v24 )
        goto LABEL_66;
      *(_QWORD *)(v22 + 8) = v29;
      *v29 = v22;
      if ( v24 == v22 )
        goto LABEL_40;
    }
  }
LABEL_7:
  v8 = (char *)this + 272;
  v9 = (CTokenManager **)*((_QWORD *)this + 34);
  v45 = (CTokenManager **)&v44;
  v44 = (char *)&v44;
  if ( v9[1] != (CTokenManager *)((char *)this + 272) )
    goto LABEL_66;
  v10 = *v9;
  if ( *((CTokenManager ***)*v9 + 1) != v9 )
    goto LABEL_66;
  *(_QWORD *)v8 = v10;
  *((_QWORD *)v10 + 1) = v8;
  if ( v9 != (CTokenManager **)v8 )
  {
    while ( 1 )
    {
      v31 = (__int64)*(v9 - 1);
      LOBYTE(v46) = 0;
      if ( (*(int (__fastcall **)(CTokenManager **, struct ICompositionFrame *, __int64 *))(v31 + 32))(v9 - 1, a2, &v46) < 0 )
      {
        (*((void (__fastcall **)(CTokenManager **))*(v9 - 1) + 7))(v9 - 1);
        ObfDereferenceObject(v9 - 6);
      }
      else if ( (_BYTE)v46 )
      {
        v32 = (struct ICompositionFrame **)*((_QWORD *)a2 + 21);
        if ( *v32 != (struct ICompositionFrame *)((char *)a2 + 160) )
          break;
        *v9 = (struct ICompositionFrame *)((char *)a2 + 160);
        v9[1] = (CTokenManager *)v32;
        *v32 = (struct ICompositionFrame *)v9;
        *((_QWORD *)a2 + 21) = v9;
      }
      else
      {
        v34 = (CTokenManager ***)v45;
        if ( *v45 != (CTokenManager *)&v44 )
          break;
        v9[1] = (CTokenManager *)v45;
        *v9 = (CTokenManager *)&v44;
        *v34 = v9;
        v45 = v9;
      }
      v9 = *(CTokenManager ***)v8;
      if ( *(char **)(*(_QWORD *)v8 + 8LL) != v8 )
        break;
      v33 = *v9;
      if ( *((CTokenManager ***)*v9 + 1) != v9 )
        break;
      *(_QWORD *)v8 = v33;
      *((_QWORD *)v33 + 1) = v8;
      if ( v9 == (CTokenManager **)v8 )
        goto LABEL_10;
    }
LABEL_66:
    __fastfail(3u);
  }
LABEL_10:
  v11 = v44;
  if ( v44 != (char *)&v44 )
  {
    v35 = *(char **)v44;
    if ( *((char ***)v44 + 1) != &v44 || *((char **)v35 + 1) != v44 )
      goto LABEL_66;
    v44 = *(char **)v44;
    for ( *((_QWORD *)v35 + 1) = &v44; v11 != (char *)&v44; *((_QWORD *)v37 + 1) = &v44 )
    {
      v36 = (char **)*((_QWORD *)this + 35);
      if ( *v36 != v8 )
        goto LABEL_66;
      *((_QWORD *)v11 + 1) = v36;
      *(_QWORD *)v11 = v8;
      *v36 = v11;
      *((_QWORD *)this + 35) = v11;
      v11 = v44;
      if ( *((char ***)v44 + 1) != &v44 )
        goto LABEL_66;
      v37 = *(char **)v44;
      if ( *(char **)(*(_QWORD *)v44 + 8LL) != v44 )
        goto LABEL_66;
      v44 = *(char **)v44;
    }
  }
  v12 = (CTokenManager *)((char *)this + 304);
  v13 = (CTokenManager *)*((_QWORD *)this + 38);
  if ( v13 != (CTokenManager *)((char *)this + 304) )
  {
    do
    {
      v39 = *(struct ICompositionFrame **)v12;
      v13 = *(CTokenManager **)v13;
      if ( *(CTokenManager **)(*(_QWORD *)v12 + 8LL) != v12 )
        goto LABEL_66;
      v40 = *(_QWORD *)v39;
      if ( *(struct ICompositionFrame **)(*(_QWORD *)v39 + 8LL) != v39 )
        goto LABEL_66;
      *(_QWORD *)v12 = v40;
      *(_QWORD *)(v40 + 8) = v12;
      v41 = (struct ICompositionFrame **)*((_QWORD *)a2 + 19);
      if ( *v41 != (struct ICompositionFrame *)((char *)a2 + 144) )
        goto LABEL_66;
      *(_QWORD *)v39 = (char *)a2 + 144;
      *((_QWORD *)v39 + 1) = v41;
      *v41 = v39;
      *((_QWORD *)a2 + 19) = v39;
    }
    while ( v13 != v12 );
  }
  v14 = (CTokenManager *)((char *)this + 288);
  v15 = (CTokenManager *)*((_QWORD *)this + 36);
  if ( v15 != (CTokenManager *)((char *)this + 288) )
  {
    do
    {
      v42 = v15;
      v15 = *(CTokenManager **)v15;
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx((char *)v42 + 24, 0LL);
      v46 = *((_QWORD *)v42 + 7);
      CPushLock::ReleaseLock((CTokenManager *)((char *)v42 + 24));
      v43 = v46;
      if ( (int)CPushLock::AcquireLockExclusive((CPushLock *)(v46 + 40)) >= 0 )
      {
        CFlipManager::ConsumerDwmApplyUpdates((CFlipManager *)(v43 + 32), (char *)v42 - 48, a2);
        CPushLock::ReleaseLock((CPushLock *)(v43 + 40));
      }
    }
    while ( v15 != v14 );
  }
  v16 = (*(_QWORD *)v14 != (_QWORD)v14) | v3;
  v17 = (*(__int64 (__fastcall **)(struct ICompositionFrame *))(*(_QWORD *)a2 + 72LL))(a2);
  ExAcquirePushLockExclusiveEx((char *)this + 152, 0LL);
  *((_BYTE *)this + 160) = 1;
  v18 = (_QWORD *)((char *)this + 136);
  *((_QWORD *)this + 16) = v17;
  if ( (_QWORD *)*v18 != v18 )
  {
    for ( i = (_QWORD *)*((_QWORD *)this + 18); i != v18; i = (_QWORD *)i[1] )
    {
      if ( i )
        v20 = (__int64)(i + 10);
      else
        v20 = 88LL;
      *(_QWORD *)v20 = v17;
    }
  }
  v21 = (char *)this + 152;
  if ( *((_BYTE *)this + 160) )
    ExReleasePushLockExclusiveEx(v21, 0LL);
  else
    ExReleasePushLockSharedEx(v21, 0LL);
  if ( !v16 )
    ZwClearEvent(*((HANDLE *)this + 8));
}
