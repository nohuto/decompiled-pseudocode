/*
 * XREFs of MiGetWorkingSetInfoEx @ 0x140541910
 * Callers:
 *     MiGetWorkingSetInfo @ 0x140541768 (MiGetWorkingSetInfo.c)
 *     MmLogSystemShareablePfnInfo @ 0x1408CE1F0 (MmLogSystemShareablePfnInfo.c)
 *     EtwpEnumerateWorkingSet @ 0x14093A428 (EtwpEnumerateWorkingSet.c)
 * Callees:
 *     MiWalkPageTables @ 0x140204BE0 (MiWalkPageTables.c)
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14024F890 (KiStackAttachProcess.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 */

__int64 __fastcall MiGetWorkingSetInfoEx(__int64 a1, int a2, unsigned __int64 *a3, unsigned __int64 a4)
{
  unsigned int v8; // ebx
  __int64 v9; // r14
  int v10; // r12d
  int v11; // eax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r8
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  __int128 v18; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v19; // [rsp+30h] [rbp-D0h]
  __int64 v20; // [rsp+40h] [rbp-C0h]
  _QWORD v21[22]; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v22[3]; // [rsp+100h] [rbp+0h] BYREF

  v20 = 0LL;
  memset(v22, 0, sizeof(v22));
  v18 = 0LL;
  v19 = 0LL;
  memset(v21, 0, sizeof(v21));
  v8 = 0;
  v9 = 0LL;
  v10 = 0;
  v11 = 1;
  if ( a2 < 0 )
  {
    if ( (a2 & 0x40000000) != 0 )
      v11 = 3;
    LODWORD(v18) = v11;
  }
  if ( (*(_BYTE *)(a1 + 184) & 7) == 0 )
  {
    v9 = a1 - 1664;
    if ( (PVOID)(a1 - 1664) == PsIdleProcess )
    {
      if ( a2 >= 0 )
        a3[1] = 0LL;
      else
        *a3 = 0LL;
      return 0LL;
    }
    if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)v9 )
    {
      KiStackAttachProcess((_KPROCESS *)(a1 - 1664), 0LL, (__int64)v22);
      v10 = 1;
    }
  }
  v21[5] = -1LL;
  v21[19] = MiQueryLeafPte;
  LOWORD(v21[0]) = -32762;
  v21[21] = &v18;
  BYTE6(v21[0]) = MiLockWorkingSetShared(a1);
  if ( !v9 || (*(_DWORD *)(v9 + 1124) & 0x20) == 0 )
  {
    v13 = *(_QWORD *)(a1 + 120);
    v14 = v13;
    if ( a2 >= 0 )
    {
      v14 = v13 - *(_QWORD *)(a1 + 128);
      if ( !v14 )
        goto LABEL_31;
      if ( a4 < 0x30 )
      {
LABEL_28:
        v8 = -1073741820;
        if ( a2 < 0 )
        {
LABEL_29:
          *a3 = v13;
          goto LABEL_33;
        }
        v13 -= *(_QWORD *)(a1 + 128);
LABEL_32:
        a3[1] = v13;
        goto LABEL_33;
      }
      v15 = 2LL;
      v16 = (a4 - 48) >> 5;
    }
    else
    {
      if ( !v13 )
        goto LABEL_31;
      if ( a4 < 0x10 )
        goto LABEL_28;
      v15 = 1LL;
      v16 = (a4 - 16) >> 3;
    }
    v17 = v16 + 1;
    if ( v14 <= v17 )
    {
      if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
        LOWORD(v21[0]) |= 1u;
      *((_QWORD *)&v19 + 1) = v17;
      v21[3] = a1;
      *((_QWORD *)&v18 + 1) = &a3[v15];
      v20 = v9;
      if ( (unsigned int)MiWalkPageTables((__int16 *)v21) == 4 )
      {
        v13 = *(_QWORD *)(a1 + 120);
        goto LABEL_28;
      }
LABEL_31:
      v13 = v19;
      if ( a2 < 0 )
        goto LABEL_29;
      goto LABEL_32;
    }
    goto LABEL_28;
  }
  v8 = -1073741558;
LABEL_33:
  MiUnlockWorkingSetShared(a1, BYTE6(v21[0]));
  if ( v10 == 1 )
    KiUnstackDetachProcess((__int64)v22, 0LL);
  return v8;
}
