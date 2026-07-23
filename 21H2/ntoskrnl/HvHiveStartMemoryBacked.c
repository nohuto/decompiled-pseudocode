/*
 * XREFs of HvHiveStartMemoryBacked @ 0x14076FFD4
 * Callers:
 *     CmpCreateHive @ 0x1406F756C (CmpCreateHive.c)
 *     CmpGetSystemControlValues @ 0x140A60C0C (CmpGetSystemControlValues.c)
 * Callees:
 *     SetFailureLocation @ 0x140242D88 (SetFailureLocation.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     HvpFillFileName @ 0x1406F977C (HvpFillFileName.c)
 *     HvpAdjustHiveFreeDisplay @ 0x1406FB148 (HvpAdjustHiveFreeDisplay.c)
 *     HvpHeaderCheckSum @ 0x1406FC8D4 (HvpHeaderCheckSum.c)
 *     HvpBuildMapForMemoryBackedHive @ 0x1407B209C (HvpBuildMapForMemoryBackedHive.c)
 *     HvIsInPlaceBaseBlockValid @ 0x140876BD4 (HvIsInPlaceBaseBlockValid.c)
 */

__int64 __fastcall HvHiveStartMemoryBacked(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        int a3,
        __int64 a4,
        _DWORD *a5,
        _QWORD *a6,
        int a7,
        unsigned __int16 *a8,
        _OWORD *a9,
        _OWORD *a10,
        _BYTE *a11,
        int *a12,
        __int64 a13)
{
  __int64 v15; // r13
  __int64 v16; // rbx
  _DWORD *v17; // rsi
  int v18; // r15d
  int v19; // eax
  __int64 v21; // rdx
  char v22; // r9
  int v23; // ebx
  __int64 v24; // rax
  _OWORD *v25; // rax
  _OWORD *v26; // rcx
  __int128 v27; // xmm1
  int v28; // eax
  signed int v29; // ebx
  __int64 v30; // rcx
  int v31; // eax
  int v32; // ecx
  int v33; // eax
  __int64 v34; // rdx
  int v35; // r10d
  int v36; // r11d
  int v37; // ecx
  int v38; // eax
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rax
  unsigned int v42; // [rsp+20h] [rbp-38h]

  *(_QWORD *)(BugCheckParameter2 + 56) = a13;
  if ( (_DWORD)a2 == 2
    || (unsigned int)a2 >= 5
    || (a3 & 0xFF617CEC) != 0
    || (unsigned int)a4 > 2
    || (unsigned int)(a7 - 1) > 7
    || !a5 && (((_DWORD)a2 - 1) & 0xFFFFFFFC) == 0 )
  {
    __fastfail(5u);
  }
  if ( a11 )
    *a11 = 0;
  if ( a6 )
  {
    *(_QWORD *)(BugCheckParameter2 + 24) = *a6;
    *(_QWORD *)(BugCheckParameter2 + 32) = a6[1];
    *(_QWORD *)(BugCheckParameter2 + 40) = a6[3];
    *(_QWORD *)(BugCheckParameter2 + 48) = a6[4];
  }
  v15 = 4LL;
  if ( (_DWORD)a4 )
  {
    v31 = 4;
    if ( (_DWORD)a4 == 1 )
      v31 = 1;
    *(_DWORD *)(BugCheckParameter2 + 164) = v31;
  }
  else
  {
    *(_DWORD *)(BugCheckParameter2 + 164) = 0;
  }
  *(_DWORD *)(BugCheckParameter2 + 160) = a3;
  *(_QWORD *)(BugCheckParameter2 + 8) = HvpGetCellPaged;
  *(_DWORD *)(BugCheckParameter2 + 136) = a7;
  *(_DWORD *)(BugCheckParameter2 + 208) = 2;
  *(_QWORD *)(BugCheckParameter2 + 16) = HvpReleaseCellPaged;
  *(_DWORD *)(BugCheckParameter2 + 132) = 4096;
  LOBYTE(a4) = (a3 & 1) == 0;
  v16 = MEMORY[0xFFFFF78000000014];
  *(_QWORD *)(BugCheckParameter2 + 192) = MEMORY[0xFFFFF78000000014];
  *(_BYTE *)(BugCheckParameter2 + 190) = 1;
  switch ( (_DWORD)a2 )
  {
    case 0:
      LODWORD(a2) = (unsigned __int8)a4;
      v17 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(BugCheckParameter2 + 24))(
                        *(unsigned int *)(BugCheckParameter2 + 132),
                        a2,
                        825314627LL);
      if ( v17 )
      {
        if ( (((a7 << 9) - 1) & (unsigned int)v17) == 0 )
        {
          if ( a12 )
            *a12 = 825314627;
LABEL_19:
          memset(v17, 0, 0x1000uLL);
          v17[9] = -1;
          *v17 = 1718052210;
          v17[1] = 1;
          v17[2] = 1;
          v17[8] = 1;
          v17[11] = 1;
          HvpFillFileName((__int64)v17, a8);
          v17[36] = 0;
          v18 = a3 & 0x80000;
          if ( v18 )
            v17[36] = 2;
          v17[5] = 1;
          v19 = v18 != 0 ? 6 : 3;
          v17[6] = v19;
          *(_DWORD *)(BugCheckParameter2 + 212) = v19;
          v17[41] = 1836346738;
          *(_DWORD *)(BugCheckParameter2 + 168) = 1;
          *(_DWORD *)(BugCheckParameter2 + 180) = 1;
          *(_DWORD *)(BugCheckParameter2 + 172) = 1;
          *(_QWORD *)(v17 + 3) = v16;
          if ( a9 )
          {
            *((_OWORD *)v17 + 7) = *a9;
            *((_OWORD *)v17 + 8) = *a9;
          }
          if ( a10 )
            *(_OWORD *)(v17 + 37) = *a10;
          *(_QWORD *)(BugCheckParameter2 + 64) = v17;
          v17[1022] = 0;
          return 0LL;
        }
        (*(void (__fastcall **)(_DWORD *, _QWORD))(BugCheckParameter2 + 32))(
          v17,
          *(unsigned int *)(BugCheckParameter2 + 132));
        LOBYTE(v34) = 1;
        v17 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, __int64, __int64))(BugCheckParameter2 + 24))(
                          4096LL,
                          v34,
                          842091843LL);
        if ( v17 )
        {
          *(_DWORD *)(BugCheckParameter2 + 132) = 4096;
          if ( a12 )
            *a12 = 842091843;
          goto LABEL_19;
        }
        v42 = 112;
      }
      else
      {
        v42 = 96;
      }
      goto LABEL_54;
    case 4:
      *(_QWORD *)(BugCheckParameter2 + 64) = a5;
      v32 = a5[5];
      v33 = a5[6] - 4096;
      *(_BYTE *)(BugCheckParameter2 + 140) |= 3u;
      *(_QWORD *)(BugCheckParameter2 + 8) = HvpGetCellFlat;
      *(_QWORD *)(BugCheckParameter2 + 16) = HvpReleaseCellFlat;
      *(_DWORD *)(BugCheckParameter2 + 212) = v33 + (v32 << 12);
      *(_DWORD *)(BugCheckParameter2 + 272) = a5[10];
      *(_DWORD *)(BugCheckParameter2 + 208) = 1;
      if ( a12 )
        *a12 = 0;
      return 0LL;
    case 3:
      if ( (unsigned __int8)HvIsInPlaceBaseBlockValid(a5, a2, 2LL, a4) )
      {
        v37 = a5[5];
        v38 = a5[6];
        *(_BYTE *)(BugCheckParameter2 + 140) &= ~2u;
        *(_QWORD *)(BugCheckParameter2 + 64) = a5;
        *(_DWORD *)(BugCheckParameter2 + 208) = v36;
        *(_DWORD *)(BugCheckParameter2 + 212) = v38 - 4096 + (v37 << 12);
        a5[1022] = v35;
        v39 = a5[1];
        *(_DWORD *)(BugCheckParameter2 + 168) = v39;
        *(_DWORD *)(BugCheckParameter2 + 180) = v39;
        *(_DWORD *)(BugCheckParameter2 + 172) = v39;
        v29 = HvpAdjustHiveFreeDisplay(BugCheckParameter2, a5[10], 0);
        if ( v29 >= 0 )
        {
          v29 = HvpBuildMapForMemoryBackedHive(BugCheckParameter2);
          if ( v29 >= 0 )
          {
            if ( a12 )
              *a12 = 0;
            return 0LL;
          }
          SetFailureLocation(a13, 0, 25, v29, 0xA0u);
        }
        else
        {
          SetFailureLocation(a13, 0, 25, v29, 0x90u);
        }
        return (unsigned int)v29;
      }
      v42 = 128;
