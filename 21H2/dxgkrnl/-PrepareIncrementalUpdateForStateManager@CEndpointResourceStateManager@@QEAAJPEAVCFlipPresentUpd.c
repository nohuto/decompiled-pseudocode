/*
 * XREFs of ?PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@PEAUFlipManagerObject@@@Z @ 0x1C007FE94
 * Callers:
 *     ?CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_N_KPEAVCFlipPropertySet@@PEAPEAVCFlipPresentUpdate@@PEAPEAUFlipManagerTokenIFlipInfo@@@Z @ 0x1C007D264 (-CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_N_KPEAVCFlipPropertySet@@PEAPEAVCFlipPresent.c)
 * Callees:
 *     ?Create@CBufferRealization@@SAJAEBUCSM_REALIZATION_INFO@@_NPEAPEAV1@@Z @ 0x1C0007780 (-Create@CBufferRealization@@SAJAEBUCSM_REALIZATION_INFO@@_NPEAPEAV1@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?AddUsageReference@CPoolBufferResource@@QEAAXXZ @ 0x1C007EFAC (-AddUsageReference@CPoolBufferResource@@QEAAXXZ.c)
 *     ?GetSerializedUpdate@CResourceStateUpdateSerializer@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C007FA2C (-GetSerializedUpdate@CResourceStateUpdateSerializer@@QEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     ?IncreaseAddedBufferSize@CResourceStateUpdateSerializer@@QEAAJII@Z @ 0x1C007FABC (-IncreaseAddedBufferSize@CResourceStateUpdateSerializer@@QEAAJII@Z.c)
 *     ?IncreaseAddedContentSize@CResourceStateUpdateSerializer@@QEAAJII@Z @ 0x1C007FAF0 (-IncreaseAddedContentSize@CResourceStateUpdateSerializer@@QEAAJII@Z.c)
 *     ?IncreaseUpdatedContentSize@CResourceStateUpdateSerializer@@QEAAJII@Z @ 0x1C007FB24 (-IncreaseUpdatedContentSize@CResourceStateUpdateSerializer@@QEAAJII@Z.c)
 *     ?RebindCompositionSurfaceBuffer@CContentResource@@QEAAJPEAVCCompositionSwapchainBuffer@@@Z @ 0x1C008131C (-RebindCompositionSurfaceBuffer@CContentResource@@QEAAJPEAVCCompositionSwapchainBuffer@@@Z.c)
 *     ?Allocate@CResourceStateUpdateSerializer@@QEAAJK@Z @ 0x1C008198C (-Allocate@CResourceStateUpdateSerializer@@QEAAJK@Z.c)
 *     ?Create@CCompositionSwapchainBuffer@@SAJ_N0PEAUFlipManagerObject@@_KPEAPEAV1@@Z @ 0x1C0082EE0 (-Create@CCompositionSwapchainBuffer@@SAJ_N0PEAUFlipManagerObject@@_KPEAPEAV1@@Z.c)
 */

