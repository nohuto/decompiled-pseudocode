/*
 * XREFs of ?InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NW4TokenState@CTokenBase@@@Z @ 0x1C0015C60
 * Callers:
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C000AC70 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 *     ?CreateCompleted@CFlipToken@@SAJ_KPEAVCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C0076D20 (-CreateCompleted@CFlipToken@@SAJ_KPEAVCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHIS.c)
 * Callees:
 *     ?DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ @ 0x1C0004434 (-DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ.c)
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C00070D4 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?StartCompositionEarly@CompositionSurfaceObject@@QEAA_N_K@Z @ 0x1C00760CC (-StartCompositionEarly@CompositionSurfaceObject@@QEAA_N_K@Z.c)
 *     ?FromBuffer@CFlipExBuffer@@SAPEAV1@PEAVCCompositionBuffer@@@Z @ 0x1C0077EE0 (-FromBuffer@CFlipExBuffer@@SAPEAV1@PEAVCCompositionBuffer@@@Z.c)
 *     ?PairBind@CCompositionSurface@@IEAAJPEAVCFlipExBuffer@@@Z @ 0x1C00781E8 (-PairBind@CCompositionSurface@@IEAAJPEAVCFlipExBuffer@@@Z.c)
 *     ?InsertCascadedTokenSignal@CFlipExBuffer@@QEAAJ_K@Z @ 0x1C0078EA8 (-InsertCascadedTokenSignal@CFlipExBuffer@@QEAAJ_K@Z.c)
 *     ?InsertCascadedTokenWait@CFlipExBuffer@@QEAAJPEA_K0@Z @ 0x1C0078F80 (-InsertCascadedTokenWait@CFlipExBuffer@@QEAAJPEA_K0@Z.c)
 */

