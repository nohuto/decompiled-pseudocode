/*
 * XREFs of MmProtectDriverSection @ 0x14025D5E0
 * Callers:
 *     <none>
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14026DFC0 (MiGetAnyMultiplexedVm.c)
 *     MiGetSystemRegionType @ 0x14027B080 (MiGetSystemRegionType.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     RtlImageDirectoryEntryToData @ 0x1402D6CB0 (RtlImageDirectoryEntryToData.c)
 *     MiUnlockLoaderEntry @ 0x1402D94D8 (MiUnlockLoaderEntry.c)
 *     MiLockLoaderEntry @ 0x1402D96AC (MiLockLoaderEntry.c)
 *     MiLookupDataTableEntry @ 0x1402FDA80 (MiLookupDataTableEntry.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402FDD20 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiWalkPageTables @ 0x14030CF90 (MiWalkPageTables.c)
 *     MiSetSystemCodeProtection @ 0x14033EF50 (MiSetSystemCodeProtection.c)
 *     MiMakeDriverPagesPrivate @ 0x14033F41C (MiMakeDriverPagesPrivate.c)
 *     VslpEnterIumSecureMode @ 0x140358A20 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MmReleaseLoadLock @ 0x1406F5AF0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406F5B50 (MmAcquireLoadLock.c)
 *     MiSnapDriverRange @ 0x140760B20 (MiSnapDriverRange.c)
 */

__int64 __fastcall MmProtectDriverSection(ULONG_PTR BugCheckParameter2, __int64 a2, int a3)
{
  unsigned int v6; // ebx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  ULONG_PTR v13; // rsi
  __int64 v14; // rdx
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // r14
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v25; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v26; // [rsp+48h] [rbp-B8h]
  __int64 v27; // [rsp+50h] [rbp-B0h]
  int v28; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+60h] [rbp-A0h] BYREF
  __int64 Lock; // [rsp+68h] [rbp-98h]
  _QWORD v31[22]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v32[14]; // [rsp+120h] [rbp+20h] BYREF

  v6 = 0;
  v24 = 0LL;
  v29 = 0LL;
  memset(v31, 0, sizeof(v31));
  v28 = 0;
  v25 = 0LL;
  v26 = 0LL;
  LODWORD(v27) = 0;
  if ( (MiFlags & 0x4000) == 0 )
    return 3221225860LL;
  if ( (a3 & 0xFFFFFFFE) == 0 && !a2 )
  {
    Lock = MmAcquireLoadLock();
    v8 = MiLookupDataTableEntry(BugCheckParameter2, 1LL);
    v12 = v8;
    if ( !v8 )
      KeBugCheckEx(0x1Au, 0x1100uLL, BugCheckParameter2, 0LL, 0LL);
    v13 = *(_QWORD *)(v8 + 48);
    if ( (unsigned int)MiGetSystemRegionType(v13, v9, v10, v11) != 1
      && !(unsigned int)MI_IS_PHYSICAL_ADDRESS(v13)
      && v13 != PsNtosImageBase
      && v13 != PsHalImageBase )
    {
      if ( (*(_DWORD *)(v12 + 104) & 0x80000) != 0 )
      {
        v6 = -1073741757;
LABEL_30:
        MmReleaseLoadLock(Lock);
        return v6;
      }
      MiSnapDriverRange(v12, 0, 64, BugCheckParameter2, (__int64)&v24, (__int64)&v29);
      if ( !v24 )
      {
        v6 = -1073741503;
        goto LABEL_30;
      }
      LOBYTE(v14) = 1;
      v15 = (v29 << 25 >> 16) + 4095;
      v16 = v24 << 25 >> 16;
      v17 = RtlImageDirectoryEntryToData(*(_QWORD *)(v12 + 48), v14, 12LL, &v28);
      if ( !v17 || !v28 || v17 > v15 || v17 + (unsigned int)(v28 - 1) < v16 )
      {
        DWORD1(v25) = 0;
        v31[19] = MiProtectDriverSectionPte;
        v26 = 0LL;
        v31[21] = &v25;
        v27 = 0LL;
        *((_QWORD *)&v25 + 1) = v12;
        v31[3] = MiGetAnyMultiplexedVm(1LL);
        v31[4] = v16;
        v31[5] = v15;
        LODWORD(v31[0]) = 39;
        HIBYTE(v31[0]) = MiLockWorkingSetShared(v31[3]);
        MiWalkPageTables(v31);
        LOBYTE(v18) = HIBYTE(v31[0]);
        MiUnlockWorkingSetShared(v31[3], v18);
        v19 = v29;
        if ( v26 == (unsigned int)((v29 - v24) >> 3) + 1 )
        {
          if ( (a3 & 1) == 0 )
          {
            memset(v32, 0, 0x68uLL);
            v32[1] = v13;
            LOBYTE(v20) = 2;
            if ( (int)VslpEnterIumSecureMode(v20, 45LL, 0LL, v32) < 0 )
              KeBugCheckEx(0x1Au, 0x1105uLL, v13, 0LL, 0LL);
          }
          MiMakeDriverPagesPrivate(v12, v24, v19, 0LL);
          *(_QWORD *)&v25 = 1LL;
          v26 = 0LL;
          v27 = 0LL;
          *((_QWORD *)&v25 + 1) = v12;
          MiLockLoaderEntry(v12 + 160, 0LL);
          HIBYTE(v31[0]) = MiLockWorkingSetShared(v31[3]);
          MiWalkPageTables(v31);
          LOBYTE(v21) = HIBYTE(v31[0]);
          MiUnlockWorkingSetShared(v31[3], v21);
          MiUnlockLoaderEntry(v12 + 160, 0LL);
          MiSetSystemCodeProtection(v12, v24, v19, 1LL);
          if ( (dword_140C54F84 & 8) != 0 )
          {
            *(_QWORD *)&v25 = 2LL;
            v26 = 0LL;
            v27 = 0LL;
            *((_QWORD *)&v25 + 1) = v12;
            HIBYTE(v31[0]) = MiLockWorkingSetShared(v31[3]);
            MiWalkPageTables(v31);
            LOBYTE(v22) = HIBYTE(v31[0]);
            MiUnlockWorkingSetShared(v31[3], v22);
          }
          *(_QWORD *)&v25 = 3LL;
          v26 = 0LL;
          v27 = 0LL;
          *((_QWORD *)&v25 + 1) = v12;
          HIBYTE(v31[0]) = MiLockWorkingSetShared(v31[3]);
          MiWalkPageTables(v31);
          LOBYTE(v23) = HIBYTE(v31[0]);
          MiUnlockWorkingSetShared(v31[3], v23);
          *(_DWORD *)(v12 + 196) |= 0x200u;
        }
        else if ( (v27 & 1) != 0 )
        {
          v6 = -1073741755;
        }
        else
        {
          v6 = (v27 & 2) != 0 ? -1073741791 : -1073741819;
        }
        goto LABEL_30;
      }
    }
    v6 = -1073741637;
    goto LABEL_30;
  }
  return 3221225485LL;
}
