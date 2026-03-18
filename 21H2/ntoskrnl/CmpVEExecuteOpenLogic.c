/*
 * XREFs of CmpVEExecuteOpenLogic @ 0x1407C64A0
 * Callers:
 *     CmpDoParseKey @ 0x1407362A0 (CmpDoParseKey.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     CmpFindPathByNameEx @ 0x140657398 (CmpFindPathByNameEx.c)
 *     CmpIsSystemEntity @ 0x1406B67A0 (CmpIsSystemEntity.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     CmpIsKeyDeleted @ 0x14071A6D4 (CmpIsKeyDeleted.c)
 *     CmpUnblockHiveWrites @ 0x14071A730 (CmpUnblockHiveWrites.c)
 *     CmpBlockHiveWrites @ 0x14071B99C (CmpBlockHiveWrites.c)
 *     HvpMarkCellDirty @ 0x14071F300 (HvpMarkCellDirty.c)
 *     CmpLockKcbExclusive @ 0x1407C0854 (CmpLockKcbExclusive.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407C97FC (HvpGetCellContextReinitialize.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 *     CmVirtualKCBToRealPath @ 0x140916454 (CmVirtualKCBToRealPath.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     CmpUnlockKcb @ 0x140AB4300 (CmpUnlockKcb.c)
 *     CmpAttachToRegistryProcess @ 0x140AB4550 (CmpAttachToRegistryProcess.c)
 */

__int64 __fastcall CmpVEExecuteOpenLogic(
        __int64 a1,
        _DWORD *a2,
        char a3,
        __int64 a4,
        char a5,
        struct _SECURITY_SUBJECT_CONTEXT *a6)
{
  int v10; // ebx
  char PathByName; // bl
  void *v13; // rcx
  ULONG_PTR v14; // rbp
  __int64 CellFlat; // rax
  __int64 v16; // r14
  __int64 v17; // rcx
  unsigned int v18; // [rsp+30h] [rbp-48h] BYREF
  __int64 v19; // [rsp+38h] [rbp-40h] BYREF
  volatile signed __int32 *v20; // [rsp+40h] [rbp-38h] BYREF
  ULONG_PTR v21; // [rsp+48h] [rbp-30h] BYREF
  PVOID P[2]; // [rsp+50h] [rbp-28h] BYREF

  v18 = 0;
  v21 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  *(_OWORD *)P = 0LL;
  RtlInitUnicodeString((PUNICODE_STRING)P, 0LL);
  HvpGetCellContextReinitialize(&v19);
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
        if ( CmpIsSystemEntity(a5, a6, a2 + 4) )
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
            CmpAttachToRegistryProcess(a2 + 42);
            a2[40] |= 1u;
          }
          v10 = CmVirtualKCBToRealPath(a1, P);
          if ( v10 >= 0 )
          {
            v10 = CmpBlockHiveWrites(0LL, 16, &v20);
            if ( v10 < 0 )
            {
              if ( v20 )
                CmpUnblockHiveWrites(0LL, 16, v20);
            }
            else
            {
              PathByName = CmpFindPathByNameEx(0LL, (__m128i *)P, 0LL, 16, &v18, &v21);
              CmpUnblockHiveWrites(0LL, 16, v20);
              if ( PathByName )
              {
                v13 = *(void **)(a4 + 8);
                if ( v13 )
                  ExFreePoolWithTag(v13, 0);
                *(_OWORD *)a4 = *(_OWORD *)P;
                RtlInitUnicodeString((PUNICODE_STRING)P, 0LL);
                *a2 |= 8u;
                v10 = 260;
              }
              else if ( a3 || (CmpUnlockKcb(a1), CmpLockKcbExclusive(a1), !CmpIsKeyDeleted(a1, 0LL)) )
              {
                ExAcquirePushLockSharedEx(*(_QWORD *)(a1 + 32) + 72LL, 0LL);
                v14 = *(_QWORD *)(a1 + 32);
                if ( (*(_BYTE *)(v14 + 140) & 1) != 0 )
                  CellFlat = HvpGetCellFlat(v14, *(unsigned int *)(a1 + 40), &v19);
                else
                  CellFlat = HvpGetCellPaged(v14);
                v16 = CellFlat;
                if ( CellFlat )
                {
                  v10 = HvpMarkCellDirty(*(_QWORD *)(a1 + 32), *(unsigned int *)(a1 + 40), 1);
                  if ( v10 >= 0 )
                  {
                    *(_WORD *)(v16 + 2) |= 0x100u;
                    *(_WORD *)(a1 + 186) |= 0x100u;
                    *a2 |= 8u;
                    v10 = 260;
                  }
                  v17 = *(_QWORD *)(a1 + 32);
                  if ( (*(_BYTE *)(v17 + 140) & 1) != 0 )
                    HvpReleaseCellFlat(v17, &v19);
                  else
                    HvpReleaseCellPaged(v17, &v19);
                }
                else
                {
                  v10 = -1073741670;
                }
                if ( v14 )
                {
                  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 72), 0LL, 17LL) != 17 )
                    ExfReleasePushLockShared((signed __int64 *)(v14 + 72));
                  KeAbPostRelease(v14 + 72);
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
