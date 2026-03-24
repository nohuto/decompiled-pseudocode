/*
 * XREFs of ?NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0013A44
 * Callers:
 *     ?DxgkQuerySwapChainBindingStatus@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0013A08 (-DxgkQuerySwapChainBindingStatus@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000EEBC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00EF1F4 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

__int64 __fastcall NotifyPendingCompositionBuffersPresent(__int64 a1, struct _D3DKMT_PRESENTHISTORYTOKEN *a2)
{
  void *FenceValue; // r14
  int v4; // ebx
  NTSTATUS v5; // edi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v15; // rsi
  int v16; // ebx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD **v21; // rbx
  NTSTATUS v22; // eax
  _QWORD **v23; // rsi
  bool v24; // sf
  _QWORD **v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  char v28; // r14
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  struct _KPROCESS *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  struct _KPROCESS *v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rax
  UINT64 CompositionSyncKey; // rbx
  __int64 v44; // rax
  void *Handle; // [rsp+48h] [rbp-19h] BYREF
  PVOID Object; // [rsp+50h] [rbp-11h] BYREF
  _KAPC_STATE ApcState; // [rsp+58h] [rbp-9h] BYREF

  FenceValue = (void *)a2->Token.Flip.FenceValue;
  v4 = a1;
  Handle = 0LL;
  v5 = 0;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v6 + 24) = 2238LL;
    WdLogEvent5_WdAssertion(v6);
  }
  (*(void (**)(void))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38048) + 208LL))();
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8, v7);
    *(_QWORD *)(v9 + 24) = 2238LL;
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = (*(__int64 (**)(void))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38048) + 240LL))();
  if ( !v4 || v10 )
    goto LABEL_15;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v13 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v13 + 24) = 2238LL;
    WdLogEvent5_WdAssertion(v13);
  }
  SessionData = DXGGLOBAL::GetSessionData((DXGGLOBAL *)DXGGLOBAL::m_pGlobal);
  if ( !SessionData )
    goto LABEL_15;
  v15 = *((_QWORD *)SessionData + 2340);
  if ( !v15 )
    goto LABEL_15;
  (**(void (__fastcall ***)(_QWORD))v15)(*((_QWORD *)SessionData + 2340));
  v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 176LL))(v15);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  if ( !v16 )
    goto LABEL_15;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v17 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v17 + 24) = 2238LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( !(*(unsigned int (**)(void))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38048) + 224LL))() )
LABEL_15:
    v5 = -1071775730;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v18 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v18 + 24) = 2238LL;
    WdLogEvent5_WdAssertion(v18);
  }
  (*(void (**)(void))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38048) + 256LL))();
  if ( v5 < 0 )
    goto LABEL_66;
  Object = 0LL;
  v21 = 0LL;
  v22 = ObReferenceObjectByHandle(FenceValue, 2u, g_pDxgkCompositionObjectType, 1, &Object, 0LL);
  v23 = (_QWORD **)Object;
  v5 = v22;
  if ( v22 < 0 )
    goto LABEL_27;
  if ( (***((unsigned __int8 (__fastcall ****)(_QWORD))Object + 2))(*((_QWORD *)Object + 2)) )
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD *))(*v23[2] + 16LL))(v23[2]) == 2 )
      v21 = v23;
    else
      v5 = -1073741788;
  }
  else
  {
    v5 = -1073741816;
  }
  v24 = v5 < 0;
  if ( v5 < 0 )
  {
    ObfDereferenceObject(v23);
LABEL_27:
    v24 = v5 < 0;
  }
  if ( v24 )
    v21 = 0LL;
  if ( v5 < 0 )
    goto LABEL_66;
  v5 = 0;
  if ( !((unsigned __int8 (__fastcall *)(_QWORD **))*v21[9])(v21 + 9) )
    goto LABEL_34;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v21 + 10, 0LL);
  if ( !((unsigned __int8 (__fastcall *)(_QWORD **))*v21[9])(v21 + 9) )
  {
    CPushLock::ReleaseLock((CPushLock *)(v21 + 9));
LABEL_34:
    v5 = -1073741816;
  }
  if ( v5 >= 0 )
  {
    if ( *((_DWORD *)v21 + 16) )
      v5 = -1073741823;
    else
      ((void (__fastcall *)(_QWORD **))v21[5][2])(v21 + 5);
    v25 = v21 + 10;
    if ( KeGetCurrentThread() == (struct _KTHREAD *)v21[11] )
    {
      v21[11] = 0LL;
      ExReleasePushLockExclusiveEx(v25, 0LL);
    }
    else
    {
      ExReleasePushLockSharedEx(v25, 0LL);
    }
    KeLeaveCriticalRegion();
    if ( v5 >= 0 )
    {
      Handle = (void *)-1LL;
      v28 = 0;
      if ( !DXGGLOBAL::m_pGlobal )
      {
        v29 = WdLogNewEntry5_WdAssertion(v27, v26);
        *(_QWORD *)(v29 + 24) = 2238LL;
        WdLogEvent5_WdAssertion(v29);
      }
      if ( !(*(unsigned int (**)(void))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38048) + 232LL))() )
      {
        if ( !DXGGLOBAL::m_pGlobal )
        {
          v32 = WdLogNewEntry5_WdAssertion(v31, v30);
          *(_QWORD *)(v32 + 24) = 2238LL;
          WdLogEvent5_WdAssertion(v32);
        }
        if ( !(*(unsigned int (**)(void))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38048) + 136LL))() )
        {
          if ( !DXGGLOBAL::m_pGlobal )
          {
            v33 = WdLogNewEntry5_WdAssertion(v31, v30);
            *(_QWORD *)(v33 + 24) = 2238LL;
            WdLogEvent5_WdAssertion(v33);
          }
          (*(void (**)(void))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38048) + 144LL))();
          v28 = 1;
        }
      }
      if ( !DXGGLOBAL::m_pGlobal )
      {
        v34 = WdLogNewEntry5_WdAssertion(v31, v30);
        *(_QWORD *)(v34 + 24) = 2238LL;
        WdLogEvent5_WdAssertion(v34);
      }
      v35 = (struct _KPROCESS *)(*(__int64 (**)(void))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38048) + 272LL))();
      v38 = v35;
      if ( v35 )
      {
        memset(&ApcState, 0, sizeof(ApcState));
        KeStackAttachProcess(v35, &ApcState);
        v5 = ObOpenObjectByPointer(v21, 0x40u, 0LL, 3u, g_pDxgkCompositionObjectType, 0, &Handle);
        KeUnstackDetachProcess(&ApcState);
        if ( !DXGGLOBAL::m_pGlobal )
        {
          v41 = WdLogNewEntry5_WdAssertion(v40, v39);
          *(_QWORD *)(v41 + 24) = 2238LL;
          WdLogEvent5_WdAssertion(v41);
        }
        (*(void (__fastcall **)(struct _KPROCESS *))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38048) + 200LL))(v38);
      }
      else
      {
        v5 = -1073741823;
      }
      if ( v28 )
      {
        if ( !DXGGLOBAL::m_pGlobal )
        {
          v42 = WdLogNewEntry5_WdAssertion(v37, v36);
          *(_QWORD *)(v42 + 24) = 2238LL;
          WdLogEvent5_WdAssertion(v42);
        }
        (*(void (**)(void))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38048) + 184LL))();
      }
      if ( v5 >= 0 )
        a2->Token.Flip.FenceValue = (UINT64)Handle;
    }
  }
  ObfDereferenceObject(v21);
  if ( v5 < 0 )
  {
LABEL_66:
    CompositionSyncKey = a2->Token.Flip.CompositionSyncKey;
    if ( CompositionSyncKey )
    {
      if ( !DXGGLOBAL::m_pGlobal )
      {
        v44 = WdLogNewEntry5_WdAssertion(v20, v19);
        *(_QWORD *)(v44 + 24) = 2238LL;
        WdLogEvent5_WdAssertion(v44);
      }
      (*(void (__fastcall **)(UINT64, __int64))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38048) + 32LL))(
        CompositionSyncKey,
        1LL);
    }
  }
  return (unsigned int)v5;
}
