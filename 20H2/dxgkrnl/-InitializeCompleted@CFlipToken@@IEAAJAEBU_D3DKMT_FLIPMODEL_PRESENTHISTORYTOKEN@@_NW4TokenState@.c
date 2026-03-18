/*
 * XREFs of ?InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NW4TokenState@CTokenBase@@@Z @ 0x1C000E530
 * Callers:
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C0002F70 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 *     ?CreateCompleted@CFlipToken@@SAJ_KPEAVCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C0063ED4 (-CreateCompleted@CFlipToken@@SAJ_KPEAVCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHIS.c)
 * Callees:
 *     ?NotifyTokenCompleted@CCompositionSurface@@IEAAJAEBVCFlipToken@@@Z @ 0x1C000E9BC (-NotifyTokenCompleted@CCompositionSurface@@IEAAJAEBVCFlipToken@@@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000EE2C (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?TraceStateChanged@CFlipToken@@AEBAXXZ @ 0x1C0010D20 (-TraceStateChanged@CFlipToken@@AEBAXXZ.c)
 *     ?NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N@Z @ 0x1C001C514 (-NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ?StartCompositionEarly@CompositionSurfaceObject@@QEAA_N_K@Z @ 0x1C006302C (-StartCompositionEarly@CompositionSurfaceObject@@QEAA_N_K@Z.c)
 */