__int64 __fastcall CEndpointResourceStateManager::PrepareIncrementalUpdateForStateManager(
        CEndpointResourceStateManager **this,
        struct CFlipPresentUpdate *a2,
        struct FlipManagerObject *a3)
{
  CEndpointResourceStateManager *v3; // r9
  CEndpointResourceStateManager *v4; // r13
  signed int v5; // ebx
  int v6; // r11d
  char v7; // r15
  char v8; // r14
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned int v11; // edi
  unsigned int v12; // r10d
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned int v17; // eax
  char v18; // cl
  int v19; // edx
  __int64 v20; // r10
  signed int v21; // eax
  unsigned int v22; // ecx
  unsigned int v23; // eax
  _QWORD *v24; // rsi
  _QWORD *v25; // rdi
  __int64 v26; // r9
  __int64 v27; // rax
  char v28; // r10
  __int64 v29; // r12
  CContentResource *v30; // rsi
  struct DXGGLOBAL *Global; // rax
  unsigned __int64 v32; // r9
  int v33; // eax
  CEndpointResourceStateManager *v34; // r15
  struct CBufferRealization *v35; // rsi
  unsigned int v36; // r14d
  __int64 v37; // rax
  _QWORD *v38; // r13
  __int64 v39; // rax
  __int64 v40; // rax
  int v41; // eax
  struct CBufferRealization *v42; // r14
  struct DXGGLOBAL *v43; // rax
  unsigned int v44; // r14d
  struct DXGGLOBAL *v45; // rax
  int v46; // eax
  __int64 v47; // rcx
  CEndpointResourceStateManager *v48; // r8
  _DWORD *v49; // r9
  _DWORD *v50; // r10
  char v51; // al
  CEndpointResourceStateManager *v52; // r11
  _DWORD *v53; // rcx
  __int64 v54; // rax
  _DWORD *v55; // rdx
  _QWORD *v56; // rdi
  _DWORD *v57; // r12
  _DWORD *v58; // r14
  _DWORD *v59; // r15
  _QWORD *v60; // r13
  _DWORD *v61; // rcx
  __int64 v62; // rax
  _QWORD *v63; // rsi
  CPoolBufferResource *v64; // rdx
  __int64 v65; // rax
  _DWORD *v66; // rdx
  char v68; // [rsp+38h] [rbp-89h]
  char v69; // [rsp+39h] [rbp-88h]
  struct CBufferRealization *v70; // [rsp+40h] [rbp-81h] BYREF
  unsigned int v71; // [rsp+48h] [rbp-79h]
  _QWORD *v72; // [rsp+50h] [rbp-71h]
  PVOID P; // [rsp+58h] [rbp-69h] BYREF
  int v74; // [rsp+60h] [rbp-61h]
  __int128 v75; // [rsp+68h] [rbp-59h]
  __int128 v76; // [rsp+78h] [rbp-49h]
  _DWORD *v77; // [rsp+88h] [rbp-39h]
  __int64 v78; // [rsp+90h] [rbp-31h]
  __int64 v79; // [rsp+98h] [rbp-29h]
  int v80; // [rsp+A0h] [rbp-21h]
  __int64 v81; // [rsp+A8h] [rbp-19h]
  _DWORD v82[2]; // [rsp+B0h] [rbp-11h] BYREF
  __int64 v83; // [rsp+B8h] [rbp-9h]
  __int64 v84; // [rsp+C0h] [rbp-1h]
  __int64 v85; // [rsp+C8h] [rbp+7h]
  __int64 v86; // [rsp+D0h] [rbp+Fh]
  int v88; // [rsp+128h] [rbp+67h]
  bool v91; // [rsp+140h] [rbp+7Fh]

