/*
 * XREFs of ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C0002F70
 * Callers:
 *     ?ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x1C0002D30 (-ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@I@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NW4TokenState@CTokenBase@@@Z @ 0x1C000E4D0 (-InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NW4TokenState@.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000EDCC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?Create@CLegacyTokenBuffer@@KAJPEAPEAV1@@Z @ 0x1C0012224 (-Create@CLegacyTokenBuffer@@KAJPEAPEAV1@@Z.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C00160A4 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     ?Create@CTokenQueue@@SAJPEAPEAV1@@Z @ 0x1C001743C (-Create@CTokenQueue@@SAJPEAPEAV1@@Z.c)
 *     ?AddToken@CTokenQueue@@QEAAXPEAVCToken@@@Z @ 0x1C001B8A0 (-AddToken@CTokenQueue@@QEAAXPEAVCToken@@@Z.c)
 *     ?CompleteIndendentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z @ 0x1C001BBF0 (-CompleteIndendentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z.c)
 *     ?SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z @ 0x1C001C218 (-SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z.c)
 *     ?SignalGpuFence@CompositionSurfaceObject@@QEAAJ_K0_N@Z @ 0x1C001C2E0 (-SignalGpuFence@CompositionSurfaceObject@@QEAAJ_K0_N@Z.c)
 *     ?Create@TokenBlock@CLegacyTokenBuffer@@SAJAEAU12@PEAPEAU12@@Z @ 0x1C001C428 (-Create@TokenBlock@CLegacyTokenBuffer@@SAJAEAU12@PEAPEAU12@@Z.c)
 *     ?GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z @ 0x1C001C62C (-GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0027200 (memmove.c)
 *     ?CompleteFlipManagerToken@CTokenManager@@IEAAJPEAXPEA_N@Z @ 0x1C0062BA0 (-CompleteFlipManagerToken@CTokenManager@@IEAAJPEAXPEA_N@Z.c)
 *     DxgkGetPresentHistoryInternal @ 0x1C00F58B0 (DxgkGetPresentHistoryInternal.c)
 */

