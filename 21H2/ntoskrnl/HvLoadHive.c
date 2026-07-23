/*
 * XREFs of HvLoadHive @ 0x1406FA774
 * Callers:
 *     HvHiveStartFileBacked @ 0x1406F94C0 (HvHiveStartFileBacked.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402253C0 (CmSiFreeMemory.c)
 *     SetFailureLocation @ 0x140242D88 (SetFailureLocation.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HvpAdjustHiveFreeDisplay @ 0x1406FB148 (HvpAdjustHiveFreeDisplay.c)
 *     CmpTraceHiveMountBaseFileMounted @ 0x1406FB494 (CmpTraceHiveMountBaseFileMounted.c)
 *     HvpViewMapStart @ 0x1406FB510 (HvpViewMapStart.c)
 *     HvpInitMap @ 0x1406FBFC8 (HvpInitMap.c)
 *     CmpInitializeActualFileSizes @ 0x1406FC494 (CmpInitializeActualFileSizes.c)
 *     HvpGetHiveHeader @ 0x1406FC79C (HvpGetHiveHeader.c)
 *     CmpFileFlush @ 0x1406FC904 (CmpFileFlush.c)
 *     HvpMapHiveImageFromViewMap @ 0x140720830 (HvpMapHiveImageFromViewMap.c)
 *     HvpRemapAndEnlistHiveBins @ 0x140720D7C (HvpRemapAndEnlistHiveBins.c)
 *     HvpMapHiveImageFromFile @ 0x140874168 (HvpMapHiveImageFromFile.c)
 *     HvpPerformLogFileRecovery @ 0x14087421C (HvpPerformLogFileRecovery.c)
 *     HvAnalyzeLogFiles @ 0x140880D8C (HvAnalyzeLogFiles.c)
 */

