/*
 * XREFs of ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C000AC70
 * Callers:
 *     ?ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x1C000AA60 (-ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@I@Z.c)
 * Callees:
 *     ?SignalGpuFence@CompositionSurfaceObject@@QEAAJ_K0_N@Z @ 0x1C0004FF8 (-SignalGpuFence@CompositionSurfaceObject@@QEAAJ_K0_N@Z.c)
 *     ?SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z @ 0x1C00057A0 (-SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z.c)
 *     ?ResolveCompositionHandleToken@CTokenManager@@IEAAJAEBU_D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN@@@Z @ 0x1C00059B8 (-ResolveCompositionHandleToken@CTokenManager@@IEAAJAEBU_D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN@@.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C0005A8C (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     ?Reset@CLegacyTokenBuffer@@IEAAXXZ @ 0x1C0008958 (-Reset@CLegacyTokenBuffer@@IEAAXXZ.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NW4TokenState@CTokenBase@@@Z @ 0x1C0015C60 (-InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NW4TokenState@.c)
 *     ?CompleteIndependentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z @ 0x1C0017324 (-CompleteIndependentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I.c)
 *     ?Create@CTokenQueue@@SAJPEAPEAV1@@Z @ 0x1C001943C (-Create@CTokenQueue@@SAJPEAPEAV1@@Z.c)
 *     ?AddToken@CTokenQueue@@QEAAXPEAVCToken@@@Z @ 0x1C0020940 (-AddToken@CTokenQueue@@QEAAXPEAVCToken@@@Z.c)
 *     ?Grow@CLegacyTokenBuffer@@IEAAJXZ @ 0x1C0020EF0 (-Grow@CLegacyTokenBuffer@@IEAAJXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?CompleteFlipManagerToken@CTokenManager@@IEAAXPEAUFlipManagerTokenObject@@PEA_N@Z @ 0x1C0075C50 (-CompleteFlipManagerToken@CTokenManager@@IEAAXPEAUFlipManagerTokenObject@@PEA_N@Z.c)
 *     DxgkGetPresentHistoryInternal @ 0x1C0178B20 (DxgkGetPresentHistoryInternal.c)
 */