__int64 __fastcall CFlipToken::InitializeCompleted(__int64 a1, __int64 a2, char a3, unsigned int a4)
{
  unsigned __int64 v7; // rcx
  int v8; // ebp
  __int64 v9; // rdx
  int v10; // eax
  unsigned int v11; // eax
  unsigned int i; // edi
  int v13; // r14d
  BOOL v14; // r15d
  __int64 v15; // r13
  BOOL v16; // r12d
  int v17; // ebx
  void (__fastcall *v18)(__int64, _QWORD, _QWORD, _QWORD, int, int, BOOL, __int64, __int64, BOOL); // rdi
  unsigned int v19; // eax
  _QWORD *v20; // rdi
  _QWORD *v21; // rcx
  __int64 v23; // rax
  int v24; // ecx
  bool started; // al
  __int64 v26; // rax
  __int64 v27; // [rsp+60h] [rbp-38h]
  __int64 v28; // [rsp+68h] [rbp-30h]
  unsigned int v29; // [rsp+B8h] [rbp+20h] BYREF

  v29 = a4;
  *(_DWORD *)(a1 + 24) = 2;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v23 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v23 + 24) = 2238LL;
    WdLogEvent5_WdAssertion(v23);
  }
  v8 = (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38048) + 16LL))(a1 + 80);
  v9 = 6LL;
  if ( v8 < 0 )
  {
    *(_DWORD *)(a1 + 24) = 6;
  }
  else
  {
    v7 = *(unsigned int *)(a2 + 44);
    v8 = -1073741811;
    if ( (v7 & 0x180) == 0 || (*(_DWORD *)(a2 + 44) & 0x180) == 0x80 || (v7 &= 0x180u, (_DWORD)v7 == 384) )
      v8 = 0;
    if ( v8 >= 0 )
    {
      *(_QWORD *)(a1 + 96) = *(_QWORD *)a2;
      if ( *(_DWORD *)(a2 + 84) < *(_DWORD *)(a2 + 92) && *(_DWORD *)(a2 + 88) < *(_DWORD *)(a2 + 96) )
      {
        *(_DWORD *)(a1 + 52) = 1;
        *(_OWORD *)(a1 + 56) = *(_OWORD *)(a2 + 84);
        *(_QWORD *)(a1 + 72) = *(_QWORD *)(a2 + 100);
      }
      v7 = a1 + 188;
      *(_DWORD *)(a1 + 112) = *(_DWORD *)(a2 + 40);
      *(_DWORD *)(a1 + 108) = *(_DWORD *)(a2 + 108);
      *(_DWORD *)(a1 + 104) = *(_DWORD *)(a2 + 28);
      *(_DWORD *)(a1 + 212) = *(_DWORD *)(a2 + 788);
      *(_BYTE *)(a1 + 116) = (*(_DWORD *)(a2 + 44) & 0x800000) != 0;
      *(_BYTE *)(a1 + 118) = (*(_DWORD *)(a2 + 44) & 2) != 0;
      *(_BYTE *)(a1 + 136) = (*(_DWORD *)(a2 + 44) & 8) != 0;
      *(_BYTE *)(a1 + 137) = (*(_DWORD *)(a2 + 44) & 0x10) != 0;
      *(_BYTE *)(a1 + 117) = (*(_DWORD *)(a2 + 44) & 0x20) != 0;
      *(_BYTE *)(a1 + 138) = (*(_DWORD *)(a2 + 44) & 0x40) != 0;
      *(_DWORD *)(a1 + 140) = (*(_DWORD *)(a2 + 44) >> 7) & 3;
      *(_DWORD *)(a1 + 120) = *(_DWORD *)(a2 + 112);
      *(_DWORD *)(a1 + 124) = *(_DWORD *)(a2 + 116);
      *(_DWORD *)(a1 + 128) = *(_DWORD *)(a2 + 120);
      *(_DWORD *)(a1 + 132) = *(_DWORD *)(a2 + 124);
      *(_DWORD *)(a1 + 144) = *(_DWORD *)(a2 + 128);
      *(_OWORD *)(a1 + 148) = *(_OWORD *)(a2 + 724);
      *(_OWORD *)(a1 + 164) = *(_OWORD *)(a2 + 748);
      *(_DWORD *)(a1 + 180) = *(_DWORD *)(a2 + 740);
      *(_DWORD *)(a1 + 184) = *(_DWORD *)(a2 + 744);
      *(_BYTE *)(a1 + 556) = (*(_DWORD *)(a2 + 44) & 0x2000) != 0;
      *(_QWORD *)(a1 + 568) = *(_QWORD *)(a2 + 16);
      *(_DWORD *)(a1 + 584) = *(_DWORD *)(a2 + 24);
      *(_DWORD *)(a1 + 216) = *(_DWORD *)(a2 + 800);
      *(_DWORD *)(a1 + 588) = *(_DWORD *)(a2 + 796);
      *(_BYTE *)(a1 + 560) = (*(_DWORD *)(a2 + 44) & 0x8000000) != 0;
      do
      {
        *(_DWORD *)v7 = *(_DWORD *)(a2 - a1 + v7 + 576);
        v7 += 4LL;
        --v9;
      }
      while ( v9 );
      if ( !*(_QWORD *)(a2 + 32) )
        *(_BYTE *)(a1 + 89) = 1;
      *(_BYTE *)(a1 + 559) = a3;
      v10 = *(_DWORD *)(a2 + 44);
      if ( (v10 & 0x100000) != 0 )
      {
        *(_QWORD *)(a1 + 576) = *(_QWORD *)(a2 + 64);
        *(_BYTE *)(a1 + 557) = 1;
      }
      else if ( (v10 & 0x1000000) != 0 )
      {
        *(_BYTE *)(a1 + 558) = 1;
      }
      v11 = *(_DWORD *)(a2 + 804);
      if ( v11 )
      {
        if ( v11 > 0x10 )
        {
          v8 = -1073741811;
        }
        else
        {
          *(_DWORD *)(a1 + 296) = v11;
          for ( i = 0; i < *(_DWORD *)(a2 + 804); ++i )
          {
            *(_OWORD *)(16LL * i + a1 + 300) = *(_OWORD *)(16LL * i + a2 + 808);
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 80) + 40LL))(*(_QWORD *)(a1 + 80));
          }
        }
      }
      if ( *(_BYTE *)(a1 + 138) )
      {
        v24 = *(_DWORD *)(a2 + 144);
        *(_DWORD *)(a1 + 220) = v24;
        v7 = (unsigned int)(v24 - 1);
        if ( (_DWORD)v7 )
        {
          if ( (_DWORD)v7 == 1 )
          {
            *(_OWORD *)(a1 + 224) = *(_OWORD *)(a2 + 148);
            *(_OWORD *)(a1 + 240) = *(_OWORD *)(a2 + 164);
            *(_OWORD *)(a1 + 256) = *(_OWORD *)(a2 + 180);
            *(_OWORD *)(a1 + 272) = *(_OWORD *)(a2 + 196);
            *(_QWORD *)(a1 + 288) = *(_QWORD *)(a2 + 212);
          }
        }
        else
        {
          *(_OWORD *)(a1 + 224) = *(_OWORD *)(a2 + 148);
          *(_QWORD *)(a1 + 240) = *(_QWORD *)(a2 + 164);
          *(_DWORD *)(a1 + 248) = *(_DWORD *)(a2 + 172);
        }
      }
    }
  }
  v13 = *(_DWORD *)(a1 + 24);
  v14 = 0;
  if ( v13 == 3 )
  {
    started = CompositionSurfaceObject::StartCompositionEarly(
                *(CompositionSurfaceObject **)(a1 + 32),
                *(_QWORD *)(a1 + 40));
    v13 = *(_DWORD *)(a1 + 24);
    v14 = started;
  }
  v15 = *(_QWORD *)(a1 + 32);
  v16 = *(_BYTE *)(a1 + 559) == 0;
  v27 = *(_QWORD *)(a1 + 40);
  v28 = *(_QWORD *)(v15 + 24);
  v29 = *(_DWORD *)(a1 + 104);
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v26 = WdLogNewEntry5_WdAssertion(v7, v9);
    *(_QWORD *)(v26 + 24) = 2238LL;
    WdLogEvent5_WdAssertion(v26);
  }
  v17 = *(unsigned __int8 *)(a1 + 556);
  v18 = *(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int, int, BOOL, __int64, __int64, BOOL))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38048) + 120LL);
  v19 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 112LL))(a1, v9);
  v18(v15, v29, v19, *(_QWORD *)(a1 + 96), v13, v17, v16, v28, v27, v14);
  if ( v8 >= 0 )
  {
    v20 = *(_QWORD **)(a1 + 32);
    v8 = 0;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))v20[6])(v20 + 6) )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v20 + 7, 0LL);
      v20[8] = KeGetCurrentThread();
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))v20[6])(v20 + 6) )
        goto LABEL_27;
      CPushLock::ReleaseLock((CPushLock *)(v20 + 6));
    }
    v8 = -1073741816;
LABEL_27:
    if ( v8 >= 0 )
    {
      v8 = CCompositionSurface::NotifyTokenCompleted((CCompositionSurface *)(v20 + 5), (const struct CFlipToken *)a1);
      v21 = v20 + 7;
      if ( KeGetCurrentThread() == (struct _KTHREAD *)v20[8] )
      {
        v20[8] = 0LL;
        ExReleasePushLockExclusiveEx(v21, 0LL);
      }
      else
      {
        ExReleasePushLockSharedEx(v21, 0LL);
      }
      KeLeaveCriticalRegion();
      if ( v8 >= 0 && !*(_BYTE *)(a1 + 559) )
      {
        LOBYTE(v29) = 0;
        *(_DWORD *)(a1 + 24) = 3;
        CFlipToken::TraceStateChanged((CFlipToken *)a1);
        return (unsigned int)CompositionSurfaceObject::NotifyTokenInFrame(
                               *(CompositionSurfaceObject **)(a1 + 32),
                               (const struct CToken *)a1,
                               (bool *)&v29);
      }
    }
  }
  return (unsigned int)v8;
}
