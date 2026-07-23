/*
 * XREFs of CmpReorganizeHive @ 0x1406F7F2C
 * Callers:
 *     CmpCreateHive @ 0x1406F756C (CmpCreateHive.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402253C0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14023EDD0 (CmpAllocateTransientPoolWithTag.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     ExIsSoftBoot @ 0x14039B5C0 (ExIsSoftBoot.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     CmpClearKeyAccessBits @ 0x14060759C (CmpClearKeyAccessBits.c)
 *     HvMarkBaseBlockDirty @ 0x14061C16C (HvMarkBaseBlockDirty.c)
 *     CmpReleaseShutdownRundown @ 0x14064A4A0 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x14064B8D0 (CmpAcquireShutdownRundown.c)
 *     HvUnlockHiveFlusherShared @ 0x14065B0AC (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x14065B0E4 (HvLockHiveFlusherShared.c)
 *     HvUnlockHiveWriter @ 0x1406F7EE0 (HvUnlockHiveWriter.c)
 *     HvLockHiveWriter @ 0x1406F7F10 (HvLockHiveWriter.c)
 *     CmCheckRegistry @ 0x1406F8F20 (CmCheckRegistry.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x14070D2F0 (CmpLockRegistry.c)
 *     CmpDestroyHive @ 0x1407293E8 (CmpDestroyHive.c)
 *     CmpCopyKeyPartial @ 0x14076FA4C (CmpCopyKeyPartial.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x1407CF0FC (CmpUpdateReorganizeRegistryValues.c)
 *     CmpLogReorganizeEvent @ 0x14086B92C (CmpLogReorganizeEvent.c)
 *     CmpCreateEmptyHiveClone @ 0x140872FA8 (CmpCreateEmptyHiveClone.c)
 *     CmpSwapHiveStorage @ 0x14087326C (CmpSwapHiveStorage.c)
 *     CmpCopySyncTree @ 0x140878644 (CmpCopySyncTree.c)
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
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r9
  unsigned __int16 v19; // cx
  int v20; // eax
  _QWORD *v21; // rsi
  int v22; // ebx
  struct _LOOKASIDE_LIST_EX *v23; // r9
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  __int64 v25; // rcx
  int LowPart_low; // edx
  int LowPart_high; // r9d
  int v28; // r10d
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rcx
  int v32; // r9d
  int v33; // r10d
  __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned int v36; // r12d
  unsigned int v37; // r14d
  __int64 v38; // rcx
  __int64 v39; // rcx
  LARGE_INTEGER v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // rcx
  unsigned __int64 v43; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v44; // [rsp+48h] [rbp-B8h] BYREF
  __int16 v45; // [rsp+4Ch] [rbp-B4h] BYREF
  __int16 v46; // [rsp+50h] [rbp-B0h] BYREF
  int v47; // [rsp+54h] [rbp-ACh] BYREF
  int v48; // [rsp+58h] [rbp-A8h] BYREF
  int v49; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v50; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v51; // [rsp+64h] [rbp-9Ch] BYREF
  PVOID P; // [rsp+68h] [rbp-98h] BYREF
  __int64 v53; // [rsp+70h] [rbp-90h] BYREF
  __int64 v54; // [rsp+78h] [rbp-88h] BYREF
  __int64 v55; // [rsp+80h] [rbp-80h] BYREF
  __int64 v56; // [rsp+88h] [rbp-78h] BYREF
  __int64 v57; // [rsp+90h] [rbp-70h] BYREF
  __int128 v58; // [rsp+98h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+B0h] [rbp-50h] BYREF
  int *v60; // [rsp+D0h] [rbp-30h]
  __int64 v61; // [rsp+D8h] [rbp-28h]
  __int16 *v62; // [rsp+E0h] [rbp-20h]
  __int64 v63; // [rsp+E8h] [rbp-18h]
  __int16 *v64; // [rsp+F0h] [rbp-10h]
  __int64 v65; // [rsp+F8h] [rbp-8h]
  __int16 *v66; // [rsp+100h] [rbp+0h]
  __int64 v67; // [rsp+108h] [rbp+8h]
  LUID_AND_ATTRIBUTES *Privilege; // [rsp+110h] [rbp+10h]
  __int64 v69; // [rsp+118h] [rbp+18h]
  LONG *p_HighPart; // [rsp+120h] [rbp+20h]
  int v71; // [rsp+128h] [rbp+28h]
  int v72; // [rsp+12Ch] [rbp+2Ch]
  char *v73; // [rsp+130h] [rbp+30h]
  __int64 v74; // [rsp+138h] [rbp+38h]
  LUID_AND_ATTRIBUTES *v75; // [rsp+140h] [rbp+40h]
  int v76; // [rsp+148h] [rbp+48h]
  int v77; // [rsp+14Ch] [rbp+4Ch]
  char *v78; // [rsp+150h] [rbp+50h]
  __int64 v79; // [rsp+158h] [rbp+58h]
  ULONG *p_Attributes; // [rsp+160h] [rbp+60h]
  int v81; // [rsp+168h] [rbp+68h]
  int v82; // [rsp+16Ch] [rbp+6Ch]
  __int64 *v83; // [rsp+170h] [rbp+70h]
  __int64 v84; // [rsp+178h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v85; // [rsp+180h] [rbp+80h] BYREF
  __int64 *v86; // [rsp+1A0h] [rbp+A0h]
  __int64 v87; // [rsp+1A8h] [rbp+A8h]
  int *v88; // [rsp+1B0h] [rbp+B0h]
  __int64 v89; // [rsp+1B8h] [rbp+B8h]
  int *v90; // [rsp+1C0h] [rbp+C0h]
  __int64 v91; // [rsp+1C8h] [rbp+C8h]
  __int64 *v92; // [rsp+1D0h] [rbp+D0h]
  __int64 v93; // [rsp+1D8h] [rbp+D8h]
  struct _EVENT_DATA_DESCRIPTOR v94; // [rsp+1E0h] [rbp+E0h] BYREF
  int *v95; // [rsp+200h] [rbp+100h]
  __int64 v96; // [rsp+208h] [rbp+108h]
  int *v97; // [rsp+210h] [rbp+110h]
  __int64 v98; // [rsp+218h] [rbp+118h]
  __int64 *v99; // [rsp+220h] [rbp+120h]
  __int64 v100; // [rsp+228h] [rbp+128h]
  struct _EVENT_DATA_DESCRIPTOR v101; // [rsp+230h] [rbp+130h] BYREF
  unsigned __int64 *v102; // [rsp+250h] [rbp+150h]
  __int64 v103; // [rsp+258h] [rbp+158h]
  __int64 *v104; // [rsp+260h] [rbp+160h]
  __int64 v105; // [rsp+268h] [rbp+168h]

  v3 = *(_QWORD *)(a1 + 64);
  P = 0LL;
  v7 = 0LL;
  v8 = *(_DWORD *)(v3 + 144);
  v58 = 0LL;
  if ( (v8 & 1) != 0 )
    return 0;
  v9 = *(_DWORD *)(a1 + 160);
  if ( (v9 & 0x10) == 0 && !*(_QWORD *)(a1 + 1536) )
    return 0;
  if ( (v9 & 0x8001) != 0 || !*(_DWORD *)(a1 + 164) )
    return 0;
  if ( !CmpAcquireShutdownRundown() )
  {
    v10 = -1073741431;
LABEL_25:
    if ( (unsigned int)dword_140C02130 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 0x400000000000LL) )
    {
      LODWORD(v43) = v10;
      v102 = &v43;
      v103 = 4LL;
      v104 = &v57;
      v57 = 0x1000000LL;
      v105 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C02130,
        (unsigned __int8 *)byte_1400236C3,
        0LL,
        0LL,
        4u,
        &v101);
    }
    return (unsigned int)v10;
  }
  if ( (a3 & 0x400000) != 0 && ExIsSoftBoot() && (unsigned __int64)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 168LL) - 1LL) > 1 )
    goto LABEL_12;
  v12 = *(_QWORD *)(a1 + 64);
  v13 = MEMORY[0xFFFFF78000000014] & 0xFFFFFFFC;
  v43 = MEMORY[0xFFFFF78000000014] & 0xFFFFFFFFFFFFFFFCuLL;
  v14 = *(_QWORD *)(v12 + 168);
  if ( v14 <= (MEMORY[0xFFFFF78000000014] & 0xFFFFFFFFFFFFFFFCuLL)
    && (MEMORY[0xFFFFF78000000014] & 0xFFFFFFFFFFFFFFFCuLL) - v14 < 864000000000LL
                                                                  * (unsigned __int64)(unsigned int)CmpReorganizeDelayDays )
  {
    goto LABEL_12;
  }
  if ( !a2 )
  {
    v18 = v12 + 48;
    v19 = 0;
    *((_QWORD *)&v58 + 1) = v18;
    do
    {
      if ( !*(_WORD *)(v18 + 2LL * v19) )
        break;
      ++v19;
    }
    while ( v19 < 0x1Fu );
    a2 = &v58;
    LOWORD(v58) = 2 * v19;
  }
  if ( v14 == 2 || v14 != 1 && (*(_DWORD *)(a1 + 4152) & 0x400) == 0 )
  {
    LODWORD(v43) = v13 | 2;
    CmpClearKeyAccessBits(a1, (__int64)a2);
    CmpLockRegistry(v15);
    HvLockHiveFlusherShared(a1);
    HvLockHiveWriter(a1);
    HvMarkBaseBlockDirty(a1);
    *(_QWORD *)(*(_QWORD *)(a1 + 64) + 168LL) = v43;
    HvUnlockHiveWriter(a1);
    HvUnlockHiveFlusherShared(a1);
    CmpUnlockRegistry(v17, v16);
LABEL_12:
    v10 = 0;
    goto LABEL_13;
  }
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 64) + 36LL) == -1 )
    goto LABEL_12;
  LODWORD(v43) = v13 | 1;
  v20 = CmpCreateEmptyHiveClone(&P, a1);
  v21 = P;
  v10 = v20;
  if ( v20 >= 0 )
  {
    v22 = CmpCopyKeyPartial(a1, *(unsigned int *)(*(_QWORD *)(a1 + 64) + 36LL), P, 0xFFFFFFFFLL, 6);
    if ( v22 != -1
      && (*(_DWORD *)(v21[8] + 36LL) = v22,
          HvMarkBaseBlockDirty((__int64)v21),
          (unsigned __int8)CmpCopySyncTree(a1, 66, 0))
      && (TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(
                                                            PagedPool,
                                                            0x1B0uLL,
                                                            0x33394D43u,
                                                            v23),
          (v7 = TransientPoolWithTag) != 0LL) )
    {
      memset(TransientPoolWithTag, 0, 0x1B0uLL);
      v10 = CmCheckRegistry(v21, 2031616LL, v7);
      if ( v10 >= 0 )
      {
        v31 = *(unsigned int *)(*(_QWORD *)(a1 + 64) + 4088LL);
        if ( (v31 & 4) != 0 || *(_DWORD *)(a1 + 4804) == *((_DWORD *)v21 + 1201) )
        {
          v21[7] = 0LL;
          v36 = *((_DWORD *)v21 + 68);
          v37 = *(_DWORD *)(a1 + 272);
          CmpSwapHiveStorage(a1, v21);
          if ( (unsigned int)dword_140C02130 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 0x400000000000LL) )
          {
            v39 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 168LL);
            v86 = &v55;
            v88 = (int *)&v50;
            v90 = (int *)&v51;
            v92 = &v56;
            v55 = v39;
            v87 = 8LL;
            v50 = v37;
            v89 = 4LL;
            v51 = v36;
            v91 = 4LL;
            v56 = 0x1000000LL;
            v93 = 8LL;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_140C02130,
              (unsigned __int8 *)byte_140023705,
              0LL,
              0LL,
              6u,
              &v85);
          }
          CmpLockRegistry(v38);
          HvLockHiveFlusherShared(a1);
          HvLockHiveWriter(a1);
          HvMarkBaseBlockDirty(a1);
          v40.QuadPart = v43;
          *(_QWORD *)(*(_QWORD *)(a1 + 64) + 168LL) = v43;
          HvUnlockHiveWriter(a1);
          HvUnlockHiveFlusherShared(a1);
          CmpUnlockRegistry(v42, v41);
          CmpLogReorganizeEvent(a2, v37, v36);
          if ( v36 < v37 )
          {
            if ( CmpFirstReorganize )
            {
              CmpReorganizeTotalBytesSaved = 0LL;
              CmpReorganizeLastRun = v40;
              CmpFirstReorganize = 0;
            }
            CmpReorganizeTotalBytesSaved += v37 - v36;
            CmpUpdateReorganizeRegistryValues();
          }
          v10 = 0;
        }
        else
        {
          if ( (unsigned int)dword_140C02130 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 0x400000000000LL) )
          {
            v48 = v32;
            v95 = &v48;
            v96 = 4LL;
            v97 = &v49;
            v49 = v33;
            v99 = &v54;
            v98 = 4LL;
            v54 = 0x1000000LL;
            v100 = 8LL;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_140C02130,
              (unsigned __int8 *)&word_1400234EE,
              0LL,
              0LL,
              5u,
              &v94);
          }
          CmpLockRegistry(v31);
          HvLockHiveFlusherShared(a1);
          HvLockHiveWriter(a1);
          HvMarkBaseBlockDirty(a1);
          *(_QWORD *)(*(_QWORD *)(a1 + 64) + 168LL) = v43;
          HvUnlockHiveWriter(a1);
          HvUnlockHiveFlusherShared(a1);
          CmpUnlockRegistry(v35, v34);
          v10 = -1073741492;
        }
      }
      else
      {
        if ( (unsigned int)dword_140C02130 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 0x400000000000LL) )
        {
          v47 = v10;
          v60 = &v47;
          v62 = &v44;
          LowPart_low = LOWORD(v7->Privilege[0].Luid.LowPart);
          LowPart_high = HIWORD(v7->Privilege[0].Luid.LowPart);
          Privilege = v7->Privilege;
          v64 = &v45;
          p_HighPart = &v7->Privilege[0].Luid.HighPart;
          v28 = BYTE2(v7[19].Privilege[0].Luid.HighPart);
          v71 = 12 * LowPart_low;
          v75 = v7[5].Privilege;
          v76 = 12 * LowPart_high;
          p_Attributes = &v7[19].Privilege[0].Attributes;
          v83 = &v53;
          v46 = v28;
          v44 = LowPart_low;
          v45 = LowPart_high;
          v73 = (char *)&v7->Privilege[0].Luid + 2;
          v78 = (char *)&v7[19].Privilege[0].Luid.HighPart + 2;
          v61 = 4LL;
          v63 = 2LL;
          v65 = 2LL;
          v66 = &v46;
          v67 = 2LL;
          v69 = 2LL;
          v72 = 0;
          v74 = 2LL;
          v77 = 0;
          v79 = 2LL;
          v81 = 8 * v28;
          v82 = 0;
          v53 = 0x1000000LL;
          v84 = 8LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140C02130,
            (unsigned __int8 *)&word_140023556,
            0LL,
            0LL,
            0xDu,
            &v59);
        }
        if ( v10 == -1073741492 || v10 == -2147483606 )
        {
          CmpLockRegistry(v25);
          HvLockHiveFlusherShared(a1);
          HvLockHiveWriter(a1);
          HvMarkBaseBlockDirty(a1);
          *(_QWORD *)(*(_QWORD *)(a1 + 64) + 168LL) = v43;
          HvUnlockHiveWriter(a1);
          HvUnlockHiveFlusherShared(a1);
          CmpUnlockRegistry(v30, v29);
        }
      }
    }
    else
    {
      v10 = -1073741670;
    }
  }
  if ( v21 )
    CmpDestroyHive(v21);
LABEL_13:
  CmpReleaseShutdownRundown();
  if ( v7 )
    CmSiFreeMemory(v7);
  if ( v10 < 0 )
    goto LABEL_25;
  return (unsigned int)v10;
}