__int64 __fastcall CTokenManager::ProcessDxgkAdapterTokens(CTokenManager *this, unsigned int a2)
{
  char v2; // r13
  unsigned int v3; // r14d
  char *v4; // rax
  unsigned int v5; // r15d
  int v7; // ebx
  __int64 v8; // rdi
  int PresentHistoryInternal; // eax
  int v10; // edx
  _BYTE *v11; // rdi
  int v12; // r8d
  unsigned int v13; // r15d
  unsigned int v14; // r14d
  int v15; // eax
  char *v16; // r13
  __int64 v17; // rax
  __int64 v18; // rcx
  void *v19; // rcx
  _QWORD *v21; // rcx
  CTokenManager *v22; // rax
  __int64 v23; // rdx
  void *v24; // rcx
  int v25; // eax
  _QWORD *v26; // rax
  _QWORD *v27; // r13
  PVOID v28; // rax
  _BOOL8 v29; // r8
  struct CToken *v30; // rax
  int v31; // r13d
  struct CToken *v32; // r13
  _QWORD *v33; // rcx
  int v34; // eax
  _DWORD *v35; // rcx
  CTokenManager **v36; // rdx
  CTokenManager *v37; // r8
  __int64 v38; // r13
  unsigned __int8 (**v39)(void); // rax
  __int64 v40; // r8
  _QWORD *v41; // rax
  _QWORD *v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rcx
  void *v45; // rax
  _QWORD *v46; // r13
  int v47; // eax
  char *v48; // rcx
  CTokenManager **v49; // rdx
  CTokenManager *v50; // rcx
  bool v51; // zf
  __int64 v52; // r13
  struct CTokenQueue *v53; // rcx
  char *v54; // rax
  CTokenManager ***v55; // rax
  __int64 v56; // rax
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v58; // rax
  struct DXGGLOBAL *v59; // rax
  _QWORD *v60; // rdx
  void *v61; // rcx
  __int64 v62; // rax
  void *v63; // rdx
  int v64; // [rsp+30h] [rbp-D0h]
  NTSTATUS v65; // [rsp+30h] [rbp-D0h]
  int v66; // [rsp+30h] [rbp-D0h]
  char v67; // [rsp+34h] [rbp-CCh]
  char v68; // [rsp+35h] [rbp-CBh]
  char v69; // [rsp+35h] [rbp-CBh]
  bool v70; // [rsp+36h] [rbp-CAh] BYREF
  unsigned __int8 NewElement; // [rsp+37h] [rbp-C9h] BYREF
  char v72; // [rsp+38h] [rbp-C8h]
  bool v73; // [rsp+39h] [rbp-C7h] BYREF
  int v74; // [rsp+3Ch] [rbp-C4h]
  int v75; // [rsp+40h] [rbp-C0h]
  PVOID Object; // [rsp+48h] [rbp-B8h] BYREF
  int v77; // [rsp+50h] [rbp-B0h]
  unsigned int v78; // [rsp+54h] [rbp-ACh]
  LONG v79; // [rsp+58h] [rbp-A8h] BYREF
  LONG PreviousState[2]; // [rsp+60h] [rbp-A0h] BYREF
  struct CTokenQueue *v81; // [rsp+68h] [rbp-98h] BYREF
  PVOID v82; // [rsp+70h] [rbp-90h] BYREF
  HANDLE v83; // [rsp+78h] [rbp-88h]
  HANDLE Handle; // [rsp+80h] [rbp-80h] BYREF
  LONG v85; // [rsp+88h] [rbp-78h] BYREF
  void *v86; // [rsp+90h] [rbp-70h]
  _DWORD v87[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v88; // [rsp+A0h] [rbp-60h]
  _BYTE *v89; // [rsp+A8h] [rbp-58h]
  __int64 v90; // [rsp+B0h] [rbp-50h]
  _QWORD Buffer[3]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE Src[2048]; // [rsp+D0h] [rbp-30h] BYREF

  v2 = 1;
  v78 = a2;
  v3 = 640;
  v67 = 1;
  v77 = 640;
  v4 = (char *)this + 88;
  v5 = a2;
  while ( 1 )
  {
    ExAcquirePushLockExclusiveEx(v4, 0LL);
    v7 = 0;
    *((_QWORD *)this + 12) = KeGetCurrentThread();
    if ( !*((_QWORD *)this + 23) )
    {
      v21 = (_QWORD *)((char *)this + 160);
      v22 = (CTokenManager *)*((_QWORD *)this + 20);
      if ( v22 != (CTokenManager *)((char *)this + 160) )
      {
        if ( *((_QWORD **)v22 + 1) != v21 || (v23 = *(_QWORD *)v22, *(CTokenManager **)(*(_QWORD *)v22 + 8LL) != v22) )
LABEL_147:
          __fastfail(3u);
        *v21 = v23;
        *(_QWORD *)(v23 + 8) = v21;
        --*((_DWORD *)this + 44);
        *((_QWORD *)this + 23) = v22;
        goto LABEL_4;
      }
      v7 = CLegacyTokenBuffer::Create((struct CLegacyTokenBuffer **)this + 23);
    }
    if ( v7 < 0 )
      goto LABEL_19;
LABEL_4:
    v8 = *((_QWORD *)this + 23);
    v7 = 0;
    if ( v3 > *(_DWORD *)(v8 + 2104) )
    {
      Handle = 0LL;
      v7 = CLegacyTokenBuffer::TokenBlock::Create(
             (struct CLegacyTokenBuffer::TokenBlock *)(v8 + 16),
             (struct CLegacyTokenBuffer::TokenBlock **)&Handle);
      if ( v7 >= 0 )
      {
        v54 = (char *)Handle;
        *(_QWORD *)(v8 + 2088) = Handle;
        *(_QWORD *)(v8 + 2096) = v54 + 20;
        *(_DWORD *)(v8 + 2104) = 2048;
      }
    }
    v86 = *(void **)(v8 + 2096);
    if ( v7 >= 0 )
    {
      v87[1] = *(_DWORD *)(v8 + 2104);
      v88 = 0LL;
      v89 = Src;
      v90 = 0LL;
      v87[0] = v5;
      PresentHistoryInternal = DxgkGetPresentHistoryInternal(v87, 0LL);
      v7 = PresentHistoryInternal;
      if ( PresentHistoryInternal )
      {
        if ( PresentHistoryInternal == -1073741789 )
        {
          v3 = 640;
          if ( (unsigned int)v88 > 0x280 )
            v3 = v88;
          v7 = 0;
          v77 = v3;
          goto LABEL_19;
        }
        if ( PresentHistoryInternal != 261 )
        {
          v2 = 0;
          v67 = 0;
          goto LABEL_19;
        }
      }
      else
      {
        v67 = 0;
      }
      v10 = 0;
      v11 = Src;
      v12 = 0;
      v75 = 0;
      v13 = 0;
      v74 = 0;
      v14 = 0;
      if ( (_DWORD)v90 )
      {
        while ( 1 )
        {
          v15 = *(_DWORD *)v11;
          if ( *(_DWORD *)v11 == 7 )
            break;
          switch ( v15 )
          {
            case 8:
              Global = DXGGLOBAL::GetGlobal();
              (*(void (**)(void))(*((_QWORD *)Global + 38048) + 144LL))();
              v58 = DXGGLOBAL::GetGlobal();
              (*(void (__fastcall **)(_QWORD))(*((_QWORD *)v58 + 38048) + 8LL))(*((_QWORD *)v11 + 2));
              v59 = DXGGLOBAL::GetGlobal();
              (*(void (**)(void))(*((_QWORD *)v59 + 38048) + 184LL))();
              v10 = v75;
              goto LABEL_14;
            case 2:
              if ( (*((_DWORD *)v11 + 15) & 0x2000) != 0 && (*((_DWORD *)v11 + 15) & 0xC000) == 0x4000 )
              {
                CTokenManager::CompleteIndendentFlipToken(
                  this,
                  *((_QWORD *)v11 + 1),
                  (const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *)(v11 + 16),
                  v78);
                v10 = v75;
                v12 = ++v74;
                goto LABEL_15;
              }
              *(_QWORD *)PreviousState = *((_QWORD *)v11 + 1);
              v24 = (void *)*((_QWORD *)v11 + 8);
              v72 = 0;
              Handle = v24;
              Object = 0LL;
              v81 = 0LL;
              if ( (int)CompositionSurfaceObject::ResolveHandle(
                          v24,
                          2u,
                          v12,
                          (struct CompositionSurfaceObject **)&Object) >= 0 )
              {
                v25 = *((_DWORD *)v11 + 15);
                v70 = 1;
                v79 = v25 & 0x2000;
                v82 = 0LL;
                v83 = 0LL;
                if ( (v25 & 0x42000) == 0x2000 )
                  CompositionSurfaceObject::GetIndependentFlipNotifyDwm(
                    (CompositionSurfaceObject *)Object,
                    *(unsigned __int64 *)PreviousState,
                    &v70);
                v26 = operator new[](0x250uLL, 0x6F744D54u, PagedPool);
                v27 = v26;
                if ( v26 )
                {
                  v26[3] = 6LL;
                  *((_BYTE *)v26 + 48) = 0;
                  *v26 = &CToken::`vftable';
                  v26[5] = *(_QWORD *)PreviousState;
                  v28 = Object;
                  v27[10] = 0LL;
                  *((_DWORD *)v27 + 13) = 0;
                  v27[4] = v28;
                  ObReferenceObjectByPointer(v28, 3u, g_pDxgkCompositionObjectType, 0);
                  v29 = v70;
                  *v27 = &CFlipToken::`vftable';
                  *((_WORD *)v27 + 44) = 0;
                  v27[12] = 0LL;
                  *((_BYTE *)v27 + 560) = 0;
                  v27[71] = 0LL;
                  v27[72] = 0LL;
                  *(_QWORD *)((char *)v27 + 148) = 0LL;
                  *(_QWORD *)((char *)v27 + 156) = 0LL;
                  *(_QWORD *)((char *)v27 + 164) = 0LL;
                  *(_QWORD *)((char *)v27 + 172) = 0LL;
                  *((_DWORD *)v27 + 139) = 0x1000000;
                  *(_QWORD *)((char *)v27 + 188) = 1065353216LL;
                  *((_DWORD *)v27 + 49) = 0;
                  v27[25] = 1065353216LL;
                  *((_DWORD *)v27 + 52) = 0;
                  v27[15] = 0LL;
                  v27[16] = 0LL;
                  v64 = CFlipToken::InitializeCompleted(v27, v11 + 16, v29);
                  if ( v64 < 0 )
                  {
                    (*(void (__fastcall **)(_QWORD *, __int64))*v27)(v27, 1LL);
                    v30 = (struct CToken *)v83;
                  }
                  else
                  {
                    v30 = (struct CToken *)v27;
                  }
                  v31 = v64;
                  if ( v64 >= 0 )
                    goto LABEL_34;
                }
                else
                {
                  v31 = -1073741801;
                  v64 = -1073741801;
                }
                CompositionSurfaceObject::SignalGpuFence(
                  (CompositionSurfaceObject *)Object,
                  *(unsigned __int64 *)PreviousState,
                  *((_QWORD *)v11 + 2),
                  1);
                if ( *((_QWORD *)v11 + 6) )
                  CompositionSurfaceObject::SignalPresentLimitSemaphore(
                    (CompositionSurfaceObject *)Object,
                    *(unsigned __int64 *)PreviousState);
                v30 = (struct CToken *)v82;
LABEL_34:
                if ( v31 < 0 )
                  v32 = v81;
                else
                  v32 = v30;
                if ( !v79 )
                  ObCloseHandle(Handle, 1);
                ObfDereferenceObject(Object);
                if ( v64 >= 0 )
                {
                  if ( (*(unsigned __int8 (__fastcall **)(struct CToken *))(*(_QWORD *)v32 + 144LL))(v32)
                    && !(*(unsigned __int8 (__fastcall **)(struct CToken *))(*(_QWORD *)v32 + 152LL))(v32) )
                  {
                    v35 = (_DWORD *)((char *)this + 304);
                    v72 = 1;
                    v36 = (CTokenManager **)*((_QWORD *)this + 38);
                    v55 = (CTokenManager ***)((char *)v32 + 8);
                    if ( v36[1] != (CTokenManager *)((char *)this + 304) )
                      goto LABEL_147;
                    *v55 = v36;
                    *((_QWORD *)v32 + 2) = v35;
                    v36[1] = (CTokenManager *)v55;
                    *(_QWORD *)v35 = v55;
LABEL_106:
                    if ( v64 < 0 )
                    {
LABEL_71:
                      if ( v72 )
                      {
                        v10 = v75;
                        v12 = ++v74;
                        goto LABEL_15;
                      }
                      goto LABEL_93;
                    }
LABEL_52:
                    v38 = *((_QWORD *)v32 + 4);
                    if ( v38 )
                    {
                      v39 = *(unsigned __int8 (***)(void))(v38 + 48);
                      v83 = (HANDLE)(v38 + 48);
                      if ( (*v39)() )
                      {
                        KeEnterCriticalRegion();
                        ExAcquirePushLockSharedEx(v38 + 56, 0LL);
                        if ( (**(unsigned __int8 (__fastcall ***)(__int64))(v38 + 48))(v38 + 48) )
                        {
                          if ( !*(_DWORD *)(v38 + 120)
                            || (v41 = *(_QWORD **)(v38 + 104), v42 = (_QWORD *)(v38 + 104), v41 == (_QWORD *)(v38 + 104)) )
                          {
LABEL_138:
                            v68 = 0;
                          }
                          else
                          {
                            while ( *(v41 - 1) != *(_QWORD *)PreviousState )
                            {
                              v41 = (_QWORD *)*v41;
                              if ( v41 == v42 )
                                goto LABEL_138;
                            }
                            v68 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *, __int64, _QWORD))(*(v41 - 3) + 32LL))(
                                    v41 - 3,
                                    v42,
                                    v40,
                                    *(_QWORD *)PreviousState);
                          }
                          v43 = v38 + 56;
                          if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v38 + 64) )
                          {
                            *(_QWORD *)(v38 + 64) = 0LL;
                            ExReleasePushLockExclusiveEx(v43, 0LL);
                          }
                          else
                          {
                            ExReleasePushLockSharedEx(v43, 0LL);
                          }
                          KeLeaveCriticalRegion();
                          if ( v68 )
                          {
                            v61 = (void *)*((_QWORD *)this + 8);
                            v79 = 0;
                            ZwSetEvent(v61, &v79);
                          }
                        }
                        else
                        {
                          CPushLock::ReleaseLock((CPushLock *)(v38 + 48));
                        }
                      }
                      if ( (**(unsigned __int8 (__fastcall ***)(__int64))(v38 + 48))(v38 + 48) )
                      {
                        KeEnterCriticalRegion();
                        ExAcquirePushLockSharedEx(v38 + 56, 0LL);
                        if ( (**(unsigned __int8 (__fastcall ***)(__int64))(v38 + 48))(v38 + 48) )
                        {
                          v44 = v38 + 56;
                          v69 = *(_BYTE *)(v38 + 128);
                          if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v38 + 64) )
                          {
                            *(_QWORD *)(v38 + 64) = 0LL;
                            ExReleasePushLockExclusiveEx(v44, 0LL);
                          }
                          else
                          {
                            ExReleasePushLockSharedEx(v44, 0LL);
                          }
                          KeLeaveCriticalRegion();
                          if ( v69 )
                          {
                            v35 = (_DWORD *)*((_QWORD *)this + 9);
                            v85 = 0;
                            if ( v35 )
                              ZwSetEvent(v35, &v85);
                          }
                        }
                        else
                        {
                          CPushLock::ReleaseLock((CPushLock *)v83);
                        }
                      }
                    }
                    if ( !DXGGLOBAL::m_pGlobal )
                    {
                      v62 = WdLogNewEntry5_WdAssertion(v35, v36);
                      *(_QWORD *)(v62 + 24) = 2238LL;
                      WdLogEvent5_WdAssertion(v62);
                    }
                    (*(void (__fastcall **)(_BYTE *, __int64))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38048) + 40LL))(
                      v11 + 16,
                      1LL);
                    goto LABEL_71;
                  }
                  v64 = 0;
                  if ( !(*(unsigned __int8 (__fastcall **)(struct CToken *))(*(_QWORD *)v32 + 176LL))(v32) )
                  {
                    Buffer[0] = *((_QWORD *)v32 + 4);
                    v64 = 0;
                    Buffer[1] = 0LL;
                    NewElement = 0;
                    Object = RtlInsertElementGenericTable(
                               (PRTL_GENERIC_TABLE)((char *)this + 192),
                               Buffer,
                               0x10u,
                               &NewElement);
                    v33 = Object;
                    if ( Object )
                    {
                      if ( !NewElement )
                        goto LABEL_43;
                      v81 = 0LL;
                      v34 = CTokenQueue::Create(&v81);
                      v60 = Object;
                      v64 = v34;
                      if ( v34 < 0 )
                      {
                        RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 192), Object);
                        v33 = 0LL;
LABEL_43:
                        v34 = v64;
                      }
                      else
                      {
                        *((_QWORD *)Object + 1) = v81;
                        v33 = v60;
                      }
                    }
                    else
                    {
                      v34 = -1073741801;
                      v64 = -1073741801;
                    }
                    if ( v34 >= 0 )
                    {
                      v35 = (_DWORD *)v33[1];
                      v36 = (CTokenManager **)((char *)v32 + 8);
                      v81 = (struct CTokenQueue *)v35;
                      v35[6] = 0;
                      v37 = *(CTokenManager **)v35;
                      if ( *(_DWORD **)(*(_QWORD *)v35 + 8LL) != v35 )
                        goto LABEL_147;
                      *v36 = v37;
                      *((_QWORD *)v32 + 2) = v35;
                      *((_QWORD *)v37 + 1) = v36;
                      *(_QWORD *)v35 = v36;
                      if ( *((_DWORD *)v32 + 6) == 2 )
                      {
                        if ( (*(unsigned __int8 (__fastcall **)(struct CToken *))(*(_QWORD *)v32 + 104LL))(v32) )
                          *((_QWORD *)v81 + 2) = v32;
                        if ( !(*(unsigned int (__fastcall **)(struct CToken *))(*(_QWORD *)v32 + 120LL))(v32) )
                        {
                          if ( (*(unsigned __int8 (__fastcall **)(struct CToken *))(*(_QWORD *)v32 + 96LL))(v32) )
                          {
                            v53 = (struct CTokenQueue *)*((_QWORD *)v32 + 1);
                            if ( v53 == v81
                              || (*(unsigned __int8 (__fastcall **)(__int64))(*((_QWORD *)v53 - 1) + 88LL))((__int64)v53 - 8) )
                            {
                              (*(void (__fastcall **)(struct CToken *))(*(_QWORD *)v32 + 80LL))(v32);
                            }
                          }
                        }
LABEL_50:
                        v34 = v64;
                      }
                      if ( v34 >= 0 )
                        goto LABEL_52;
                    }
                    (**(void (__fastcall ***)(struct CToken *, __int64))v32)(v32, 1LL);
                    goto LABEL_106;
                  }
                  CTokenQueue::AddToken((CTokenManager *)((char *)this + 320), v32);
                  goto LABEL_50;
                }
              }