__int64 __fastcall CFlipToken::InitializeCompleted(__int64 a1, __int64 a2, char a3)
{
  bool v3; // zf
  char v7; // cl
  int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // r15
  char v12; // bl
  int v13; // esi
  int v14; // ebp
  __int64 v15; // rdi
  void (__fastcall *v16)(_QWORD, __int64, _QWORD, __int64, int, int, bool, __int64, __int64, _DWORD); // r12
  __int64 v17; // r14
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 result; // rax
  _QWORD *v21; // rbx
  _QWORD *v22; // rdi
  unsigned int *v23; // r8
  int v24; // ebp
  unsigned int *v25; // r10
  unsigned int v26; // r9d
  unsigned __int64 v27; // rdx
  unsigned int v28; // ecx
  __int64 v29; // rbx
  __int64 v30; // rsi
  __int64 v31; // rdi
  _QWORD *v32; // rax
  _QWORD *v33; // rbx
  unsigned __int8 v34; // bl
  int v35; // r12d
  void (__fastcall *v36)(_QWORD, _QWORD, _QWORD, __int64, int, int, int, __int64, __int64, int); // r13
  __int64 v37; // r15
  int v38; // ebx
  __int64 v39; // r14
  int v40; // edi
  __int64 v41; // rsi
  unsigned int v42; // eax
  __int64 v43; // rbx
  __int64 v44; // rbp
  __int64 v45; // rdx
  _QWORD *v46; // rdi
  _QWORD *v47; // rbx
  __int64 v48; // rcx
  int v49; // edx
  int v50; // ecx
  int v51; // r8d
  int v52; // ecx
  int v53; // ecx
  int v54; // edx
  int v55; // ecx
  int v56; // r8d
  CFlipExBuffer *v57; // rsi
  int inserted; // eax
  __int64 v59; // rdx
  __int128 *v60; // rax
  __int64 v61; // rdx
  _BYTE *v62; // rcx
  __int128 v63; // xmm0
  __int128 v64; // xmm1
  __int128 v65; // xmm0
  __int128 v66; // xmm1
  __int128 v67; // xmm0
  __int128 v68; // xmm1
  __int128 v69; // xmm0
  __int128 v70; // xmm1
  unsigned __int64 v71; // rdx
  __int128 v72; // xmm1
  __int128 v73; // xmm0
  __int128 v74; // xmm1
  __int64 v75; // rax
  __int64 v76; // rcx
  unsigned __int64 v77; // rbx
  _QWORD *v78; // rax
  void (__fastcall ***v79)(_QWORD, __int64); // rcx
  _QWORD *v80; // r8
  _QWORD *v81; // rdx
  int v82; // [rsp+28h] [rbp-280h]
  int v83; // [rsp+60h] [rbp-248h]
  int Buffer; // [rsp+60h] [rbp-248h]
  int v85; // [rsp+60h] [rbp-248h]
  char v86[4]; // [rsp+64h] [rbp-244h] BYREF
  unsigned __int64 v87; // [rsp+68h] [rbp-240h] BYREF
  unsigned __int64 v88; // [rsp+70h] [rbp-238h] BYREF
  struct CCompositionBuffer *v89; // [rsp+78h] [rbp-230h] BYREF
  __int64 v90; // [rsp+80h] [rbp-228h]
  unsigned int *v91; // [rsp+88h] [rbp-220h]
  _BYTE v92[464]; // [rsp+90h] [rbp-218h] BYREF

  v90 = a1;
  v3 = DXGGLOBAL::m_pGlobal == 0LL;
  *(_DWORD *)(a1 + 24) = 2;
  if ( v3 )
  {
    WdLogSingleEntry1(1LL, 2373LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v50,
          v49,
          v51,
          0,
          2,
          -1,
          (__int64)L"m_pGlobal != NULL",
          2373LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  v83 = (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38073) + 16LL))(a1 + 80);
  if ( v83 < 0 )
  {
    *(_DWORD *)(a1 + 24) = 6;
  }
  else if ( (*(_DWORD *)(a2 + 44) & 0x180) == 0
         || (*(_DWORD *)(a2 + 44) & 0x180) == 0x80
         || (*(_DWORD *)(a2 + 44) & 0x180) == 0x180 )
  {
    *(_QWORD *)(a1 + 96) = *(_QWORD *)a2;
    if ( *(_DWORD *)(a2 + 84) < *(_DWORD *)(a2 + 92) && *(_DWORD *)(a2 + 88) < *(_DWORD *)(a2 + 96) )
    {
      *(_DWORD *)(a1 + 52) = 1;
      *(_OWORD *)(a1 + 56) = *(_OWORD *)(a2 + 84);
      *(_QWORD *)(a1 + 72) = *(_QWORD *)(a2 + 100);
    }
    *(_DWORD *)(a1 + 112) = *(_DWORD *)(a2 + 40);
    *(_DWORD *)(a1 + 108) = *(_DWORD *)(a2 + 108);
    *(_DWORD *)(a1 + 104) = *(_DWORD *)(a2 + 28);
    *(_DWORD *)(a1 + 212) = *(_DWORD *)(a2 + 788);
    *(_BYTE *)(a1 + 116) = (*(_DWORD *)(a2 + 44) & 0x800000) != 0;
    *(_BYTE *)(a1 + 118) = (*(_DWORD *)(a2 + 44) & 2) != 0;
    *(_BYTE *)(a1 + 136) = (*(_DWORD *)(a2 + 44) & 8) != 0;
    *(_BYTE *)(a1 + 137) = (*(_DWORD *)(a2 + 44) & 0x10) != 0;
    *(_BYTE *)(a1 + 117) = (*(_DWORD *)(a2 + 44) & 0x20) != 0;
    v7 = (*(_DWORD *)(a2 + 44) & 0x40) != 0;
    *(_BYTE *)(a1 + 138) = v7;
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
    *(_DWORD *)(a1 + 556) = *(_DWORD *)(a2 + 720);
    *(_BYTE *)(a1 + 560) = (*(_DWORD *)(a2 + 44) & 0x2000) != 0;
    *(_QWORD *)(a1 + 568) = *(_QWORD *)(a2 + 16);
    *(_DWORD *)(a1 + 584) = *(_DWORD *)(a2 + 24);
    *(_DWORD *)(a1 + 216) = *(_DWORD *)(a2 + 800);
    *(_DWORD *)(a1 + 588) = *(_DWORD *)(a2 + 796);
    *(_BYTE *)(a1 + 565) = (*(_DWORD *)(a2 + 44) & 0x8000000) != 0;
    *(_DWORD *)(a1 + 188) = *(_DWORD *)(a2 + 764);
    *(_DWORD *)(a1 + 192) = *(_DWORD *)(a2 + 768);
    *(_DWORD *)(a1 + 196) = *(_DWORD *)(a2 + 772);
    *(_DWORD *)(a1 + 200) = *(_DWORD *)(a2 + 776);
    *(_DWORD *)(a1 + 204) = *(_DWORD *)(a2 + 780);
    *(_DWORD *)(a1 + 208) = *(_DWORD *)(a2 + 784);
    if ( !*(_QWORD *)(a2 + 32) )
      *(_BYTE *)(a1 + 89) = 1;
    *(_BYTE *)(a1 + 563) = a3;
    v8 = *(_DWORD *)(a2 + 44);
    if ( (v8 & 0x100000) != 0 )
    {
      *(_QWORD *)(a1 + 576) = *(_QWORD *)(a2 + 64);
      *(_BYTE *)(a1 + 561) = 1;
    }
    else if ( (v8 & 0x1000000) != 0 )
    {
      *(_BYTE *)(a1 + 562) = 1;
    }
    v9 = *(_DWORD *)(a2 + 804);
    v83 = 0;
    if ( v9 )
    {
      if ( v9 > 0x10 )
      {
        v83 = -1073741811;
      }
      else
      {
        *(_DWORD *)(a1 + 296) = v9;
        v10 = 0;
        v83 = 0;
        if ( *(_DWORD *)(a2 + 804) )
        {
          v83 = 0;
          do
          {
            *(_OWORD *)(16LL * v10 + a1 + 300) = *(_OWORD *)(16LL * v10 + a2 + 808);
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 80) + 40LL))(*(_QWORD *)(a1 + 80));
            ++v10;
          }
          while ( v10 < *(_DWORD *)(a2 + 804) );
          v7 = *(_BYTE *)(a1 + 138);
        }
      }
    }
    if ( v7 )
    {
      v52 = *(_DWORD *)(a2 + 144);
      *(_DWORD *)(a1 + 220) = v52;
      v53 = v52 - 1;
      if ( v53 )
      {
        if ( v53 == 1 )
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
  else
  {
    v83 = -1073741811;
  }
  v3 = *(_DWORD *)(a1 + 24) == 3;
  LODWORD(v87) = 0;
  if ( v3 )
    LODWORD(v87) = CompositionSurfaceObject::StartCompositionEarly(
                     *(CompositionSurfaceObject **)(a1 + 32),
                     *(_QWORD *)(a1 + 40));
  if ( !DXGGLOBAL::m_pGlobal )
  {
    WdLogSingleEntry1(1LL, 2373LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v55,
          v54,
          v56,
          0,
          2,
          -1,
          (__int64)L"m_pGlobal != NULL",
          2373LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  v11 = *(_QWORD *)(a1 + 40);
  v12 = *(_BYTE *)(a1 + 563);
  v13 = *(unsigned __int8 *)(a1 + 560);
  v14 = *(_DWORD *)(a1 + 24);
  v15 = *(_QWORD *)(a1 + 96);
  v16 = *(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64, int, int, bool, __int64, __int64, _DWORD))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38073) + 352LL);
  v17 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL);
  v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 112LL))(a1);
  v19 = *(unsigned int *)(a1 + 104);
  v91 = (unsigned int *)(a1 + 104);
  v16(*(_QWORD *)(a1 + 32), v19, v18, v15, v14, v13, v12 == 0, v17, v11, v87);
  result = (unsigned int)v83;
  if ( v83 >= 0 )
  {
    v21 = *(_QWORD **)(a1 + 32);
    v22 = v21 + 6;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v21 + 6, 0LL);
    v23 = (unsigned int *)(v21 + 12);
    v24 = 0;
    v21[7] = KeGetCurrentThread();
    Buffer = 0;
    v89 = 0LL;
    v25 = 0LL;
    v26 = 0;
    v27 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    do
    {
      v28 = *v23;
      if ( *v23 && (unsigned int)v27 >= v28 && (unsigned int)v27 - v28 <= 0x3E8 )
      {
        if ( (unsigned int)v27 - v28 <= 0x1F4 )
        {
          ++v23[1];
          goto LABEL_27;
        }
      }
      else
      {
        *(_QWORD *)v23 = 0LL;
        if ( !v25 )
          v25 = v23;
      }
      ++v26;
      v23 += 2;
    }
    while ( v26 < 2 );
    if ( *v25 )
    {
      if ( (unsigned int)v27 - *v25 <= 0x1F4 )
        ++v25[1];
    }
    else
    {
      *v25 = v27;
      v25[1] = 1;
    }
