/*
 * XREFs of DpiGetAdapterInfo @ 0x1C017A47C
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C0176AF4 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z @ 0x1C02098EC (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     DpiOpenPnpRegistryKey @ 0x1C017A1D0 (DpiOpenPnpRegistryKey.c)
 *     DxgkRetrieveStringFromRegistry @ 0x1C017B620 (DxgkRetrieveStringFromRegistry.c)
 *     DxgkFreeUnicodeString @ 0x1C0188EC0 (DxgkFreeUnicodeString.c)
 *     DpiFreeAdapterInfo @ 0x1C02C1BB4 (DpiFreeAdapterInfo.c)
 */

__int64 __fastcall DpiGetAdapterInfo(__int64 a1, _DWORD *a2, _QWORD *a3, _OWORD *a4)
{
  __int64 v8; // r14
  char v9; // r13
  __int64 v10; // rbx
  int v11; // edx
  int v12; // ecx
  unsigned int v13; // edx
  unsigned int v14; // ecx
  unsigned int v15; // edx
  unsigned int v16; // ecx
  unsigned int v17; // edx
  unsigned int v18; // ecx
  unsigned int v19; // r8d
  unsigned int v20; // edx
  unsigned int v21; // ecx
  unsigned int v22; // edx
  unsigned int v23; // ecx
  unsigned int v24; // edx
  unsigned int v25; // ecx
  unsigned int v26; // edx
  unsigned int v27; // ecx
  unsigned int v28; // edx
  unsigned int v29; // ecx
  int v30; // edx
  char v31; // al
  unsigned int v32; // eax
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rbx
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rdx
  HANDLE v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // rax
  __int64 v89; // rax
  HANDLE v90; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  void *KeyHandle; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING v94; // [rsp+58h] [rbp-A8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v96[36]; // [rsp+A0h] [rbp-60h] BYREF

  v90 = 0LL;
  memset(v96, 0, 0x118uLL);
  v8 = *(_QWORD *)(a1 + 64);
  v9 = 1;
  v10 = *(_QWORD *)(v8 + 40);
  if ( a3 )
  {
    memset(a3, 0, 0x448uLL);
    *a3 = *(_QWORD *)(v8 + 48);
    v11 = 0;
    v12 = 1;
    if ( *(_DWORD *)(v8 + 504) )
      v12 = *(_DWORD *)(v8 + 504);
    *((_DWORD *)a3 + 2) = v12;
    *(_OWORD *)((char *)a3 + 12) = *(_OWORD *)(v8 + 2656);
    *(_OWORD *)((char *)a3 + 28) = *(_OWORD *)(v8 + 4856);
    *(_QWORD *)((char *)a3 + 44) = *(_QWORD *)(v8 + 2672);
    *((_DWORD *)a3 + 13) = *(_DWORD *)(v8 + 1124);
    *((_DWORD *)a3 + 14) = *(_DWORD *)(v8 + 1128);
    *((_DWORD *)a3 + 15) = *(_DWORD *)(v8 + 1132);
    *((_DWORD *)a3 + 16) = *(_DWORD *)(v8 + 1136);
    *((_DWORD *)a3 + 17) = *(_DWORD *)(v8 + 1140);
    *((_DWORD *)a3 + 18) = *(_DWORD *)(v8 + 1120);
    LOBYTE(v11) = *(_BYTE *)(v8 + 1152) != 0;
    v13 = *((_DWORD *)a3 + 19) & 0xFFFFFFFE | v11;
    *((_DWORD *)a3 + 19) = v13;
    v14 = v13 & 0xFFFFFFFD | (*(_BYTE *)(v8 + 1153) != 0 ? 2 : 0);
    *((_DWORD *)a3 + 19) = v14;
    v15 = v14 & 0xFFFFFFFB | (*(_BYTE *)(v8 + 480) != 0 ? 4 : 0);
    *((_DWORD *)a3 + 19) = v15;
    v16 = v15 & 0xFFFFFFF7 | (*(_BYTE *)(v8 + 2692) != 0 ? 8 : 0);
    *((_DWORD *)a3 + 19) = v16;
    v17 = v16 & 0xFFFFFFEF | (*(_BYTE *)(v8 + 2693) != 0 ? 0x10 : 0);
    *((_DWORD *)a3 + 19) = v17;
    v18 = v17 & 0xFFFFFFDF | (*(_BYTE *)(v8 + 1154) != 0 ? 0x20 : 0);
    *((_DWORD *)a3 + 19) = v18;
    v19 = v18 & 0xFFFFBFFF | (*(_BYTE *)(v8 + 481) != 0 ? 0x4000 : 0);
    *((_DWORD *)a3 + 19) = v19;
    v20 = v19 & 0xFFFFEFFF | (*(_DWORD *)(v8 + 3484) != -1 ? 0x1000 : 0);
    *((_DWORD *)a3 + 19) = v20;
    v21 = v20 & 0xFFFFFFBF | (*(_DWORD *)(v8 + 3224) != -1 ? 0x40 : 0);
    *((_DWORD *)a3 + 19) = v21;
    v22 = v21 & 0xFFFFFF7F | (*(_BYTE *)(v8 + 2740) != 0 ? 0x80 : 0);
    *((_DWORD *)a3 + 19) = v22;
    v23 = v22 & 0xFFFFFEFF | (*(_BYTE *)(v8 + 1158) != 0 ? 0x100 : 0);
    *((_DWORD *)a3 + 19) = v23;
    v24 = v23 & 0xFFFFFDFF | (*(_BYTE *)(v8 + 2695) != 0 ? 0x200 : 0);
    *((_DWORD *)a3 + 19) = v24;
    v25 = v24 & 0xFFFFDFFF | (*(_BYTE *)(v8 + 2694) != 0 ? 0x2000 : 0);
    *((_DWORD *)a3 + 19) = v25;
    v26 = v25 & 0xFFFFFBFF | (*(_BYTE *)(v8 + 2698) != 0 ? 0x400 : 0);
    *((_DWORD *)a3 + 19) = v26;
    v27 = v26 & 0xFFFFF7FF | (*(_BYTE *)(v8 + 2699) != 0 ? 0x800 : 0);
    *((_DWORD *)a3 + 19) = v27;
    v28 = v27 & 0xFFFF7FFF | (*(_BYTE *)(v8 + 2741) != 0 ? 0x8000 : 0);
    *((_DWORD *)a3 + 19) = v28;
    v29 = v28 & 0xFFFEFFFF | (*(_BYTE *)(v8 + 2742) != 0 ? 0x10000 : 0);
    *((_DWORD *)a3 + 19) = v29;
    v30 = v29 ^ (v29 ^ (*(_DWORD *)(v8 + 1300) << 13)) & 0x20000;
    *((_DWORD *)a3 + 19) = v30;
    *((_DWORD *)a3 + 19) = v30 & 0xFFFBFFFF | (*(_BYTE *)(v8 + 1159) != 0 ? 0x40000 : 0);
    if ( !*(_QWORD *)(v10 + 184) || (v31 = 1, !*(_QWORD *)(v10 + 192)) )
      v31 = 0;
    *((_BYTE *)a3 + 80) = v31;
    a3[11] = *(_QWORD *)(v10 + 272);
    a3[12] = *(_QWORD *)(v10 + 280);
    a3[13] = *(_QWORD *)(v10 + 288);
    a3[14] = *(_QWORD *)(v10 + 296);
    a3[15] = *(_QWORD *)(v10 + 304);
    a3[16] = *(_QWORD *)(v10 + 312);
    a3[17] = *(_QWORD *)(v10 + 320);
    a3[18] = *(_QWORD *)(v10 + 328);
    a3[19] = *(_QWORD *)(v10 + 336);
    a3[20] = *(_QWORD *)(v10 + 344);
    a3[21] = *(_QWORD *)(v10 + 352);
    a3[22] = *(_QWORD *)(v10 + 360);
    a3[23] = *(_QWORD *)(v10 + 368);
    a3[24] = *(_QWORD *)(v10 + 376);
    a3[25] = *(_QWORD *)(v10 + 384);
    a3[26] = *(_QWORD *)(v10 + 392);
    a3[27] = *(_QWORD *)(v10 + 400);
    a3[28] = *(_QWORD *)(v10 + 408);
    a3[29] = *(_QWORD *)(v10 + 416);
    a3[30] = *(_QWORD *)(v10 + 424);
    a3[31] = *(_QWORD *)(v10 + 432);
    a3[32] = *(_QWORD *)(v10 + 440);
    a3[33] = *(_QWORD *)(v10 + 448);
    a3[34] = *(_QWORD *)(v10 + 456);
    a3[35] = *(_QWORD *)(v10 + 464);
    a3[36] = *(_QWORD *)(v10 + 472);
    a3[37] = *(_QWORD *)(v10 + 480);
    a3[38] = *(_QWORD *)(v10 + 488);
    a3[39] = *(_QWORD *)(v10 + 504);
    a3[40] = *(_QWORD *)(v10 + 512);
    a3[41] = *(_QWORD *)(v10 + 520);
    a3[42] = *(_QWORD *)(v10 + 528);
    a3[43] = *(_QWORD *)(v10 + 536);
    a3[44] = *(_QWORD *)(v10 + 544);
    a3[45] = *(_QWORD *)(v10 + 552);
    a3[46] = *(_QWORD *)(v10 + 560);
    a3[47] = *(_QWORD *)(v10 + 568);
    a3[48] = *(_QWORD *)(v10 + 576);
    a3[49] = *(_QWORD *)(v10 + 584);
    a3[50] = *(_QWORD *)(v10 + 592);
    a3[51] = *(_QWORD *)(v10 + 600);
    a3[52] = *(_QWORD *)(v10 + 608);
    a3[53] = *(_QWORD *)(v10 + 624);
    v32 = *(_DWORD *)(v10 + 28);
    if ( v32 >= 0x2002 )
    {
      a3[54] = *(_QWORD *)(v10 + 680);
      v32 = *(_DWORD *)(v10 + 28);
    }
    if ( v32 >= 0x3001 )
    {
      a3[55] = *(_QWORD *)(v10 + 712);
      a3[56] = *(_QWORD *)(v10 + 720);
      a3[57] = *(_QWORD *)(v10 + 728);
      v32 = *(_DWORD *)(v10 + 28);
    }
    if ( v32 >= 0x3004 )
    {
      a3[62] = *(_QWORD *)(v10 + 760);
      v32 = *(_DWORD *)(v10 + 28);
    }
    if ( v32 >= 0x3005 )
    {
      a3[59] = *(_QWORD *)(v10 + 704);
      a3[60] = *(_QWORD *)(v10 + 776);
      v32 = *(_DWORD *)(v10 + 28);
    }
    if ( v32 >= 0x3000 )
    {
      a3[58] = *(_QWORD *)(v10 + 1368);
      v32 = *(_DWORD *)(v10 + 28);
    }
    if ( v32 >= 0x4000 )
    {
      a3[65] = *(_QWORD *)(v10 + 808);
      a3[66] = *(_QWORD *)(v10 + 816);
      v32 = *(_DWORD *)(v10 + 28);
    }
    if ( v32 >= 0x300B )
    {
      a3[63] = *(_QWORD *)(v10 + 784);
      v32 = *(_DWORD *)(v10 + 28);
    }
    if ( v32 >= 0x4001 )
    {
      a3[67] = *(_QWORD *)(v10 + 824);
      v32 = *(_DWORD *)(v10 + 28);
    }
    if ( v32 >= 0x4000 )
    {
      a3[64] = *(_QWORD *)(v10 + 800);
      v32 = *(_DWORD *)(v10 + 28);
    }
    if ( v32 >= 0x4002 )
    {
      a3[68] = *(_QWORD *)(v10 + 832);
      a3[69] = *(_QWORD *)(v10 + 840);
      v32 = *(_DWORD *)(v10 + 28);
    }
    if ( v32 >= 0x5001 )
    {
      a3[70] = *(_QWORD *)(v10 + 848);
      a3[71] = *(_QWORD *)(v10 + 856);
      a3[72] = *(_QWORD *)(v10 + 864);
      a3[73] = *(_QWORD *)(v10 + 872);
      a3[74] = *(_QWORD *)(v10 + 880);
      a3[75] = *(_QWORD *)(v10 + 888);
      a3[76] = *(_QWORD *)(v10 + 904);
      a3[77] = *(_QWORD *)(v10 + 912);
      a3[78] = *(_QWORD *)(v10 + 896);
      a3[79] = *(_QWORD *)(v10 + 920);
      v32 = *(_DWORD *)(v10 + 28);
    }
    if ( v32 >= 0x5006 )
    {
      a3[61] = *(_QWORD *)(v10 + 944);
      v32 = *(_DWORD *)(v10 + 28);
    }
    if ( v32 >= 0x5008 )
    {
      a3[80] = *(_QWORD *)(v10 + 952);
      a3[81] = *(_QWORD *)(v10 + 960);
      v32 = *(_DWORD *)(v10 + 28);
    }
    if ( v32 >= 0x6000 )
    {
      a3[82] = *(_QWORD *)(v10 + 968);
      a3[83] = *(_QWORD *)(v10 + 976);
      a3[84] = *(_QWORD *)(v10 + 984);
      a3[85] = v8 + 4952;
      a3[87] = v8 + 5080;
      a3[86] = v8 + 5216;
      a3[88] = v8 + 5272;
      v32 = *(_DWORD *)(v10 + 28);
    }
    if ( v32 >= 0x6002 )
    {
      a3[89] = *(_QWORD *)(v10 + 1000);
      a3[90] = *(_QWORD *)(v10 + 1008);
      a3[91] = *(_QWORD *)(v10 + 992);
      v32 = *(_DWORD *)(v10 + 28);
    }
    if ( v32 >= 0x7000 )
    {
      a3[92] = *(_QWORD *)(v10 + 1016);
      a3[93] = *(_QWORD *)(v10 + 1024);
      a3[94] = *(_QWORD *)(v10 + 1032);
      a3[95] = *(_QWORD *)(v10 + 1040);
      a3[96] = *(_QWORD *)(v10 + 1048);
      a3[97] = *(_QWORD *)(v10 + 1056);
      a3[98] = *(_QWORD *)(v10 + 1064);
      v32 = *(_DWORD *)(v10 + 28);
    }
    if ( v32 >= 0x7002 )
    {
      a3[100] = *(_QWORD *)(v10 + 1072);
      a3[101] = *(_QWORD *)(v10 + 1080);
      v32 = *(_DWORD *)(v10 + 28);
    }
    if ( v32 >= 0x7003 )
    {
      a3[102] = *(_QWORD *)(v10 + 1088);
      a3[103] = *(_QWORD *)(v10 + 1096);
      a3[104] = *(_QWORD *)(v10 + 1104);
      a3[105] = *(_QWORD *)(v10 + 1112);
      a3[106] = *(_QWORD *)(v10 + 1120);
      a3[107] = *(_QWORD *)(v10 + 1128);
      a3[108] = *(_QWORD *)(v10 + 1136);
      a3[109] = *(_QWORD *)(v10 + 1144);
      v32 = *(_DWORD *)(v10 + 28);
    }
    if ( v32 >= 0x7004 )
    {
      a3[110] = *(_QWORD *)(v10 + 1152);
      a3[111] = *(_QWORD *)(v10 + 1160);
      v32 = *(_DWORD *)(v10 + 28);
    }
    if ( v32 >= 0x8000 )
    {
      a3[112] = *(_QWORD *)(v10 + 1168);
      v32 = *(_DWORD *)(v10 + 28);
    }
    if ( v32 >= 0x8001 )
    {
      a3[113] = *(_QWORD *)(v10 + 1176);
      a3[114] = *(_QWORD *)(v10 + 1184);
      v32 = *(_DWORD *)(v10 + 28);
    }
    if ( v32 >= 0x9000 )
    {
      a3[115] = *(_QWORD *)(v10 + 1192);
      a3[116] = *(_QWORD *)(v10 + 1200);
      a3[117] = *(_QWORD *)(v10 + 1208);
      a3[118] = *(_QWORD *)(v10 + 1216);
      a3[119] = *(_QWORD *)(v10 + 1224);
      a3[120] = *(_QWORD *)(v10 + 1232);
      a3[121] = *(_QWORD *)(v10 + 1240);
      v32 = *(_DWORD *)(v10 + 28);
    }
    if ( v32 >= 0x9003 )
    {
      a3[122] = *(_QWORD *)(v10 + 1248);
      a3[123] = *(_QWORD *)(v10 + 1256);
      v32 = *(_DWORD *)(v10 + 28);
    }
    if ( v32 >= 0x9005 )
    {
      a3[124] = *(_QWORD *)(v10 + 1264);
      a3[125] = *(_QWORD *)(v10 + 1272);
      v32 = *(_DWORD *)(v10 + 28);
    }
    if ( v32 >= 0x9006 )
    {
      a3[99] = *(_QWORD *)(v10 + 1280);
      v32 = *(_DWORD *)(v10 + 28);
    }
    if ( v32 >= 0xA001 )
    {
      a3[126] = *(_QWORD *)(v10 + 1288);
      v32 = *(_DWORD *)(v10 + 28);
    }
    if ( v32 >= 0xA002 )
    {
      a3[127] = *(_QWORD *)(v10 + 1296);
      v32 = *(_DWORD *)(v10 + 28);
    }
    if ( v32 >= 0xA005 )
    {
      a3[128] = *(_QWORD *)(v10 + 1304);
      v32 = *(_DWORD *)(v10 + 28);
    }
    if ( v32 >= 0xA009 )
    {
      a3[129] = *(_QWORD *)(v10 + 1320);
      v32 = *(_DWORD *)(v10 + 28);
    }
    if ( v32 >= 0xB002 )
    {
      a3[130] = *(_QWORD *)(v10 + 1328);
      a3[131] = *(_QWORD *)(v10 + 1336);
      v32 = *(_DWORD *)(v10 + 28);
    }
    if ( v32 >= 0xB003 )
    {
      a3[132] = *(_QWORD *)(v10 + 1344);
      v32 = *(_DWORD *)(v10 + 28);
    }
    if ( v32 >= 0xC001 )
    {
      a3[133] = *(_QWORD *)(v10 + 1360);
      v32 = *(_DWORD *)(v10 + 28);
    }
    if ( v32 >= 0xC002 )
    {
      a3[134] = v8 + 5528;
      v32 = *(_DWORD *)(v10 + 28);
    }
    if ( v32 >= 0xC004 )
    {
      a3[136] = v8 + 5584;
      if ( *(_DWORD *)(v10 + 28) >= 0xC004u )
        a3[135] = v8 + 5656;
    }
  }
  *(_BYTE *)a2 = 0;
  if ( *(_BYTE *)(v8 + 2693) )
  {
    a2[2] = 7471218;
    *((_QWORD *)a2 + 2) = L"d3d10warp.dll";
    *((_QWORD *)a2 + 4) = L"d3d10warp.dll";
    *((_QWORD *)a2 + 18) = L"d3d10warp.dll";
    *((_QWORD *)a2 + 20) = L"d3d10warp.dll";
    a2[6] = 7471218;
    a2[34] = 1966110;
    a2[38] = 1966110;
  }
  else if ( !*(_BYTE *)(*(_QWORD *)(v8 + 40) + 133LL) && !*(_BYTE *)(v8 + 481) )
  {
    *(_BYTE *)a2 = 1;
    DestinationString = 0LL;
    v33 = DpiOpenPnpRegistryKey(a1, 2u, 0x20019u, &v90);
    v36 = v33;
    if ( v33 < 0 )
    {
      v72 = WdLogNewEntry5_WdError(v35, v34);
      *(_QWORD *)(v72 + 24) = v36;
      WdLogEvent5_WdError(v72);
      goto LABEL_112;
    }
    RtlInitUnicodeString(&DestinationString, L"UserModeDriverName");
    v37 = DxgkRetrieveStringFromRegistry(v90, &DestinationString);
    v36 = v37;
    if ( v37 < 0 )
    {
      v73 = WdLogNewEntry5_WdError(v39, v38);
      *(_QWORD *)(v73 + 24) = v36;
      WdLogEvent5_WdError(v73);
      ZwClose(v90);
      goto LABEL_112;
    }
    RtlInitUnicodeString(&DestinationString, L"UserModeDriverNameWow");
    if ( (int)DxgkRetrieveStringFromRegistry(v90, &DestinationString) < 0 )
    {
      v74 = WdLogNewEntry5_WdEvent(v41, v40);
      *(_QWORD *)(v74 + 24) = DxgkRetrieveStringFromRegistry;
      WdLogEvent5_WdEvent(v74);
    }
    RtlInitUnicodeString(&DestinationString, L"UserModeDriverNameWSL");
    if ( (int)DxgkRetrieveStringFromRegistry(v90, &DestinationString) < 0 )
    {
      v44 = WdLogNewEntry5_WdEvent(v43, v42);
      *(_QWORD *)(v44 + 24) = DxgkRetrieveStringFromRegistry;
      WdLogEvent5_WdEvent(v44);
    }
    *(&ObjectAttributes.Length + 1) = 0;
    *(&ObjectAttributes.Attributes + 1) = 0;
    KeyHandle = 0LL;
    v94 = 0LL;
    RtlInitUnicodeString(&v94, L"DX9");
    ObjectAttributes.RootDirectory = v90;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &v94;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"DriverName");
      if ( (int)DxgkRetrieveStringFromRegistry(KeyHandle, &DestinationString) < 0 )
      {
        v77 = WdLogNewEntry5_WdEvent(v76, v75);
        *(_QWORD *)(v77 + 24) = DxgkRetrieveStringFromRegistry;
        WdLogEvent5_WdEvent(v77);
      }
      RtlInitUnicodeString(&DestinationString, L"DriverNameWow");
      if ( (int)DxgkRetrieveStringFromRegistry(KeyHandle, &DestinationString) < 0 )
      {
        v80 = WdLogNewEntry5_WdEvent(v79, v78);
        *(_QWORD *)(v80 + 24) = DxgkRetrieveStringFromRegistry;
        WdLogEvent5_WdEvent(v80);
      }
      ZwClose(KeyHandle);
    }
    RtlInitUnicodeString(&DestinationString, L"DisplayUserModeDriverName");
    if ( (int)DxgkRetrieveStringFromRegistry(v90, &DestinationString) < 0 )
    {
      v47 = WdLogNewEntry5_WdEvent(v46, v45);
      *(_QWORD *)(v47 + 24) = DxgkRetrieveStringFromRegistry;
      WdLogEvent5_WdEvent(v47);
    }
    RtlInitUnicodeString(&DestinationString, L"DisplayUserModeDriverNameWow");
    if ( (int)DxgkRetrieveStringFromRegistry(v90, &DestinationString) < 0 )
    {
      v50 = WdLogNewEntry5_WdEvent(v49, v48);
      *(_QWORD *)(v50 + 24) = DxgkRetrieveStringFromRegistry;
      WdLogEvent5_WdEvent(v50);
    }
    RtlInitUnicodeString(&DestinationString, L"UserModeDListDriverName");
    if ( (int)DxgkRetrieveStringFromRegistry(v90, &DestinationString) < 0 )
    {
      v53 = WdLogNewEntry5_WdEvent(v52, v51);
      *(_QWORD *)(v53 + 24) = DxgkRetrieveStringFromRegistry;
      WdLogEvent5_WdEvent(v53);
    }
    RtlInitUnicodeString(&DestinationString, L"UserModeDListDriverNameWow");
    if ( (int)DxgkRetrieveStringFromRegistry(v90, &DestinationString) < 0 )
    {
      v56 = WdLogNewEntry5_WdEvent(v55, v54);
      *(_QWORD *)(v56 + 24) = DxgkRetrieveStringFromRegistry;
      WdLogEvent5_WdEvent(v56);
    }
    RtlInitUnicodeString(&DestinationString, L"ContentProtectionDriverName");
    if ( (int)DxgkRetrieveStringFromRegistry(v90, &DestinationString) < 0 )
    {
      v59 = WdLogNewEntry5_WdEvent(v58, v57);
      *(_QWORD *)(v59 + 24) = DxgkRetrieveStringFromRegistry;
      WdLogEvent5_WdEvent(v59);
    }
    RtlInitUnicodeString(&DestinationString, L"MiracastCompanionDriverName");
    if ( (int)DxgkRetrieveStringFromRegistry(v90, &DestinationString) < 0 )
    {
      v62 = WdLogNewEntry5_WdEvent(v61, v60);
      *(_QWORD *)(v62 + 24) = DxgkRetrieveStringFromRegistry;
      WdLogEvent5_WdEvent(v62);
    }
    v63 = WdLogNewEntry5_WdEvent(v61, v60);
    *(_QWORD *)(v63 + 24) = DxgkRetrieveStringFromRegistry;
    WdLogEvent5_WdEvent(v63);
    RtlInitUnicodeString(&DestinationString, L"OpenGLDriverName");
    if ( (int)DxgkRetrieveStringFromRegistry(v90, &DestinationString) < 0 )
    {
      v81 = WdLogNewEntry5_WdEvent(v65, v64);
      *(_QWORD *)(v81 + 24) = DxgkRetrieveStringFromRegistry;
      WdLogEvent5_WdEvent(v81);
    }
    RtlInitUnicodeString(&DestinationString, L"OpenGLDriverNameWow");
    if ( (int)DxgkRetrieveStringFromRegistry(v90, &DestinationString) < 0 )
    {
      v82 = WdLogNewEntry5_WdEvent(0LL, v66);
      *(_QWORD *)(v82 + 24) = DxgkRetrieveStringFromRegistry;
      WdLogEvent5_WdEvent(v82);
    }
    if ( *((_WORD *)a2 + 36) && **((_WORD **)a2 + 10) == 35 )
    {
      Handle = 0LL;
      DxgkFreeUnicodeString(a2 + 18);
      DxgkFreeUnicodeString(a2 + 24);
      RtlInitUnicodeString(&v94, L"OpenGL");
      ObjectAttributes.RootDirectory = v90;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &v94;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes) >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"DriverName");
        if ( (int)DxgkRetrieveStringFromRegistry(Handle, &DestinationString) < 0 )
        {
          v85 = WdLogNewEntry5_WdEvent(v84, v83);
          *(_QWORD *)(v85 + 24) = DxgkRetrieveStringFromRegistry;
          WdLogEvent5_WdEvent(v85);
        }
        RtlInitUnicodeString(&DestinationString, L"DriverNameWow");
        if ( (int)DxgkRetrieveStringFromRegistry(Handle, &DestinationString) < 0 )
        {
          v88 = WdLogNewEntry5_WdEvent(v87, v86);
          *(_QWORD *)(v88 + 24) = DxgkRetrieveStringFromRegistry;
          WdLogEvent5_WdEvent(v88);
        }
      }
    }
    else
    {
      v9 = 0;
      Handle = 0LL;
    }
    if ( *((_QWORD *)a2 + 10) )
    {
      v96[5] = 0LL;
      LODWORD(v96[1]) = 288;
      LODWORD(v96[4]) = 0x4000000;
      v96[2] = L"OpenGLVersion";
      LODWORD(v96[6]) = 0;
      v96[3] = a2 + 22;
      LODWORD(v96[8]) = 288;
      v96[9] = L"OpenGLFlags";
      v96[10] = a2 + 23;
      v96[16] = L"OpenGLVersionWow";
      v96[17] = a2 + 28;
      v96[23] = L"OpenGLFlagsWow";
      v96[24] = a2 + 29;
      LODWORD(v96[11]) = 0x4000000;
      v96[12] = 0LL;
      LODWORD(v96[13]) = 0;
      LODWORD(v96[15]) = 288;
      LODWORD(v96[18]) = 0x4000000;
      v96[19] = 0LL;
      LODWORD(v96[20]) = 0;
      LODWORD(v96[22]) = 288;
      LODWORD(v96[25]) = 0x4000000;
      v96[26] = 0LL;
      LODWORD(v96[27]) = 0;
      if ( v9 )
      {
        v67 = Handle;
        v68 = 0x40000000LL;
      }
      else
      {
        v67 = *(HANDLE *)(v8 + 536);
        v68 = 0LL;
      }
      if ( (int)RtlQueryRegistryValuesEx(v68, v67, v96, 0LL, 0LL) < 0 )
      {
        v89 = WdLogNewEntry5_WdEvent(v70, v69);
        *(_QWORD *)(v89 + 24) = RtlQueryRegistryValuesEx;
        WdLogEvent5_WdEvent(v89);
      }
    }
    ZwClose(Handle);
    ZwClose(v90);
  }
  LODWORD(v36) = 0;
  *((_QWORD *)a2 + 15) = *(_QWORD *)(v8 + 4888);
  *((_QWORD *)a2 + 16) = v8 + 2744;
  a2[14] = *(_DWORD *)(v8 + 2684);
  a2[15] = *(_DWORD *)(v8 + 3480);
  a2[16] = *(_DWORD *)(v8 + 2680) - *(_DWORD *)(v8 + 3480);
  *((_QWORD *)a2 + 25) = *(_QWORD *)(v8 + 4896);
  *((_QWORD *)a2 + 26) = *(_QWORD *)(v8 + 4904);
  a2[54] = *(_DWORD *)(v8 + 4912);
  a2[64] = *(unsigned __int16 *)(v8 + 4738);
  *a4 = *(_OWORD *)(v8 + 1000);
  a4[1] = *(_OWORD *)(v8 + 1016);
  a4[2] = *(_OWORD *)(v8 + 1032);
  a4[3] = *(_OWORD *)(v8 + 1048);
  a4[4] = *(_OWORD *)(v8 + 1064);
  a4[5] = *(_OWORD *)(v8 + 1080);
  a4[6] = *(_OWORD *)(v8 + 1096);
LABEL_112:
  if ( (int)v36 < 0 )
  {
    DpiFreeAdapterInfo(a2);
    memset(a2, 0, 0x128uLL);
    if ( a3 )
      memset(a3, 0, 0x448uLL);
  }
  return (unsigned int)v36;
}