  v3 = *this;
  P = 0LL;
  v74 = 0;
  v4 = (CEndpointResourceStateManager *)this;
  v75 = 0LL;
  v76 = 0LL;
  v5 = 0;
  v77 = 0LL;
  v78 = 0LL;
  v6 = 0;
  v79 = 0LL;
  v7 = 0;
  v80 = 0;
  v8 = 0;
  v91 = 1;
  do
  {
    if ( v3 == v4 )
      break;
    v9 = (__int64)v3 + 16;
    if ( !v3 )
      v9 = 24LL;
    v10 = *(_QWORD *)(*(_QWORD *)v9 + 32LL);
    if ( !v10 || (v11 = *(_DWORD *)(v10 + 12), v12 = 0, v13 = *(_QWORD *)(v10 + 24), !v11) )
    {
LABEL_23:
      v91 = 0;
      goto LABEL_24;
    }
    v14 = *(_QWORD *)(v10 + 16);
    while ( 1 )
    {
      v15 = 32LL * v12;
      if ( *(_QWORD *)(v15 + v14) != *(_QWORD *)&GUID_2d65776f_bd54_4cd7_9bd2_2232e4fcd974.Data1
        || *(_QWORD *)(v15 + v14 + 8) != *(_QWORD *)GUID_2d65776f_bd54_4cd7_9bd2_2232e4fcd974.Data4 )
      {
        v16 = *(unsigned int *)(v15 + v14 + 16);
        goto LABEL_19;
      }
      v16 = *(unsigned int *)(v15 + v14 + 16);
      if ( (_DWORD)v16 == 8 )
        break;
LABEL_19:
      v13 += v16;
      if ( ++v12 >= v11 )
        goto LABEL_23;
    }
    if ( !v13 )
      goto LABEL_23;
    v17 = *(_DWORD *)v13;
    v18 = *(_BYTE *)(v13 + 4);
    if ( *(_DWORD *)v13 > 0x1Cu || (v19 = 285213696, !_bittest(&v19, v17)) )
    {
      if ( v17 != 87 )
      {
        if ( v17 == 103 || v17 - 106 <= 1 )
          v8 = 1;
        else
          v5 = -1073741811;
      }
    }
    if ( !v18 )
      goto LABEL_23;
LABEL_24:
    v20 = (__int64)v3 + 24;
    if ( !v3 )
      v20 = 32LL;
    if ( (*(_BYTE *)v20 & 1) != 0 )
    {
      v21 = CResourceStateUpdateSerializer::IncreaseAddedBufferSize((CResourceStateUpdateSerializer *)&P, 0x10u, 0);
      v6 = HIDWORD(v78);
      v5 = v21;
      v7 = 1;
    }
    if ( v5 >= 0 && (*(_BYTE *)v20 & 2) != 0 )
    {
      v22 = v6;
      v23 = v6 + 16;
      v6 = -1;
      v7 = 1;
      if ( v23 >= v22 )
        v6 = v23;
      v5 = v23 < v22 ? 0xC0000095 : 0;
      HIDWORD(v78) = v6;
    }
    v3 = *(CEndpointResourceStateManager **)v3;
  }
  while ( v5 >= 0 );
  v69 = v7;
  v24 = (_QWORD *)((char *)v4 + 16);
  v25 = (_QWORD *)*((_QWORD *)v4 + 2);
  v72 = (_QWORD *)((char *)v4 + 16);
  v68 = v8;
  if ( v5 < 0 )
    goto LABEL_105;
  while ( 2 )
  {
    if ( v25 != v24 )
    {
      v26 = (__int64)(v25 + 3);
      if ( !v25 )
        v26 = 32LL;
      v81 = v26;
      if ( (*(_BYTE *)v26 & 1) != 0 )
        v5 = CResourceStateUpdateSerializer::IncreaseAddedContentSize((CResourceStateUpdateSerializer *)&P, 0x10u, 0);
      if ( v5 >= 0 )
      {
        v27 = (__int64)(v25 + 7);
        if ( !v25 )
          v27 = 64LL;
        if ( (*(_BYTE *)v27 & 1) != 0 )
        {
          v5 = CResourceStateUpdateSerializer::IncreaseUpdatedContentSize(
                 (CResourceStateUpdateSerializer *)&P,
                 0x28u,
                 0);
          v29 = (__int64)(v25 + 2);
          if ( !v25 )
            v29 = 24LL;
          v30 = *(CContentResource **)v29;
          if ( v5 >= 0 )
          {
            if ( !*((_QWORD *)v30 + 6) || !v7 && *((_BYTE *)v30 + 65) == v28 && *((_BYTE *)v30 + 64) == v8 )
              goto LABEL_69;
            Global = DXGGLOBAL_GetGlobal();
            (*(void (__fastcall **)(CContentResource *))(*((_QWORD *)Global + 38073) + 224LL))(v30);
            v32 = *((_QWORD *)v30 + 5);
            v70 = 0LL;
            v33 = CCompositionSwapchainBuffer::Create(v91, v8, a3, v32, &v70);
            v34 = *(CEndpointResourceStateManager **)v4;
            v35 = v70;
            v5 = v33;
            v71 = 0;
            v36 = 0;
            if ( v33 >= 0 )
            {
              while ( v34 != v4 )
              {
                v37 = (__int64)v34 + 16;
                if ( !v34 )
                  v37 = 24LL;
                v38 = *(_QWORD **)v37;
                v39 = (__int64)v34 + 24;
                if ( !v34 )
                  v39 = 32LL;
                if ( (*(_BYTE *)v39 & 2) == 0 )
                {
                  v86 = 0LL;
                  v70 = 0LL;
                  v83 = v38[7];
                  v84 = v38[9];
                  v40 = v38[5];
                  v82[0] = v68 != 0 ? 4 : 2;
                  v82[1] = v36;
                  v85 = v40;
                  v41 = CBufferRealization::Create((const struct CSM_REALIZATION_INFO *)v82, 1, &v70);
                  v42 = v70;
                  v5 = v41;
                  if ( v41 >= 0 )
                  {
                    v5 = (*(__int64 (__fastcall **)(struct CBufferRealization *, struct CBufferRealization *))(*(_QWORD *)v35 + 208LL))(
                           v35,
                           v70);
                    if ( v5 >= 0 )
                      v42 = 0LL;
                  }
                  if ( v42 )
                    (**(void (__fastcall ***)(struct CBufferRealization *, __int64))v42)(v42, 1LL);
                  v43 = DXGGLOBAL_GetGlobal();
                  v44 = v71;
                  (*(void (__fastcall **)(_QWORD *, _QWORD))(*((_QWORD *)v43 + 38073) + 232LL))(v38, v71);
                  v36 = v44 + 1;
                  v71 = v36;
                }
                v34 = *(CEndpointResourceStateManager **)v34;
                v4 = (CEndpointResourceStateManager *)this;
                if ( v5 < 0 )
                  goto LABEL_65;
              }
              v5 = CContentResource::RebindCompositionSurfaceBuffer(*(CContentResource **)v29, v35);
              if ( v5 >= 0 )
              {
                v47 = (__int64)(v25 + 6);
                v35 = 0LL;
                if ( !v25 )
                  v47 = 56LL;
                *(_QWORD *)v47 = *(_QWORD *)(*(_QWORD *)v29 + 56LL);
              }
            }
LABEL_65:
            if ( v35 )
              (**(void (__fastcall ***)(struct CBufferRealization *, __int64))v35)(v35, 1LL);
            v45 = DXGGLOBAL_GetGlobal();
            (*(void (**)(void))(*((_QWORD *)v45 + 38073) + 240LL))();
            if ( v5 >= 0 )
            {
              v26 = v81;
              goto LABEL_69;
            }
          }
        }
        else
        {
LABEL_69:
          if ( (*(_BYTE *)v26 & 2) != 0 )
          {
            v46 = -1;
            if ( (unsigned int)(HIDWORD(v79) + 16) >= HIDWORD(v79) )
              v46 = HIDWORD(v79) + 16;
            v5 = (unsigned int)(HIDWORD(v79) + 16) < HIDWORD(v79) ? 0xC0000095 : 0;
            HIDWORD(v79) = v46;
          }
        }
      }
      v25 = (_QWORD *)*v25;
      v24 = v72;
      v7 = v69;
      v8 = v68;
      if ( v5 < 0 )
        goto LABEL_105;
      continue;
    }
    break;
  }
  v88 = CResourceStateUpdateSerializer::Allocate((CResourceStateUpdateSerializer *)&P, 0x62754346u);
  v5 = v88;
  if ( v88 >= 0 )
  {
    v48 = *(CEndpointResourceStateManager **)v4;
    if ( *(CEndpointResourceStateManager **)v4 != v4 )
    {
      v49 = (_DWORD *)*((_QWORD *)&v75 + 1);
      v50 = (_DWORD *)v75;
      do
      {
        v51 = *((_BYTE *)v48 + 24);
        v52 = *(CEndpointResourceStateManager **)v48;
        if ( (v51 & 1) != 0 )
        {
          *v50 = 2;
          v53 = v50;
          v54 = *((_QWORD *)v48 + 2);
          v50 += 4;
          *((_QWORD *)v53 + 1) = v54;
          ++*(_DWORD *)(v54 + 24);
          *((_BYTE *)v48 + 24) |= 4u;
          v51 = *((_BYTE *)v48 + 24);
        }
        if ( (v51 & 2) != 0 )
        {
          *v49 = 0;
          v55 = v49;
          v49 += 4;
          *((_QWORD *)v55 + 1) = *(_QWORD *)(*((_QWORD *)v48 + 2) + 40LL);
          *((_BYTE *)v48 + 24) |= 8u;
        }
        v48 = v52;
      }
      while ( v52 != v4 );
      *((_QWORD *)&v75 + 1) = v49;
      *(_QWORD *)&v75 = v50;
    }
    v56 = (_QWORD *)*v24;
    if ( (_QWORD *)*v24 != v24 )
    {
      v57 = v77;
      v58 = (_DWORD *)*((_QWORD *)&v76 + 1);
      v59 = (_DWORD *)v76;
      do
      {
        v60 = (_QWORD *)*v56;
        if ( (v56[3] & 1) != 0 )
        {
          *v59 = 3;
          v61 = v59;
          v62 = v56[2];
          v59 += 4;
          *((_QWORD *)v61 + 1) = v62;
          ++*(_DWORD *)(v62 + 24);
          *((_BYTE *)v56 + 24) |= 4u;
        }
        if ( (v56[7] & 1) != 0 )
        {
          *v57 = 4;
          v63 = v57;
          v57 += 10;
          v64 = (CPoolBufferResource *)v56[5];
          v63[1] = *(_QWORD *)(v56[2] + 40LL);
          v65 = v56[4];
          v63[3] = v65;
          if ( v65 )
            ++*(_DWORD *)(v65 + 8);
          v63[2] = v64;
          if ( v64 )
          {
            ++*((_DWORD *)v64 + 6);
            CPoolBufferResource::AddUsageReference(v64);
          }
          v63[4] = v56[6];
          *((_BYTE *)v56 + 56) |= 2u;
          v24 = v72;
        }
        if ( (v56[3] & 2) != 0 )
        {
          *v58 = 1;
          v66 = v58;
          v58 += 4;
          *((_QWORD *)v66 + 1) = *(_QWORD *)(v56[2] + 40LL);
          *((_BYTE *)v56 + 24) |= 8u;
        }
        v56 = v60;
      }
      while ( v60 != v24 );
      v5 = v88;
      *((_QWORD *)&v76 + 1) = v58;
      *(_QWORD *)&v76 = v59;
      v77 = v57;
    }
    CResourceStateUpdateSerializer::GetSerializedUpdate((CResourceStateUpdateSerializer *)&P, a2);
  }
LABEL_105:
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v5;
}
