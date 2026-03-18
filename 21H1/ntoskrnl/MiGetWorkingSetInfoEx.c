/*
 * XREFs of MiGetWorkingSetInfoEx @ 0x1405412C0
 * Callers:
 *     MiGetWorkingSetInfo @ 0x140541118 (MiGetWorkingSetInfo.c)
 *     MmLogSystemShareablePfnInfo @ 0x1408CCEA0 (MmLogSystemShareablePfnInfo.c)
 *     EtwpEnumerateWorkingSet @ 0x140939188 (EtwpEnumerateWorkingSet.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiWalkPageTables @ 0x14025DB00 (MiWalkPageTables.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 */

__int64 __fastcall MiGetWorkingSetInfoEx(__int64 a1, int a2, unsigned __int64 *a3, unsigned __int64 a4)
{
  _DWORD *v8; // r9
  unsigned int v9; // ebx
  __int64 v10; // r14
  int v11; // r12d
  int v12; // eax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r8
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  __int64 v19; // r8
  _DWORD *v20; // r9
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
  v9 = 0;
  v10 = 0LL;
  v11 = 0;
  v12 = 1;
  if ( a2 < 0 )
  {
    if ( (a2 & 0x40000000) != 0 )
      v12 = 3;
    LODWORD(v21) = v12;
  }
  if ( (*(_BYTE *)(a1 + 184) & 7) == 0 )
  {
    v10 = a1 - 1664;
    if ( (PVOID)(a1 - 1664) == PsIdleProcess )
    {
      if ( a2 >= 0 )
        a3[1] = 0LL;
      else
        *a3 = 0LL;
      return 0LL;
    }
    if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)v10 )
    {
      KiStackAttachProcess((_KPROCESS *)(a1 - 1664), 0LL, (__int64)v25, v8);
      v11 = 1;
    }
  }
  v24[5] = -1LL;
  v24[19] = MiQueryLeafPte;
  LOWORD(v24[0]) = -32762;
  v24[21] = &v21;
  BYTE6(v24[0]) = MiLockWorkingSetShared(a1);
  if ( !v10 || (*(_DWORD *)(v10 + 1124) & 0x20) == 0 )
  {
    v14 = *(_QWORD *)(a1 + 120);
    v15 = v14;
    if ( a2 >= 0 )
    {
      v15 = v14 - *(_QWORD *)(a1 + 128);
      if ( !v15 )
        goto LABEL_31;
      if ( a4 < 0x30 )
      {
LABEL_28:
        v9 = -1073741820;
        if ( a2 < 0 )
        {
LABEL_29:
          *a3 = v14;
          goto LABEL_33;
        }
        v14 -= *(_QWORD *)(a1 + 128);
LABEL_32:
        a3[1] = v14;
        goto LABEL_33;
      }
      v16 = 2LL;
      v17 = (a4 - 48) >> 5;
    }
    else
    {
      if ( !v14 )
        goto LABEL_31;
      if ( a4 < 0x10 )
        goto LABEL_28;
      v16 = 1LL;
      v17 = (a4 - 16) >> 3;
    }
    v18 = v17 + 1;
    if ( v15 <= v18 )
    {
      if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
        LOWORD(v24[0]) |= 1u;
      *((_QWORD *)&v22 + 1) = v18;
      v24[3] = a1;
      *((_QWORD *)&v21 + 1) = &a3[v16];
      v23 = v10;
      if ( (unsigned int)MiWalkPageTables((__int64)v24) == 4 )
      {
        v14 = *(_QWORD *)(a1 + 120);
        goto LABEL_28;
      }
LABEL_31:
      v14 = v22;
      if ( a2 < 0 )
        goto LABEL_29;
      goto LABEL_32;
    }
    goto LABEL_28;
  }
  v9 = -1073741558;
LABEL_33:
  MiUnlockWorkingSetShared(a1, BYTE6(v24[0]));
  if ( v11 == 1 )
    KiUnstackDetachProcess((__int64)v25, 0LL, v19, v20);
  return v9;
}