LABEL_93:
              v10 = v75;
              goto LABEL_14;
            case 9:
              v63 = (void *)*((_QWORD *)v11 + 2);
              v73 = 0;
              CTokenManager::CompleteFlipManagerToken(this, v63, &v73);
              if ( v73 )
              {
                v10 = v75;
                v12 = ++v74;
                goto LABEL_15;
              }
              goto LABEL_93;
          }
          v16 = (char *)v86;
          memmove(v86, v11, *((unsigned int *)v11 + 1));
          v17 = *((unsigned int *)v11 + 1);
          v10 = v75 + 1;
          v13 += v17;
          ++v75;
          v86 = &v16[v17];
LABEL_14:
          v12 = v74;
LABEL_15:
          ++v14;
          v11 += *((unsigned int *)v11 + 1);
          if ( v14 >= (unsigned int)v90 )
            goto LABEL_16;
        }
        v45 = (void *)*((_QWORD *)v11 + 2);
        v83 = v45;
        if ( !v45 )
          goto LABEL_15;
        v46 = 0LL;
        v82 = 0LL;
        v65 = ObReferenceObjectByHandle(v45, 2u, g_pDxgkCompositionObjectType, 1, &v82, 0LL);
        Object = v82;
        if ( v65 < 0 )
          goto LABEL_92;
        if ( (***((unsigned __int8 (__fastcall ****)(_QWORD))v82 + 2))(*((_QWORD *)v82 + 2)) )
        {
          if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)Object + 2) + 16LL))(*((_QWORD *)Object + 2)) == 2 )
          {
            v46 = Object;
            goto LABEL_78;
          }
          v65 = -1073741788;
        }
        else
        {
          v65 = -1073741816;
        }
        ObfDereferenceObject(Object);
