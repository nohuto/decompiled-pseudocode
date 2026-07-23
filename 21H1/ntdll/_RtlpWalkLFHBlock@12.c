/*
 * XREFs of _RtlpWalkLFHBlock@12 @ 0x4B371E16
 * Callers:
 *     _RtlpWalkHeap@12 @ 0x4B359AF8 (_RtlpWalkHeap@12.c)
 * Callees:
 *     @RtlpGetFirstBlockAddress@8 @ 0x4B370C0F (@RtlpGetFirstBlockAddress@8.c)
 *     @RtlpGetReservedBlockSize@4 @ 0x4B370C7D (@RtlpGetReservedBlockSize@4.c)
 *     _RtlpIsLFHZoneAllocation@8 @ 0x4B371060 (_RtlpIsLFHZoneAllocation@8.c)
 */

char __fastcall RtlpWalkLFHBlock(int a1, int a2, int a3)
{
  PRTL_SRWLOCK v5; // eax
  unsigned int v6; // edi
  int v7; // eax
  unsigned int v8; // ecx
  int v9; // ecx
  unsigned int v10; // ebx
  unsigned __int16 *v11; // ecx
  unsigned __int16 v12; // ax
  unsigned int v13; // edx
  char v15; // cl
  int v16; // eax
  int v17; // eax
  char v18; // cl
  int v19; // ecx
  int v20; // eax
  int v21; // edi
  bool v22; // sf
  unsigned int v23; // edi
  int v24; // eax
  int *v25; // eax
  bool v26; // zf
  char v27; // ah
  int v28; // ecx
  unsigned int v29; // edx
  int v30; // eax
  int v31; // eax
  unsigned int Value; // ecx
  int v33; // eax
  unsigned int *v34; // eax
  char v35; // al
  int v36; // eax
  unsigned int v37; // eax
  int v38; // edx
  unsigned int FirstBlockAddress; // edx
  char v40; // al
  unsigned int v41; // eax
  char v42; // ah
  int v43; // eax
  int v44; // edi
  unsigned int v45; // edi
  int v46; // eax
  int *v47; // eax
  char v48; // ah
  int v49; // edi
  unsigned int v50; // ecx
  int v51; // eax
  int v52; // eax
  unsigned int v53; // eax
  unsigned int v54; // ecx
  char v55; // dl
  unsigned int v56; // ecx
  int v57; // eax
  int ReservedBlockSize; // [esp+14h] [ebp-10h]
  unsigned __int8 v59; // [esp+14h] [ebp-10h]
  PRTL_SRWLOCK SRWLock; // [esp+18h] [ebp-Ch]
  PRTL_SRWLOCK SRWLocka; // [esp+18h] [ebp-Ch]
  unsigned int v63; // [esp+1Ch] [ebp-8h]

  if ( *(_BYTE *)(a1 + 234) == 2 )
  {
    v5 = *(PRTL_SRWLOCK *)(a1 + 228);
    SRWLock = v5;
  }
  else
  {
    v5 = 0;
    SRWLock = 0;
  }
  if ( !v5 )
    return 0;
  v6 = *(_DWORD *)a2;
  if ( *(_WORD *)(a2 + 10) )
  {
    v6 -= 8;
    if ( *(_BYTE *)(v6 + 7) != 5 )
      goto LABEL_10;
    v7 = 8 * *(unsigned __int8 *)(v6 + 6);
  }
  else
  {
    v7 = *(unsigned __int8 *)(a2 + 8);
  }
  v6 -= v7;
  v5 = SRWLock;
LABEL_10:
  if ( *(char *)(v6 + 7) < 0 )
  {
    v8 = a1 ^ RtlpLFHKey ^ *(_DWORD *)v6 ^ (v6 >> 3);
    if ( (_WORD)v8 )
      return 0;
    v9 = *(_DWORD *)(v6 - (v8 >> 13));
    SRWLocka = (PRTL_SRWLOCK)v9;
    if ( !v9 )
      return 0;
    ReservedBlockSize = (unsigned __int16)RtlpGetReservedBlockSize(v9);
    v10 = 8 * ReservedBlockSize + v6;
    RtlpGetFirstBlockAddress(v11, *((_DWORD *)v11 + 1));
    v12 = RtlpGetReservedBlockSize((int)SRWLocka);
    if ( (v13 >> 3) / v12 >= LOWORD(SRWLocka[6].Value) )
    {
      *(_RTL_SRWLOCK *)a2 = SRWLocka[1];
      *(_WORD *)(a2 + 10) = 8193;
      return 0;
    }
    v15 = *(_BYTE *)(v10 + 7);
    if ( (v15 & 0x3F) == 0 )
    {
      *(_BYTE *)(a2 + 8) = 8;
      *(_DWORD *)a2 = v10 + 8;
      *(_WORD *)(a2 + 10) = 0;
      *(_DWORD *)(a2 + 20) = 8;
      v31 = 8 * LOWORD(SRWLocka[5].Value) - 8;
LABEL_62:
      *(_DWORD *)(a2 + 4) = v31;
      *(_BYTE *)(a2 + 9) = *(_BYTE *)(v10 + 6);
LABEL_63:
      *(_WORD *)(a2 + 10) |= 0x8000u;
      return 1;
    }
    if ( (v15 & 0x40) != 0 )
    {
      v16 = v15 & 0x3F;
    }
    else
    {
      if ( v15 != 4 )
      {
        v17 = 8 * ReservedBlockSize;
LABEL_23:
        *(_DWORD *)a2 = v6 + v17 + 8;
        *(_WORD *)(a2 + 10) = 1;
        v18 = *(_BYTE *)(v10 + 7);
        if ( v18 == 5 )
        {
          v19 = a1;
          v20 = *(unsigned __int16 *)(v10 + 4) ^ *(unsigned __int16 *)(a1 + 84);
        }
        else
        {
          if ( (v18 & 0x40) != 0 )
          {
            v20 = *(unsigned __int16 *)(v10 + 8 * (v18 & 0x3F) + 4);
          }
          else
          {
            if ( (v18 & 0x3F) == 0x3F )
            {
              v22 = v18 < 0;
              v19 = a1;
              if ( v22 )
              {
                v23 = a1 ^ RtlpLFHKey ^ *(_DWORD *)v10 ^ (v10 >> 3);
                if ( (_WORD)v23 )
                {
                  v21 = 0;
                  v24 = 0;
                }
                else
                {
                  v25 = (int *)(v10 - (v23 >> 13));
                  v21 = 0;
                  v24 = *v25;
                }
                LOWORD(v24) = *(_WORD *)(v24 + 20);
              }
              else
              {
                v21 = 0;
                if ( *(_DWORD *)(a1 + 76) )
                {
                  v24 = *(_DWORD *)v10;
                  if ( (*(_DWORD *)v10 & *(_DWORD *)(a1 + 76)) != 0 )
                    v24 ^= *(_DWORD *)(a1 + 80);
                }
                else
                {
                  LOWORD(v24) = *(_WORD *)v10;
                }
              }
              v20 = *(_DWORD *)(v10 + 8 * (unsigned __int16)v24 - 4);
              goto LABEL_42;
            }
            v20 = v18 & 0x3F;
          }
          v19 = a1;
        }
        v21 = 0;
LABEL_42:
        v26 = (*(_BYTE *)(a2 + 10) & 2) == 0;
        *(_BYTE *)(a2 + 8) = v20;
        if ( v26 )
          *(_DWORD *)(a2 + 20) = v20;
        v27 = *(_BYTE *)(v10 + 7);
        if ( v27 == 5 )
        {
          v28 = *(unsigned __int16 *)(v10 + 4) ^ *(unsigned __int16 *)(v19 + 84);
        }
        else if ( (v27 & 0x40) != 0 )
        {
          v28 = *(unsigned __int16 *)(v10 + 8 * (v27 & 0x3F) + 4);
        }
        else if ( (v27 & 0x3F) == 0x3F )
        {
          if ( v27 >= 0 )
          {
            if ( *(_DWORD *)(v19 + 76) )
            {
              v30 = *(_DWORD *)v10;
              if ( (*(_DWORD *)v10 & *(_DWORD *)(v19 + 76)) != 0 )
                v30 ^= *(_DWORD *)(v19 + 80);
            }
            else
            {
              LOWORD(v30) = *(_WORD *)v10;
            }
          }
          else
          {
            v29 = v19 ^ RtlpLFHKey ^ *(_DWORD *)v10 ^ (v10 >> 3);
            if ( !(_WORD)v29 )
              v21 = *(_DWORD *)(v10 - (v29 >> 13));
            LOWORD(v30) = *(_WORD *)(v21 + 20);
          }
          v28 = *(_DWORD *)(v10 + 8 * (unsigned __int16)v30 - 4);
        }
        else
        {
          v28 = v27 & 0x3F;
        }
        v31 = 8 * LOWORD(SRWLocka[5].Value) - v28;
        goto LABEL_62;
      }
      v16 = *(unsigned __int8 *)(v10 + 6);
    }
    v17 = 8 * (ReservedBlockSize + v16);
    goto LABEL_23;
  }
  Value = v5[3].Value;
  if ( ((*(_BYTE *)(v6 + 2) ^ (unsigned __int8)(*(_BYTE *)(Value + 82) & (*(_DWORD *)(Value + 76) >> 20))) & 1) == 0 )
    goto LABEL_126;
  if ( *(_DWORD *)(Value + 76) )
  {
    v33 = *(_DWORD *)v6;
    if ( (*(_DWORD *)v6 & *(_DWORD *)(Value + 76)) != 0 )
      v33 ^= *(_DWORD *)(Value + 80);
  }
  else
  {
    LOWORD(v33) = *(_WORD *)v6;
  }
  if ( (unsigned __int16)v33 <= 5u )
    goto LABEL_126;
  v34 = *(unsigned int **)a2;
  if ( *(_DWORD *)(*(_DWORD *)a2 + 12) != -253701952 )
    goto LABEL_126;
  v63 = *v34;
  if ( !RtlpIsLFHZoneAllocation(SRWLock, *v34) )
    goto LABEL_126;
  v35 = *(_BYTE *)(v6 + 7);
  if ( (v35 & 0x40) != 0 )
  {
    v36 = v35 & 0x3F;
LABEL_76:
    v37 = v6 + 8 * v36;
    goto LABEL_80;
  }
  if ( v35 == 4 )
  {
    v36 = *(unsigned __int8 *)(v6 + 6);
    goto LABEL_76;
  }
  v37 = v6;
LABEL_80:
  v38 = *(_DWORD *)(v63 + 4);
  if ( v38 == v37 + 8 )
  {
    FirstBlockAddress = RtlpGetFirstBlockAddress((unsigned __int16 *)v63, v38);
    v40 = *(_BYTE *)(FirstBlockAddress + 7);
    if ( (v40 & 0x40) != 0 )
    {
      v41 = FirstBlockAddress + 8 * (v40 & 0x3F);
    }
    else if ( v40 == 4 )
    {
      v41 = FirstBlockAddress + 8 * *(unsigned __int8 *)(FirstBlockAddress + 6);
    }
    else
    {
      v41 = FirstBlockAddress;
    }
    *(_DWORD *)a2 = v41 + 8;
    if ( (*(_BYTE *)(FirstBlockAddress + 7) & 0x3F) == 0 )
    {
      *(_BYTE *)(a2 + 8) = 8;
      *(_WORD *)(a2 + 10) = 0;
      *(_DWORD *)(a2 + 20) = 8;
      v52 = 8 * *(unsigned __int16 *)(v63 + 20) - 8;
LABEL_125:
      *(_DWORD *)(a2 + 4) = v52;
      *(_BYTE *)(a2 + 9) = *(_BYTE *)(FirstBlockAddress + 6);
      goto LABEL_63;
    }
    *(_WORD *)(a2 + 10) = 1;
    v42 = *(_BYTE *)(FirstBlockAddress + 7);
    if ( v42 == 5 )
    {
      v43 = *(unsigned __int16 *)(FirstBlockAddress + 4) ^ *(unsigned __int16 *)(a1 + 84);
    }
    else if ( (v42 & 0x40) != 0 )
    {
      v43 = *(unsigned __int16 *)(FirstBlockAddress + 8 * (v42 & 0x3F) + 4);
    }
    else
    {
      if ( (v42 & 0x3F) == 0x3F )
      {
        if ( v42 >= 0 )
        {
          v44 = 0;
          if ( *(_DWORD *)(a1 + 76) )
          {
            v46 = *(_DWORD *)FirstBlockAddress;
            if ( (*(_DWORD *)FirstBlockAddress & *(_DWORD *)(a1 + 76)) != 0 )
              v46 ^= *(_DWORD *)(a1 + 80);
          }
          else
          {
            LOWORD(v46) = *(_WORD *)FirstBlockAddress;
          }
        }
        else
        {
          v45 = a1 ^ RtlpLFHKey ^ *(_DWORD *)FirstBlockAddress ^ (FirstBlockAddress >> 3);
          if ( (_WORD)v45 )
          {
            v44 = 0;
            v46 = 0;
          }
          else
          {
            v47 = (int *)(FirstBlockAddress - (v45 >> 13));
            v44 = 0;
            v46 = *v47;
          }
          LOWORD(v46) = *(_WORD *)(v46 + 20);
        }
        v43 = *(_DWORD *)(FirstBlockAddress + 8 * (unsigned __int16)v46 - 4);
        goto LABEL_105;
      }
      v43 = v42 & 0x3F;
    }
    v44 = 0;
LABEL_105:
    v26 = (*(_BYTE *)(a2 + 10) & 2) == 0;
    *(_BYTE *)(a2 + 8) = v43;
    if ( v26 )
      *(_DWORD *)(a2 + 20) = v43;
    v48 = *(_BYTE *)(FirstBlockAddress + 7);
    if ( v48 == 5 )
    {
      v49 = *(unsigned __int16 *)(FirstBlockAddress + 4) ^ *(unsigned __int16 *)(a1 + 84);
    }
    else if ( (v48 & 0x40) != 0 )
    {
      v49 = *(unsigned __int16 *)(FirstBlockAddress + 8 * (v48 & 0x3F) + 4);
    }
    else if ( (v48 & 0x3F) == 0x3F )
    {
      if ( v48 >= 0 )
      {
        if ( *(_DWORD *)(a1 + 76) )
        {
          v51 = *(_DWORD *)FirstBlockAddress;
          if ( (*(_DWORD *)FirstBlockAddress & *(_DWORD *)(a1 + 76)) != 0 )
            v51 ^= *(_DWORD *)(a1 + 80);
        }
        else
        {
          LOWORD(v51) = *(_WORD *)FirstBlockAddress;
        }
      }
      else
      {
        v50 = a1 ^ RtlpLFHKey ^ *(_DWORD *)FirstBlockAddress ^ (FirstBlockAddress >> 3);
        if ( !(_WORD)v50 )
          v44 = *(_DWORD *)(FirstBlockAddress - (v50 >> 13));
        LOWORD(v51) = *(_WORD *)(v44 + 20);
      }
      v49 = *(_DWORD *)(FirstBlockAddress + 8 * (unsigned __int16)v51 - 4);
    }
    else
    {
      v49 = v48 & 0x3F;
    }
    v52 = 8 * *(unsigned __int16 *)(v63 + 20) - v49;
    goto LABEL_125;
  }
LABEL_126:
  if ( !RtlpIsLFHZoneAllocation(SRWLock, v6) && SRWLock != *(PRTL_SRWLOCK *)a2 )
  {
    v53 = SRWLock[3].Value;
    v54 = *(_DWORD *)(v53 + 76);
    v55 = *(_BYTE *)(v53 + 82);
    v59 = *(_BYTE *)(v6 + 2);
    if ( ((v59 ^ (unsigned __int8)(v55 & (v54 >> 20))) & 1) == 0
      || ((v59 ^ (unsigned __int8)(v55 & (v54 >> 17))) & 8) == 0 )
    {
      return 0;
    }
  }
  *(_BYTE *)(a2 + 8) = 8;
  *(_WORD *)(a2 + 10) = 8193;
  *(_DWORD *)(a2 + 20) = 8;
  v56 = SRWLock[3].Value;
  if ( *(_DWORD *)(v56 + 76) )
  {
    v57 = *(_DWORD *)v6;
    if ( (*(_DWORD *)v6 & *(_DWORD *)(v56 + 76)) != 0 )
      v57 ^= *(_DWORD *)(v56 + 80);
  }
  else
  {
    LOWORD(v57) = *(_WORD *)v6;
  }
  *(_DWORD *)(a2 + 4) = 8 * (unsigned __int16)v57 - 8;
  *(_BYTE *)(a2 + 9) = *(_BYTE *)(v6 + 6);
  return 1;
}
