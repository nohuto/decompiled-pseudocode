/*
 * XREFs of CmpVEExecuteOpenLogic @ 0x14060BF80
 * Callers:
 *     CmpDoParseKey @ 0x140619BF0 (CmpDoParseKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     CmpIsSystemEntity @ 0x14060D910 (CmpIsSystemEntity.c)
 *     CmpUnlockKcb @ 0x140613840 (CmpUnlockKcb.c)
 *     CmpLockKcbExclusive @ 0x140670B6C (CmpLockKcbExclusive.c)
 *     CmpAttachToRegistryProcess @ 0x1406790E0 (CmpAttachToRegistryProcess.c)
 *     CmpUnblockHiveWrites @ 0x1406FFA18 (CmpUnblockHiveWrites.c)
 *     CmpFindPathByName @ 0x1406FFA98 (CmpFindPathByName.c)
 *     CmpBlockHiveWrites @ 0x1406FFD24 (CmpBlockHiveWrites.c)
 *     CmpIsKeyDeleted @ 0x140700E04 (CmpIsKeyDeleted.c)
 *     HvpMarkCellDirty @ 0x140707C20 (HvpMarkCellDirty.c)
 *     CmVirtualKCBToRealPath @ 0x1408722A8 (CmVirtualKCBToRealPath.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpVEExecuteOpenLogic(ULONG_PTR a1, _DWORD *a2, char a3, __int64 a4, unsigned __int8 a5)
{
  int v9; // ebx
  char PathByName; // bl
  void *v12; // rcx
  __int64 v13; // rbp
  __int64 v14; // rbx
  int v15; // [rsp+30h] [rbp-48h] BYREF
  __int64 v16; // [rsp+38h] [rbp-40h] BYREF
  __int64 v17; // [rsp+40h] [rbp-38h] BYREF
  __int64 v18; // [rsp+48h] [rbp-30h] BYREF
  PVOID P[2]; // [rsp+50h] [rbp-28h] BYREF

  v15 = 0;
  v18 = 0LL;
  v17 = 0LL;
  *(_OWORD *)P = 0LL;
  RtlInitUnicodeString((PUNICODE_STRING)P, 0LL);
  v16 = 0xFFFFFFFFLL;
  if ( CmpVEEnabled )
  {
    if ( (a2[6] & 0x10) != 0 )
    {
      v9 = -1073741199;
    }
    else if ( *(_WORD *)(a1 + 66) )
    {
      v9 = -1073741199;
    }
    else if ( (*(_DWORD *)(a1 + 184) & 0x2000000) != 0 )
    {
      if ( (*(_DWORD *)(a1 + 8) & 0x7FE00000u) > 0xA00000 )
      {
        if ( (unsigned __int8)CmpIsSystemEntity(a5) )
        {
          v9 = -1073741199;
        }
        else if ( CmpVEEnabled && (*(_DWORD *)(a1 + 184) & 0x1000000) != 0 )
        {
          v9 = -1073741199;
        }
        else
        {
          if ( (a2[40] & 1) == 0 )
          {
            CmpAttachToRegistryProcess(a2 + 42);
            a2[40] |= 1u;
          }
          v9 = CmVirtualKCBToRealPath(a1, P);
          if ( v9 >= 0 )
          {
            v9 = CmpBlockHiveWrites(0LL, 16LL, &v17);
            if ( v9 < 0 )
            {
              if ( v17 )
                CmpUnblockHiveWrites(0LL);
            }
            else
            {
              PathByName = CmpFindPathByName(0LL, P, 0LL, &v15, &v18);
              CmpUnblockHiveWrites(0LL);
              if ( PathByName )
              {
                v12 = *(void **)(a4 + 8);
                if ( v12 )
                  ExFreePoolWithTag(v12, 0);
                *(_OWORD *)a4 = *(_OWORD *)P;
                RtlInitUnicodeString((PUNICODE_STRING)P, 0LL);
                *a2 |= 8u;
                v9 = 260;
              }
              else if ( a3 || (CmpUnlockKcb(a1), CmpLockKcbExclusive(a1), !(unsigned __int8)CmpIsKeyDeleted(a1, 0LL)) )
              {
                ExAcquirePushLockSharedEx(*(_QWORD *)(a1 + 32) + 72LL, 0LL);
                v13 = *(_QWORD *)(a1 + 32);
                v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(v13 + 8))(
                        v13,
                        *(unsigned int *)(a1 + 40),
                        &v16);
                if ( v14 )
                {
                  if ( (unsigned __int8)HvpMarkCellDirty(*(_QWORD *)(a1 + 32), *(unsigned int *)(a1 + 40)) )
                  {
                    *(_WORD *)(v14 + 2) |= 0x100u;
                    *(_WORD *)(a1 + 186) |= 0x100u;
                    *a2 |= 8u;
                    v9 = 260;
                  }
                  else
                  {
                    v9 = -1073741443;
                  }
                  (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(a1 + 32) + 16LL))(*(_QWORD *)(a1 + 32), &v16);
                }
                else
                {
                  v9 = -1073741670;
                }
                if ( v13 )
                {
                  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 72), 0LL, 17LL) != 17 )
                    ExfReleasePushLockShared((signed __int64 *)(v13 + 72));
                  KeAbPostRelease(v13 + 72);
                }
              }
              else
              {
                v9 = -1073741772;
              }
            }
          }
        }
      }
      else
      {
        v9 = -1073741199;
      }
    }
    else
    {
      v9 = -1073741199;
    }
  }
  else
  {
    v9 = -1073741199;
  }
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0);
  return (unsigned int)v9;
}
