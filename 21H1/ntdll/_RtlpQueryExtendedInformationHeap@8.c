/*
 * XREFs of _RtlpQueryExtendedInformationHeap@8 @ 0x4B358EC0
 * Callers:
 *     _RtlpQueryExtendedHeapInformation@12 @ 0x4B3589F0 (_RtlpQueryExtendedHeapInformation@12.c)
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlpGetContainingRange@24 @ 0x4B357EF3 (_RtlpGetContainingRange@24.c)
 *     _RtlpQueryMemoryUsageHeap@12 @ 0x4B35970A (_RtlpQueryMemoryUsageHeap@12.c)
 *     _RtlpWalkHeapInternal@12 @ 0x4B35A1E8 (_RtlpWalkHeapInternal@12.c)
 *     _RtlpEstimateAllocatedSize@4 @ 0x4B35D645 (_RtlpEstimateAllocatedSize@4.c)
 *     _RtlpHpHeapReportCounters@8 @ 0x4B3790FB (_RtlpHpHeapReportCounters@8.c)
 */

int __stdcall RtlpQueryExtendedInformationHeap(int a1, unsigned int *a2)
{
  int v2; // ebx
  unsigned int v3; // edx
  unsigned int v4; // ecx
  bool v5; // zf
  int (__thiscall *v6)(_DWORD, _DWORD *, unsigned int); // edi
  int result; // eax
  int *v8; // eax
  int v9; // ecx
  int v10; // eax
  int *v11; // eax
  int v12; // ecx
  int v13; // eax
  BOOL v14; // eax
  __int16 v15; // bx
  int v16; // edi
  int v17; // edi
  unsigned int v18; // ecx
  int v19; // edi
  int v20; // edi
  unsigned int v21; // edi
  int v22; // ecx
  unsigned int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // ecx
  int v29; // eax
  _DWORD *v30; // eax
  int v31; // eax
  int v32; // eax
  char v33; // [esp+13h] [ebp-E5h]
  unsigned int v34; // [esp+14h] [ebp-E4h]
  int (__thiscall *v35)(_DWORD, _DWORD *, unsigned int); // [esp+18h] [ebp-E0h]
  unsigned int v36; // [esp+1Ch] [ebp-DCh] BYREF
  unsigned int v37; // [esp+20h] [ebp-D8h] BYREF
  BOOL v38; // [esp+24h] [ebp-D4h]
  int v39; // [esp+28h] [ebp-D0h]
  int v40; // [esp+2Ch] [ebp-CCh] BYREF
  unsigned int v41; // [esp+30h] [ebp-C8h]
  _BYTE v42[28]; // [esp+34h] [ebp-C4h] BYREF
  _DWORD v43[26]; // [esp+50h] [ebp-A8h] BYREF
  _DWORD *v44; // [esp+B8h] [ebp-40h]
  int v45; // [esp+BCh] [ebp-3Ch]
  int v46; // [esp+C0h] [ebp-38h] BYREF
  _DWORD v47[3]; // [esp+C4h] [ebp-34h] BYREF
  int v48; // [esp+D0h] [ebp-28h]
  int v49; // [esp+D4h] [ebp-24h]
  int v50; // [esp+D8h] [ebp-20h]
  int v51; // [esp+DCh] [ebp-1Ch]
  int v52; // [esp+E0h] [ebp-18h]
  int v53; // [esp+E4h] [ebp-14h]
  int v54; // [esp+E8h] [ebp-10h]
  int v55; // [esp+ECh] [ebp-Ch]
  int v56; // [esp+F0h] [ebp-8h]

  v2 = 0;
  v3 = *a2;
  v4 = a2[2];
  v5 = *(_DWORD *)(a1 + 8) == -571548178;
  v6 = (int (__thiscall *)(_DWORD, _DWORD *, unsigned int))a2[1];
  v41 = *a2;
  v34 = v4;
  v35 = v6;
  v44 = 0;
  if ( v5 )
  {
    v33 = 1;
    v39 = a1;
  }
  else
  {
    v5 = (*(_DWORD *)(a1 + 68) & 0x1000000) == 0;
    v33 = 0;
    v39 = 0;
    if ( !v5 )
      return -1073741822;
  }
  if ( v3 != 0x80000000 )
  {
    memset(&v43[4], 0, 0x54u);
    v43[0] = 2;
    v43[1] = 32;
    v43[2] = a1;
    if ( v33 )
    {
      v43[3] = 0;
      v43[4] = *(_DWORD *)(v39 + 128) << 12;
      v43[4] += *(_DWORD *)(v39 + 76) << 12;
      v43[5] = *(_DWORD *)(v39 + 132) << 12;
      v43[5] += *(_DWORD *)(v39 + 80) << 12;
      result = 0;
    }
    else
    {
      v43[3] = *(unsigned __int8 *)(a1 + 234);
      result = RtlpQueryMemoryUsageHeap(&v43[5]);
    }
    if ( result < 0 )
      return result;
    result = v6(v6, v43, v34);
    if ( result < 0 || v41 < 3 )
      return result;
    v36 = 0;
    v37 = 0;
    memset(v42, 0, sizeof(v42));
    v14 = v41 > 3;
    v38 = v14;
    while ( 1 )
    {
      result = RtlpWalkHeapInternal(v14);
      if ( result == -2147483622 )
        return 0;
      if ( result < 0 )
        return result;
      v15 = *(_WORD *)&v42[10];
      if ( (v42[10] & 2) != 0 )
      {
        if ( v33 || (*(_WORD *)&v42[10] & 0x8000) != 0 )
        {
          v16 = *(_DWORD *)v42;
        }
        else
        {
          v44 = *(_DWORD **)v42;
          if ( *(_DWORD *)v42 + 16 == *(_DWORD *)(a1 + 164) )
            v16 = a1;
          else
            v16 = *(_DWORD *)v42;
        }
        memset(&v43[5], 0, 0x50u);
        v43[2] = v16;
        v43[3] = *(_DWORD *)&v42[12] + *(_DWORD *)&v42[16];
        v43[4] = *(_DWORD *)&v42[12];
        v43[0] = 3;
        v43[1] = 28;
        result = v35(v35, v43, v34);
        if ( result < 0 )
          return result;
        if ( v33 )
        {
          v18 = *(_DWORD *)v42;
          v37 = *(_DWORD *)v42 + *(_DWORD *)&v42[12];
          v20 = *(_DWORD *)(v39 + 12) & 0x40000000;
        }
        else
        {
          if ( (*(_WORD *)&v42[10] & 0x8000) == 0 )
          {
            RtlpGetContainingRange(v44, (unsigned int)v44, (int *)&v36, (int *)&v37, &v46, &v40);
            v17 = v40;
            goto LABEL_39;
          }
          v18 = *(_DWORD *)v42;
          v19 = *(_DWORD *)(a1 + 64);
          v37 = *(_DWORD *)v42 + *(_DWORD *)&v42[12];
          v20 = v19 & 0x40000;
        }
        v36 = v18;
        v17 = v20 != 0 ? 64 : 4;
        v40 = v17;
LABEL_39:
        memset(v43, 0, 0x64u);
        v43[3] = v37 - v36;
        v43[2] = v36;
        v43[0] = 4;
        v43[1] = 32;
        v43[4] = 1;
        v43[5] = v17;
        result = v35(v35, v43, v34);
        if ( result < 0 )
          return result;
        goto LABEL_97;
      }
      if ( (*(_WORD *)&v42[10] & 0x4000) != 0 )
        break;
      if ( (*(_WORD *)&v42[10] & 0x1000) != 0 )
      {
        v14 = v38;
        if ( v41 >= 4 )
        {
          memset(v43, 0, 0x64u);
          v27 = *(_DWORD *)&v42[4];
          v43[2] = *(_DWORD *)v42;
          v43[0] = 4;
          v43[1] = 32;
          v43[4] = 2;
          v43[5] = 1;
          goto LABEL_94;
        }
      }
      else
      {
        if ( !v33 && (*(_DWORD *)v42 < v36 || *(_DWORD *)v42 > v37) )
        {
          RtlpGetContainingRange(v44, *(unsigned int *)v42, (int *)&v36, (int *)&v37, &v46, &v40);
          if ( v41 < 4 )
            goto LABEL_97;
          memset(v43, 0, 0x64u);
          v43[3] = v37 - v36;
          v43[5] = v40;
          v43[2] = v36;
          v43[0] = 4;
          v43[1] = 32;
          v43[4] = 1;
          result = v35(v35, v43, v34);
          if ( result < 0 )
            return result;
          v15 = *(_WORD *)&v42[10];
        }
        v14 = v38;
        if ( v41 >= 4 )
        {
LABEL_77:
          if ( (v15 & 0xF0) == 0 )
          {
            memset(v43, 0, 0x64u);
            v43[4] = *(_DWORD *)&v42[4];
            v43[2] = *(_DWORD *)v42;
            v31 = *(_DWORD *)&v42[20];
            v43[0] = 5;
            v43[1] = 28;
            if ( (v15 & 2) != 0 )
              v31 = v42[8];
            v43[5] = v31;
            if ( (v15 & 1) != 0 )
            {
              v32 = 1;
              v43[3] = 1;
            }
            else
            {
              v32 = v43[3];
            }
            if ( (v15 & 0x4000) != 0 )
            {
              v27 = v32 | 4;
              goto LABEL_94;
            }
            if ( v15 < 0 )
            {
              v27 = v32 | 8;
LABEL_94:
              v43[3] = v27;
            }
            v30 = v43;
            goto LABEL_96;
          }
          v28 = *(_DWORD *)&v42[20];
          v49 = *(_DWORD *)&v42[4];
          v47[2] = *(_DWORD *)v42;
          v29 = 2;
          v51 = 0;
          v52 = 0;
          v47[0] = 5;
          v47[1] = 48;
          v48 = 2;
          if ( (v15 & 2) != 0 )
            v28 = v42[8];
          v50 = v28;
          if ( (v15 & 0x4000) != 0 )
          {
            v29 = 6;
            v48 = 6;
          }
          if ( (v15 & 1) != 0 )
            v48 = v29 | 1;
          v55 = *(_DWORD *)&v42[12];
          v56 = *(_DWORD *)&v42[16];
          v30 = v47;
          v53 = 1;
          v54 = 20;
LABEL_96:
          result = v35(v35, v30, v34);
          if ( result < 0 )
            return result;
LABEL_97:
          v14 = v38;
        }
      }
    }
    memset(&v43[2], 0, 0x5Cu);
    v43[0] = 3;
    v21 = 0;
    v43[1] = 28;
    v45 = 0;
    if ( v33 )
    {
      v43[2] = *(_DWORD *)v42;
      v21 = *(_DWORD *)(v39 + 68);
      if ( (*(_BYTE *)(v39 + 72) & 1) != 0 )
      {
        if ( v21 )
          v21 ^= v39 + 68;
        else
          v21 = 0;
      }
      while ( v21 )
      {
        v24 = *(_DWORD *)(v21 + 12) & 0xFFFF0000;
        if ( *(_DWORD *)v42 < v24 )
        {
          v25 = *(_DWORD *)v21;
        }
        else
        {
          if ( *(_DWORD *)v42 <= v24 )
            break;
          v25 = *(_DWORD *)(v21 + 4);
        }
        if ( (*(_BYTE *)(v39 + 72) & 1) != 0 && v25 )
          v21 ^= v25;
        else
          v21 = v25;
      }
      v43[3] = (*(_DWORD *)(v21 + 16) & 0xFFFFF000) + 4096;
      v23 = *(_DWORD *)(v21 + 16) & 0xFFFFF000;
    }
    else
    {
      v22 = *(_DWORD *)v42 - 8;
      if ( *(_BYTE *)(*(_DWORD *)v42 - 8 + 7) == 5 )
        v22 -= 8 * *(unsigned __int8 *)(v22 + 6);
      v45 = v22 - 24;
      v43[2] = (v22 - 24) & 0xFFFF0000;
      v43[3] = *(_DWORD *)(v22 - 24 + 20);
      v23 = *(_DWORD *)(v22 - 24 + 16);
    }
    v43[4] = v23;
    result = v35(v35, v43, v34);
    if ( result < 0 )
      return result;
    memset(&v43[3], 0, 0x58u);
    v43[1] = 32;
    v43[0] = 4;
    if ( v33 )
    {
      v43[2] = *(_DWORD *)v42;
      v43[3] = *(_DWORD *)(v21 + 16) & 0xFFFFF000;
      v26 = *(_DWORD *)(v39 + 12) & 0x40000000;
    }
    else
    {
      v43[2] = v45;
      v43[3] = *(_DWORD *)(v45 + 16);
      v26 = *(_DWORD *)(a1 + 64) & 0x40000;
    }
    v43[4] = 1;
    v43[5] = v26 != 0 ? 64 : 4;
    result = v35(v35, v43, v34);
    if ( result < 0 )
      return result;
    v15 = *(_WORD *)&v42[10];
    goto LABEL_77;
  }
  memset(&v43[2], 0, 0x5Cu);
  v43[0] = 0x80000000;
  v43[1] = 100;
  if ( v33 )
  {
    RtlpHpHeapReportCounters(v39, v43);
  }
  else
  {
    v43[4] = *(unsigned __int16 *)(a1 + 124);
    v43[3] = 1;
    v43[6] = a1;
    v43[5] = NtCurrentPeb()->NumberOfHeaps - 1;
    v43[7] = *(_DWORD *)(a1 + 500);
    v43[8] = *(_DWORD *)(a1 + 504) - *(_DWORD *)(a1 + 580);
    v43[12] = RtlpEstimateAllocatedSize(a1);
    v43[13] = 8 * *(_DWORD *)(a1 + 116);
    v43[11] = *(_DWORD *)(a1 + 520);
    v43[16] = *(_DWORD *)(a1 + 512);
    v43[10] = *(_DWORD *)(a1 + 508);
    v43[9] = *(_DWORD *)(a1 + 516);
    v43[17] = *(_DWORD *)(a1 + 524);
    v43[18] = v43[17];
    v8 = *(int **)(a1 + 180);
    if ( v8 )
    {
      v9 = v8[3];
      v43[14] = v9;
      v10 = *v8;
      if ( v10 )
        v43[14] = v9 + *(_DWORD *)(v10 + 12);
    }
    v11 = *(int **)(a1 + 200);
    v12 = *(_DWORD *)(a1 + 536);
    v43[15] = v12;
    if ( v11 )
    {
      v13 = *v11;
      if ( v13 != -1 )
        v2 = *(_DWORD *)(v13 + 20);
      v43[15] = v12 + v2;
    }
  }
  return v6(v6, v43, v34);
}
