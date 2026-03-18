/*
 * XREFs of MiSelectImageBase @ 0x1407092C0
 * Callers:
 *     MiRelocateImageAgain @ 0x1406FF49C (MiRelocateImageAgain.c)
 *     MiRelocateImage @ 0x1407074F0 (MiRelocateImage.c)
 * Callees:
 *     MiSetControlAreaSystemVa @ 0x14025AC24 (MiSetControlAreaSystemVa.c)
 *     MiGetImageBitMapInfo @ 0x14029EB0C (MiGetImageBitMapInfo.c)
 *     ExGenRandom @ 0x140363220 (ExGenRandom.c)
 *     MiBytesToMapSystemImage @ 0x1406F57B8 (MiBytesToMapSystemImage.c)
 *     MiObtainRelocationBits @ 0x1407095A8 (MiObtainRelocationBits.c)
 *     MiSelectRelocationStartHint @ 0x140709C0C (MiSelectRelocationStartHint.c)
 *     MiSelectSystemImageAddress @ 0x140762174 (MiSelectSystemImageAddress.c)
 *     MiImageCanUseHighOverflowArea @ 0x14097FD48 (MiImageCanUseHighOverflowArea.c)
 *     MiSelectOverflowDllBase @ 0x14097FD74 (MiSelectOverflowDllBase.c)
 */

__int64 __fastcall MiSelectImageBase(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 *a5)
{
  __int64 v5; // rsi
  int v6; // ebx
  __int64 v8; // rcx
  __int64 v9; // r11
  int v10; // r10d
  unsigned int v11; // r14d
  __int64 v12; // r9
  unsigned __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // r13
  unsigned __int64 v16; // rdi
  unsigned int v17; // r15d
  __int64 started; // rax
  __int64 v19; // rax
  int v20; // eax
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  int v24; // edx
  unsigned __int64 v25; // rcx
  unsigned int v26; // edx
  __int64 v27; // [rsp+20h] [rbp-58h] BYREF
  __int64 v28; // [rsp+28h] [rbp-50h]
  unsigned __int64 v29; // [rsp+30h] [rbp-48h]
  __int128 v30; // [rsp+38h] [rbp-40h] BYREF
  __int64 v31; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v32; // [rsp+90h] [rbp+18h]

  v32 = a3;
  v5 = *(_QWORD *)a1;
  v6 = 0;
  v31 = 0LL;
  v8 = *(_QWORD *)(a1 + 56);
  v9 = a2;
  v10 = a4;
  v27 = 0LL;
  if ( (*(_BYTE *)(a1 + 14) & 0x40) == 0 )
  {
    if ( (*(_BYTE *)(v8 + 51) & 0x10) != 0 && (*(_WORD *)(v8 + 44) & 0x2000) != 0 )
      v11 = 2;
    else
      v11 = *(_QWORD *)(a1 + 32) < 0x100000000uLL;
    goto LABEL_4;
  }
  if ( *(_WORD *)(v8 + 48) == MiWowSubsystems6432 )
  {
    v11 = 3;
LABEL_4:
    *(_DWORD *)(v5 + 92) ^= (*(_DWORD *)(v5 + 92) ^ (v11 << 20)) & 0x300000;
    goto LABEL_5;
  }
  v11 = 4;
LABEL_5:
  v12 = *(_QWORD *)(a1 + 56);
  LODWORD(v13) = *(_DWORD *)(a1 + 8);
  v28 = v12;
  if ( (_DWORD)a3 )
  {
    v22 = MiBytesToMapSystemImage((unsigned int)((_DWORD)v13 << 12));
    if ( v22 )
    {
      a3 = v32;
      v13 = v22 >> 12;
      goto LABEL_7;
    }
    return 3221225503LL;
  }
  if ( !dword_140C4F478 )
    goto LABEL_7;
  v26 = ((unsigned int)dword_140C533A0 >> 12) + ((dword_140C533A0 & 0xFFF) != 0);
  if ( !v26 )
    goto LABEL_7;
  if ( v26 + (unsigned int)v13 < (unsigned int)v13 )
    return 3221225503LL;
  LODWORD(v13) = v26 + v13;
LABEL_7:
  v14 = *(_QWORD *)(a1 + 32);
  v15 = -1LL;
  if ( v10 )
  {
    LOWORD(v17) = 0;
    goto LABEL_48;
  }
  v16 = v14 - *(_QWORD *)(v9 + 40);
  v17 = (unsigned int)(v13 + 15) >> 4;
  v29 = v16;
  if ( !(_DWORD)a3 )
  {
    if ( (*(_WORD *)(v12 + 44) & 0x2000) != 0 )
    {
      v30 = 0LL;
      LOBYTE(a3) = v11 != 4;
      if ( dword_140D051D0 && (unsigned int)MiImageCanUseHighOverflowArea(a1, v16, a3) )
      {
LABEL_20:
        v20 = *(_DWORD *)(v5 + 92);
        if ( (v20 & 0x800000) != 0 )
        {
          v14 = *(_QWORD *)(a1 + 32);
          v6 = 1;
          goto LABEL_17;
        }
        if ( !v11 )
        {
          v6 = 1;
          v14 = ((unsigned int)ExGenRandom(1) % (131073LL - (unsigned __int16)v17) + 2146828288) << 16;
          goto LABEL_15;
        }
        if ( !_bittest16((const signed __int16 *)(v12 + 44), 0xDu) )
        {
          v6 = 1;
          v25 = (unsigned __int64)(unsigned __int8)ExGenRandom(1) << 16;
          if ( v16 >= 0x1000000 )
            v14 = v16 - v25;
          else
            v14 = v25 + 0x10000;
          goto LABEL_15;
        }
        v14 = MiSelectOverflowDllBase(a1, v16, v11);
LABEL_48:
        v6 = 1;
        goto LABEL_15;
      }
      if ( (_BYTE)a3 )
      {
        MiGetImageBitMapInfo(v11, &v30, &v27, &v31);
        started = MiSelectRelocationStartHint(&v30, (unsigned __int16)v17, v31, 0LL);
        v15 = started;
        if ( started != -1 )
        {
          v19 = MiObtainRelocationBits(&v30, (unsigned __int16)v17, started);
          v15 = v19;
          if ( v19 != -1 )
          {
            v14 = v27 - ((v19 + (unsigned __int16)v17) << 16);
LABEL_15:
            *(_DWORD *)(v5 + 88) = v15;
            *(_WORD *)(v5 + 92) = v17;
LABEL_16:
            v20 = *(_DWORD *)(v5 + 92);
LABEL_17:
            *(_DWORD *)(v5 + 92) = (v6 << 23) | v20 & 0xFF7FFFFF;
            *a5 = v14;
            return 0LL;
          }
        }
        v12 = v28;
      }
    }
    v14 = 0LL;
    if ( v15 != -1 )
      goto LABEL_15;
    v16 = v29;
    goto LABEL_20;
  }
  v23 = MiSelectSystemImageAddress((unsigned int)a3, (unsigned int)v13);
  v14 = v23;
  if ( v23 )
  {
    v24 = v32;
    *(_WORD *)(v5 + 92) = v17;
    *(_DWORD *)(v5 + 88) = (unsigned __int64)(v23 + 0x800000000000LL) >> 16;
    MiSetControlAreaSystemVa(v5, v24);
    goto LABEL_16;
  }
  return 3221225626LL;
}
