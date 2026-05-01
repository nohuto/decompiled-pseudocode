/*
 * XREFs of ?CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@3PEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVATOR@@_KPEAPEAV12@@Z @ 0x180013770
 * Callers:
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KPEAU_RM_ACTIVATOR@@PEA_N6PEAPEAVResourceSet@2@@Z @ 0x1800147E0 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITIO.c)
 * Callees:
 *     ?RmpSystemDuplicateHandle@@YAJPEAXKPEAPEAX@Z @ 0x180004C08 (-RmpSystemDuplicateHandle@@YAJPEAXKPEAPEAX@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180026480 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     CempHeapFreeForHashTable @ 0x180037C70 (CempHeapFreeForHashTable.c)
 *     ??2@YAPEAX_K@Z @ 0x180045B18 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180047B60 (_guard_dispatch_icall_nop.c)
 *     ?RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z @ 0x180064B2C (-RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::CreateInstance(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        void *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9,
        __int64 a10,
        _QWORD *a11)
{
  __int64 v12; // rbx
  _DWORD *v15; // rsi
  PVOID Heap; // rax
  __int64 v17; // r12
  volatile signed __int64 *v18; // r14
  _DWORD *v19; // rax
  _DWORD *v20; // rbx
  __int64 v21; // r13
  __int64 v22; // rbp
  unsigned int v23; // r8d
  unsigned __int64 v24; // rsi
  volatile signed __int64 **v25; // rdx
  NTSTATUS v26; // edi
  int v27; // edi
  _DWORD *v28; // rcx
  __int128 *v29; // rax
  __int128 v30; // xmm0
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdi
  void (__fastcall *v34)(_DWORD *); // rax
  _DWORD *v35; // rdi
  __int64 v36; // rcx
  _QWORD *v37; // rax
  _QWORD *v38; // r9
  _QWORD *v39; // rdi
  _QWORD *v40; // rcx
  _QWORD *v41; // rax
  struct _PEB *v43; // rcx
  char *v44; // r10
  char v45; // cl
  unsigned __int64 v46; // rcx
  unsigned int v47; // r12d
  __int64 v48; // r11
  _QWORD **v49; // r9
  _QWORD *v50; // r8
  unsigned __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rcx
  _QWORD *v54; // r8

  v12 = a3;
  v15 = 0LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x60uLL);
  v17 = 2LL;
  v18 = (volatile signed __int64 *)Heap;
  if ( !Heap )
  {
    v26 = -1073741801;
    goto LABEL_9;
  }
  *((_QWORD *)Heap + 6) = 0LL;
  *((_OWORD *)Heap + 4) = 0LL;
  *((_OWORD *)Heap + 5) = 0LL;
  *(_QWORD *)Heap = 0LL;
  *((_QWORD *)Heap + 3) = 0LL;
  *((_QWORD *)Heap + 4) = a10;
  *((_QWORD *)Heap + 5) = 1LL;
  *((_QWORD *)Heap + 2) = 1LL;
  *((_QWORD *)Heap + 1) = HIBYTE(a10)
                        + 37
                        * (BYTE6(a10)
                         + 37
                         * (BYTE5(a10)
                          + 37
                          * (BYTE4(a10)
                           + 37
                           * (BYTE3(a10)
                            + 37 * (BYTE2(a10) + 37 * (BYTE1(a10) + 37 * ((unsigned __int8)a10 + 11623883LL)))))));
  *((_QWORD *)Heap + 7) = a9;
  if ( _InterlockedIncrement64((volatile signed __int64 *)v12) <= 1 )
    __fastfail(0xEu);
  *((_QWORD *)Heap + 8) = v12;
  if ( a4 )
  {
    v26 = RmpSystemDuplicateHandle(a4, 1u, (PHANDLE)Heap + 9);
    if ( v26 >= 0 )
      v26 = 0;
    if ( v26 < 0 )
      goto LABEL_56;
  }
  v19 = operator new(0x6F0uLL);
  v20 = v19;
  if ( !v19 )
  {
    v12 = a3;
    v26 = -1073741801;
LABEL_56:
    RmpObjectRelease((PVOID)v18);
    goto LABEL_9;
  }
  v19[2] = 0;
  *(_QWORD *)v19 = &ExecutionModel::BaseResourceSet::`vftable';
  *((_WORD *)v19 + 6) = 0;
  *((_QWORD *)v19 + 3) = 0LL;
  v19[8] = -1;
  v19[9] = 1;
  *((_QWORD *)v19 + 5) = v19 + 10;
  *((_QWORD *)v19 + 6) = v19 + 10;
  *((_QWORD *)v19 + 7) = 0LL;
  v19[18] = -1;
  *((_QWORD *)v19 + 10) = 0LL;
  v19[22] = 101;
  *((_WORD *)v19 + 46) = 0;
  v19[24] = -1;
  *((_QWORD *)v19 + 13) = 0LL;
  v19[28] = 101;
  *((_WORD *)v19 + 58) = 0;
  v19[30] = -1;
  *((_QWORD *)v19 + 16) = 0LL;
  v19[34] = 101;
  *((_WORD *)v19 + 70) = 0;
  v19[36] = -1;
  *((_QWORD *)v19 + 19) = 0LL;
  v19[40] = 101;
  *((_WORD *)v19 + 82) = 0;
  v19[42] = -1;
  *((_QWORD *)v19 + 22) = 0LL;
  v19[46] = 101;
  *((_WORD *)v19 + 94) = 0;
  v19[48] = -1;
  *((_QWORD *)v19 + 25) = 0LL;
  v19[52] = 101;
  *((_WORD *)v19 + 106) = 0;
  v19[54] = -1;
  *((_QWORD *)v19 + 28) = 0LL;
  v19[58] = 101;
  *((_WORD *)v19 + 118) = 0;
  v19[60] = -1;
  *((_QWORD *)v19 + 31) = 0LL;
  v19[64] = 101;
  *((_WORD *)v19 + 130) = 0;
  v19[66] = -1;
  *((_QWORD *)v19 + 34) = 0LL;
  v19[70] = 101;
  *((_WORD *)v19 + 142) = 0;
  v19[72] = -1;
  *((_QWORD *)v19 + 37) = 0LL;
  v19[76] = 101;
  *((_WORD *)v19 + 154) = 0;
  v19[78] = -1;
  *((_QWORD *)v19 + 40) = 0LL;
  v19[82] = 101;
  *((_WORD *)v19 + 166) = 0;
  v19[84] = -1;
  *((_QWORD *)v19 + 43) = 0LL;
  v19[88] = 101;
  *((_WORD *)v19 + 178) = 0;
  v19[90] = -1;
  *((_QWORD *)v19 + 46) = 0LL;
  v19[94] = 101;
  *((_WORD *)v19 + 190) = 0;
  v19[96] = -1;
  *((_QWORD *)v19 + 49) = 0LL;
  v19[100] = 101;
  *((_WORD *)v19 + 202) = 0;
  v19[102] = -1;
  *((_QWORD *)v19 + 52) = 0LL;
  v19[106] = 101;
  *((_WORD *)v19 + 214) = 0;
  v19[108] = -1;
  *((_QWORD *)v19 + 55) = 0LL;
  v19[112] = 101;
  *((_WORD *)v19 + 226) = 0;
  v19[114] = -1;
  *((_QWORD *)v19 + 58) = 0LL;
  v19[118] = 101;
  *((_WORD *)v19 + 238) = 0;
  v19[120] = -1;
  *((_QWORD *)v19 + 61) = 0LL;
  v19[124] = 101;
  *((_WORD *)v19 + 250) = 0;
  v19[126] = -1;
  *((_QWORD *)v19 + 64) = 0LL;
  v19[130] = 101;
  *((_WORD *)v19 + 262) = 0;
  v19[132] = -1;
  *((_QWORD *)v19 + 67) = 0LL;
  v19[136] = 101;
  *((_WORD *)v19 + 274) = 0;
  v19[138] = -1;
  *((_QWORD *)v19 + 70) = 0LL;
  v19[142] = 101;
  *((_WORD *)v19 + 286) = 0;
  v19[144] = -1;
  *((_QWORD *)v19 + 73) = 0LL;
  v19[148] = 101;
  *((_WORD *)v19 + 298) = 0;
  v19[150] = -1;
  *((_QWORD *)v19 + 76) = 0LL;
  v19[154] = 101;
  *((_WORD *)v19 + 310) = 0;
  v19[156] = -1;
  *((_QWORD *)v19 + 79) = 0LL;
  v19[160] = 101;
  *((_WORD *)v19 + 322) = 0;
  v19[162] = -1;
  *((_QWORD *)v19 + 82) = 0LL;
  v19[166] = 101;
  *((_WORD *)v19 + 334) = 0;
  v19[168] = -1;
  *((_QWORD *)v19 + 85) = 0LL;
  v19[172] = 101;
  *((_WORD *)v19 + 346) = 0;
  v19[174] = -1;
  *((_QWORD *)v19 + 88) = 0LL;
  v19[178] = 101;
  *((_WORD *)v19 + 358) = 0;
  v19[180] = -1;
  *((_QWORD *)v19 + 91) = 0LL;
  v19[184] = 101;
  *((_WORD *)v19 + 370) = 0;
  v19[186] = -1;
  *((_QWORD *)v19 + 94) = 0LL;
  v19[190] = 101;
  *((_WORD *)v19 + 382) = 0;
  v19[192] = -1;
  *((_QWORD *)v19 + 97) = 0LL;
  v19[196] = 101;
  *((_WORD *)v19 + 394) = 0;
  v19[198] = -1;
  *((_QWORD *)v19 + 100) = 0LL;
  v19[202] = 101;
  *((_WORD *)v19 + 406) = 0;
  v19[204] = -1;
  *((_QWORD *)v19 + 103) = 0LL;
  v19[208] = 101;
  *((_WORD *)v19 + 418) = 0;
  v19[210] = -1;
  *((_QWORD *)v19 + 106) = 0LL;
  v19[214] = 101;
  *((_WORD *)v19 + 430) = 0;
  v19[216] = -1;
  *((_QWORD *)v19 + 109) = 0LL;
  v19[220] = 101;
  *((_WORD *)v19 + 442) = 0;
  v19[222] = -1;
  *((_QWORD *)v19 + 112) = 0LL;
  v19[226] = 101;
  *((_WORD *)v19 + 454) = 0;
  v19[228] = -1;
  *((_QWORD *)v19 + 115) = 0LL;
  v19[232] = 101;
  *((_WORD *)v19 + 466) = 0;
  v19[234] = -1;
  *((_QWORD *)v19 + 118) = 0LL;
  v19[238] = 101;
  *((_WORD *)v19 + 478) = 0;
  v19[240] = -1;
  *((_QWORD *)v19 + 121) = 0LL;
  v19[244] = 101;
  *((_WORD *)v19 + 490) = 0;
  v19[246] = -1;
  *((_QWORD *)v19 + 124) = 0LL;
  v19[250] = 101;
  *((_WORD *)v19 + 502) = 0;
  v19[252] = -1;
  *((_QWORD *)v19 + 127) = 0LL;
  v19[256] = 101;
  *((_WORD *)v19 + 514) = 0;
  v19[258] = -1;
  *((_QWORD *)v19 + 130) = 0LL;
  v19[262] = 101;
  *((_WORD *)v19 + 526) = 0;
  v19[264] = -1;
  *((_QWORD *)v19 + 133) = 0LL;
  v19[268] = 101;
  *((_WORD *)v19 + 538) = 0;
  v19[270] = -1;
  *((_QWORD *)v19 + 136) = 0LL;
  v19[274] = 101;
  *((_WORD *)v19 + 550) = 0;
  v19[276] = -1;
  *((_QWORD *)v19 + 139) = 0LL;
  v19[280] = 101;
  *((_WORD *)v19 + 562) = 0;
  v19[282] = -1;
  *((_QWORD *)v19 + 142) = 0LL;
  v19[286] = 101;
  *((_WORD *)v19 + 574) = 0;
  v19[288] = -1;
  *((_QWORD *)v19 + 145) = 0LL;
  v19[292] = 101;
  *((_WORD *)v19 + 586) = 0;
  v19[294] = -1;
  *((_QWORD *)v19 + 148) = 0LL;
  v19[298] = 101;
  *((_WORD *)v19 + 598) = 0;
  v19[300] = -1;
  *((_QWORD *)v19 + 151) = 0LL;
  v19[304] = 101;
  *((_WORD *)v19 + 610) = 0;
  v19[306] = -1;
  *((_QWORD *)v19 + 154) = 0LL;
  v19[310] = 101;
  *((_WORD *)v19 + 622) = 0;
  v19[312] = -1;
  *((_QWORD *)v19 + 157) = 0LL;
  v19[316] = 101;
  *((_WORD *)v19 + 634) = 0;
  *((_QWORD *)v19 + 159) = 0LL;
  *((_QWORD *)v19 + 160) = 0LL;
  v19[322] = -1;
  *(_QWORD *)v19 = &ExecutionModel::ResourceSet::`vftable';
  *((_QWORD *)v19 + 164) = 0LL;
  *((_QWORD *)v19 + 165) = 0LL;
  v19[332] = 2;
  v19[334] = -1;
  v19[335] = 0;
  v19[336] = 101;
  v19[337] = 32;
  v19[346] = 0;
  *((_QWORD *)v19 + 174) = 0LL;
  *((_QWORD *)v19 + 175) = 0LL;
  v19[352] = 0;
  *((_QWORD *)v19 + 178) = 0LL;
  v19[358] = 101;
  *((_WORD *)v19 + 718) = 0;
  *((_QWORD *)v19 + 181) = 0LL;
  v19[364] = 101;
  *((_WORD *)v19 + 730) = 0;
  *((_QWORD *)v19 + 184) = 0LL;
  v19[370] = 101;
  *((_WORD *)v19 + 742) = 0;
  v19[422] = 0;
  *((_QWORD *)v19 + 212) = 0LL;
  v19[360] = 1;
  v19[354] = 0;
  v19[366] = 2;
  v19[372] = 101;
  v19[373] = 101;
  v19[374] = 101;
  v19[375] = 101;
  v19[376] = 101;
  v19[377] = 101;
  v19[378] = 101;
  v19[379] = 101;
  v19[380] = 101;
  v19[381] = 101;
  v19[382] = 101;
  v19[383] = 101;
  v19[384] = 101;
  v19[385] = 101;
  v19[386] = 101;
  v19[387] = 101;
  v19[388] = 101;
  v19[389] = 101;
  v19[390] = 101;
  v19[391] = 101;
  v19[392] = 101;
  v19[393] = 101;
  v19[394] = 101;
  v19[395] = 101;
  v19[396] = 101;
  v19[397] = 101;
  v19[398] = 101;
  v19[399] = 101;
  v19[400] = 101;
  v19[401] = 101;
  v19[402] = 101;
  v19[403] = 101;
  v19[404] = 101;
  v19[405] = 101;
  v19[406] = 101;
  v19[407] = 101;
  v19[408] = 101;
  v19[409] = 101;
  v19[410] = 101;
  v19[411] = 101;
  v19[412] = 101;
  v19[413] = 101;
  v19[414] = 101;
  v19[415] = 101;
  v19[416] = 101;
  v19[417] = 101;
  v19[418] = 101;
  v19[419] = 101;
  v19[420] = 101;
  v19[421] = 101;
  v19[427] = 0;
  *((_WORD *)v19 + 688) = 0;
  *((_BYTE *)v19 + 1378) = 0;
  v19[345] = 1;
  v19[338] = 0;
  *((_OWORD *)v19 + 85) = 0LL;
  v19[342] = 101;
  *((_QWORD *)v19 + 214) = 0LL;
  *((_QWORD *)v19 + 215) = 0LL;
  *((_QWORD *)v19 + 219) = -1LL;
  *((_QWORD *)v19 + 220) = 0LL;
  *((_QWORD *)v19 + 221) = 0LL;
  *((_OWORD *)v19 + 108) = 0LL;
  *((_QWORD *)v19 + 218) = 0LL;
  v19[333] = 0;
  *((_OWORD *)v19 + 81) = 0LL;
  *((_QWORD *)v19 + 8) = a1;
  v19[4] = *(_DWORD *)(a1 + 16);
  *((_QWORD *)v19 + 3) = *(_QWORD *)(a1 + 24);
  *((_QWORD *)v19 + 159) = *(_QWORD *)(a1 + 1272);
  if ( _InterlockedIncrement64((volatile signed __int64 *)(a7 + 16)) <= 1 )
    __fastfail(0xEu);
  *((_QWORD *)v19 + 165) = a7;
  if ( _InterlockedIncrement64(v18 + 2) <= 1 )
    __fastfail(0xEu);
  *((_QWORD *)v19 + 164) = v18;
  *((_QWORD *)v19 + 219) = *((_QWORD *)v18 + 4);
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v19 + 8LL))(v19);
  *((_QWORD *)v18 + 6) = v20;
  v21 = *(_QWORD *)(*((_QWORD *)v20 + 3) + 128LL) + 536LL;
  RtlAcquireSRWLockExclusive(*(_QWORD *)(*((_QWORD *)v20 + 3) + 128LL) + 552LL);
  v22 = (unsigned int)(2 * (*(_DWORD *)(v21 + 4) >> 5));
  if ( *(_DWORD *)v21 >= (unsigned int)v22 )
  {
    v43 = NtCurrentPeb();
    if ( (unsigned int)v22 < 4 )
      v22 = 4LL;
    v44 = (char *)RtlAllocateHeap(v43->ProcessHeap, 0, 8LL * (unsigned int)v22);
    if ( v44 )
    {
      if ( (((_DWORD)v22 - 1) & (unsigned int)v22) != 0 )
      {
        v45 = -1;
        do
        {
          ++v45;
          LODWORD(v22) = (unsigned int)v22 >> 1;
        }
        while ( (_DWORD)v22 );
        v22 = (unsigned int)(1 << v45);
      }
      if ( (unsigned int)v22 > 0x4000000 )
        v22 = 0x4000000LL;
      v46 = (unsigned int)v22;
      if ( v44 > &v44[8 * v22] )
        v46 = 0LL;
      if ( v46 )
        memset64(v44, v21 | 1, v46);
      v47 = 0;
      v48 = -1LL << (*(_BYTE *)(v21 + 4) & 0x1F);
      if ( (*(_DWORD *)(v21 + 4) & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v49 = (_QWORD **)(*(_QWORD *)(v21 + 8) + 8LL * v47);
          while ( 1 )
          {
            v50 = *v49;
            if ( ((unsigned __int8)*v49 & 1) != 0 )
              break;
            *v49 = (_QWORD *)*v50;
            v51 = ((((unsigned __int64)v48 & v50[1]) >> 56)
                 + 37
                 * ((unsigned __int8)(((unsigned __int64)v48 & v50[1]) >> 48)
                  + 37
                  * ((unsigned __int8)((unsigned __int16)(((unsigned __int64)v48 & v50[1]) >> 32) >> 8)
                   + 37
                   * ((unsigned __int8)(((unsigned __int64)v48 & v50[1]) >> 32)
                    + 37
                    * ((((unsigned int)v48 & (_DWORD)v50[1]) >> 24)
                     + 37
                     * ((unsigned __int8)(((unsigned int)v48 & (_DWORD)v50[1]) >> 16)
                      + 37
                      * (37 * ((unsigned __int8)(v48 & v50[1]) + 11623883)
                       + (unsigned __int8)((unsigned __int16)(v48 & v50[1]) >> 8)))))))) & (unsigned int)(v22 - 1);
            *v50 = *(_QWORD *)&v44[8 * v51];
            *(_QWORD *)&v44[8 * v51] = v50;
          }
          ++v47;
        }
        while ( v47 < *(_DWORD *)(v21 + 4) >> 5 );
      }
      *(_DWORD *)(v21 + 4) &= 0x1Fu;
      v52 = *(_QWORD *)(v21 + 8);
      *(_DWORD *)(v21 + 4) |= 32 * v22;
      *(_QWORD *)(v21 + 8) = v44;
      if ( v52 )
        CempHeapFreeForHashTable(v52, 0LL);
      v17 = 2LL;
    }
  }
  v23 = *(_DWORD *)(v21 + 4);
  v24 = v18[1] & (-1LL << (v23 & 0x1F));
  v25 = (volatile signed __int64 **)(*(_QWORD *)(v21 + 8)
                                   + 8
                                   * ((HIBYTE(v24)
                                     + 37
                                     * (BYTE6(v24)
                                      + 37
                                      * (BYTE5(v24)
                                       + 37
                                       * (BYTE4(v24)
                                        + 37
                                        * (BYTE3(v24)
                                         + 37
                                         * (BYTE2(v24) + 37 * (37 * ((unsigned __int8)v24 + 11623883) + BYTE1(v24)))))))) & ((v23 >> 5) - 1)));
  *v18 = (volatile signed __int64)*v25;
  *v25 = v18;
  ++*(_DWORD *)v21;
  RtlReleaseSRWLockExclusive(v21 + 16);
  v15 = v20;
  v12 = a3;
  v26 = 0;
LABEL_9:
  v27 = v26 | 0x10000000;
  if ( v27 < 0 )
  {
    if ( v15 )
    {
      (*(void (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v15 + 32LL))(v15, 0LL);
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v15 + 16LL))(v15);
    }
  }
  else
  {
    v28 = v15 + 334;
    v29 = a2;
    do
    {
      v28 += 32;
      v30 = *v29;
      v29 += 8;
      *((_OWORD *)v28 - 8) = v30;
      *((_OWORD *)v28 - 7) = *(v29 - 7);
      *((_OWORD *)v28 - 6) = *(v29 - 6);
      *((_OWORD *)v28 - 5) = *(v29 - 5);
      *((_OWORD *)v28 - 4) = *(v29 - 4);
      *((_OWORD *)v28 - 3) = *(v29 - 3);
      *((_OWORD *)v28 - 2) = *(v29 - 2);
      *((_OWORD *)v28 - 1) = *(v29 - 1);
      --v17;
    }
    while ( v17 );
    *(_OWORD *)v28 = *v29;
    *((_OWORD *)v28 + 1) = v29[1];
    *((_OWORD *)v28 + 2) = v29[2];
    *((_OWORD *)v28 + 3) = v29[3];
    *((_OWORD *)v28 + 4) = v29[4];
    *((_OWORD *)v28 + 5) = v29[5];
    *((_OWORD *)v28 + 6) = v29[6];
    *((_QWORD *)v28 + 14) = *((_QWORD *)v29 + 14);
    v15[322] = *((_DWORD *)a2 + 2);
    v15[323] = *((_DWORD *)a2 + 8);
    v15[8] = a8;
    v15[2] = 0;
    v15[320] = 1;
    v31 = *((_QWORD *)v15 + 214);
    if ( v31 != a5 )
    {
      if ( a5 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a5 + 8LL))(a5);
        v31 = *((_QWORD *)v15 + 214);
      }
      if ( v31 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
      *((_QWORD *)v15 + 214) = a5;
    }
    *((_QWORD *)v15 + 215) = a6;
    *((_QWORD *)v15 + 216) = *((_QWORD *)a2 + 11);
    *((_QWORD *)v15 + 217) = *((_QWORD *)a2 + 14);
    *((_QWORD *)v15 + 218) = *((_QWORD *)a2 + 17);
    v32 = *(_QWORD *)v15;
    v33 = *((_QWORD *)v15 + 165);
    *(_OWORD *)(v15 + 18) = a2[5];
    v34 = *(void (__fastcall **)(_DWORD *))(v32 + 8);
    *(_OWORD *)(v15 + 22) = a2[6];
    *(_OWORD *)(v15 + 26) = a2[7];
    *(_OWORD *)(v15 + 30) = a2[8];
    *((_QWORD *)v15 + 17) = *((_QWORD *)a2 + 18);
    v34(v15);
    v35 = (_DWORD *)(v33 + 1112);
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v15 + 8LL))(v15);
    v36 = *(_QWORD *)v35;
    v37 = v15 + 324;
    if ( *(_DWORD **)(*(_QWORD *)v35 + 8LL) != v35 )
      goto LABEL_61;
    *v37 = v36;
    *((_QWORD *)v15 + 163) = v35;
    *(_QWORD *)(v36 + 8) = v37;
    *(_QWORD *)v35 = v37;
    ++v35[4];
    v38 = (_QWORD *)*((_QWORD *)v15 + 164);
    v15[332] = 0;
    v39 = *(_QWORD **)(v12 + 200);
    if ( v39 != (_QWORD *)(v12 + 200) )
    {
      v53 = *(unsigned int *)(v38[6] + 1288LL);
      do
      {
        if ( (int)RmpEmPriorityCompare(v53, *(unsigned int *)(*(v39 - 4) + 1288LL)) > 0 )
          break;
        v39 = (_QWORD *)*v39;
      }
      while ( v39 != v54 );
    }
    v40 = (_QWORD *)v39[1];
    v41 = v38 + 10;
    if ( (_QWORD *)*v40 != v39 )
LABEL_61:
      __fastfail(3u);
    *v41 = v39;
    v38[11] = v40;
    *v40 = v41;
    v39[1] = v41;
    if ( (*((_BYTE *)a2 + 42) & 0x20) != 0 && (a2[1] & 0x100) == 0 )
      v15[333] |= 8u;
    v27 = 0;
    *a11 = v15;
  }
  return (unsigned int)v27;
}
