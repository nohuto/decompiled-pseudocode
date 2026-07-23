/*
 * XREFs of CmpVEExecuteOpenLogic @ 0x140649DB0
 * Callers:
 *     CmpDoParseKey @ 0x140710550 (CmpDoParseKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpFindPathByNameEx @ 0x1405CC874 (CmpFindPathByNameEx.c)
 *     CmpIsSystemEntity @ 0x14064B910 (CmpIsSystemEntity.c)
 *     CmpUnblockHiveWrites @ 0x140666288 (CmpUnblockHiveWrites.c)
 *     CmpBlockHiveWrites @ 0x140666330 (CmpBlockHiveWrites.c)
 *     CmpIsKeyDeleted @ 0x140667410 (CmpIsKeyDeleted.c)
 *     CmpLockKcbExclusive @ 0x1406DBABC (CmpLockKcbExclusive.c)
 *     CmpAttachToRegistryProcess @ 0x1406E5AF0 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockKcb @ 0x140709F20 (CmpUnlockKcb.c)
 *     HvpMarkCellDirty @ 0x14071F800 (HvpMarkCellDirty.c)
 *     CmVirtualKCBToRealPath @ 0x14086FC38 (CmVirtualKCBToRealPath.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpVEExecuteOpenLogic(
        ULONG_PTR BugCheckParameter2,
        _DWORD *a2,
        char a3,
        __int64 a4,
        unsigned __int8 a5)
{
  int v9; // ebx
  char PathByName; // bl
  void *v12; // rcx
  __int64 v13; // rbp
  __int64 v14; // rbx
  unsigned int v15; // [rsp+30h] [rbp-48h] BYREF
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
    else if ( *(_WORD *)(BugCheckParameter2 + 66) )
    {
      v9 = -1073741199;
    }
    else if ( (*(_DWORD *)(BugCheckParameter2 + 184) & 0x2000000) != 0 )
    {
      if ( (*(_DWORD *)(BugCheckParameter2 + 8) & 0x7FE00000u) > 0xA00000 )
      {
        if ( (unsigned __int8)CmpIsSystemEntity(a5) )
        {
          v9 = -1073741199;
        }
        else if ( CmpVEEnabled && (*(_DWORD *)(BugCheckParameter2 + 184) & 0x1000000) != 0 )
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
          v9 = CmVirtualKCBToRealPath(BugCheckParameter2, P);
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
              PathByName = CmpFindPathByNameEx(0LL, (__m128i *)P, 0LL, 16, &v15, &v18);
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
              else if ( a3
                     || (CmpUnlockKcb(BugCheckParameter2),
                         CmpLockKcbExclusive(BugCheckParameter2),
                         !(unsigned __int8)CmpIsKeyDeleted(BugCheckParameter2, 0LL)) )
              {
                ExAcquirePushLockSharedEx(*(_QWORD *)(BugCheckParameter2 + 32) + 72LL, 0LL);
                v13 = *(_QWORD *)(BugCheckParameter2 + 32);
                v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(v13 + 8))(
                        v13,
                        *(unsigned int *)(BugCheckParameter2 + 40),
                        &v16);
                if ( v14 )
                {
                  if ( (unsigned __int8)HvpMarkCellDirty(
                                          *(_QWORD *)(BugCheckParameter2 + 32),
                                          *(unsigned int *)(BugCheckParameter2 + 40)) )
                  {
                    *(_WORD *)(v14 + 2) |= 0x100u;
                    *(_WORD *)(BugCheckParameter2 + 186) |= 0x100u;
                    *a2 |= 8u;
                    v9 = 260;
                  }
                  else
                  {
                    v9 = -1073741443;
                  }
                  (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(BugCheckParameter2 + 32) + 16LL))(
                    *(_QWORD *)(BugCheckParameter2 + 32),
                    &v16);
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
