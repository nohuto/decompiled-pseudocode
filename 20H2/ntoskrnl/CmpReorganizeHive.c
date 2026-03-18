/*
 * XREFs of CmpReorganizeHive @ 0x1405DE58C
 * Callers:
 *     CmpCreateHive @ 0x1405DDED8 (CmpCreateHive.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x140204C50 (CmpAllocateTransientPoolWithTag.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140244AF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140244C78 (_tlgKeywordOn.c)
 *     CmSiFreeMemory @ 0x140267C30 (CmSiFreeMemory.c)
 *     ExIsSoftBoot @ 0x1403A7820 (ExIsSoftBoot.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     HvUnlockHiveWriter @ 0x1405DE540 (HvUnlockHiveWriter.c)
 *     HvLockHiveWriter @ 0x1405DE570 (HvLockHiveWriter.c)
 *     CmCheckRegistry @ 0x1405DF080 (CmCheckRegistry.c)
 *     CmpReleaseShutdownRundown @ 0x14060C670 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x14060D8D0 (CmpAcquireShutdownRundown.c)
 *     CmpUnlockRegistry @ 0x140616950 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140616990 (CmpLockRegistry.c)
 *     HvUnlockHiveFlusherShared @ 0x14067010C (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x140670144 (HvLockHiveFlusherShared.c)
 *     CmpClearKeyAccessBits @ 0x1406CC7CC (CmpClearKeyAccessBits.c)
 *     HvMarkBaseBlockDirty @ 0x1406DD19C (HvMarkBaseBlockDirty.c)
 *     CmpDestroyHive @ 0x1407254A8 (CmpDestroyHive.c)
 *     CmpCopyKeyPartial @ 0x1407610A0 (CmpCopyKeyPartial.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x1407CACCC (CmpUpdateReorganizeRegistryValues.c)
 *     CmpLogReorganizeEvent @ 0x14086DB90 (CmpLogReorganizeEvent.c)
 *     CmpCreateEmptyHiveClone @ 0x140875598 (CmpCreateEmptyHiveClone.c)
 *     CmpSwapHiveStorage @ 0x140875858 (CmpSwapHiveStorage.c)
 *     CmpCopySyncTree @ 0x14087AB64 (CmpCopySyncTree.c)
 */