__int64 __fastcall CTokenManager::ProcessDxgkAdapterTokens(CTokenManager *this, unsigned int a2)
{
  char v2; // r14
  unsigned int v3; // r15d
  char *v4; // rax
  unsigned int v5; // r12d
  int v7; // r13d
  int v8; // edi
  bool v9; // zf
  __int64 v10; // rsi
  int PresentHistoryInternal; // eax
  __int64 v12; // r8
  unsigned int v13; // r14d
  const struct _D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN *v14; // rsi
  int v15; // r12d
  unsigned int v16; // r15d
  int hPrivateData; // eax
  __int64 hPrivateData_high; // rax
  __int64 v19; // rcx
  void *v20; // rcx
  _QWORD *v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r13
  void *v26; // rcx
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // r12
  PVOID v30; // rax
  __int64 v31; // rax
  int v32; // r12d
  _QWORD *inserted; // r12
  int v34; // edx
  __int64 *v35; // r12
  _QWORD *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r12
  __int64 v39; // r13
  _QWORD *v40; // rax
  _QWORD *v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rcx
  char v44; // r12
  _DWORD *v45; // r12
  __int64 v46; // rdx
  _QWORD *v47; // rax
  _QWORD *v48; // r12
  char *v49; // rcx
  _QWORD *v50; // rcx
  __int64 v51; // rdx
  _QWORD *v52; // rax
  __int64 *v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rsi
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v57; // rax
  struct DXGGLOBAL *v58; // rax
  void *v59; // rcx
  void *v60; // rcx
  int v61; // edx
  int v62; // ecx
  int v63; // r8d
  int v64; // eax
  struct FlipManagerTokenObject *v65; // rdx
  unsigned __int8 v66; // [rsp+60h] [rbp-A0h]
  char v67; // [rsp+60h] [rbp-A0h]
  bool v68; // [rsp+61h] [rbp-9Fh] BYREF
  char v69; // [rsp+62h] [rbp-9Eh]
  unsigned __int8 NewElement; // [rsp+63h] [rbp-9Dh] BYREF
  int v71; // [rsp+64h] [rbp-9Ch]
  int v72; // [rsp+68h] [rbp-98h]
  LONG PreviousState; // [rsp+6Ch] [rbp-94h] BYREF
  PVOID Object; // [rsp+70h] [rbp-90h] BYREF
  int v75; // [rsp+78h] [rbp-88h]
  unsigned int v76; // [rsp+7Ch] [rbp-84h]
  int v77; // [rsp+80h] [rbp-80h]
  unsigned __int64 v78; // [rsp+88h] [rbp-78h]
  char *v79; // [rsp+90h] [rbp-70h]
  LONG v80; // [rsp+98h] [rbp-68h] BYREF
  void *v81; // [rsp+A0h] [rbp-60h]
  _DWORD v82[2]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v83; // [rsp+B0h] [rbp-50h]
  _BYTE *v84; // [rsp+B8h] [rbp-48h]
  __int64 v85; // [rsp+C0h] [rbp-40h]
  HANDLE Handle; // [rsp+D0h] [rbp-30h]
  _QWORD Buffer[3]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE Src[2048]; // [rsp+F0h] [rbp-10h] BYREF

  v2 = 1;
  v76 = a2;
  v3 = 640;
  v69 = 1;
  v75 = 640;
  v4 = (char *)this + 96;
  v5 = a2;
  v7 = 0;
  while ( 1 )
  {
    ExAcquirePushLockExclusiveEx(v4, 0LL);
    v8 = 0;
    v9 = *((_QWORD *)this + 24) == 0LL;
    *((_QWORD *)this + 13) = KeGetCurrentThread();
    if ( !v9 )
      goto LABEL_3;
    v22 = (_QWORD *)((char *)this + 168);
    v23 = (_QWORD *)*((_QWORD *)this + 21);
    if ( v23 == (_QWORD *)((char *)this + 168) )
    {
      *((_QWORD *)this + 24) = 0LL;
      v54 = operator new[](2112LL, 1953254740LL, 256LL);
      v55 = v54;
      if ( v54 )
      {
        *(_BYTE *)(v54 + 2108) = 0;
        *(_DWORD *)(v54 + 32) = 0;
        *(_DWORD *)(v54 + 2084) = 0;
        *(_QWORD *)(v54 + 24) = v54 + 16;
        *(_QWORD *)(v54 + 16) = v54 + 16;
        *(_QWORD *)(v54 + 2088) = v54 + 16;
        CLegacyTokenBuffer::Reset((CLegacyTokenBuffer *)v54);
        *((_QWORD *)this + 24) = v55;
      }
      else
      {
        v8 = -1073741801;
      }
LABEL_3:
      if ( v8 < 0 )
        goto LABEL_19;
      goto LABEL_4;
    }
    if ( (_QWORD *)v23[1] != v22 || (v24 = *v23, *(_QWORD **)(*v23 + 8LL) != v23) )
LABEL_123:
      __fastfail(3u);
    *v22 = v24;
    *(_QWORD *)(v24 + 8) = v22;
    --*((_DWORD *)this + 46);
    *((_QWORD *)this + 24) = v23;
LABEL_4:
    v10 = *((_QWORD *)this + 24);
    v8 = 0;
    if ( v3 > *(_DWORD *)(v10 + 2104) )
      v8 = CLegacyTokenBuffer::Grow(*((CLegacyTokenBuffer **)this + 24));
    v81 = *(void **)(v10 + 2096);
    if ( v8 >= 0 )
    {
      v82[1] = *(_DWORD *)(v10 + 2104);
      v83 = 0LL;
      v84 = Src;
      v85 = 0LL;
      v82[0] = v5;
      PresentHistoryInternal = DxgkGetPresentHistoryInternal(v82, 0LL);
      v8 = PresentHistoryInternal;
      switch ( PresentHistoryInternal )
      {
        case 0:
          v69 = 0;
LABEL_9:
          v13 = 0;
          v77 = 0;
          v14 = (const struct _D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN *)Src;
          v15 = 0;
          v16 = 0;
          v72 = 0;
          if ( (_DWORD)v85 )
          {
            while ( 1 )
            {
              hPrivateData = v14->hPrivateData;
              if ( LODWORD(v14->hPrivateData) == 7 )
              {
                CTokenManager::ResolveCompositionHandleToken(this, v14 + 2, v12);
                goto LABEL_15;
              }
              if ( hPrivateData == 8 )
              {
                Global = DXGGLOBAL_GetGlobal();
                (*(void (**)(void))(*((_QWORD *)Global + 38073) + 376LL))();
                v57 = DXGGLOBAL_GetGlobal();
                (*(void (__fastcall **)(ULONG64))(*((_QWORD *)v57 + 38073) + 8LL))(v14[2].hPrivateData);
                v58 = DXGGLOBAL_GetGlobal();
                (*(void (**)(void))(*((_QWORD *)v58 + 38073) + 416LL))();
                goto LABEL_15;
              }
              if ( hPrivateData == 2 )
                break;
              if ( hPrivateData == 9 )
              {
                v64 = v14[4].hPrivateData;
                v68 = 1;
                if ( (v64 & 4) != 0 )
                {
                  v65 = (struct FlipManagerTokenObject *)v14[2].hPrivateData;
                  if ( v65 )
                  {
                    CTokenManager::CompleteFlipManagerToken(this, v65, &v68);
                    if ( !v68 )
                      goto LABEL_15;
                  }
                }
LABEL_63:
                v72 = ++v7;
                goto LABEL_15;
              }
              memmove(v81, v14, HIDWORD(v14->hPrivateData));
              hPrivateData_high = HIDWORD(v14->hPrivateData);
              v16 += hPrivateData_high;
              v77 = v15 + 1;
              v81 = (char *)v81 + hPrivateData_high;
LABEL_15:
              ++v13;
              v15 = v77;
              v14 = (const struct _D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN *)((char *)v14 + HIDWORD(v14->hPrivateData));
              if ( v13 >= (unsigned int)v85 )
                goto LABEL_16;
            }
            if ( (v14[7].hPrivateData & 0x200000000000LL) != 0 && (HIDWORD(v14[7].hPrivateData) & 0xC000) == 0x4000 )
            {
              CTokenManager::CompleteIndependentFlipToken(
                this,
                v14[1].hPrivateData,
                (const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *)&v14[2],
                v76);
              v72 = ++v7;
              goto LABEL_15;
            }
            v78 = v14[1].hPrivateData;
            v25 = 0LL;
            v26 = (void *)v14[8].hPrivateData;
            v68 = 0;
            Handle = v26;
            Object = 0LL;
            if ( (int)CompositionSurfaceObject::ResolveHandle(v26, 2u, v12, (struct CompositionSurfaceObject **)&Object) < 0 )
              goto LABEL_108;
            v66 = 1;
            v27 = HIDWORD(v14[7].hPrivateData) & 0x42000;
            PreviousState = HIDWORD(v14[7].hPrivateData) & 0x2000;
            if ( v27 == 0x2000 )
            {
              KeEnterCriticalRegion();
              v45 = Object;
              v79 = (char *)Object + 48;
              ExAcquirePushLockSharedEx((char *)Object + 48, 0LL);
              if ( !v45[32] || (v47 = (_QWORD *)*((_QWORD *)v45 + 14), v48 = v45 + 28, v47 == v48) )
              {
LABEL_97:
                v66 = 0;
              }
              else
              {
                while ( *(v47 - 1) != v78 )
                {
                  v47 = (_QWORD *)*v47;
                  if ( v47 == v48 )
                    goto LABEL_97;
                }
                v66 = (*(__int64 (__fastcall **)(_QWORD *, __int64, unsigned __int64))(*(v47 - 3) + 192LL))(
                        v47 - 3,
                        v46,
                        v78);
              }
              v49 = v79;
              if ( KeGetCurrentThread() == *((struct _KTHREAD **)v79 + 1) )
              {
                *((_QWORD *)v79 + 1) = 0LL;
                ExReleasePushLockExclusiveEx(v49, 0LL);
              }
              else
              {
                ExReleasePushLockSharedEx(v79, 0LL);
              }
              KeLeaveCriticalRegion();
            }
            v28 = operator new[](592LL, 1869892948LL, 256LL);
            v29 = v28;
            if ( v28 )
            {
              *(_QWORD *)(v28 + 24) = 6LL;
              *(_BYTE *)(v28 + 48) = 0;
              *(_QWORD *)v28 = &CToken::`vftable';
              *(_QWORD *)(v28 + 40) = v78;
              v30 = Object;
              *(_QWORD *)(v29 + 80) = 0LL;
              *(_DWORD *)(v29 + 52) = 0;
              *(_QWORD *)(v29 + 32) = v30;
              ObReferenceObjectByPointer(v30, 3u, g_pDxgkCompositionObjectType, 0);
              *(_QWORD *)v29 = &CFlipToken::`vftable';
              *(_WORD *)(v29 + 88) = 0;
              *(_QWORD *)(v29 + 96) = 0LL;
              *(_WORD *)(v29 + 564) = 0;
              *(_QWORD *)(v29 + 568) = 0LL;
              *(_QWORD *)(v29 + 576) = 0LL;
              *(_QWORD *)(v29 + 148) = 0LL;
              *(_QWORD *)(v29 + 156) = 0LL;
              *(_QWORD *)(v29 + 164) = 0LL;
              *(_QWORD *)(v29 + 172) = 0LL;
              *(_DWORD *)(v29 + 560) = 0x1000000;
              *(_QWORD *)(v29 + 188) = 1065353216LL;
              *(_DWORD *)(v29 + 196) = 0;
              *(_QWORD *)(v29 + 200) = 1065353216LL;
              *(_DWORD *)(v29 + 208) = 0;
              *(_QWORD *)(v29 + 120) = 0LL;
              *(_QWORD *)(v29 + 128) = 0LL;
              LODWORD(v79) = CFlipToken::InitializeCompleted(v29, &v14[2], v66);
              v71 = (int)v79;
              if ( (int)v79 < 0 )
              {
                (**(void (__fastcall ***)(__int64, __int64))v29)(v29, 1LL);
                v31 = 0LL;
              }
              else
              {
                v31 = v29;
              }
              v32 = (int)v79;
              if ( (int)v79 >= 0 )
              {
LABEL_33:
                v25 = v31;
LABEL_34:
                if ( !PreviousState )
                  ObCloseHandle(Handle, 1);
                ObfDereferenceObject(Object);
                if ( v71 < 0 )
                  goto LABEL_108;
                if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v25 + 144LL))(v25)
                  || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v25 + 152LL))(v25) )
                {
                  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v25 + 184LL))(v25) )
                  {
                    CTokenQueue::AddToken((CTokenManager *)((char *)this + 344), (struct CToken *)v25);
                  }
                  else
                  {
                    Buffer[0] = *(_QWORD *)(v25 + 32);
                    v71 = 0;
                    Buffer[1] = 0LL;
                    NewElement = 0;
                    inserted = RtlInsertElementGenericTable(
                                 (PRTL_GENERIC_TABLE)((char *)this + 200),
                                 Buffer,
                                 0x10u,
                                 &NewElement);
                    if ( inserted )
                    {
                      if ( NewElement )
                      {
                        Object = 0LL;
                        v71 = CTokenQueue::Create((struct CTokenQueue **)&Object);
                        if ( v71 < 0 )
                        {
                          RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 200), inserted);
                          inserted = 0LL;
                        }
                        else
                        {
                          inserted[1] = Object;
                        }
                      }
                      v34 = v71;
                      if ( v71 < 0 )
                      {
LABEL_107:
                        (**(void (__fastcall ***)(__int64, __int64))v25)(v25, 1LL);
LABEL_108:
                        v7 = v72;
                        goto LABEL_15;
                      }
                      v35 = (__int64 *)inserted[1];
                      v36 = (_QWORD *)(v25 + 8);
                      *((_DWORD *)v35 + 6) = 0;
                      v37 = *v35;
                      if ( *(__int64 **)(*v35 + 8) != v35 )
                        goto LABEL_123;
                      *v36 = v37;
                      *(_QWORD *)(v25 + 16) = v35;
                      *(_QWORD *)(v37 + 8) = v36;
                      *v35 = (__int64)v36;
                      if ( *(_DWORD *)(v25 + 24) == 2 )
                      {
                        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v25 + 104LL))(v25) )
                          v35[2] = v25;
                        if ( !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v25 + 120LL))(v25) )
                        {
                          if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v25 + 96LL))(v25) )
                          {
                            v53 = *(__int64 **)(v25 + 8);
                            if ( v53 == v35 || (*(unsigned __int8 (__fastcall **)(__int64 *))(*(v53 - 1) + 88))(v53 - 1) )
                              (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 80LL))(v25);
                          }
                        }
                        v34 = v71;
                      }
                    }
                    else
                    {
                      v34 = -1073741801;
                    }
                    if ( v34 < 0 )
                      goto LABEL_107;
                  }
                }
                else
                {
                  v50 = (_QWORD *)((char *)this + 328);
                  v68 = 1;
                  v51 = *((_QWORD *)this + 41);
                  v52 = (_QWORD *)(v25 + 8);
                  if ( *(CTokenManager **)(v51 + 8) != (CTokenManager *)((char *)this + 328) )
                    goto LABEL_123;
                  *v52 = v51;
                  *(_QWORD *)(v25 + 16) = v50;
                  *(_QWORD *)(v51 + 8) = v52;
                  *v50 = v52;
                }
                v38 = *(_QWORD *)(v25 + 32);
                if ( v38 )
                {
                  KeEnterCriticalRegion();
                  v39 = v38 + 48;
                  ExAcquirePushLockSharedEx(v38 + 48, 0LL);
                  if ( !*(_DWORD *)(v38 + 128)
                    || (v40 = *(_QWORD **)(v38 + 112), v41 = (_QWORD *)(v38 + 112), v40 == (_QWORD *)(v38 + 112)) )
                  {
LABEL_111:
                    v67 = 0;
                  }
                  else
                  {
                    while ( *(v40 - 1) != v78 )
                    {
                      v40 = (_QWORD *)*v40;
                      if ( v40 == v41 )
                        goto LABEL_111;
                    }
                    v67 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *, unsigned __int64))(*(v40 - 3) + 32LL))(
                            v40 - 3,
                            v41,
                            v78);
                  }
                  v42 = v38 + 48;
                  if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v38 + 56) )
                  {
                    *(_QWORD *)(v38 + 56) = 0LL;
                    ExReleasePushLockExclusiveEx(v42, 0LL);
                  }
                  else
                  {
                    ExReleasePushLockSharedEx(v42, 0LL);
                  }
                  KeLeaveCriticalRegion();
                  if ( v67 )
                  {
                    v59 = (void *)*((_QWORD *)this + 9);
                    PreviousState = 0;
                    ZwSetEvent(v59, &PreviousState);
                  }
                  KeEnterCriticalRegion();
                  ExAcquirePushLockSharedEx(v38 + 48, 0LL);
                  v43 = v38 + 48;
                  v44 = *(_BYTE *)(v38 + 153);
                  if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v39 + 8) )
                  {
                    *(_QWORD *)(v39 + 8) = 0LL;
                    ExReleasePushLockExclusiveEx(v43, 0LL);
                  }
                  else
                  {
                    ExReleasePushLockSharedEx(v43, 0LL);
                  }
                  KeLeaveCriticalRegion();
                  if ( v44 )
                  {
                    v60 = (void *)*((_QWORD *)this + 10);
                    v80 = 0;
                    if ( v60 )
                      ZwSetEvent(v60, &v80);
                  }
                }
                if ( !DXGGLOBAL::m_pGlobal )
                {
                  WdLogSingleEntry1(1LL, 2373LL);
                  if ( bTracingEnabled )
                  {
                    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
                      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                        v62,
                        v61,
                        v63,
                        0,
                        2,
                        -1,
                        (__int64)L"m_pGlobal != NULL",
                        69,
                        0,
                        0,
                        0,
                        0);
                  }
                }
                (*(void (__fastcall **)(const struct _D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN *, __int64))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38073) + 40LL))(
                  v14 + 2,
                  1LL);
                v7 = v72;
                if ( !v68 )
                  goto LABEL_15;
                goto LABEL_63;
              }
            }
            else
            {
              v32 = -1073741801;
            }
            CompositionSurfaceObject::SignalGpuFence((CompositionSurfaceObject *)Object, v78, v14[2].hPrivateData, 1);
            if ( v14[6].hPrivateData )
              CompositionSurfaceObject::SignalPresentLimitSemaphore((CompositionSurfaceObject *)Object, v78);
            v31 = 0LL;
            v71 = v32;
            if ( v32 < 0 )
              goto LABEL_34;
            goto LABEL_33;
          }
