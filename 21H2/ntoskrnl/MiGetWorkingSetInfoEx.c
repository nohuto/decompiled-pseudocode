/*
 * XREFs of MiGetWorkingSetInfoEx @ 0x1405A6204
 * Callers:
 *     MiGetWorkingSetInfo @ 0x1405A605C (MiGetWorkingSetInfo.c)
 *     MmLogSystemShareablePfnInfo @ 0x140978990 (MmLogSystemShareablePfnInfo.c)
 *     EtwpEnumerateWorkingSet @ 0x1409EA130 (EtwpEnumerateWorkingSet.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     MiWalkPageTables @ 0x14030CF90 (MiWalkPageTables.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall MiGetWorkingSetInfoEx(__int64 a1, int a2, _QWORD *a3, unsigned __int64 a4)
{
  _DWORD *v8; // r9
  __int64 v9; // rsi
  int v10; // r12d
  int v11; // eax
  unsigned int v13; // edi
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  unsigned __int64 v17; // rax
  __int128 v18; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v19; // [rsp+30h] [rbp-D0h]
  __int64 v20; // [rsp+40h] [rbp-C0h]
  __m128i v21[11]; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v22[3]; // [rsp+100h] [rbp+0h] BYREF

  v20 = 0LL;
  memset(v22, 0, sizeof(v22));
  v18 = 0LL;
  v19 = 0LL;
  memset(v21, 0, sizeof(v21));
  v9 = 0LL;
  v10 = 0;
  if ( a2 < 0 )
  {
    v11 = 1;
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
      KiStackAttachProcess((_KPROCESS *)(a1 - 1664), 0LL, (__int64)v22, v8);
      v10 = 1;
    }
  }
  v21[2].m128i_i64[1] = -1LL;
  v21[9].m128i_i64[1] = (__int64)MiQueryLeafPte;
  v21[0].m128i_i32[0] = 32774;
  v21[10].m128i_i64[1] = (__int64)&v18;
  v21[0].m128i_i8[7] = MiLockWorkingSetShared(a1);
  if ( !v9 || (*(_DWORD *)(v9 + 1124) & 0x20) == 0 )
  {
    v14 = *(_QWORD *)(a1 + 128);
    if ( a2 >= 0 )
    {
      v14 -= *(_QWORD *)(a1 + 136);
      if ( !v14 )
        goto LABEL_35;
      if ( a4 < 0x30 )
      {
        v15 = *(_QWORD *)(a1 + 128);
        goto LABEL_24;
      }
      v16 = 2LL;
      v17 = (a4 - 48) >> 5;
    }
    else
    {
      if ( !v14 )
      {
LABEL_31:
        *a3 = v19;
LABEL_36:
        v13 = 0;
        goto LABEL_37;
      }
      if ( a4 < 0x10 )
      {
        v15 = *(_QWORD *)(a1 + 128);
LABEL_33:
        *a3 = v15;
        goto LABEL_34;
      }
      v16 = 1LL;
      v17 = (a4 - 16) >> 3;
    }
    if ( v14 <= v17 + 1 )
    {
      if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
        v21[0].m128i_i32[0] |= 1u;
      v21[1].m128i_i64[1] = a1;
      *((_QWORD *)&v19 + 1) = v17 + 1;
      *((_QWORD *)&v18 + 1) = &a3[v16];
      v20 = v9;
      if ( (unsigned int)MiWalkPageTables(v21) != 5 )
      {
        if ( a2 < 0 )
          goto LABEL_31;
LABEL_35:
        a3[1] = v19;
        goto LABEL_36;
      }
    }
    v15 = *(_QWORD *)(a1 + 128);
    if ( a2 < 0 )
      goto LABEL_33;
LABEL_24:
    a3[1] = v15 - *(_QWORD *)(a1 + 136);
LABEL_34:
    v13 = -1073741820;
    goto LABEL_37;
  }
  v13 = -1073741558;
LABEL_37:
  MiUnlockWorkingSetShared(a1, v21[0].m128i_u8[7]);
  if ( v10 )
    KiUnstackDetachProcess((__int64)v22, 0LL);
  return v13;
}