LABEL_78:
        if ( v65 >= 0 )
        {
          v66 = 0;
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))v46[9])(v46 + 9) )
          {
            KeEnterCriticalRegion();
            ExAcquirePushLockSharedEx(v46 + 10, 0LL);
            if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))v46[9])(v46 + 9) )
            {
              v47 = 0;
LABEL_82:
              if ( v47 < 0 )
                goto LABEL_122;
              if ( *((_DWORD *)v46 + 16) == 1 )
                (*(void (__fastcall **)(_QWORD *))(v46[5] + 24LL))(v46 + 5);
              else
                v66 = -1073741823;
              v48 = (char *)(v46 + 10);
              if ( KeGetCurrentThread() == (struct _KTHREAD *)v46[11] )
              {
                v46[11] = 0LL;
                ExReleasePushLockExclusiveEx(v48, 0LL);
              }
              else
              {
                ExReleasePushLockSharedEx(v48, 0LL);
              }
              KeLeaveCriticalRegion();
              if ( v66 < 0 )
              {
LABEL_122:
                ObfDereferenceObject(v46);
              }
              else
              {
                v49 = (CTokenManager **)*((_QWORD *)this + 34);
                v50 = (CTokenManager *)(v46 + 6);
                if ( *v49 != (CTokenManager *)((char *)this + 264) )
                  goto LABEL_147;
                v51 = DXGGLOBAL::m_pGlobal == 0LL;
                *(_QWORD *)v50 = (char *)this + 264;
                v46[7] = v49;
                *v49 = v50;
                *((_QWORD *)this + 34) = v50;
                v52 = v46[15];
                if ( v51 )
                {
                  v56 = WdLogNewEntry5_WdAssertion(v50, v49);
                  *(_QWORD *)(v56 + 24) = 2238LL;
                  WdLogEvent5_WdAssertion(v56);
                }
                (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38048) + 32LL))(v52, 1LL);
              }
              goto LABEL_92;
            }
            CPushLock::ReleaseLock((CPushLock *)(v46 + 9));
          }
          v47 = -1073741816;
          v66 = -1073741816;
          goto LABEL_82;
        }
LABEL_92:
        NtClose(v83);
        goto LABEL_93;
      }
LABEL_16:
      v18 = *((_QWORD *)this + 23);
      *(_DWORD *)(*(_QWORD *)(v18 + 2088) + 16LL) += v10;
      *(_DWORD *)(*(_QWORD *)(v18 + 2088) + 2068LL) += v13;
      *(_DWORD *)(v18 + 2104) -= v13;
      *(_QWORD *)(v18 + 2096) += v13;
      if ( (_DWORD)v90 != v12 )
      {
        v19 = (void *)*((_QWORD *)this + 7);
        PreviousState[0] = 0;
        ZwSetEvent(v19, PreviousState);
      }
      v5 = v78;
      v3 = v77;
      v2 = v67;
    }
LABEL_19:
    *((_QWORD *)this + 12) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 88, 0LL);
    if ( v7 < 0 || !v2 )
      return (unsigned int)v7;
    v4 = (char *)this + 88;
  }
}