LABEL_16:
          v19 = *((_QWORD *)this + 24);
          *(_DWORD *)(*(_QWORD *)(v19 + 2088) + 16LL) += v15;
          *(_DWORD *)(*(_QWORD *)(v19 + 2088) + 2068LL) += v16;
          *(_DWORD *)(v19 + 2104) -= v16;
          *(_QWORD *)(v19 + 2096) += v16;
          if ( (_DWORD)v85 == v7 )
          {
            v7 = 0;
          }
          else
          {
            v20 = (void *)*((_QWORD *)this + 8);
            v7 = 0;
            PreviousState = 0;
            ZwSetEvent(v20, &PreviousState);
          }
          v5 = v76;
          v3 = v75;
          v2 = v69;
          goto LABEL_19;
        case 261:
          goto LABEL_9;
        case -1073741789:
          v3 = 640;
          *((_QWORD *)this + 13) = 0LL;
          v8 = 0;
          if ( (unsigned int)v83 > 0x280 )
            v3 = v83;
          v75 = v3;
          ExReleasePushLockExclusiveEx((char *)this + 96, 0LL);
          goto LABEL_20;
      }
      v2 = 0;
      v69 = 0;
    }
LABEL_19:
    *((_QWORD *)this + 13) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 96, 0LL);
    if ( v8 < 0 )
      return (unsigned int)v8;
LABEL_20:
    if ( !v2 )
      return (unsigned int)v8;
    v4 = (char *)this + 96;
  }
}
