/*
 * XREFs of CmpReorganizeHive @ 0x14063B384
 * Callers:
 *     CmpCreateHive @ 0x14063ACD0 (CmpCreateHive.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402029C0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x1402036A0 (CmpAllocateTransientPoolWithTag.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14026C434 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14026C5B4 (_tlgKeywordOn.c)
 *     ExIsSoftBoot @ 0x1403A5420 (ExIsSoftBoot.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     HvLockHiveFlusherShared @ 0x1405E2D14 (HvLockHiveFlusherShared.c)
 *     HvUnlockHiveFlusherShared @ 0x1405E2D30 (HvUnlockHiveFlusherShared.c)
 *     CmpUnlockRegistry @ 0x1405F3D20 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F3D60 (CmpLockRegistry.c)
 *     HvUnlockHiveWriter @ 0x14063B338 (HvUnlockHiveWriter.c)
 *     HvLockHiveWriter @ 0x14063B368 (HvLockHiveWriter.c)
 *     CmCheckRegistry @ 0x14063BE80 (CmCheckRegistry.c)
 *     CmpReleaseShutdownRundown @ 0x1406941E0 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x140695430 (CmpAcquireShutdownRundown.c)
 *     CmpClearKeyAccessBits @ 0x1406F9DAC (CmpClearKeyAccessBits.c)
 *     HvMarkBaseBlockDirty @ 0x14070ADAC (HvMarkBaseBlockDirty.c)
 *     CmpDestroyHive @ 0x1407174E8 (CmpDestroyHive.c)
 *     CmpCopyKeyPartial @ 0x1407524C0 (CmpCopyKeyPartial.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x1407BC43C (CmpUpdateReorganizeRegistryValues.c)
 *     CmpLogReorganizeEvent @ 0x140868170 (CmpLogReorganizeEvent.c)
 *     CmpCreateEmptyHiveClone @ 0x14086FA48 (CmpCreateEmptyHiveClone.c)
 *     CmpSwapHiveStorage @ 0x14086FD08 (CmpSwapHiveStorage.c)
 *     CmpCopySyncTree @ 0x140875014 (CmpCopySyncTree.c)
 */

