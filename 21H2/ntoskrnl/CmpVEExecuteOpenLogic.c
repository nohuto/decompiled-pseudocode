/*
 * XREFs of CmpVEExecuteOpenLogic @ 0x140654F90
 * Callers:
 *     CmpDoParseKey @ 0x1406F9170 (CmpDoParseKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14027C520 (RtlInitUnicodeString.c)
 *     ExfReleasePushLockShared @ 0x1402F1470 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x14034AB50 (ExAcquirePushLockSharedEx.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     CmpFindPathByNameEx @ 0x1405CC874 (CmpFindPathByNameEx.c)
 *     CmpLockKcbExclusive @ 0x1405EC35C (CmpLockKcbExclusive.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     CmpIsSystemEntity @ 0x140656AF0 (CmpIsSystemEntity.c)
 *     CmpUnblockHiveWrites @ 0x14066FDA8 (CmpUnblockHiveWrites.c)
 *     CmpBlockHiveWrites @ 0x14066FE50 (CmpBlockHiveWrites.c)
 *     CmpIsKeyDeleted @ 0x140670F30 (CmpIsKeyDeleted.c)
 *     CmpUnlockKcb @ 0x1406F2B40 (CmpUnlockKcb.c)
 *     HvpMarkCellDirty @ 0x140708420 (HvpMarkCellDirty.c)
 *     CmVirtualKCBToRealPath @ 0x14086FAD8 (CmVirtualKCBToRealPath.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpVEExecuteOpenLogic(ULONG_PTR a1, _DWORD *a2, char a3, __int64 a4, unsigned __int8 a5, __int64 a6)
{
  int v10; // ebx
  __int64 v12; // rdx
  __int64 v13; // r8
  _DWORD *v14; // r9
  char PathByName; // bl
  void *v16; // rcx
  __int64 v17; // rbp
  __int64 v18; // rbx
  unsigned int v19; // [rsp+30h] [rbp-48h] BYREF
  __int64 v20; // [rsp+38h] [rbp-40h] BYREF
  __int64 v21; // [rsp+40h] [rbp-38h] BYREF
  __int64 v22; // [rsp+48h] [rbp-30h] BYREF
  PVOID P[2]; // [rsp+50h] [rbp-28h] BYREF

  v19 = 0;
  v22 = 0LL;
  v21 = 0LL;
  *(_OWORD *)P = 0LL;
  RtlInitUnicodeString((PUNICODE_STRING)P, 0LL);
  v20 = 0xFFFFFFFFLL;
  if ( CmpVEEnabled )
  {
    if ( (a2[6] & 0x10) != 0 )
    {
      v10 = -1073741199;
    }
    else if ( *(_WORD *)(a1 + 66) )
    {
      v10 = -1073741199;
    }
    else if ( (*(_DWORD *)(a1 + 184) & 0x2000000) != 0 )
    {
      if ( (*(_DWORD *)(a1 + 8) & 0x7FE00000u) > 0xA00000 )
      {
        if ( (unsigned __int8)CmpIsSystemEntity(a5, a6, a2 + 4) )
        {
          v10 = -1073741199;
        }
        else if ( CmpVEEnabled && (*(_DWORD *)(a1 + 184) & 0x1000000) != 0 )
        {
          v10 = -1073741199;
        }
        else
        {
          if ( (a2[40] & 1) == 0 )
          {
            CmpAttachToRegistryProcess((__int64)(a2 + 42), v12, v13, v14);
            a2[40] |= 1u;
          }
          v10 = CmVirtualKCBToRealPath(a1, P);
          if ( v10 >= 0 )
          {
            v10 = CmpBlockHiveWrites(0LL, 16LL, &v21);
            if ( v10 < 0 )
            {
              if ( v21 )
                CmpUnblockHiveWrites(0LL);
            }
            else
            {
              PathByName = CmpFindPathByNameEx(0LL, (__m128i *)P, 0LL, 16, &v19, &v22);
              CmpUnblockHiveWrites(0LL);
              if ( PathByName )
              {
                v16 = *(void **)(a4 + 8);
                if ( v16 )
                  ExFreePoolWithTag(v16, 0);
                *(_OWORD *)a4 = *(_OWORD *)P;
                RtlInitUnicodeString((PUNICODE_STRING)P, 0LL);
                *a2 |= 8u;
                v10 = 260;
              }
              else if ( a3 || (CmpUnlockKcb(a1), CmpLockKcbExclusive(a1), !(unsigned __int8)CmpIsKeyDeleted(a1, 0LL)) )
              {
                ExAcquirePushLockSharedEx(*(_QWORD *)(a1 + 32) + 72LL, 0LL);
                v17 = *(_QWORD *)(a1 + 32);
                v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(v17 + 8))(
                        v17,
                        *(unsigned int *)(a1 + 40),
                        &v20);
                if ( v18 )
                {
                  if ( (unsigned __int8)HvpMarkCellDirty(*(_QWORD *)(a1 + 32), *(unsigned int *)(a1 + 40)) )
                  {
                    *(_WORD *)(v18 + 2) |= 0x100u;
                    *(_WORD *)(a1 + 186) |= 0x100u;
                    *a2 |= 8u;
                    v10 = 260;
                  }
                  else
                  {
                    v10 = -1073741443;
                  }
                  (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(a1 + 32) + 16LL))(*(_QWORD *)(a1 + 32), &v20);
                }
                else
                {
                  v10 = -1073741670;
                }
                if ( v17 )
                {
                  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 72), 0LL, 17LL) != 17 )
                    ExfReleasePushLockShared((signed __int64 *)(v17 + 72));
                  KeAbPostRelease(v17 + 72);
                }
              }
              else
              {
                v10 = -1073741772;
              }
            }
          }
        }
      }
      else
      {
        v10 = -1073741199;
      }
    }
    else
    {
      v10 = -1073741199;
    }
  }
  else
  {
    v10 = -1073741199;
  }
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0);
  return (unsigned int)v10;
}
