/*
 * XREFs of HvpDoAllocateCell @ 0x14069F174
 * Callers:
 *     HvReallocateCell @ 0x14069DB20 (HvReallocateCell.c)
 *     HvAllocateCell @ 0x14069EE08 (HvAllocateCell.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     HvpAddBin @ 0x140638040 (HvpAddBin.c)
 *     HvpDelistFreeCell @ 0x14069EA08 (HvpDelistFreeCell.c)
 *     HvpFindFreeCell @ 0x14069F738 (HvpFindFreeCell.c)
 *     HvpRemoveFreeCellHint @ 0x14069F910 (HvpRemoveFreeCellHint.c)
 *     HvpEnlistFreeCell @ 0x14069FAC8 (HvpEnlistFreeCell.c)
 */

__int64 __fastcall HvpDoAllocateCell(ULONG_PTR BugCheckParameter2, unsigned int a2, int a3, _QWORD *a4, __int64 *a5)
{
  _QWORD *v5; // r15
  __int64 v7; // r14
  volatile signed __int64 *v9; // rbx
  unsigned int FreeCell; // r12d
  unsigned int *v11; // rdi
  char v12; // cl
  unsigned int v13; // r8d
  unsigned int v14; // r15d
  unsigned int v15; // r8d
  unsigned int v16; // r8d
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // [rsp+38h] [rbp-18h] BYREF
  __int64 v24; // [rsp+40h] [rbp-10h] BYREF

  v24 = 0LL;
  v23 = 0xFFFFFFFFLL;
  v5 = a4;
  v7 = a2;
  v9 = (volatile signed __int64 *)(BugCheckParameter2 + 80);
  ExAcquirePushLockExclusiveEx(BugCheckParameter2 + 80, 0LL);
  FreeCell = HvpFindFreeCell(BugCheckParameter2, (__int64)&v24, (__int64)&v23);
  if ( FreeCell != -1 )
  {
    v11 = (unsigned int *)v24;
    v12 = 0;
    goto LABEL_3;
  }
  v21 = HvpAddBin(BugCheckParameter2, v7, a3);
  if ( v21 != -1 )
  {
    FreeCell = v21 + 32;
    v22 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter2 + 8))(
            BugCheckParameter2,
            (unsigned int)(v21 + 32),
            &v23);
    if ( v22 )
    {
      v11 = (unsigned int *)(v22 - 4);
      v24 = v22 - 4;
      if ( v22 != 4 )
      {
        v12 = 1;
LABEL_3:
        v13 = *v11;
        if ( (int)v7 + 8 > *v11 )
        {
          HvpDelistFreeCell(BugCheckParameter2, FreeCell);
          *v11 = -*v11;
          goto LABEL_13;
        }
        v14 = v13 - v7;
        *(unsigned int *)((char *)v11 + v7) = v13 - v7;
        *v11 = -(int)v7;
        if ( !v12 )
        {
          v15 = (v13 >> 3) - 1;
          if ( v15 >= 0x10 )
          {
            v16 = v15 >> 4;
            if ( v16 > 0xFF )
            {
              v15 = 23;
            }
            else
            {
              _BitScanReverse(&v17, v16);
              v15 = v17 + 16;
            }
          }
          v18 = (v14 >> 3) - 1;
          if ( v18 >= 0x10 )
          {
            v19 = v18 >> 4;
            if ( v19 > 0xFF )
            {
              v18 = 23;
            }
            else
            {
              _BitScanReverse(&v19, v19);
              v18 = v19 + 16;
            }
          }
          if ( v15 == v18 )
            goto LABEL_12;
          HvpRemoveFreeCellHint(BugCheckParameter2, FreeCell, 0);
        }
        HvpEnlistFreeCell(BugCheckParameter2);
LABEL_12:
        v5 = a4;
LABEL_13:
        if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v9);
        KeAbPostRelease((ULONG_PTR)v9);
        if ( v5 )
        {
          *v5 = v24 + 4;
          *a5 = v23;
        }
        else
        {
          (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v23);
        }
        return FreeCell;
      }
    }
  }
  if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v9);
  KeAbPostRelease((ULONG_PTR)v9);
  return 0xFFFFFFFFLL;
}