__int64 __fastcall CmpReorganizeHive(ULONG_PTR BugCheckParameter2, __int128 *a2, int a3)
{
  __int64 v3; // rax
  struct _PRIVILEGE_SET *v7; // r15
  int v8; // ecx
  int v9; // eax
  int v10; // ebx
  unsigned __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // rdx
  unsigned __int64 v15; // r8
  __int64 v16; // r9
  int v17; // eax
  _QWORD *v18; // rsi
  int v19; // ebx
  struct _LOOKASIDE_LIST_EX *v20; // r9
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  int LowPart_low; // edx
  int LowPart_high; // r9d
  int v24; // r10d
  int v25; // r9d
  int v26; // r10d
  unsigned int v27; // r12d
  unsigned int v28; // r14d
  __int64 v29; // rcx
  LARGE_INTEGER v30; // rbx
  unsigned __int64 v31; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v32; // [rsp+48h] [rbp-B8h] BYREF
  __int16 v33; // [rsp+4Ch] [rbp-B4h] BYREF
  __int16 v34; // [rsp+50h] [rbp-B0h] BYREF
  int v35; // [rsp+54h] [rbp-ACh] BYREF
  int v36; // [rsp+58h] [rbp-A8h] BYREF
  int v37; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v38; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v39; // [rsp+64h] [rbp-9Ch] BYREF
  PVOID P; // [rsp+68h] [rbp-98h] BYREF
  __int64 v41; // [rsp+70h] [rbp-90h] BYREF
  __int64 v42; // [rsp+78h] [rbp-88h] BYREF
  __int64 v43; // [rsp+80h] [rbp-80h] BYREF
  __int64 v44; // [rsp+88h] [rbp-78h] BYREF
  __int64 v45; // [rsp+90h] [rbp-70h] BYREF
  __int128 v46; // [rsp+98h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+B0h] [rbp-50h] BYREF
  int *v48; // [rsp+D0h] [rbp-30h]
  __int64 v49; // [rsp+D8h] [rbp-28h]
  __int16 *v50; // [rsp+E0h] [rbp-20h]
  __int64 v51; // [rsp+E8h] [rbp-18h]
  __int16 *v52; // [rsp+F0h] [rbp-10h]
  __int64 v53; // [rsp+F8h] [rbp-8h]
  __int16 *v54; // [rsp+100h] [rbp+0h]
  __int64 v55; // [rsp+108h] [rbp+8h]
  LUID_AND_ATTRIBUTES *Privilege; // [rsp+110h] [rbp+10h]
  __int64 v57; // [rsp+118h] [rbp+18h]
  LONG *p_HighPart; // [rsp+120h] [rbp+20h]
  int v59; // [rsp+128h] [rbp+28h]
  int v60; // [rsp+12Ch] [rbp+2Ch]
  char *v61; // [rsp+130h] [rbp+30h]
  __int64 v62; // [rsp+138h] [rbp+38h]
  LUID_AND_ATTRIBUTES *v63; // [rsp+140h] [rbp+40h]
  int v64; // [rsp+148h] [rbp+48h]
  int v65; // [rsp+14Ch] [rbp+4Ch]
  char *v66; // [rsp+150h] [rbp+50h]
  __int64 v67; // [rsp+158h] [rbp+58h]
  ULONG *p_Attributes; // [rsp+160h] [rbp+60h]
  int v69; // [rsp+168h] [rbp+68h]
  int v70; // [rsp+16Ch] [rbp+6Ch]
  __int64 *v71; // [rsp+170h] [rbp+70h]
  __int64 v72; // [rsp+178h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v73; // [rsp+180h] [rbp+80h] BYREF
  __int64 *v74; // [rsp+1A0h] [rbp+A0h]
  __int64 v75; // [rsp+1A8h] [rbp+A8h]
  int *v76; // [rsp+1B0h] [rbp+B0h]
  __int64 v77; // [rsp+1B8h] [rbp+B8h]
  int *v78; // [rsp+1C0h] [rbp+C0h]
  __int64 v79; // [rsp+1C8h] [rbp+C8h]
  __int64 *v80; // [rsp+1D0h] [rbp+D0h]
  __int64 v81; // [rsp+1D8h] [rbp+D8h]
  struct _EVENT_DATA_DESCRIPTOR v82; // [rsp+1E0h] [rbp+E0h] BYREF
  int *v83; // [rsp+200h] [rbp+100h]
  __int64 v84; // [rsp+208h] [rbp+108h]
  int *v85; // [rsp+210h] [rbp+110h]
  __int64 v86; // [rsp+218h] [rbp+118h]
  __int64 *v87; // [rsp+220h] [rbp+120h]
  __int64 v88; // [rsp+228h] [rbp+128h]
  struct _EVENT_DATA_DESCRIPTOR v89; // [rsp+230h] [rbp+130h] BYREF
  unsigned __int64 *v90; // [rsp+250h] [rbp+150h]
  __int64 v91; // [rsp+258h] [rbp+158h]
  __int64 *v92; // [rsp+260h] [rbp+160h]
  __int64 v93; // [rsp+268h] [rbp+168h]

  v3 = *(_QWORD *)(BugCheckParameter2 + 64);
  P = 0LL;
  v7 = 0LL;
  v8 = *(_DWORD *)(v3 + 144);
  v46 = 0LL;
  if ( (v8 & 1) != 0 )
    return 0;
  v9 = *(_DWORD *)(BugCheckParameter2 + 160);
  if ( (v9 & 0x10) == 0 && !*(_QWORD *)(BugCheckParameter2 + 1536) )
    return 0;
  if ( (v9 & 0x8001) != 0 || !*(_DWORD *)(BugCheckParameter2 + 164) )
    return 0;
  if ( !(unsigned __int8)CmpAcquireShutdownRundown() )
  {
    v10 = -1073741431;
LABEL_25:
    if ( (unsigned int)dword_140C02130 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 0x400000000000LL) )
    {
      LODWORD(v31) = v10;
      v90 = &v31;
      v91 = 4LL;
      v92 = &v45;
      v45 = 0x1000000LL;
      v93 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C02130,
        (unsigned __int8 *)byte_14002267D,
        0LL,
        0LL,
        4u,
        &v89);
    }
    return (unsigned int)v10;
  }
  if ( (a3 & 0x400000) != 0 && ExIsSoftBoot() )
  {
    v12 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 168LL) - 1LL;
    if ( v12 > 1 )
      goto LABEL_12;
  }
  v13 = *(_QWORD *)(BugCheckParameter2 + 64);
  v14 = MEMORY[0xFFFFF78000000014] & 0xFFFFFFFC;
  v31 = MEMORY[0xFFFFF78000000014] & 0xFFFFFFFFFFFFFFFCuLL;
  v15 = *(_QWORD *)(v13 + 168);
  if ( v15 <= (MEMORY[0xFFFFF78000000014] & 0xFFFFFFFFFFFFFFFCuLL) )
  {
    v12 = 864000000000LL * (unsigned int)CmpReorganizeDelayDays;
    if ( (MEMORY[0xFFFFF78000000014] & 0xFFFFFFFFFFFFFFFCuLL) - v15 < v12 )
      goto LABEL_12;
  }
  if ( !a2 )
  {
    v16 = v13 + 48;
    v12 = 0LL;
    *((_QWORD *)&v46 + 1) = v16;
    do
    {
      if ( !*(_WORD *)(v16 + 2LL * (unsigned __int16)v12) )
        break;
      LOWORD(v12) = v12 + 1;
    }
    while ( (unsigned __int16)v12 < 0x1Fu );
    LOWORD(v12) = 2 * v12;
    a2 = &v46;
    LOWORD(v46) = v12;
  }
  if ( v15 == 2 || v15 != 1 && (*(_DWORD *)(BugCheckParameter2 + 4152) & 0x400) == 0 )
  {
    LODWORD(v31) = v14 | 2;
    CmpClearKeyAccessBits(BugCheckParameter2);
    CmpLockRegistry();
    HvLockHiveFlusherShared(BugCheckParameter2);
    HvLockHiveWriter(BugCheckParameter2);
    HvMarkBaseBlockDirty(BugCheckParameter2);
    *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 168LL) = v31;
    HvUnlockHiveWriter(BugCheckParameter2);
    HvUnlockHiveFlusherShared(BugCheckParameter2);
    CmpUnlockRegistry();
