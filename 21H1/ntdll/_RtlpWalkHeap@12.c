/*
 * XREFs of _RtlpWalkHeap@12 @ 0x4B359AF8
 * Callers:
 *     _RtlpWalkHeapInternal@12 @ 0x4B35A1E8 (_RtlpWalkHeapInternal@12.c)
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _RtlpGetExtraStuffPointerUnsafe@8 @ 0x4B357FC7 (_RtlpGetExtraStuffPointerUnsafe@8.c)
 *     _RtlpGetSegmentForAddress@8 @ 0x4B358074 (_RtlpGetSegmentForAddress@8.c)
 *     _RtlDebugWalkHeap@8 @ 0x4B360528 (_RtlDebugWalkHeap@8.c)
 *     _RtlpLogHeapWalkEvent@4 @ 0x4B36F61F (_RtlpLogHeapWalkEvent@4.c)
 *     _RtlpWalkLFHBlock@12 @ 0x4B371E16 (_RtlpWalkLFHBlock@12.c)
 *     _RtlpWalkLowFragHeapSegment@12 @ 0x4B372377 (_RtlpWalkLowFragHeapSegment@12.c)
 */

int __fastcall RtlpWalkHeap(int a1, int a2, char a3)
{
  _DWORD *SegmentForAddress; // eax
  int v7; // ecx
  int v8; // edx
  __int16 v9; // dx
  _DWORD *v10; // edx
  unsigned int v11; // edi
  int v12; // edx
  int v13; // eax
  _DWORD *v14; // ecx
  char v15; // ah
  int v16; // edi
  int v17; // eax
  unsigned __int8 v18; // al
  unsigned int v19; // edx
  int v20; // eax
  int v21; // eax
  unsigned __int16 v22; // di
  unsigned __int8 v23; // al
  int v24; // edx
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  char v29; // al
  int v30; // eax
  unsigned int v31; // eax
  int v32; // eax
  char v33; // al
  int v34; // eax
  unsigned int v35; // eax
  char v36; // cl
  int v37; // edx
  int v38; // eax
  int v39; // ecx
  unsigned int v40; // ecx
  int v41; // eax
  char v42; // cl
  int v43; // ecx
  unsigned int v44; // ecx
  int v45; // eax
  __int16 v46; // ax
  __int16 v47; // cx
  int v48; // eax
  int v49; // eax
  int v50; // ecx
  __int16 v51; // ax
  int v52; // eax
  unsigned __int16 v53; // cx
  unsigned int v54; // eax
  unsigned int v55; // eax
  int *ExtraStuffPointerUnsafe; // eax
  __int16 v57; // ax
  __int16 v58; // ax
  unsigned int v59; // eax
  unsigned int v60; // eax
  int v61; // eax
  int v62; // eax
  unsigned __int16 v63; // [esp+10h] [ebp-Ch]
  int v64; // [esp+14h] [ebp-8h] BYREF

  if ( (*(_DWORD *)(a1 + 68) & 0x1000000) != 0 )
    return dword_4B3A3764(dword_4B3A3764, a1, a2);
  if ( (((*(_DWORD *)(a1 + 64) & 0x61000000) != 0) & !_bittest((const signed __int32 *)(a1 + 64), 0x1Cu)) != 0
    && !(unsigned __int8)RtlDebugWalkHeap(a1) )
  {
    v64 = -1073741811;
    goto LABEL_192;
  }
  v64 = 0;
  SegmentForAddress = *(_DWORD **)a2;
  v7 = 2;
  if ( !*(_DWORD *)a2 )
  {
    v8 = a1;
    goto LABEL_63;
  }
  v9 = *(_WORD *)(a2 + 10);
  if ( (v9 & 0x1002) == 0 )
    goto LABEL_26;
  v7 = v9 & 2;
  if ( (v9 & 2) != 0 )
  {
    if ( *(_BYTE *)(a1 + 234) == 2 )
      v10 = *(_DWORD **)(a1 + 228);
    else
      v10 = 0;
    if ( SegmentForAddress == v10 )
    {
LABEL_61:
      v7 = 2;
      goto LABEL_62;
    }
    v9 = *(_WORD *)(a2 + 10);
  }
  if ( a3 && (_WORD)v7 )
  {
    v11 = SegmentForAddress[9];
    goto LABEL_82;
  }
  v11 = (unsigned int)SegmentForAddress + *(_DWORD *)(a2 + 4);
  if ( (v9 & 0x1000) != 0 )
    SegmentForAddress = RtlpGetSegmentForAddress(a1, (unsigned int)(SegmentForAddress - 6));
  if ( !a3 || v11 >= SegmentForAddress[10] )
  {
    v12 = SegmentForAddress[4];
    v7 = 2;
    if ( v12 != a1 + 164 )
    {
      v8 = v12 - 16;
      goto LABEL_63;
    }
    if ( *(_BYTE *)(a1 + 234) == 2 )
    {
      v8 = *(_DWORD *)(a1 + 228);
      goto LABEL_63;
    }
LABEL_62:
    v8 = 0;
    goto LABEL_63;
  }
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_82:
      if ( !v11 )
        goto LABEL_192;
      v29 = *(_BYTE *)(v11 + 7);
      if ( (v29 & 0x40) != 0 )
      {
        v30 = v29 & 0x3F;
LABEL_85:
        v31 = v11 + 8 * v30;
        goto LABEL_89;
      }
      if ( v29 == 4 )
      {
        v30 = *(unsigned __int8 *)(v11 + 6);
        goto LABEL_85;
      }
      v31 = v11;
LABEL_89:
      *(_DWORD *)a2 = v31 + 8;
      *(_WORD *)(a2 + 10) = 1;
      if ( *(_BYTE *)(a1 + 234) == 2 )
        v32 = *(_DWORD *)(a1 + 228);
      else
        v32 = 0;
      if ( v32 && (unsigned __int8)RtlpWalkLFHBlock(v7) )
      {
        if ( (*(_WORD *)(a2 + 10) & 0x2000) == 0 )
          goto LABEL_192;
        goto LABEL_26;
      }
      if ( ((*(_BYTE *)(v11 + 2) ^ (unsigned __int8)(*(_BYTE *)(a1 + 82) & (*(_DWORD *)(a1 + 76) >> 20))) & 1) == 0 )
      {
        *(_DWORD *)a2 = v11 + 16;
        if ( *(_DWORD *)(a1 + 76) )
        {
          v61 = *(_DWORD *)v11;
          if ( (*(_DWORD *)v11 & *(_DWORD *)(a1 + 76)) != 0 )
            v61 ^= *(_DWORD *)(a1 + 80);
        }
        else
        {
          LOWORD(v61) = *(_WORD *)v11;
        }
        *(_DWORD *)(a2 + 4) = 8 * (unsigned __int16)v61 - 16;
        *(_BYTE *)(a2 + 9) = *(_BYTE *)(v11 + 6);
        *(_WORD *)(a2 + 10) = 0;
        *(_BYTE *)(a2 + 8) = 16;
        *(_DWORD *)(a2 + 20) = 16;
        goto LABEL_192;
      }
      v33 = *(_BYTE *)(v11 + 7);
      if ( (v33 & 0x40) != 0 )
      {
        v34 = v33 & 0x3F;
      }
      else
      {
        if ( v33 != 4 )
        {
          v35 = v11;
          goto LABEL_103;
        }
        v34 = *(unsigned __int8 *)(v11 + 6);
      }
      v35 = v11 + 8 * v34;
LABEL_103:
      *(_DWORD *)a2 = v35 + 8;
      v36 = *(_BYTE *)(v11 + 7);
      if ( v36 == 4 )
      {
        if ( *(_DWORD *)(a1 + 76) )
        {
          v49 = *(_DWORD *)v11;
          if ( (*(_DWORD *)v11 & *(_DWORD *)(a1 + 76)) != 0 )
            v49 ^= *(_DWORD *)(a1 + 80);
        }
        else
        {
          LOWORD(v49) = *(_WORD *)v11;
        }
        v50 = *(_DWORD *)(v11 - 8) - (unsigned __int16)v49;
        *(_BYTE *)(a2 + 9) = 64;
        v51 = 16385;
        *(_DWORD *)(a2 + 4) = v50;
        *(_WORD *)(a2 + 10) = 16385;
        if ( *(_DWORD *)(a1 + 76) )
        {
          v52 = *(_DWORD *)v11;
          if ( (*(_DWORD *)v11 & *(_DWORD *)(a1 + 76)) != 0 )
            v52 ^= *(_DWORD *)(a1 + 80);
          v53 = v52;
          v51 = *(_WORD *)(a2 + 10);
        }
        else
        {
          v53 = *(_WORD *)v11;
        }
        *(_BYTE *)(a2 + 8) = v53;
        if ( (v51 & 2) == 0 )
          *(_DWORD *)(a2 + 20) = v53;
        v47 = v51;
        goto LABEL_165;
      }
      if ( v36 == 3 )
      {
        v47 = 4096;
        *(_DWORD *)a2 = *(_DWORD *)(v11 + 24);
        v48 = *(_DWORD *)(v11 + 28);
        *(_DWORD *)(a2 + 20) = 0;
        *(_DWORD *)(a2 + 4) = v48;
        *(_DWORD *)(a2 + 8) = 0x10000000;
LABEL_165:
        if ( *(_DWORD *)(a1 + 76) )
        {
          v54 = *(_DWORD *)v11;
          if ( (*(_DWORD *)v11 & *(_DWORD *)(a1 + 76)) != 0 )
            v54 ^= *(_DWORD *)(a1 + 80);
          v47 = *(_WORD *)(a2 + 10);
          v55 = HIWORD(v54);
        }
        else
        {
          LOBYTE(v55) = *(_BYTE *)(v11 + 2);
        }
        if ( (v55 & 2) != 0 )
        {
          ExtraStuffPointerUnsafe = RtlpGetExtraStuffPointerUnsafe(a1, (int *)v11);
          *(_DWORD *)(a2 + 12) = ExtraStuffPointerUnsafe[1];
          *(_WORD *)(a2 + 18) = *(_WORD *)ExtraStuffPointerUnsafe;
          if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
            v57 = *((_WORD *)ExtraStuffPointerUnsafe + 1);
          else
            v57 = 0;
          *(_WORD *)(a2 + 16) = v57;
          *(_WORD *)(a2 + 10) |= 0x10u;
          v47 = *(_WORD *)(a2 + 10);
        }
        else
        {
          if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
            v58 = *(unsigned __int8 *)(v11 + 3);
          else
            v58 = 0;
          *(_WORD *)(a2 + 16) = v58;
        }
        if ( *(_DWORD *)(a1 + 76) )
        {
          v59 = *(_DWORD *)v11;
          if ( (*(_DWORD *)v11 & *(_DWORD *)(a1 + 76)) != 0 )
            v59 ^= *(_DWORD *)(a1 + 80);
          v47 = *(_WORD *)(a2 + 10);
          v60 = HIWORD(v59);
        }
        else
        {
          LOBYTE(v60) = *(_BYTE *)(v11 + 2);
        }
        *(_WORD *)(a2 + 10) = v47 | v60 & 0xE0;
        goto LABEL_192;
      }
      if ( v36 != 1 )
      {
        v37 = *(_DWORD *)(a1 + 76);
        if ( v37 )
        {
          v38 = *(_DWORD *)v11;
          v37 = *(_DWORD *)(a1 + 76);
          if ( (v37 & *(_DWORD *)v11) != 0 )
            v38 ^= *(_DWORD *)(a1 + 80);
          v36 = *(_BYTE *)(v11 + 7);
        }
        else
        {
          LOWORD(v38) = *(_WORD *)v11;
        }
        v63 = v38;
        if ( v36 == 5 )
        {
          v39 = *(unsigned __int16 *)(v11 + 4) ^ *(unsigned __int16 *)(a1 + 84);
        }
        else if ( (v36 & 0x40) != 0 )
        {
          v39 = *(unsigned __int16 *)(v11 + 8 * (v36 & 0x3F) + 4);
        }
        else if ( (v36 & 0x3F) == 0x3F )
        {
          if ( v36 >= 0 )
          {
            if ( v37 )
            {
              v41 = *(_DWORD *)v11;
              if ( (*(_DWORD *)v11 & *(_DWORD *)(a1 + 76)) != 0 )
                v41 ^= *(_DWORD *)(a1 + 80);
            }
            else
            {
              LOWORD(v41) = *(_WORD *)v11;
            }
          }
          else
          {
            v40 = a1 ^ RtlpLFHKey ^ *(_DWORD *)v11 ^ (v11 >> 3);
            if ( (_WORD)v40 )
              v41 = 0;
            else
              v41 = *(_DWORD *)(v11 - (v40 >> 13));
            LOWORD(v41) = *(_WORD *)(v41 + 20);
          }
          v39 = *(_DWORD *)(v11 + 8 * (unsigned __int16)v41 - 4);
        }
        else
        {
          v39 = v36 & 0x3F;
        }
        *(_DWORD *)(a2 + 4) = 8 * v63 - v39;
        *(_BYTE *)(a2 + 9) = *(_BYTE *)(v11 + 6);
        *(_WORD *)(a2 + 10) = 1;
        v42 = *(_BYTE *)(v11 + 7);
        if ( v42 == 5 )
        {
          v43 = *(unsigned __int16 *)(v11 + 4) ^ *(unsigned __int16 *)(a1 + 84);
        }
        else if ( (v42 & 0x40) != 0 )
        {
          v43 = *(unsigned __int16 *)(v11 + 8 * (v42 & 0x3F) + 4);
        }
        else if ( (v42 & 0x3F) == 0x3F )
        {
          if ( v42 >= 0 )
          {
            if ( *(_DWORD *)(a1 + 76) )
            {
              v45 = *(_DWORD *)v11;
              if ( (*(_DWORD *)v11 & *(_DWORD *)(a1 + 76)) != 0 )
                v45 ^= *(_DWORD *)(a1 + 80);
            }
            else
            {
              LOWORD(v45) = *(_WORD *)v11;
            }
          }
          else
          {
            v44 = a1 ^ RtlpLFHKey ^ *(_DWORD *)v11 ^ (v11 >> 3);
            if ( (_WORD)v44 )
              v45 = 0;
            else
              v45 = *(_DWORD *)(v11 - (v44 >> 13));
            LOWORD(v45) = *(_WORD *)(v45 + 20);
          }
          v43 = *(_DWORD *)(v11 + 8 * (unsigned __int16)v45 - 4);
        }
        else
        {
          v43 = v42 & 0x3F;
        }
        v46 = *(_WORD *)(a2 + 10);
        *(_BYTE *)(a2 + 8) = v43;
        if ( (v46 & 2) == 0 )
          *(_DWORD *)(a2 + 20) = v43;
        v47 = v46;
        goto LABEL_165;
      }
      *(_WORD *)(a2 + 10) = 1;
LABEL_26:
      if ( *(_BYTE *)(a1 + 234) == 2 )
        v13 = *(_DWORD *)(a1 + 228);
      else
        v13 = 0;
      if ( v13 && (unsigned __int8)RtlpWalkLFHBlock(2) && (*(_WORD *)(a2 + 10) & 0x2000) == 0 )
        goto LABEL_192;
      v14 = *(_DWORD **)a2;
      if ( (*(_BYTE *)(a2 + 10) & 1) == 0 )
        break;
      v7 = (int)(v14 - 2);
      if ( *(_BYTE *)(v7 + 7) == 5 )
        v7 -= 8 * *(unsigned __int8 *)(v7 + 6);
      v15 = *(_BYTE *)(v7 + 7);
      if ( v15 == 4 )
      {
        v16 = *(_DWORD *)(v7 - 24);
        v17 = a1 + 156;
        goto LABEL_65;
      }
      v18 = *(_BYTE *)(v7 + 6);
      if ( v18 )
      {
        v15 = *(_BYTE *)(v7 + 7);
        v19 = (v7 & 0xFFFF0000) - (v18 << 16) + 0x10000;
      }
      else
      {
        v19 = a1;
      }
      if ( !v19 )
      {
LABEL_191:
        v64 = -1073741503;
        goto LABEL_192;
      }
      if ( v15 == 3 )
        goto LABEL_58;
      if ( *(_DWORD *)(a1 + 76) )
      {
        v20 = *(_DWORD *)v7;
        if ( (*(_DWORD *)v7 & *(_DWORD *)(a1 + 76)) != 0 )
          v20 ^= *(_DWORD *)(a1 + 80);
      }
      else
      {
        LOWORD(v20) = *(_WORD *)v7;
      }
      v20 = (unsigned __int16)v20;
LABEL_81:
      v11 = v7 + 8 * v20;
    }
    v7 = (int)(v14 - 4);
    if ( *(_DWORD *)(a1 + 76) )
    {
      v21 = *(_DWORD *)v7;
      if ( (*(_DWORD *)v7 & *(_DWORD *)(a1 + 76)) != 0 )
        v21 ^= *(_DWORD *)(a1 + 80);
      v22 = v21;
    }
    else
    {
      v22 = *(_WORD *)v7;
    }
    v23 = *(_BYTE *)(v7 + 6);
    if ( v23 )
      v19 = (v7 & 0xFFFF0000) - (v23 << 16) + 0x10000;
    else
      v19 = a1;
    if ( !v19 )
      goto LABEL_191;
    if ( *(_BYTE *)(v7 + 7) != 3 )
    {
      v20 = v22;
      goto LABEL_81;
    }
