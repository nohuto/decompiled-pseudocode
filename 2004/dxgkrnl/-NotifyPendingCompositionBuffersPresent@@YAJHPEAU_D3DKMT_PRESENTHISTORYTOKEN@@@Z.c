/*
 * XREFs of ?NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00135F4
 * Callers:
 *     ?DxgkQuerySwapChainBindingStatus@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00135B8 (-DxgkQuerySwapChainBindingStatus@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000EDCC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00EE9E4 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

__int64 __fastcall NotifyPendingCompositionBuffersPresent(__int64 a1, struct _D3DKMT_PRESENTHISTORYTOKEN *a2)
{
  void *FenceValue; // r14
  int v4; // ebx
  NTSTATUS v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v12; // rsi
  int v13; // ebx
  _QWORD **v14; // rbx
  NTSTATUS v15; // eax
  _QWORD **v16; // rsi
  bool v17; // sf
  _QWORD **v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  char v21; // r14
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct _KPROCESS *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  struct _KPROCESS *v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  _QWORD *v30; // rsi
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  void *Handle; // [rsp+48h] [rbp-19h] BYREF
  PVOID Object; // [rsp+50h] [rbp-11h] BYREF
  _KAPC_STATE ApcState; // [rsp+58h] [rbp-9h] BYREF

  FenceValue = (void *)a2->Token.Flip.FenceValue;
  v4 = a1;
  Handle = 0LL;
  v5 = 0;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v32 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v32 + 24) = 2238LL;
    WdLogEvent5_WdAssertion(v32);
  }
  (*(void (**)(void))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38048) + 208LL))();
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v33 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v33 + 24) = 2238LL;
    WdLogEvent5_WdAssertion(v33);
  }
  v8 = (*(__int64 (**)(void))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38048) + 240LL))();
  if ( !v4 || v8 )
    goto LABEL_59;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v34 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v34 + 24) = 2238LL;
    WdLogEvent5_WdAssertion(v34);
  }
  SessionData = DXGGLOBAL::GetSessionData((DXGGLOBAL *)DXGGLOBAL::m_pGlobal);
  if ( !SessionData )
    goto LABEL_59;
  v12 = *((_QWORD *)SessionData + 2340);
  if ( !v12 )
    goto LABEL_59;
  (**(void (__fastcall ***)(_QWORD))v12)(*((_QWORD *)SessionData + 2340));
  v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 176LL))(v12);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  if ( !v13 )
    goto LABEL_59;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v35 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v35 + 24) = 2238LL;
    WdLogEvent5_WdAssertion(v35);
  }
  if ( !(*(unsigned int (**)(void))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38048) + 224LL))() )
LABEL_59:
    v5 = -1071775730;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v36 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v36 + 24) = 2238LL;
    WdLogEvent5_WdAssertion(v36);
  }
  (*(void (**)(void))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38048) + 256LL))();
  if ( v5 < 0 )
    return (unsigned int)v5;
  Object = 0LL;
  v14 = 0LL;
  v15 = ObReferenceObjectByHandle(FenceValue, 2u, g_pDxgkCompositionObjectType, 1, &Object, 0LL);
  v16 = (_QWORD **)Object;
  v5 = v15;
  if ( v15 < 0 )
    goto LABEL_63;
  if ( (***((unsigned __int8 (__fastcall ****)(_QWORD))Object + 2))(*((_QWORD *)Object + 2)) )
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD *))(*v16[2] + 16LL))(v16[2]) == 2 )
      v14 = v16;
    else
      v5 = -1073741788;
  }
  else
  {
    v5 = -1073741816;
  }
  v17 = v5 < 0;
  if ( v5 < 0 )
  {
    ObfDereferenceObject(v16);
LABEL_63:
    v17 = v5 < 0;
  }
  if ( v17 )
    v14 = 0LL;
  if ( v5 >= 0 )
  {
    v5 = 0;
    if ( ((unsigned __int8 (__fastcall *)(_QWORD **))*v14[9])(v14 + 9) )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v14 + 10, 0LL);
      if ( ((unsigned __int8 (__fastcall *)(_QWORD **))*v14[9])(v14 + 9) )
        goto LABEL_28;
      CPushLock::ReleaseLock((CPushLock *)(v14 + 9));
    }
    v5 = -1073741816;
LABEL_28:
    if ( v5 >= 0 )
    {
      if ( *((_DWORD *)v14 + 16) )
        v5 = -1073741823;
      else
        ((void (__fastcall *)(_QWORD **))v14[5][2])(v14 + 5);
      v18 = v14 + 10;
      if ( KeGetCurrentThread() == (struct _KTHREAD *)v14[11] )
      {
        v14[11] = 0LL;
        ExReleasePushLockExclusiveEx(v18, 0LL);
      }
      else
      {
        ExReleasePushLockSharedEx(v18, 0LL);
      }
      KeLeaveCriticalRegion();
      if ( v5 >= 0 )
      {
        Handle = (void *)-1LL;
        v21 = 0;
        if ( !DXGGLOBAL::m_pGlobal )
        {
          v37 = WdLogNewEntry5_WdAssertion(v20, v19);
          *(_QWORD *)(v37 + 24) = 2238LL;
          WdLogEvent5_WdAssertion(v37);
        }
        if ( !(*(unsigned int (**)(void))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38048) + 232LL))() )
        {
          if ( !DXGGLOBAL::m_pGlobal )
          {
            v38 = WdLogNewEntry5_WdAssertion(v23, v22);
            *(_QWORD *)(v38 + 24) = 2238LL;
            WdLogEvent5_WdAssertion(v38);
          }
          if ( !(*(unsigned int (**)(void))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38048) + 136LL))() )
          {
            if ( !DXGGLOBAL::m_pGlobal )
            {
              v39 = WdLogNewEntry5_WdAssertion(v23, v22);
              *(_QWORD *)(v39 + 24) = 2238LL;
              WdLogEvent5_WdAssertion(v39);
            }
            (*(void (**)(void))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38048) + 144LL))();
            v21 = 1;
          }
        }
        if ( !DXGGLOBAL::m_pGlobal )
        {
          v40 = WdLogNewEntry5_WdAssertion(v23, v22);
          *(_QWORD *)(v40 + 24) = 2238LL;
          WdLogEvent5_WdAssertion(v40);
        }
        v24 = (struct _KPROCESS *)(*(__int64 (**)(void))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38048) + 272LL))();
        v27 = v24;
        if ( v24 )
        {
          memset(&ApcState, 0, sizeof(ApcState));
          KeStackAttachProcess(v24, &ApcState);
          v5 = ObOpenObjectByPointer(v14, 0x40u, 0LL, 3u, g_pDxgkCompositionObjectType, 0, &Handle);
          KeUnstackDetachProcess(&ApcState);
          if ( !DXGGLOBAL::m_pGlobal )
          {
            v41 = WdLogNewEntry5_WdAssertion(v29, v28);
            *(_QWORD *)(v41 + 24) = 2238LL;
            WdLogEvent5_WdAssertion(v41);
          }
          (*(void (__fastcall **)(struct _KPROCESS *))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38048) + 200LL))(v27);
        }
        else
        {
          v5 = -1073741823;
        }
        if ( v21 )
        {
          if ( !DXGGLOBAL::m_pGlobal )
          {
            v42 = WdLogNewEntry5_WdAssertion(v26, v25);
            *(_QWORD *)(v42 + 24) = 2238LL;
            WdLogEvent5_WdAssertion(v42);
          }
          (*(void (**)(void))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38048) + 184LL))();
        }
        if ( v5 >= 0 )
        {
          v30 = v14[15];
          if ( !DXGGLOBAL::m_pGlobal )
          {
            v43 = WdLogNewEntry5_WdAssertion(v26, v25);
            *(_QWORD *)(v43 + 24) = 2238LL;
            WdLogEvent5_WdAssertion(v43);
          }
          (*(void (__fastcall **)(_QWORD *, _QWORD))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38048) + 32LL))(v30, 0LL);
          a2->Token.Flip.FenceValue = (UINT64)Handle;
        }
      }
    }
    ObfDereferenceObject(v14);
  }
  return (unsigned int)v5;
}