LABEL_66:
      v29 = -1073741492;
      goto LABEL_56;
  }
  if ( *a5 != 1718052210
    || a5[7]
    || a5[8] != 1
    || a5[5] > 1u
    || (unsigned int)(a5[6] - 3) > 3
    || a5[10] > 0x7FFFE000u
    || (unsigned int)HvpHeaderCheckSum(a5) != a5[127] )
  {
    v42 = 176;
    goto LABEL_66;
  }
  v23 = 858869059;
  LOBYTE(v21) = v22;
  v24 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(BugCheckParameter2 + 24))(
          *(unsigned int *)(BugCheckParameter2 + 132),
          v21,
          858869059LL);
  *(_QWORD *)(BugCheckParameter2 + 64) = v24;
  if ( !v24 )
  {
    v42 = 192;
    goto LABEL_54;
  }
  if ( (((a7 << 9) - 1) & (unsigned int)v24) != 0 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(BugCheckParameter2 + 32))(
      v24,
      *(unsigned int *)(BugCheckParameter2 + 132));
    v23 = 875646275;
    LOBYTE(v40) = 1;
    v41 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(BugCheckParameter2 + 24))(4096LL, v40, 875646275LL);
    *(_QWORD *)(BugCheckParameter2 + 64) = v41;
    if ( v41 )
    {
      *(_DWORD *)(BugCheckParameter2 + 132) = 4096;
      goto LABEL_39;
    }
    v42 = 208;
