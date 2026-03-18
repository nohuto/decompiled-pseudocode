/*
 * XREFs of ExpSetKernelDataProtection @ 0x1406B1500
 * Callers:
 *     ExpGetLicenseTamperState @ 0x1405B12C8 (ExpGetLicenseTamperState.c)
 *     ExpSetLicenseTamperState @ 0x1405B1664 (ExpSetLicenseTamperState.c)
 *     ExInitLicenseData @ 0x1407A0C50 (ExInitLicenseData.c)
 *     ExSetLicenseTamperState @ 0x14094FB00 (ExSetLicenseTamperState.c)
 *     sub_14094FE40 @ 0x14094FE40 (sub_14094FE40.c)
 *     SLUpdateLicenseDataInternal @ 0x140950AC0 (SLUpdateLicenseDataInternal.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     sub_1406B17A8 @ 0x1406B17A8 (sub_1406B17A8.c)
 *     sub_1407C2A74 @ 0x1407C2A74 (sub_1407C2A74.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpSetKernelDataProtection(__int64 a1, __int64 a2, char a3, char a4)
{
  void *v7; // rcx
  void *v8; // rsi
  PVOID *v9; // rax
  _DWORD *PoolWithTag; // rbx
  _QWORD *v11; // rax
  _QWORD *v12; // r12
  char v13; // al
  unsigned int v14; // ebx
  int v16; // [rsp+20h] [rbp-48h]
  PVOID P; // [rsp+28h] [rbp-40h]
  PVOID v18; // [rsp+30h] [rbp-38h]
  _DWORD *v19; // [rsp+78h] [rbp+10h] BYREF

  v7 = 0LL;
  P = 0LL;
  v8 = 0LL;
  v18 = 0LL;
  if ( !a2 )
  {
    v14 = -1073741811;
    goto LABEL_26;
  }
  if ( (a4 & 1) == 0 && !*(_QWORD *)(a1 + 46832) )
  {
    v14 = 0;
    goto LABEL_26;
  }
  ExAcquirePushLockExclusiveEx(a1 + 47024, 0LL);
  v9 = *(PVOID **)(a1 + 47016);
  if ( v9 )
  {
    v19 = *v9;
    v16 = sub_1406B17A8(&v19);
    if ( v16 >= 0 )
    {
      PoolWithTag = v19;
LABEL_7:
      if ( (a3 & 1) != 0 )
        *(_QWORD *)PoolWithTag = *(_QWORD *)a2;
      if ( (a3 & 2) != 0 )
        PoolWithTag[2] = *(_DWORD *)(a2 + 8);
      if ( (a3 & 4) != 0 )
        *((_QWORD *)PoolWithTag + 2) = *(_QWORD *)(a2 + 16);
      if ( (a3 & 8) != 0 )
        *((_QWORD *)PoolWithTag + 3) = *(_QWORD *)(a2 + 24);
      if ( (a3 & 0x10) != 0 )
        *((_QWORD *)PoolWithTag + 4) = *(_QWORD *)(a2 + 32);
      if ( (a3 & 0x20) != 0 )
        *((_BYTE *)PoolWithTag + 40) = *(_BYTE *)(a2 + 40);
    }
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x20534C53u);
    P = PoolWithTag;
    if ( PoolWithTag && (v11 = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x20534C53u), v12 = v11, (v18 = v11) != 0LL) )
    {
      *v11 = PoolWithTag;
      v19 = PoolWithTag;
      *(_QWORD *)PoolWithTag = 0LL;
      *((_QWORD *)PoolWithTag + 2) = 0LL;
      PoolWithTag[2] = 4;
      *((_QWORD *)PoolWithTag + 3) = 0LL;
      *((_QWORD *)PoolWithTag + 4) = 0LL;
      *((_BYTE *)PoolWithTag + 40) = 1;
      v16 = sub_1407C2A74(v11);
      if ( v16 >= 0 )
      {
        *(_QWORD *)(a1 + 47016) = v12;
        P = 0LL;
        v18 = 0LL;
        goto LABEL_7;
      }
    }
    else
    {
      v16 = -1073741801;
    }
  }
  v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 47024), 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v13 & 2) != 0 && (v13 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 47024));
  KeAbPostRelease(a1 + 47024);
  v14 = v16;
  v7 = P;
  v8 = v18;
LABEL_26:
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return v14;
}
