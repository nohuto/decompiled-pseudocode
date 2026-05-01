/*
 * XREFs of ?CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x1800150D0
 * Callers:
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z @ 0x180015C10 (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x180016B60 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z.c)
 * Callees:
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800078A4 (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     CempPackageFamilyNameFromPsmKey @ 0x18000FFB0 (CempPackageFamilyNameFromPsmKey.c)
 *     StringCopyWorkerW @ 0x180011250 (StringCopyWorkerW.c)
 *     ?RmpPsmIsSharedEntityFromPsmKey@@YAJPEBGPEAE@Z @ 0x1800112A8 (-RmpPsmIsSharedEntityFromPsmKey@@YAJPEBGPEAE@Z.c)
 *     ?LogPendingEnd@ResourceSet@ExecutionModel@@AEAAXXZ @ 0x180012714 (-LogPendingEnd@ResourceSet@ExecutionModel@@AEAAXXZ.c)
 *     ?RmpActivityHostUpdateDigests@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x1800127F0 (-RmpActivityHostUpdateDigests@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180012AD0 (-RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180012B44 (-HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@.c)
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x180014F00 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ?RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x1800165D0 (-RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpPsmAppFamilyCompareForHashTable@@YAKPEAU_RTL_HASH_ENTRY@@PEAX@Z @ 0x180033BF8 (-RmpPsmAppFamilyCompareForHashTable@@YAKPEAU_RTL_HASH_ENTRY@@PEAX@Z.c)
 *     ?RmpActivityHostHasPpleResourceSet@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003C54C (-RmpActivityHostHasPpleResourceSet@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     memset_0 @ 0x18004651A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180046540 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ExecutionModel::ResourceSet::CompleteAcquire(ExecutionModel::ResourceSet *this, int a2)
{
  char v2; // r12
  _QWORD *v3; // rax
  __int64 v5; // r8
  _QWORD *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // xmm1_8
  __int64 v9; // rdi
  unsigned __int64 v10; // r13
  _OWORD *v11; // r14
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rbx
  _DWORD *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // r15
  int v23; // ebx
  size_t *v24; // r8
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  wchar_t *v29; // rbx
  __int64 v30; // rdi
  __int64 v31; // rdx
  unsigned __int64 v32; // r14
  unsigned __int64 v33; // r14
  __int64 v34; // r10
  unsigned __int64 v35; // r9
  struct _RM_ACTIVITY_HOST *v36; // rbx
  __int64 v37; // rcx
  unsigned int cchToCopya; // [rsp+20h] [rbp-E0h]
  size_t cchToCopy; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v40[4]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v41; // [rsp+54h] [rbp-ACh] BYREF
  int v42; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v43; // [rsp+60h] [rbp-A0h]
  __int64 v44; // [rsp+68h] [rbp-98h]
  __int128 v45; // [rsp+70h] [rbp-90h] BYREF
  __int64 v46; // [rsp+80h] [rbp-80h]
  wchar_t pszDest[232]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v48; // [rsp+260h] [rbp+160h] BYREF
  __int128 v49; // [rsp+270h] [rbp+170h]
  __int128 v50; // [rsp+280h] [rbp+180h]
  __int128 v51; // [rsp+290h] [rbp+190h]
  int v52; // [rsp+2A0h] [rbp+1A0h]
  int v53; // [rsp+2A4h] [rbp+1A4h]
  wchar_t pszSrc[232]; // [rsp+2B0h] [rbp+1B0h] BYREF

  v2 = a2;
  v3 = (_QWORD *)(*((_QWORD *)this + 164) + 80LL);
  v42 = a2;
  v5 = *v3;
  if ( *(_QWORD **)(*v3 + 8LL) != v3 )
    goto LABEL_38;
  v6 = (_QWORD *)v3[1];
  if ( (_QWORD *)*v6 != v3 )
    goto LABEL_38;
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  *(_OWORD *)v3 = 0LL;
  v7 = *((_QWORD *)this + 8);
  v8 = *((_QWORD *)this + 185);
  cchToCopya = *((_DWORD *)this + 2);
  v45 = *(_OWORD *)((char *)this + 1464);
  v46 = v8;
  ExecutionModel::BaseResourceSet::RecursiveVisit(v7, 1, 1u, (int *)&v45, cchToCopya, 1, &v41, v40, 0LL, (__int64)this);
  v9 = *((_QWORD *)this + 165);
  *((_DWORD *)this + 320) = 2;
  if ( (*(_BYTE *)(v9 + 836) & 1) == 0 )
    goto LABEL_25;
  v10 = *((_QWORD *)this + 3);
  v11 = (_OWORD *)((char *)this + 1296);
  v12 = *((_QWORD *)this + 162);
  v43 = v10;
  if ( *(ExecutionModel::ResourceSet **)(v12 + 8) != (ExecutionModel::ResourceSet *)((char *)this + 1296) )
    goto LABEL_38;
  v13 = (_QWORD *)*((_QWORD *)this + 163);
  if ( (_OWORD *)*v13 != v11 )
    goto LABEL_38;
  *v13 = v12;
  *(_QWORD *)(v12 + 8) = v13;
  *v11 = 0LL;
  --*(_DWORD *)(v9 + 1128);
  v14 = *(_QWORD *)this;
  *((_DWORD *)this + 332) = 2;
  (*(void (__fastcall **)(ExecutionModel::ResourceSet *))(v14 + 16))(this);
  (*(void (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)this + 16LL))(this);
  v15 = *((_QWORD *)this + 165);
  (*(void (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)this + 8LL))(this);
  v16 = (_DWORD *)(v15 + 1136);
  (*(void (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)this + 8LL))(this);
  v17 = *(_QWORD *)v16;
  if ( *(_DWORD **)(*(_QWORD *)v16 + 8LL) != v16 )
LABEL_38:
    __fastfail(3u);
  *(_QWORD *)v11 = v17;
  *((_QWORD *)this + 163) = v16;
  *(_QWORD *)(v17 + 8) = v11;
  *(_QWORD *)v16 = v11;
  ++v16[4];
  *((_DWORD *)this + 332) = 1;
  *((_BYTE *)this + 12) = 1;
  RmpActivityHostUpdateDigests((struct _RM_ACTIVITY_HOST *)v9, 3);
  RmpActivityHostUpdateImportance((struct _RM_ACTIVITY_HOST *)v9, 3u);
  QueryUnbiasedInterruptTime((PULONGLONG)(v9 + 1456));
  if ( (unsigned int)RmpActivityHostIsRevocable((struct _RM_ACTIVITY_HOST *)v9) )
    SetEvent(*(HANDLE *)(*(_QWORD *)(v9 + 56) + 88LL));
  v18 = *(_QWORD *)(v9 + 48);
  v19 = 0LL;
  *(_QWORD *)(v9 + 1208) = 0LL;
  v20 = *(_QWORD *)(v18 + 2720);
  v21 = *(_DWORD *)(v20 + 160);
  if ( (v21 & 3) == 0 )
  {
    *(_DWORD *)(v20 + 160) = v21 | 1;
    TpPostWork(*(_QWORD *)(v20 + 144));
  }
  if ( (*(_BYTE *)(v9 + 836) & 1) != 0 || (int)RmpActivityHostComputeAndApplyEnforcementSettings((char *)v9) >= 0 )
  {
    ExecutionModel::ResourceManager::HostApplyExternalResourcePriorities(v10, (struct _RM_ACTIVITY_HOST *)v9);
    if ( *(_DWORD *)(v9 + 624) == 2 )
    {
      v40[0] = 0;
      RmpPsmIsSharedEntityFromPsmKey((const unsigned __int16 *)(v9 + 88), v40);
      if ( !v40[0] )
      {
        v22 = *(_QWORD *)(v9 + 48);
        v44 = v22;
        if ( CempPackageFamilyNameFromPsmKey(v9 + 88, (__int64)pszSrc) >= 0 )
        {
          v23 = *(_DWORD *)(v9 + 620);
          memset_0(pszDest, 0, sizeof(pszDest));
          StringCopyWorkerW(pszDest, 0xE8uLL, v24, pszSrc, cchToCopy);
          v25 = *(_OWORD *)(v9 + 552);
          v26 = *(_OWORD *)(v9 + 568);
          v52 = *(_DWORD *)(v9 + 616);
          v48 = v25;
          v27 = *(_OWORD *)(v9 + 584);
          v53 = v23;
          v49 = v26;
          v28 = *(_OWORD *)(v9 + 600);
          v50 = v27;
          v51 = v28;
          v29 = pszDest;
          v30 = 314159LL;
          do
          {
            LOWORD(v41) = RtlUpcaseUnicodeChar(*v29++);
            v30 = BYTE1(v41) + 37 * ((unsigned __int8)v41 + 37 * v30);
          }
          while ( v29 < (wchar_t *)&v48 );
          v31 = BYTE1(v53)
              + 37
              * ((unsigned __int8)v53
               + 37
               * (HIBYTE(v52)
                + 37
                * (BYTE2(v52)
                 + 37
                 * (BYTE1(v52)
                  + 37
                  * ((unsigned __int8)v52
                   + 37
                   * (HIBYTE(v51) + 37 * (BYTE14(v51) + 37 * (BYTE13(v51) + 37 * (BYTE12(v51) + 37LL * BYTE11(v51))))))))));
          v32 = 0xBEEC149AF4096455uLL * BYTE2(v50)
              + 0x3C82EBCCD629C471LL * BYTE3(v50)
              + 0x8DBD43762DDB26BDuLL * BYTE12(v49)
              + 0x78803D01F0C17231LL * BYTE3(v49)
              + 0xF5BCA5B282606D41uLL * BYTE7(v49)
              + 0x423D249C25A50325LL * BYTE6(v48)
              + 0x407AFAF12AFB592DLL * BYTE8(v50)
              + 0x4128EAEEFF459821LL * HIBYTE(v48)
              + 0xECFE0C79B5739BCDuLL * (unsigned __int8)v51
              + 0xAA604B65C241EDD5uLL * BYTE2(v48)
              + 0xBD1CBAC2ED25B97DuLL * BYTE12(v48)
              + 0xBD90C36322378919uLL * BYTE5(v51)
              + 0x2B26220C747DAB5DLL * BYTE4(v50)
              + 0x84417E6FF051D6ADuLL * BYTE8(v48)
              + 0x92D64A9170D97459uLL * BYTE5(v48)
              + 0x38F8C7054F6DD0DDLL * BYTE4(v48)
              + 0x1CF3332BD290D80DLL * (unsigned __int8)v48
              + 0x2ECBEADD94E1B3F5LL * BYTE10(v50)
              + 0xDB9C20F4D76948E5uLL * BYTE6(v51)
              + 0x1D77462DBBD40701LL * BYTE7(v48)
              + 0xB5A728F1B3DF494DuLL * (unsigned __int8)v49
              + 0x6A88D147CBF58115LL * BYTE2(v49)
              + 0x8443F2CCD7EFCA65uLL * BYTE6(v49)
              + 0x4FE1DAF580C363FDLL * BYTE12(v50)
              + 0x8B7970C2A4EFB2A9uLL * BYTE9(v51)
              + 0x4D463845869B9CD9LL * BYTE5(v50)
              + 0x5D853AC4C14E51E9LL * BYTE9(v48)
              + 0x65EC3D53F206D09DLL * BYTE4(v51)
              + 0x1DD2179B35A84099LL * BYTE5(v49)
              + 0xC8228AB72E6AE889uLL * BYTE1(v51)
              + 0x7C5AC014A0AC9951LL * BYTE11(v49)
              + 0x6AE9F48AE50EFCC5LL * BYTE14(v48)
              + 0x65C63F607A7BA809LL * BYTE1(v49)
              + 0x3433B6F080FF8F35LL * BYTE10(v51)
              + 0x5A90B6DB573C2B45LL * BYTE14(v50)
              + 0xD1A7F3AEDA1FE1A5uLL * BYTE6(v50)
              + 0x7DA9078FE6510661LL * HIBYTE(v49)
              + 0x296E17CC49B5EC05LL * BYTE14(v49)
              + 0x981EFA65455B8049uLL * BYTE1(v50)
              + 0x14D2E4F3AFFE229LL * (BYTE9(v49) + 37LL * BYTE8(v49))
              + 37 * (BYTE2(v53) + 37 * v31);
          v33 = HIBYTE(v53)
              + 0x2F2665556EEF39E1LL * v30
              + 0xC53F5E946719795LL * BYTE2(v51)
              + 0x16EA6DB39BB240F9LL * BYTE13(v50)
              + 0x5526FE2C4673CF11LL * BYTE11(v48)
              + 0xF91DC2FB38F228B5uLL * BYTE10(v49)
              + 0x3BF4C3C47ADF2FF1LL * BYTE3(v48)
              + 0x40B7CD9739B584A1LL * HIBYTE(v50)
              + 0xDC6C00E405D269C1uLL * BYTE7(v51)
              + 0x4EA2BC662EBCED75LL * BYTE10(v48)
              + 0x4F5D696EC151561DLL * BYTE4(v49)
              + 0x9FEAE5B513875FC9uLL * BYTE1(v48)
              + 0xFCE97086A74B1CB9uLL * BYTE13(v49)
              + 0xC378F206849F0269uLL * BYTE9(v50)
              + 0xFC7A30A306398A8DuLL * (unsigned __int8)v50
              + 0x51C644DB3653E381LL * BYTE7(v50)
              + 0x73D058131B2A8879LL * BYTE13(v48)
              + 0x8BA4A57B9C3D7391uLL * BYTE11(v50)
              + 0x288D4C21D6A4D26DLL * BYTE8(v51)
              + 0xBB24DD21FAFC26B1uLL * BYTE3(v51)
              + v32;
          v19 = 0LL;
LABEL_18:
          v41 = *(_DWORD *)(v22 + 2548);
          v34 = -1LL << (v41 & 0x1F);
          v35 = v33 & v34;
          if ( v19 )
          {
            v22 = v44;
            goto LABEL_20;
          }
          if ( v41 >> 5 )
          {
            v22 = v44;
            v19 = *(_QWORD *)(v44 + 2552)
                + 8
                * ((((v33 & v34) >> 56)
                  + 37
                  * ((unsigned __int8)((v33 & v34) >> 48)
                   + 37
                   * ((unsigned __int8)((unsigned __int16)((v33 & v34) >> 32) >> 8)
                    + 37
                    * ((unsigned __int8)((v33 & v34) >> 32)
                     + 37
                     * ((((unsigned int)v33 & (unsigned int)v34) >> 24)
                      + 37
                      * ((unsigned __int8)(((unsigned int)v33 & (unsigned int)v34) >> 16)
                       + 37
                       * ((unsigned __int8)((unsigned __int16)(v33 & v34) >> 8) + 37 * ((unsigned __int8)v35 + 11623883)))))))) & ((v41 >> 5) - 1));
LABEL_20:
            while ( 1 )
            {
              v19 = *(_QWORD *)v19;
              if ( (v19 & 1) != 0 )
                break;
              if ( v35 == (v34 & *(_QWORD *)(v19 + 8)) )
              {
                if ( !RmpPsmAppFamilyCompareForHashTable((struct _RTL_HASH_ENTRY *)v19, pszDest) )
                  goto LABEL_18;
                v2 = v42;
                v10 = v43;
                if ( !v19 )
                  goto LABEL_33;
                goto LABEL_24;
              }
            }
          }
          v10 = v43;
          v2 = v42;
LABEL_33:
          v19 = 0LL;
        }
LABEL_24:
        v36 = *(struct _RM_ACTIVITY_HOST **)(v19 + 568);
        if ( v36 && RmpActivityHostHasPpleResourceSet(v36) )
          ExecutionModel::ResourceManager::HostApplyExternalResourcePriorities(v10, v36);
      }
    }
  }
LABEL_25:
  if ( (v2 & 1) != 0 )
  {
    v37 = *((_QWORD *)this + 214);
    if ( v37 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v37 + 32LL))(v37, *((_QWORD *)this + 215));
    *((_DWORD *)this + 333) |= 1u;
    ExecutionModel::ResourceSet::LogPendingEnd(this);
  }
}