LABEL_58:
    if ( (unsigned int)(v7 + *(_DWORD *)(v7 + 28) + 32) >= *(_DWORD *)(v19 + 40) )
      break;
    *(_DWORD *)a2 = *(_DWORD *)(v7 + 24);
    v28 = *(_DWORD *)(v7 + 28);
    *(_DWORD *)(a2 + 20) = 0;
    v11 = 0;
    *(_DWORD *)(a2 + 4) = v28;
    *(_DWORD *)(a2 + 8) = 0x10000000;
  }
  v24 = *(_DWORD *)(v19 + 16);
  if ( v24 == a1 + 164 )
    goto LABEL_61;
  v8 = v24 - 16;
  v7 = 2;
LABEL_63:
  v11 = 0;
  if ( v8 )
  {
    if ( *(_BYTE *)(a1 + 234) == 2 )
      v25 = *(_DWORD *)(a1 + 228);
    else
      v25 = 0;
    if ( v8 != v25 )
    {
      *(_DWORD *)a2 = v8;
      if ( *(_DWORD *)(a1 + 76) )
      {
        v26 = *(_DWORD *)v8;
        if ( (*(_DWORD *)v8 & *(_DWORD *)(a1 + 76)) != 0 )
          v26 ^= *(_DWORD *)(a1 + 80);
      }
      else
      {
        LOWORD(v26) = *(_WORD *)v8;
      }
      *(_DWORD *)(a2 + 4) = 8 * (unsigned __int16)v26;
      *(_WORD *)(a2 + 10) = 2;
      *(_WORD *)(a2 + 8) = 0;
      *(_DWORD *)(a2 + 12) = (*(_DWORD *)(v8 + 32) - *(_DWORD *)(v8 + 44)) << 12;
      v27 = *(_DWORD *)(v8 + 44) << 12;
      *(_DWORD *)(a2 + 16) = v27;
      if ( (*(_BYTE *)(v8 + 12) & 2) != 0 )
        *(_DWORD *)(a2 + 16) = v27 + 4096;
      v7 = *(_DWORD *)(v8 + 36);
      *(_DWORD *)(a2 + 20) = v7 + 8 * (((*(_BYTE *)(v7 + 2) & 1) == 0) + 1);
      *(_DWORD *)(a2 + 24) = *(_DWORD *)(v8 + 40);
      goto LABEL_82;
    }
    RtlpWalkLowFragHeapSegment(&v64);
  }
  else
  {
    v17 = a1 + 156;
    v16 = *(_DWORD *)(a1 + 156);
LABEL_65:
    if ( v16 != v17 )
    {
      v11 = v16 + 24;
      goto LABEL_82;
    }
    v64 = -2147483622;
  }
LABEL_192:
  if ( RtlGetCurrentServiceSessionId() )
    v62 = (int)NtCurrentPeb()->SharedData + 550;
  else
    v62 = 2147353472;
  if ( *(_BYTE *)v62 && (NtCurrentPeb()->TracingFlags & 1) != 0 && v64 != -2147483622 )
    RtlpLogHeapWalkEvent(a1);
  return v64;
}