LABEL_54:
    v29 = -1073741670;
LABEL_56:
    SetFailureLocation(a13, 0, 25, v29, v42);
    return (unsigned int)v29;
  }
LABEL_39:
  if ( a12 )
    *a12 = v23;
  v25 = *(_OWORD **)(BugCheckParameter2 + 64);
  v26 = a5;
  do
  {
    *v25 = *v26;
    v25[1] = v26[1];
    v25[2] = v26[2];
    v25[3] = v26[3];
    v25[4] = v26[4];
    v25[5] = v26[5];
    v25[6] = v26[6];
    v25 += 8;
    v27 = v26[7];
    v26 += 8;
    *(v25 - 1) = v27;
    --v15;
  }
  while ( v15 );
  *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4092LL) = a5[1023];
  *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) = a5[1022];
  v28 = a5[1];
  *(_DWORD *)(BugCheckParameter2 + 168) = v28;
  *(_DWORD *)(BugCheckParameter2 + 180) = v28;
  *(_DWORD *)(BugCheckParameter2 + 172) = v28;
  *(_DWORD *)(BugCheckParameter2 + 212) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 24LL)
                                        - 4096
                                        + (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 20LL) << 12);
  v29 = HvpAdjustHiveFreeDisplay(BugCheckParameter2, a5[10], 0);
  if ( v29 < 0 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(BugCheckParameter2 + 32))(
      *(_QWORD *)(BugCheckParameter2 + 64),
      *(unsigned int *)(BugCheckParameter2 + 132));
    *(_QWORD *)(BugCheckParameter2 + 64) = 0LL;
    v42 = 224;
    goto LABEL_56;
  }
  if ( (int)HvpBuildMapForMemoryBackedHive(BugCheckParameter2) >= 0 )
  {
    v30 = *(_QWORD *)(BugCheckParameter2 + 64);
    if ( (*(_DWORD *)(v30 + 144) & 1) != 0 && a11 )
    {
      *a11 = 1;
      v30 = *(_QWORD *)(BugCheckParameter2 + 64);
    }
    *(_DWORD *)(v30 + 144) &= ~1u;
    HvpFillFileName(*(_QWORD *)(BugCheckParameter2 + 64), a8);
    return 0LL;
  }
  v29 = -1073741492;
  SetFailureLocation(a13, 0, 25, 0xC000014C, 0xF0u);
  (*(void (__fastcall **)(_QWORD, _QWORD))(BugCheckParameter2 + 32))(
    *(_QWORD *)(BugCheckParameter2 + 64),
    *(unsigned int *)(BugCheckParameter2 + 132));
  *(_QWORD *)(BugCheckParameter2 + 64) = 0LL;
  return (unsigned int)v29;
}