LABEL_12:
    v10 = 0;
    goto LABEL_13;
  }
  if ( *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL) == -1 )
    goto LABEL_12;
  LODWORD(v31) = v14 | 1;
  v17 = CmpCreateEmptyHiveClone(&P, BugCheckParameter2);
  v18 = P;
  v10 = v17;
  if ( v17 >= 0 )
  {
    v19 = CmpCopyKeyPartial(
            BugCheckParameter2,
            *(unsigned int *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL),
            P,
            0xFFFFFFFFLL,
            6);
    if ( v19 != -1
      && (*(_DWORD *)(v18[8] + 36LL) = v19,
          HvMarkBaseBlockDirty(v18),
          (unsigned __int8)CmpCopySyncTree(BugCheckParameter2, 66, 0))
      && (TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(
                                                            PagedPool,
                                                            0x1B0uLL,
                                                            0x33394D43u,
                                                            v20),
          (v7 = TransientPoolWithTag) != 0LL) )
    {
      memset(TransientPoolWithTag, 0, 0x1B0uLL);
      v10 = CmCheckRegistry(v18, 2031616LL, v7);
      if ( v10 >= 0 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) & 4) != 0
          || *(_DWORD *)(BugCheckParameter2 + 4804) == *((_DWORD *)v18 + 1201) )
        {
          v18[7] = 0LL;
          v27 = *((_DWORD *)v18 + 68);
          v28 = *(_DWORD *)(BugCheckParameter2 + 272);
          CmpSwapHiveStorage(BugCheckParameter2, v18);
          if ( (unsigned int)dword_140C02130 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 0x400000000000LL) )
          {
            v29 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 168LL);
            v74 = &v43;
            v76 = (int *)&v38;
            v78 = (int *)&v39;
            v80 = &v44;
            v43 = v29;
            v75 = 8LL;
            v38 = v28;
            v77 = 4LL;
            v39 = v27;
            v79 = 4LL;
            v44 = 0x1000000LL;
            v81 = 8LL;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_140C02130,
              (unsigned __int8 *)&byte_140022627,
              0LL,
              0LL,
              6u,
              &v73);
          }
          CmpLockRegistry();
          HvLockHiveFlusherShared(BugCheckParameter2);
          HvLockHiveWriter(BugCheckParameter2);
          HvMarkBaseBlockDirty(BugCheckParameter2);
          v30.QuadPart = v31;
          *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 168LL) = v31;
          HvUnlockHiveWriter(BugCheckParameter2);
          HvUnlockHiveFlusherShared(BugCheckParameter2);
          CmpUnlockRegistry();
          CmpLogReorganizeEvent(a2, v28, v27);
          if ( v27 < v28 )
          {
            if ( CmpFirstReorganize )
            {
              CmpReorganizeTotalBytesSaved = 0LL;
              CmpReorganizeLastRun = v30;
              CmpFirstReorganize = 0;
            }
            CmpReorganizeTotalBytesSaved += v28 - v27;
            CmpUpdateReorganizeRegistryValues();
          }
          v10 = 0;
        }
        else
        {
          if ( (unsigned int)dword_140C02130 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 0x400000000000LL) )
          {
            v36 = v25;
            v83 = &v36;
            v84 = 4LL;
            v85 = &v37;
            v37 = v26;
            v87 = &v42;
            v86 = 4LL;
            v42 = 0x1000000LL;
            v88 = 8LL;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_140C02130,
              (unsigned __int8 *)&dword_14002282C,
              0LL,
              0LL,
              5u,
              &v82);
          }
          CmpLockRegistry();
          HvLockHiveFlusherShared(BugCheckParameter2);
          HvLockHiveWriter(BugCheckParameter2);
          HvMarkBaseBlockDirty(BugCheckParameter2);
          *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 168LL) = v31;
          HvUnlockHiveWriter(BugCheckParameter2);
          HvUnlockHiveFlusherShared(BugCheckParameter2);
          CmpUnlockRegistry();
          v10 = -1073741492;
        }
      }
      else
      {
        if ( (unsigned int)dword_140C02130 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 0x400000000000LL) )
        {
          v35 = v10;
          v48 = &v35;
          v50 = &v32;
          LowPart_low = LOWORD(v7->Privilege[0].Luid.LowPart);
          LowPart_high = HIWORD(v7->Privilege[0].Luid.LowPart);
          Privilege = v7->Privilege;
          v52 = &v33;
          p_HighPart = &v7->Privilege[0].Luid.HighPart;
          v24 = BYTE2(v7[19].Privilege[0].Luid.HighPart);
          v59 = 12 * LowPart_low;
          v63 = v7[5].Privilege;
          v64 = 12 * LowPart_high;
          p_Attributes = &v7[19].Privilege[0].Attributes;
          v71 = &v41;
          v34 = v24;
          v32 = LowPart_low;
          v33 = LowPart_high;
          v61 = (char *)&v7->Privilege[0].Luid + 2;
          v66 = (char *)&v7[19].Privilege[0].Luid.HighPart + 2;
          v49 = 4LL;
          v51 = 2LL;
          v53 = 2LL;
          v54 = &v34;
          v55 = 2LL;
          v57 = 2LL;
          v60 = 0;
          v62 = 2LL;
          v65 = 0;
          v67 = 2LL;
          v69 = 8 * v24;
          v70 = 0;
          v41 = 0x1000000LL;
          v72 = 8LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140C02130,
            (unsigned __int8 *)&byte_1400226BF,
            0LL,
            0LL,
            0xDu,
            &v47);
        }
        if ( v10 == -1073741492 || v10 == -2147483606 )
        {
          CmpLockRegistry();
          HvLockHiveFlusherShared(BugCheckParameter2);
          HvLockHiveWriter(BugCheckParameter2);
          HvMarkBaseBlockDirty(BugCheckParameter2);
          *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 168LL) = v31;
          HvUnlockHiveWriter(BugCheckParameter2);
          HvUnlockHiveFlusherShared(BugCheckParameter2);
          CmpUnlockRegistry();
        }
      }
    }
    else
    {
      v10 = -1073741670;
    }
  }
  if ( v18 )
    CmpDestroyHive(v18);
LABEL_13:
  CmpReleaseShutdownRundown(v12, v14, v15);
  if ( v7 )
    CmSiFreeMemory(v7);
  if ( v10 < 0 )
    goto LABEL_25;
  return (unsigned int)v10;
}