__int64 __fastcall CmpReorganizeHive(ULONG_PTR a1, __int128 *a2, int a3)
{
  __int64 v3; // rax
  struct _PRIVILEGE_SET *v7; // r15
  int v8; // ecx
  int v9; // eax
  int v10; // ebx
  __int64 v12; // r9
  unsigned int v13; // edx
  unsigned __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r9
  unsigned __int16 v18; // cx
  int v19; // eax
  _QWORD *v20; // rsi
  int v21; // ebx
  struct _LOOKASIDE_LIST_EX *v22; // r9
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  int LowPart_low; // edx
  int LowPart_high; // r9d
  int v26; // r10d
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // r9d
  int v30; // r10d
  __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned int v33; // r12d
  unsigned int v34; // r14d
  __int64 v35; // rcx
  LARGE_INTEGER v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // rcx
  unsigned __int64 v39; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v40; // [rsp+48h] [rbp-B8h] BYREF
  __int16 v41; // [rsp+4Ch] [rbp-B4h] BYREF
  __int16 v42; // [rsp+50h] [rbp-B0h] BYREF
  int v43; // [rsp+54h] [rbp-ACh] BYREF
  int v44; // [rsp+58h] [rbp-A8h] BYREF
  int v45; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v46; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v47; // [rsp+64h] [rbp-9Ch] BYREF
  PVOID P; // [rsp+68h] [rbp-98h] BYREF
  __int64 v49; // [rsp+70h] [rbp-90h] BYREF
  __int64 v50; // [rsp+78h] [rbp-88h] BYREF
  __int64 v51; // [rsp+80h] [rbp-80h] BYREF
  __int64 v52; // [rsp+88h] [rbp-78h] BYREF
  __int64 v53; // [rsp+90h] [rbp-70h] BYREF
  __int128 v54; // [rsp+98h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+B0h] [rbp-50h] BYREF
  int *v56; // [rsp+D0h] [rbp-30h]
  __int64 v57; // [rsp+D8h] [rbp-28h]
  __int16 *v58; // [rsp+E0h] [rbp-20h]
  __int64 v59; // [rsp+E8h] [rbp-18h]
  __int16 *v60; // [rsp+F0h] [rbp-10h]
  __int64 v61; // [rsp+F8h] [rbp-8h]
  __int16 *v62; // [rsp+100h] [rbp+0h]
  __int64 v63; // [rsp+108h] [rbp+8h]
  LUID_AND_ATTRIBUTES *Privilege; // [rsp+110h] [rbp+10h]
  __int64 v65; // [rsp+118h] [rbp+18h]
  LONG *p_HighPart; // [rsp+120h] [rbp+20h]
  int v67; // [rsp+128h] [rbp+28h]
  int v68; // [rsp+12Ch] [rbp+2Ch]
  char *v69; // [rsp+130h] [rbp+30h]
  __int64 v70; // [rsp+138h] [rbp+38h]
  LUID_AND_ATTRIBUTES *v71; // [rsp+140h] [rbp+40h]
  int v72; // [rsp+148h] [rbp+48h]
  int v73; // [rsp+14Ch] [rbp+4Ch]
  char *v74; // [rsp+150h] [rbp+50h]
  __int64 v75; // [rsp+158h] [rbp+58h]
  ULONG *p_Attributes; // [rsp+160h] [rbp+60h]
  int v77; // [rsp+168h] [rbp+68h]
  int v78; // [rsp+16Ch] [rbp+6Ch]
  __int64 *v79; // [rsp+170h] [rbp+70h]
  __int64 v80; // [rsp+178h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v81; // [rsp+180h] [rbp+80h] BYREF
  __int64 *v82; // [rsp+1A0h] [rbp+A0h]
  __int64 v83; // [rsp+1A8h] [rbp+A8h]
  int *v84; // [rsp+1B0h] [rbp+B0h]
  __int64 v85; // [rsp+1B8h] [rbp+B8h]
  int *v86; // [rsp+1C0h] [rbp+C0h]
  __int64 v87; // [rsp+1C8h] [rbp+C8h]
  __int64 *v88; // [rsp+1D0h] [rbp+D0h]
  __int64 v89; // [rsp+1D8h] [rbp+D8h]
  struct _EVENT_DATA_DESCRIPTOR v90; // [rsp+1E0h] [rbp+E0h] BYREF
  int *v91; // [rsp+200h] [rbp+100h]
  __int64 v92; // [rsp+208h] [rbp+108h]
  int *v93; // [rsp+210h] [rbp+110h]
  __int64 v94; // [rsp+218h] [rbp+118h]
  __int64 *v95; // [rsp+220h] [rbp+120h]
  __int64 v96; // [rsp+228h] [rbp+128h]
  struct _EVENT_DATA_DESCRIPTOR v97; // [rsp+230h] [rbp+130h] BYREF
  unsigned __int64 *v98; // [rsp+250h] [rbp+150h]
  __int64 v99; // [rsp+258h] [rbp+158h]
  __int64 *v100; // [rsp+260h] [rbp+160h]
  __int64 v101; // [rsp+268h] [rbp+168h]

  v3 = *(_QWORD *)(a1 + 64);
  P = 0LL;
  v7 = 0LL;
  v8 = *(_DWORD *)(v3 + 144);
  v54 = 0LL;
  if ( (v8 & 1) != 0 )
    return 0;
  v9 = *(_DWORD *)(a1 + 160);
  if ( (v9 & 0x10) == 0 && !*(_QWORD *)(a1 + 1536) )
    return 0;
  if ( (v9 & 0x8001) != 0 || !*(_DWORD *)(a1 + 164) )
    return 0;
  if ( !(unsigned __int8)CmpAcquireShutdownRundown() )
  {
    v10 = -1073741431;
LABEL_25:
    if ( (unsigned int)dword_140C02130 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 0x400000000000LL) )
    {
      LODWORD(v39) = v10;
      v98 = &v39;
      v99 = 4LL;
      v100 = &v53;
      v53 = 0x1000000LL;
      v101 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C02130,
        (unsigned __int8 *)byte_1400227DD,
        0LL,
        0LL,
        4u,
        &v97);
    }
    return (unsigned int)v10;
  }
  if ( (a3 & 0x400000) != 0 && ExIsSoftBoot() && (unsigned __int64)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 168LL) - 1LL) > 1 )
    goto LABEL_12;
  v12 = *(_QWORD *)(a1 + 64);
  v13 = MEMORY[0xFFFFF78000000014] & 0xFFFFFFFC;
  v39 = MEMORY[0xFFFFF78000000014] & 0xFFFFFFFFFFFFFFFCuLL;
  v14 = *(_QWORD *)(v12 + 168);
  if ( v14 <= (MEMORY[0xFFFFF78000000014] & 0xFFFFFFFFFFFFFFFCuLL)
    && (MEMORY[0xFFFFF78000000014] & 0xFFFFFFFFFFFFFFFCuLL) - v14 < 864000000000LL
                                                                  * (unsigned __int64)(unsigned int)CmpReorganizeDelayDays )
  {
    goto LABEL_12;
  }
  if ( !a2 )
  {
    v17 = v12 + 48;
    v18 = 0;
    *((_QWORD *)&v54 + 1) = v17;
    do
    {
      if ( !*(_WORD *)(v17 + 2LL * v18) )
        break;
      ++v18;
    }
    while ( v18 < 0x1Fu );
    a2 = &v54;
    LOWORD(v54) = 2 * v18;
  }
  if ( v14 == 2 || v14 != 1 && (*(_DWORD *)(a1 + 4152) & 0x400) == 0 )
  {
    LODWORD(v39) = v13 | 2;
    CmpClearKeyAccessBits(a1);
    CmpLockRegistry();
    HvLockHiveFlusherShared(a1);
    HvLockHiveWriter(a1);
    HvMarkBaseBlockDirty(a1);
    *(_QWORD *)(*(_QWORD *)(a1 + 64) + 168LL) = v39;
    HvUnlockHiveWriter(a1);
    HvUnlockHiveFlusherShared(a1);
    CmpUnlockRegistry(v16, v15);
LABEL_12:
    v10 = 0;
    goto LABEL_13;
  }
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 64) + 36LL) == -1 )
    goto LABEL_12;
  LODWORD(v39) = v13 | 1;
  v19 = CmpCreateEmptyHiveClone(&P, a1);
  v20 = P;
  v10 = v19;
  if ( v19 >= 0 )
  {
    v21 = CmpCopyKeyPartial(a1, *(unsigned int *)(*(_QWORD *)(a1 + 64) + 36LL), P, 0xFFFFFFFFLL, 6);
    if ( v21 != -1
      && (*(_DWORD *)(v20[8] + 36LL) = v21, HvMarkBaseBlockDirty(v20), (unsigned __int8)CmpCopySyncTree(a1, 66, 0))
      && (TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(
                                                            PagedPool,
                                                            0x1B0uLL,
                                                            0x33394D43u,
                                                            v22),
          (v7 = TransientPoolWithTag) != 0LL) )
    {
      memset(TransientPoolWithTag, 0, 0x1B0uLL);
      v10 = CmCheckRegistry(v20, 2031616LL, v7);
      if ( v10 >= 0 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(a1 + 64) + 4088LL) & 4) != 0 || *(_DWORD *)(a1 + 4804) == *((_DWORD *)v20 + 1201) )
        {
          v20[7] = 0LL;
          v33 = *((_DWORD *)v20 + 68);
          v34 = *(_DWORD *)(a1 + 272);
          CmpSwapHiveStorage(a1, v20);
          if ( (unsigned int)dword_140C02130 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 0x400000000000LL) )
          {
            v35 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 168LL);
            v82 = &v51;
            v84 = (int *)&v46;
            v86 = (int *)&v47;
            v88 = &v52;
            v51 = v35;
            v83 = 8LL;
            v46 = v34;
            v85 = 4LL;
            v47 = v33;
            v87 = 4LL;
            v52 = 0x1000000LL;
            v89 = 8LL;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_140C02130,
              (unsigned __int8 *)&byte_140022787,
              0LL,
              0LL,
              6u,
              &v81);
          }
          CmpLockRegistry();
          HvLockHiveFlusherShared(a1);
          HvLockHiveWriter(a1);
          HvMarkBaseBlockDirty(a1);
          v36.QuadPart = v39;
          *(_QWORD *)(*(_QWORD *)(a1 + 64) + 168LL) = v39;
          HvUnlockHiveWriter(a1);
          HvUnlockHiveFlusherShared(a1);
          CmpUnlockRegistry(v38, v37);
          CmpLogReorganizeEvent(a2, v34, v33);
          if ( v33 < v34 )
          {
            if ( CmpFirstReorganize )
            {
              CmpReorganizeTotalBytesSaved = 0LL;
              CmpReorganizeLastRun = v36;
              CmpFirstReorganize = 0;
            }
            CmpReorganizeTotalBytesSaved += v34 - v33;
            CmpUpdateReorganizeRegistryValues();
          }
          v10 = 0;
        }
        else
        {
          if ( (unsigned int)dword_140C02130 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 0x400000000000LL) )
          {
            v44 = v29;
            v91 = &v44;
            v92 = 4LL;
            v93 = &v45;
            v45 = v30;
            v95 = &v50;
            v94 = 4LL;
            v50 = 0x1000000LL;
            v96 = 8LL;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_140C02130,
              (unsigned __int8 *)&dword_14002298C,
              0LL,
              0LL,
              5u,
              &v90);
          }
          CmpLockRegistry();
          HvLockHiveFlusherShared(a1);
          HvLockHiveWriter(a1);
          HvMarkBaseBlockDirty(a1);
          *(_QWORD *)(*(_QWORD *)(a1 + 64) + 168LL) = v39;
          HvUnlockHiveWriter(a1);
          HvUnlockHiveFlusherShared(a1);
          CmpUnlockRegistry(v32, v31);
          v10 = -1073741492;
        }
      }
      else
      {
        if ( (unsigned int)dword_140C02130 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 0x400000000000LL) )
        {
          v43 = v10;
          v56 = &v43;
          v58 = &v40;
          LowPart_low = LOWORD(v7->Privilege[0].Luid.LowPart);
          LowPart_high = HIWORD(v7->Privilege[0].Luid.LowPart);
          Privilege = v7->Privilege;
          v60 = &v41;
          p_HighPart = &v7->Privilege[0].Luid.HighPart;
          v26 = BYTE2(v7[19].Privilege[0].Luid.HighPart);
          v67 = 12 * LowPart_low;
          v71 = v7[5].Privilege;
          v72 = 12 * LowPart_high;
          p_Attributes = &v7[19].Privilege[0].Attributes;
          v79 = &v49;
          v42 = v26;
          v40 = LowPart_low;
          v41 = LowPart_high;
          v69 = (char *)&v7->Privilege[0].Luid + 2;
          v74 = (char *)&v7[19].Privilege[0].Luid.HighPart + 2;
          v57 = 4LL;
          v59 = 2LL;
          v61 = 2LL;
          v62 = &v42;
          v63 = 2LL;
          v65 = 2LL;
          v68 = 0;
          v70 = 2LL;
          v73 = 0;
          v75 = 2LL;
          v77 = 8 * v26;
          v78 = 0;
          v49 = 0x1000000LL;
          v80 = 8LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140C02130,
            (unsigned __int8 *)&byte_14002281F,
            0LL,
            0LL,
            0xDu,
            &v55);
        }
        if ( v10 == -1073741492 || v10 == -2147483606 )
        {
          CmpLockRegistry();
          HvLockHiveFlusherShared(a1);
          HvLockHiveWriter(a1);
          HvMarkBaseBlockDirty(a1);
          *(_QWORD *)(*(_QWORD *)(a1 + 64) + 168LL) = v39;
          HvUnlockHiveWriter(a1);
          HvUnlockHiveFlusherShared(a1);
          CmpUnlockRegistry(v28, v27);
        }
      }
    }
    else
    {
      v10 = -1073741670;
    }
  }
  if ( v20 )
    CmpDestroyHive(v20);
LABEL_13:
  CmpReleaseShutdownRundown();
  if ( v7 )
    CmSiFreeMemory(v7);
  if ( v10 < 0 )
    goto LABEL_25;
  return (unsigned int)v10;
}