__int64 __fastcall HvLoadHive(ULONG_PTR BugCheckParameter2)
{
  __int64 v1; // rsi
  bool v2; // zf
  __int64 v4; // r13
  int v5; // r12d
  int HiveHeader; // eax
  __int64 v7; // rdx
  int v8; // r14d
  __int64 v9; // r15
  __int64 v10; // r8
  int inited; // eax
  int v12; // ebx
  __int64 v13; // r9
  int v14; // ebx
  unsigned int v15; // edx
  int v16; // ecx
  int v17; // eax
  signed int v18; // eax
  __int64 v19; // rcx
  char v20; // r12
  int v21; // eax
  int v22; // eax
  signed int v24; // eax
  unsigned int v25; // r9d
  int v26; // ebx
  _DWORD *v27; // rax
  int v28; // ecx
  unsigned int v29; // r9d
  int v30; // r10d
  unsigned int v31; // [rsp+28h] [rbp-E0h]
  unsigned int v32; // [rsp+28h] [rbp-E0h]
  int v33; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v34; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v35; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v36; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v37; // [rsp+68h] [rbp-A0h] BYREF
  PPRIVILEGE_SET Privileges_8[2]; // [rsp+78h] [rbp-90h] BYREF
  PPRIVILEGE_SET v39[2]; // [rsp+88h] [rbp-80h]
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+98h] [rbp-70h] BYREF
  __int128 *v41; // [rsp+A8h] [rbp-60h]
  __int64 v42; // [rsp+B0h] [rbp-58h]
  __int64 (__fastcall *v43)(); // [rsp+B8h] [rbp-50h]
  __int64 v44; // [rsp+C0h] [rbp-48h]
  int *v45; // [rsp+C8h] [rbp-40h]
  __int64 v46; // [rsp+D0h] [rbp-38h]
  __int64 *v47; // [rsp+D8h] [rbp-30h]
  __int64 v48; // [rsp+E0h] [rbp-28h]
  _OWORD v49[3]; // [rsp+E8h] [rbp-20h] BYREF

  v1 = *(_QWORD *)(BugCheckParameter2 + 56);
  v2 = (*(_DWORD *)(BugCheckParameter2 + 160) & 0x8001) == 0;
  v36 = 0LL;
  LODWORD(v34) = 0;
  v35 = 0LL;
  v4 = 0LL;
  v5 = 0;
  v33 = 0;
  HIDWORD(v40.Ptr) = 0;
  v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  v37 = 0LL;
  *(_OWORD *)Privileges_8 = 0LL;
  *(_OWORD *)v39 = 0LL;
  memset(v49, 0, sizeof(v49));
  if ( v2 )
  {
    v24 = CmpFileFlush(BugCheckParameter2, 0LL);
    if ( v24 < 0 )
      SetFailureLocation(v1, 0, 6, v24, 8u);
  }
  HiveHeader = HvpGetHiveHeader(BugCheckParameter2, &v35, &v36);
  v7 = 2LL;
  v8 = HiveHeader;
  switch ( HiveHeader )
  {
    case 2:
      v25 = -1073741670;
      v31 = 0;
LABEL_40:
      v12 = v25;
LABEL_43:
      SetFailureLocation(v1, 0, 6, v25, v31);
      v9 = v35;
      goto LABEL_28;
    case 7:
      v12 = -1073741491;
      v31 = 8;
LABEL_42:
      v25 = v12;
      goto LABEL_43;
    case 0:
      v12 = -1073741476;
      v31 = 16;
      goto LABEL_42;
  }
  if ( (unsigned int)(HiveHeader - 4) <= 1 && !*(_DWORD *)(BugCheckParameter2 + 164) )
  {
    v25 = -1073741492;
    v31 = 32;
    goto LABEL_40;
  }
  v9 = v35;
  v10 = 4LL;
  if ( HiveHeader == 5 )
  {
    v5 = *(_DWORD *)(v35 + 8);
  }
  else if ( HiveHeader != 4 )
  {
    goto LABEL_8;
  }
  if ( *(_DWORD *)(BugCheckParameter2 + 164) == 1 )
  {
    *(_QWORD *)&v37 = BugCheckParameter2;
    *(_QWORD *)&v40.Size = HvpRecoverDataReadRoutine;
    v26 = 1;
    HIDWORD(Privileges_8[0]) = 1;
    v41 = &v37;
    LODWORD(v40.Ptr) = 1;
  }
  else
  {
    v26 = 2;
    v27 = (_DWORD *)Privileges_8 + 1;
    v28 = 4;
    do
    {
      *(_QWORD *)(v27 - 5) = BugCheckParameter2;
      *v27 = v28++;
      v27 += 6;
      --v7;
    }
    while ( v7 );
    LODWORD(v40.Ptr) = 4;
    *(_QWORD *)&v40.Size = HvpRecoverDataReadRoutine;
    v43 = HvpRecoverDataReadRoutine;
    v44 = (__int64)&Privileges_8[1];
    v41 = &v37;
    LODWORD(v42) = 5;
  }
  if ( v8 == 4 )
  {
    LOBYTE(v7) = 1;
    v4 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(BugCheckParameter2 + 24))(4096LL, v7, 875777347LL);
    if ( !v4 )
    {
      v29 = -1073741670;
      v32 = 48;
      v12 = -1073741670;
      goto LABEL_83;
    }
    LOBYTE(v10) = 1;
  }
  else
  {
    LOBYTE(v10) = 0;
  }
  inited = HvAnalyzeLogFiles((unsigned int)&v36, v5, v10, v26, (__int64)&v40, (__int64)&v33, (__int64)v49, v4);
  v12 = inited;
  if ( inited < 0 )
  {
    v32 = 56;
    goto LABEL_82;
  }
  v5 = v33;
  if ( v8 == 4 )
  {
    *(_WORD *)(BugCheckParameter2 + 200) |= 0x40u;
    v9 = v4;
    v4 = 0LL;
  }
