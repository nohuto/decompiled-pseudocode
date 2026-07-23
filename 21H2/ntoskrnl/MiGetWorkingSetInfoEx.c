/*
 * XREFs of MiGetWorkingSetInfoEx @ 0x140547020
 * Callers:
 *     MiGetWorkingSetInfo @ 0x140546E78 (MiGetWorkingSetInfo.c)
 *     MmLogSystemShareablePfnInfo @ 0x1408D1950 (MmLogSystemShareablePfnInfo.c)
 *     EtwpEnumerateWorkingSet @ 0x14093DBFC (EtwpEnumerateWorkingSet.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     MiWalkPageTables @ 0x1402ADBC0 (MiWalkPageTables.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall MiGetWorkingSetInfoEx(__int64 a1, int a2, unsigned __int64 *a3, unsigned __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  _DWORD *v10; // r9
  unsigned int v11; // ebx
  __int64 v12; // r14
  int v13; // r12d
  int v14; // eax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r8
  __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  __int128 v21; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v22; // [rsp+30h] [rbp-D0h]
  __int64 v23; // [rsp+40h] [rbp-C0h]
  _QWORD v24[22]; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v25[3]; // [rsp+100h] [rbp+0h] BYREF

  v23 = 0LL;
  memset(v25, 0, sizeof(v25));
  v21 = 0LL;
  v22 = 0LL;
  memset(v24, 0, sizeof(v24));
  v11 = 0;
  v12 = 0LL;
  v13 = 0;
  v14 = 1;
  if ( a2 < 0 )
  {
    if ( (a2 & 0x40000000) != 0 )
      v14 = 3;
    LODWORD(v21) = v14;
  }
  if ( (*(_BYTE *)(a1 + 184) & 7) == 0 )
  {
    v12 = a1 - 1664;
    if ( (PVOID)(a1 - 1664) == PsIdleProcess )
    {
      if ( a2 >= 0 )
        a3[1] = 0LL;
      else
        *a3 = 0LL;
      return 0LL;
    }
    if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)v12 )
    {
      KiStackAttachProcess((_KPROCESS *)(a1 - 1664), 0, (__int64)v25);
      v13 = 1;
    }
  }
  v24[5] = -1LL;
  v24[19] = MiQueryLeafPte;
  LOWORD(v24[0]) = -32762;
  v24[21] = &v21;
  BYTE6(v24[0]) = MiLockWorkingSetShared(a1, v8, v9, v10);
  if ( !v12 || (*(_DWORD *)(v12 + 1124) & 0x20) == 0 )
  {
    v16 = *(_QWORD *)(a1 + 120);
    v17 = v16;
    if ( a2 >= 0 )
    {
      v17 = v16 - *(_QWORD *)(a1 + 128);
      if ( !v17 )
        goto LABEL_31;
      if ( a4 < 0x30 )
      {
LABEL_28:
        v11 = -1073741820;
        if ( a2 < 0 )
        {
LABEL_29:
          *a3 = v16;
          goto LABEL_33;
        }
        v16 -= *(_QWORD *)(a1 + 128);
LABEL_32:
        a3[1] = v16;
        goto LABEL_33;
      }
      v18 = 2LL;
      v19 = (a4 - 48) >> 5;
    }
    else
    {
      if ( !v16 )
        goto LABEL_31;
      if ( a4 < 0x10 )
        goto LABEL_28;
      v18 = 1LL;
      v19 = (a4 - 16) >> 3;
    }
    v20 = v19 + 1;
    if ( v17 <= v20 )
    {
      if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
        LOWORD(v24[0]) |= 1u;
      *((_QWORD *)&v22 + 1) = v20;
      v24[3] = a1;
      *((_QWORD *)&v21 + 1) = &a3[v18];
      v23 = v12;
      if ( (unsigned int)MiWalkPageTables((__int64)v24) == 4 )
      {
        v16 = *(_QWORD *)(a1 + 120);
        goto LABEL_28;
      }
LABEL_31:
      v16 = v22;
      if ( a2 < 0 )
        goto LABEL_29;
      goto LABEL_32;
    }
    goto LABEL_28;
  }
  v11 = -1073741558;
LABEL_33:
  MiUnlockWorkingSetShared(a1, BYTE6(v24[0]));
  if ( v13 == 1 )
    KiUnstackDetachProcess((__int64)v25, 0LL);
  return v11;
}