LABEL_27:
    if ( v21[18] )
    {
      Buffer = CCompositionSurface::FindBuffer((CCompositionSurface *)(v21 + 5), *(_QWORD *)(a1 + 40), &v89);
      if ( Buffer >= 0 )
      {
        v88 = 0LL;
        v87 = 0LL;
        memset(v92, 0, 0x1C8uLL);
        v57 = CFlipExBuffer::FromBuffer(v89);
        inserted = CFlipExBuffer::InsertCascadedTokenWait(v57, &v88, &v87);
        Buffer = inserted;
        if ( inserted >= 0
          || inserted == -1073741267
          && (CFlipExBuffer::DisableCascadedSignaling(v57),
              LOBYTE(v59) = 1,
              Buffer = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v21[18] + 32LL))(v21[18], v59),
              Buffer >= 0)
          && (Buffer = CCompositionSurface::PairBind((CCompositionSurface *)(v21 + 5), v57), Buffer >= 0)
          && (Buffer = CFlipExBuffer::InsertCascadedTokenWait(v57, &v88, &v87), Buffer >= 0) )
        {
          if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 168LL))(a1) )
          {
            v60 = (__int128 *)(a1 + 104);
            v61 = 3LL;
            v62 = v92;
            do
            {
              v62 += 128;
              v63 = *v60;
              v64 = v60[1];
              v60 += 8;
              *((_OWORD *)v62 - 8) = v63;
              v65 = *(v60 - 6);
              *((_OWORD *)v62 - 7) = v64;
              v66 = *(v60 - 5);
              *((_OWORD *)v62 - 6) = v65;
              v67 = *(v60 - 4);
              *((_OWORD *)v62 - 5) = v66;
              v68 = *(v60 - 3);
              *((_OWORD *)v62 - 4) = v67;
              v69 = *(v60 - 2);
              *((_OWORD *)v62 - 3) = v68;
              v70 = *(v60 - 1);
              *((_OWORD *)v62 - 2) = v69;
              *((_OWORD *)v62 - 1) = v70;
              --v61;
            }
            while ( v61 );
            v71 = v88;
            v72 = v60[1];
            *(_OWORD *)v62 = *v60;
            v73 = v60[2];
            *((_OWORD *)v62 + 1) = v72;
            v74 = v60[3];
            v75 = *((_QWORD *)v60 + 8);
            *((_OWORD *)v62 + 2) = v73;
            *((_OWORD *)v62 + 3) = v74;
            *((_QWORD *)v62 + 8) = v75;
            v76 = v21[18];
            v77 = v87;
            Buffer = (*(__int64 (__fastcall **)(__int64, unsigned __int64, unsigned __int64, _BYTE *))(*(_QWORD *)v76 + 40LL))(
                       v76,
                       v71,
                       v87,
                       v92);
            if ( Buffer < 0 )
              CFlipExBuffer::InsertCascadedTokenSignal(v57, v77);
          }
        }
      }
    }
    if ( KeGetCurrentThread() == (struct _KTHREAD *)v22[1] )
    {
      v22[1] = 0LL;
      ExReleasePushLockExclusiveEx(v22, 0LL);
    }
    else
    {
      ExReleasePushLockSharedEx(v22, 0LL);
    }
    KeLeaveCriticalRegion();
    result = (unsigned int)Buffer;
    if ( Buffer >= 0 && !*(_BYTE *)(a1 + 563) )
    {
      v29 = *(_QWORD *)(a1 + 32);
      v30 = *(_QWORD *)(a1 + 40);
      *(_DWORD *)(a1 + 24) = 3;
      KeEnterCriticalRegion();
      v31 = v29 + 48;
      ExAcquirePushLockSharedEx(v29 + 48, 0LL);
      if ( !*(_DWORD *)(v29 + 128) || (v32 = *(_QWORD **)(v29 + 112), v33 = (_QWORD *)(v29 + 112), v32 == v33) )
      {
LABEL_88:
        v34 = 0;
      }
      else
      {
        while ( *(v32 - 1) != v30 )
        {
          v32 = (_QWORD *)*v32;
          if ( v32 == v33 )
            goto LABEL_88;
        }
        v34 = (*(__int64 (__fastcall **)(_QWORD *))(*(v32 - 3) + 32LL))(v32 - 3);
      }
      if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v31 + 8) )
      {
        *(_QWORD *)(v31 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v31, 0LL);
      }
      else
      {
        ExReleasePushLockSharedEx(v31, 0LL);
      }
      KeLeaveCriticalRegion();
      v35 = v34;
      v36 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, int, int, int, __int64, __int64, int))(*((_QWORD *)DXGGLOBAL_GetGlobal() + 38073) + 352LL);
      v37 = *(_QWORD *)(v90 + 40);
      v38 = *(unsigned __int8 *)(v90 + 560);
      v39 = *(_QWORD *)(*(_QWORD *)(v90 + 32) + 24LL);
      v40 = *(_DWORD *)(v90 + 24);
      if ( !*(_BYTE *)(v90 + 563) )
        v24 = 1;
      v41 = *(_QWORD *)(v90 + 96);
      v42 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v90 + 112LL))(v90);
      v82 = v38;
      v43 = v90;
      v36(*(_QWORD *)(v90 + 32), *v91, v42, v41, v40, v82, v24, v39, v37, v35);
      v44 = *(_QWORD *)(v43 + 32);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v44 + 48, 0LL);
      *(_QWORD *)(v44 + 56) = KeGetCurrentThread();
      v45 = *(_QWORD *)(v43 + 40);
      v86[0] = 0;
      if ( !*(_DWORD *)(v44 + 128) || (v46 = *(_QWORD **)(v44 + 112), v46 == (_QWORD *)(v44 + 112)) )
      {
LABEL_91:
        v85 = -1073741275;
      }
      else
      {
        while ( *(v46 - 1) != v45 )
        {
          v46 = (_QWORD *)*v46;
          if ( v46 == (_QWORD *)(v44 + 112) )
            goto LABEL_91;
        }
        v85 = (*(__int64 (__fastcall **)(_QWORD *, __int64, char *))(*(v46 - 3) + 120LL))(v46 - 3, v43, v86);
        if ( v85 >= 0 )
        {
          if ( v86[0] )
          {
            v47 = (_QWORD *)*v46;
            while ( v47 != (_QWORD *)(v44 + 112) )
            {
              v78 = (_QWORD *)*v47;
              v79 = (void (__fastcall ***)(_QWORD, __int64))(v47 - 3);
              v80 = v47;
              v47 = v78;
              if ( (_QWORD *)v78[1] != v80 || (v81 = (_QWORD *)v80[1], (_QWORD *)*v81 != v80) )
                __fastfail(3u);
              *v81 = v78;
              v78[1] = v81;
              --*(_DWORD *)(v44 + 128);
              if ( v79 )
                (**v79)(v79, 1LL);
            }
          }
        }
      }
      v48 = v44 + 48;
      if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v44 + 56) )
      {
        *(_QWORD *)(v44 + 56) = 0LL;
        ExReleasePushLockExclusiveEx(v48, 0LL);
      }
      else
      {
        ExReleasePushLockSharedEx(v48, 0LL);
      }
      KeLeaveCriticalRegion();
      return (unsigned int)v85;
    }
  }
  return result;
}
