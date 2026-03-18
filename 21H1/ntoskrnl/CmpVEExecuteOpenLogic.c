/*
 * XREFs of CmpVEExecuteOpenLogic @ 0x1405E9C70
 * Callers:
 *     CmpDoParseKey @ 0x140624810 (CmpDoParseKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     CmpIsSystemEntity @ 0x1405EA850 (CmpIsSystemEntity.c)
 *     CmpAttachToRegistryProcess @ 0x14061FF00 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockKcb @ 0x140626230 (CmpUnlockKcb.c)
 *     CmpIsKeyDeleted @ 0x14069178C (CmpIsKeyDeleted.c)
 *     CmpUnblockHiveWrites @ 0x1406919AC (CmpUnblockHiveWrites.c)
 *     CmpFindPathByName @ 0x140691A2C (CmpFindPathByName.c)
 *     CmpBlockHiveWrites @ 0x140693BB8 (CmpBlockHiveWrites.c)
 *     CmpLockKcbExclusive @ 0x140695D18 (CmpLockKcbExclusive.c)
 *     HvpMarkCellDirty @ 0x140699B30 (HvpMarkCellDirty.c)
 *     CmVirtualKCBToRealPath @ 0x14086B4AC (CmVirtualKCBToRealPath.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
