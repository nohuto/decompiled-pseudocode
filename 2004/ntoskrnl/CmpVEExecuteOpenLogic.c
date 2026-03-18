/*
 * XREFs of CmpVEExecuteOpenLogic @ 0x1406931B0
 * Callers:
 *     CmpDoParseKey @ 0x1405EF1F0 (CmpDoParseKey.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     CmpLockKcbExclusive @ 0x1405DF678 (CmpLockKcbExclusive.c)
 *     CmpAttachToRegistryProcess @ 0x1405EA8E0 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockKcb @ 0x1405F0C10 (CmpUnlockKcb.c)
 *     CmpUnblockHiveWrites @ 0x14063F860 (CmpUnblockHiveWrites.c)
 *     CmpFindPathByName @ 0x14063F8E0 (CmpFindPathByName.c)
 *     CmpBlockHiveWrites @ 0x14063FB6C (CmpBlockHiveWrites.c)
 *     CmpIsKeyDeleted @ 0x14063FC08 (CmpIsKeyDeleted.c)
 *     CmpIsSystemEntity @ 0x140693D90 (CmpIsSystemEntity.c)
 *     HvpMarkCellDirty @ 0x14069FC00 (HvpMarkCellDirty.c)
 *     CmVirtualKCBToRealPath @ 0x14086C7FC (CmVirtualKCBToRealPath.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpVEExecuteOpenLogic(ULONG_PTR a1, _DWORD *a2, char a3, __int64 a4, unsigned __int8 a5)
{
  int v9; // ebx
  char PathByName; // bl
  void *v12; // rcx
  __int64 v13; // r8
  struct _LOOKASIDE_LIST_EX *v14; // r9
  __int64 v15; // rbp
  __int64 v16; // rbx
  unsigned int v17; // [rsp+30h] [rbp-48h] BYREF
  __int64 v18; // [rsp+38h] [rbp-40h] BYREF
  volatile signed __int32 *v19; // [rsp+40h] [rbp-38h] BYREF
  __int64 v20; // [rsp+48h] [rbp-30h] BYREF
  PVOID P[2]; // [rsp+50h] [rbp-28h] BYREF

  v17 = 0;
  v20 = 0LL;
  v19 = 0LL;
  *(_OWORD *)P = 0LL;
  RtlInitUnicodeString((PUNICODE_STRING)P, 0LL);
  v18 = 0xFFFFFFFFLL;
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
            CmpAttachToRegistryProcess((__int64)(a2 + 42));
            a2[40] |= 1u;
          }
          v9 = CmVirtualKCBToRealPath(a1, P);
          if ( v9 >= 0 )
          {
            v9 = CmpBlockHiveWrites(0LL, 16, &v19);
            if ( v9 < 0 )
            {
              if ( v19 )
                CmpUnblockHiveWrites(0LL, 16, v19);
            }
            else
            {
              PathByName = CmpFindPathByName(0LL, (__m128i *)P, 0LL, &v17, &v20);
              CmpUnblockHiveWrites(0LL, 16, v19);
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
              else if ( a3 || (CmpUnlockKcb(a1), CmpLockKcbExclusive(a1), !CmpIsKeyDeleted(a1, 0LL, v13, v14)) )
              {
                ExAcquirePushLockSharedEx(*(_QWORD *)(a1 + 32) + 72LL, 0LL);
                v15 = *(_QWORD *)(a1 + 32);
                v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(v15 + 8))(
                        v15,
                        *(unsigned int *)(a1 + 40),
                        &v18);
                if ( v16 )
                {
                  if ( (unsigned __int8)HvpMarkCellDirty(*(_QWORD *)(a1 + 32), *(unsigned int *)(a1 + 40)) )
                  {
                    *(_WORD *)(v16 + 2) |= 0x100u;
                    *(_WORD *)(a1 + 186) |= 0x100u;
                    *a2 |= 8u;
                    v9 = 260;
                  }
                  else
                  {
                    v9 = -1073741443;
                  }
                  (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(a1 + 32) + 16LL))(*(_QWORD *)(a1 + 32), &v18);
                }
                else
                {
                  v9 = -1073741670;
                }
                if ( v15 )
                {
                  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 72), 0LL, 17LL) != 17 )
                    ExfReleasePushLockShared((signed __int64 *)(v15 + 72));
                  KeAbPostRelease(v15 + 72);
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