LABEL_8:
  *(_QWORD *)(BugCheckParameter2 + 64) = v9;
  v9 = 0LL;
  *(_DWORD *)(BugCheckParameter2 + 212) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 24LL)
                                        - 4096
                                        + (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 20LL) << 12);
  inited = CmpInitializeActualFileSizes(BugCheckParameter2, &v34, v10);
  v12 = inited;
  if ( inited < 0 )
  {
    v32 = 128;
    goto LABEL_82;
  }
  v13 = *(_QWORD *)(BugCheckParameter2 + 64);
  v14 = v34;
  if ( (unsigned int)v34 < *(_DWORD *)(v13 + 40) + 4096 && (BYTE3(NlsMbCodePageTag) || (CmpBootType & 6) != 0) )
  {
    if ( (unsigned int)dword_140C02130 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 0x200000000000LL) )
    {
      v44 = 4LL;
      LODWORD(v34) = v30 + 4096;
      v33 = v14;
      v43 = (__int64 (__fastcall *)())&v34;
      v46 = 4LL;
      v45 = &v33;
      v36 = 0x1000000LL;
      v47 = &v36;
      v48 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C02130,
        (unsigned __int8 *)byte_140023913,
        0LL,
        0LL,
        5u,
        &v40);
      v13 = *(_QWORD *)(BugCheckParameter2 + 64);
    }
    *(_DWORD *)(v13 + 4088) |= 4u;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL) = (v14 - 4096) & 0xFFFFF000;
    v13 = *(_QWORD *)(BugCheckParameter2 + 64);
  }
  if ( (unsigned int)(*(_DWORD *)(v13 + 40) - 1) > 0x7FFFDFFF )
  {
    v29 = -1073741492;
    v32 = 112;
    v12 = -1073741492;
    goto LABEL_83;
  }
  inited = HvpInitMap(BugCheckParameter2);
  v12 = inited;
  if ( inited < 0 )
  {
    v32 = 132;
    goto LABEL_82;
  }
  v15 = *(_DWORD *)(BugCheckParameter2 + 160);
  if ( (v15 & 0x20000) == 0 )
  {
    inited = HvpMapHiveImageFromFile(BugCheckParameter2);
    v12 = inited;
    if ( inited >= 0 )
      goto LABEL_17;
    v32 = 144;
LABEL_82:
    v29 = inited;
    goto LABEL_83;
  }
  v16 = (v15 >> 22) & 2;
  v17 = v16 | 1;
  if ( (v15 & 0x8001) == 0 )
    v17 = v16;
  v18 = HvpViewMapStart(
          (int)BugCheckParameter2 + 216,
          *(_QWORD *)(BugCheckParameter2 + 1536),
          *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL),
          (unsigned int)&CmpRegistryProcess,
          v17);
  v12 = v18;
  if ( v18 < 0 )
  {
    SetFailureLocation(v1, 0, 6, v18, 0x88u);
    goto LABEL_28;
  }
  inited = HvpMapHiveImageFromViewMap(
             BugCheckParameter2,
             0LL,
             *(unsigned int *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL));
  v12 = inited;
  if ( inited < 0 )
  {
    v32 = 140;
    goto LABEL_82;
  }
LABEL_17:
  CmpTraceHiveMountBaseFileMounted(
    *(_QWORD *)(BugCheckParameter2 + 1536),
    *(unsigned int *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL));
  if ( !v5 )
  {
    v19 = *(_QWORD *)(BugCheckParameter2 + 64);
    v20 = 0;
    v21 = *(_DWORD *)(v19 + 4);
    *(_DWORD *)(BugCheckParameter2 + 168) = v21;
    *(_DWORD *)(BugCheckParameter2 + 180) = v21;
    *(_DWORD *)(BugCheckParameter2 + 172) = v21;
    *(_BYTE *)(BugCheckParameter2 + 190) = 1;
    goto LABEL_19;
  }
  inited = HvpPerformLogFileRecovery(BugCheckParameter2);
  v12 = inited;
  if ( inited < 0 )
  {
    v32 = 160;
    goto LABEL_82;
  }
  v19 = *(_QWORD *)(BugCheckParameter2 + 64);
  v20 = 1;
LABEL_19:
  inited = HvpAdjustHiveFreeDisplay(BugCheckParameter2, *(unsigned int *)(v19 + 40), 0LL);
  v12 = inited;
  if ( inited < 0 )
  {
    v32 = 176;
    goto LABEL_82;
  }
  v12 = HvpRemapAndEnlistHiveBins(BugCheckParameter2);
  if ( v12 != 1073741833 )
  {
    if ( v12 >= 0 )
      goto LABEL_22;
    v32 = 192;
    v29 = v12;
LABEL_83:
    SetFailureLocation(v1, 0, 6, v29, v32);
    goto LABEL_28;
  }
  v20 = 1;
LABEL_22:
  if ( v8 == 4 || v20 )
    v12 = 1073741833;
  else
    v12 = 0;
  v22 = *(_DWORD *)(BugCheckParameter2 + 160);
  if ( (v22 & 0x20000) == 0 )
    *(_DWORD *)(BugCheckParameter2 + 160) = v22 | 0x10000;
  *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 8LL) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4LL);
  *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4092LL) = 0;
LABEL_28:
  if ( *((_QWORD *)&v37 + 1) )
    CmSiFreeMemory(*((PPRIVILEGE_SET *)&v37 + 1));
  if ( v39[0] )
    CmSiFreeMemory(v39[0]);
  if ( v4 )
    (*(void (__fastcall **)(__int64, _QWORD))(BugCheckParameter2 + 32))(v4, *(unsigned int *)(BugCheckParameter2 + 132));
  if ( v9 )
    (*(void (__fastcall **)(__int64, _QWORD))(BugCheckParameter2 + 32))(v9, *(unsigned int *)(BugCheckParameter2 + 132));
  return (unsigned int)v12;
}
