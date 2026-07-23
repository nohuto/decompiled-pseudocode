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

int __stdcall RtlpQueryExtendedInformationHeap(unsigned int a1, unsigned int *a2)
{
  int v2; // ebx
  unsigned int v3; // edx
  unsigned int v4; // ecx
  bool v5; // zf
  int (__thiscall *v6)(_DWORD, unsigned int *, unsigned int); // edi
  int result; // eax
  int *v8; // eax
  int v9; // ecx
  int v10; // eax
  int *v11; // eax
  int v12; // ecx
  int v13; // eax
  BOOL v14; // eax
  __int16 v15; // bx
  unsigned int v16; // edi
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
  unsigned int *v30; // eax
  int v31; // eax
  int v32; // eax
  size_t v33; // [esp-4h] [ebp-FCh]
  size_t v34; // [esp-4h] [ebp-FCh]
  size_t v35; // [esp-4h] [ebp-FCh]
  size_t v36; // [esp-4h] [ebp-FCh]
  char v37; // [esp+13h] [ebp-E5h]
  unsigned int v38; // [esp+14h] [ebp-E4h]
  int (__thiscall *v39)(_DWORD, unsigned int *, unsigned int); // [esp+18h] [ebp-E0h]
  unsigned int v40; // [esp+1Ch] [ebp-DCh] BYREF
  unsigned int v41; // [esp+20h] [ebp-D8h] BYREF
  BOOL v42; // [esp+24h] [ebp-D4h]
  unsigned int v43; // [esp+28h] [ebp-D0h]
  int v44; // [esp+2Ch] [ebp-CCh] BYREF
  unsigned int v45; // [esp+30h] [ebp-C8h]
  _BYTE v46[28]; // [esp+34h] [ebp-C4h] BYREF
  unsigned int v47; // [esp+50h] [ebp-A8h] BYREF
  int v48; // [esp+54h] [ebp-A4h]
  unsigned int v49; // [esp+58h] [ebp-A0h] BYREF
  unsigned int v50; // [esp+5Ch] [ebp-9Ch] BYREF
  int v51; // [esp+60h] [ebp-98h] BYREF
  _DWORD v52[9]; // [esp+64h] [ebp-94h] BYREF
  int v53; // [esp+88h] [ebp-70h]
  int v54; // [esp+8Ch] [ebp-6Ch]
  int v55; // [esp+90h] [ebp-68h]
  int v56; // [esp+94h] [ebp-64h]
  int v57; // [esp+98h] [ebp-60h]
  _DWORD *v58; // [esp+B8h] [ebp-40h]
  unsigned int v59; // [esp+BCh] [ebp-3Ch]
  int v60; // [esp+C0h] [ebp-38h] BYREF
  _DWORD v61[3]; // [esp+C4h] [ebp-34h] BYREF
  int v62; // [esp+D0h] [ebp-28h]
  int v63; // [esp+D4h] [ebp-24h]
  int v64; // [esp+D8h] [ebp-20h]
  int v65; // [esp+DCh] [ebp-1Ch]
  int v66; // [esp+E0h] [ebp-18h]
  int v67; // [esp+E4h] [ebp-14h]
  int v68; // [esp+E8h] [ebp-10h]
  int v69; // [esp+ECh] [ebp-Ch]
  int v70; // [esp+F0h] [ebp-8h]

  v2 = 0;
  v3 = *a2;
  v4 = a2[2];
  v5 = *(_DWORD *)(a1 + 8) == -571548178;
  v6 = (int (__thiscall *)(_DWORD, unsigned int *, unsigned int))a2[1];
  v45 = *a2;
  v38 = v4;
  v39 = v6;
  v58 = 0;
  if ( v5 )
  {
    v37 = 1;
    v43 = a1;
  }
  else
  {
    v5 = (*(_DWORD *)(a1 + 68) & 0x1000000) == 0;
    v37 = 0;
    v43 = 0;
    if ( !v5 )
      return -1073741822;
  }
  if ( v3 != 0x80000000 )
  {
    LODWORD(v33) = 84;
    memset(&v51, 0, v33);
    v47 = 2;
    v48 = 32;
    v49 = a1;
    if ( v37 )
    {
      v50 = 0;
      v51 = *(_DWORD *)(v43 + 128) << 12;
      v51 += *(_DWORD *)(v43 + 76) << 12;
      v52[0] = *(_DWORD *)(v43 + 132) << 12;
      v52[0] += *(_DWORD *)(v43 + 80) << 12;
      result = 0;
    }
    else
    {
      v50 = *(unsigned __int8 *)(a1 + 234);
      result = RtlpQueryMemoryUsageHeap(v52);
    }
    if ( result < 0 )
      return result;
    result = v6(v6, &v47, v38);
    if ( result < 0 || v45 < 3 )
      return result;
    v40 = 0;
    v41 = 0;
    memset(v46, 0, sizeof(v46));
    v14 = v45 > 3;
    v42 = v14;
    while ( 1 )
    {
      result = RtlpWalkHeapInternal(v14);
      if ( result == -2147483622 )
        return 0;
      if ( result < 0 )
        return result;
      v15 = *(_WORD *)&v46[10];
      if ( (v46[10] & 2) != 0 )
      {
        if ( v37 || (*(_WORD *)&v46[10] & 0x8000) != 0 )
        {
          v16 = *(_DWORD *)v46;
        }
        else
        {
          v58 = *(_DWORD **)v46;
          if ( *(_DWORD *)v46 + 16 == *(_DWORD *)(a1 + 164) )
            v16 = a1;
          else
            v16 = *(_DWORD *)v46;
        }
        LODWORD(v34) = 80;
        memset(v52, 0, v34);
        v49 = v16;
        v50 = *(_DWORD *)&v46[12] + *(_DWORD *)&v46[16];
        v51 = *(_DWORD *)&v46[12];
        v47 = 3;
        v48 = 28;
        result = v39(v39, &v47, v38);
        if ( result < 0 )
          return result;
        if ( v37 )
        {
          v18 = *(_DWORD *)v46;
          v41 = *(_DWORD *)v46 + *(_DWORD *)&v46[12];
          v20 = *(_DWORD *)(v43 + 12) & 0x40000000;
        }
        else
        {
          if ( (*(_WORD *)&v46[10] & 0x8000) == 0 )
          {
            RtlpGetContainingRange(v58, (unsigned int)v58, (int *)&v40, (int *)&v41, &v60, &v44);
            v17 = v44;
            goto LABEL_39;
          }
          v18 = *(_DWORD *)v46;
          v19 = *(_DWORD *)(a1 + 64);
          v41 = *(_DWORD *)v46 + *(_DWORD *)&v46[12];
          v20 = v19 & 0x40000;
        }
        v40 = v18;
        v17 = v20 != 0 ? 64 : 4;
        v44 = v17;
LABEL_39:
        LODWORD(v35) = 100;
        memset(&v47, 0, v35);
        v50 = v41 - v40;
        v49 = v40;
        v47 = 4;
        v48 = 32;
        v51 = 1;
        v52[0] = v17;
        result = v39(v39, &v47, v38);
        if ( result < 0 )
          return result;
        goto LABEL_97;
      }
      if ( (*(_WORD *)&v46[10] & 0x4000) != 0 )
        break;
      if ( (*(_WORD *)&v46[10] & 0x1000) != 0 )
      {
        v14 = v42;
        if ( v45 >= 4 )
        {
          LODWORD(v34) = 100;
          memset(&v47, 0, v34);
          v27 = *(_DWORD *)&v46[4];
          v49 = *(_DWORD *)v46;
          v47 = 4;
          v48 = 32;
          v51 = 2;
          v52[0] = 1;
          goto LABEL_94;
        }
      }
      else
      {
        if ( !v37 && (*(_DWORD *)v46 < v40 || *(_DWORD *)v46 > v41) )
        {
          RtlpGetContainingRange(v58, *(unsigned int *)v46, (int *)&v40, (int *)&v41, &v60, &v44);
          if ( v45 < 4 )
            goto LABEL_97;
          LODWORD(v34) = 100;
          memset(&v47, 0, v34);
          v50 = v41 - v40;
          v52[0] = v44;
          v49 = v40;
          v47 = 4;
          v48 = 32;
          v51 = 1;
          result = v39(v39, &v47, v38);
          if ( result < 0 )
            return result;
          v15 = *(_WORD *)&v46[10];
        }
        v14 = v42;
        if ( v45 >= 4 )
        {
LABEL_77:
          if ( (v15 & 0xF0) == 0 )
          {
            LODWORD(v34) = 100;
            memset(&v47, 0, v34);
            v51 = *(_DWORD *)&v46[4];
            v49 = *(_DWORD *)v46;
            v31 = *(_DWORD *)&v46[20];
            v47 = 5;
            v48 = 28;
            if ( (v15 & 2) != 0 )
              v31 = v46[8];
            v52[0] = v31;
            if ( (v15 & 1) != 0 )
            {
              v32 = 1;
              v50 = 1;
            }
            else
            {
              v32 = v50;
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
              v50 = v27;
            }
            v30 = &v47;
            goto LABEL_96;
          }
          v28 = *(_DWORD *)&v46[20];
          v63 = *(_DWORD *)&v46[4];
          v61[2] = *(_DWORD *)v46;
          v29 = 2;
          v65 = 0;
          v66 = 0;
          v61[0] = 5;
          v61[1] = 48;
          v62 = 2;
          if ( (v15 & 2) != 0 )
            v28 = v46[8];
          v64 = v28;
          if ( (v15 & 0x4000) != 0 )
          {
            v29 = 6;
            v62 = 6;
          }
          if ( (v15 & 1) != 0 )
            v62 = v29 | 1;
          v69 = *(_DWORD *)&v46[12];
          v70 = *(_DWORD *)&v46[16];
          v30 = v61;
          v67 = 1;
          v68 = 20;
LABEL_96:
          result = v39(v39, v30, v38);
          if ( result < 0 )
            return result;
LABEL_97:
          v14 = v42;
        }
      }
    }
    LODWORD(v34) = 92;
    memset(&v49, 0, v34);
    v47 = 3;
    v21 = 0;
    v48 = 28;
    v59 = 0;
    if ( v37 )
    {
      v49 = *(_DWORD *)v46;
      v21 = *(_DWORD *)(v43 + 68);
      if ( (*(_BYTE *)(v43 + 72) & 1) != 0 )
      {
        if ( v21 )
          v21 ^= v43 + 68;
        else
          v21 = 0;
      }
      while ( v21 )
      {
        v24 = *(_DWORD *)(v21 + 12) & 0xFFFF0000;
        if ( *(_DWORD *)v46 < v24 )
        {
          v25 = *(_DWORD *)v21;
        }
        else
        {
          if ( *(_DWORD *)v46 <= v24 )
            break;
          v25 = *(_DWORD *)(v21 + 4);
        }
        if ( (*(_BYTE *)(v43 + 72) & 1) != 0 && v25 )
          v21 ^= v25;
        else
          v21 = v25;
      }
      v50 = (*(_DWORD *)(v21 + 16) & 0xFFFFF000) + 4096;
      v23 = *(_DWORD *)(v21 + 16) & 0xFFFFF000;
    }
    else
    {
      v22 = *(_DWORD *)v46 - 8;
      if ( *(_BYTE *)(*(_DWORD *)v46 - 8 + 7) == 5 )
        v22 -= 8 * *(unsigned __int8 *)(v22 + 6);
      v59 = v22 - 24;
      v49 = (v22 - 24) & 0xFFFF0000;
      v50 = *(_DWORD *)(v22 - 24 + 20);
      v23 = *(_DWORD *)(v22 - 24 + 16);
    }
    v51 = v23;
    result = v39(v39, &v47, v38);
    if ( result < 0 )
      return result;
    LODWORD(v36) = 88;
    memset(&v50, 0, v36);
    v48 = 32;
    v47 = 4;
    if ( v37 )
    {
      v49 = *(_DWORD *)v46;
      v50 = *(_DWORD *)(v21 + 16) & 0xFFFFF000;
      v26 = *(_DWORD *)(v43 + 12) & 0x40000000;
    }
    else
    {
      v49 = v59;
      v50 = *(_DWORD *)(v59 + 16);
      v26 = *(_DWORD *)(a1 + 64) & 0x40000;
    }
    v51 = 1;
    v52[0] = v26 != 0 ? 64 : 4;
    result = v39(v39, &v47, v38);
    if ( result < 0 )
      return result;
    v15 = *(_WORD *)&v46[10];
    goto LABEL_77;
  }
  LODWORD(v33) = 92;
  memset(&v49, 0, v33);
  v47 = 0x80000000;
  v48 = 100;
  if ( v37 )
  {
    RtlpHpHeapReportCounters(v43, &v47);
  }
  else
  {
    v51 = *(unsigned __int16 *)(a1 + 124);
    v50 = 1;
    v52[1] = a1;
    v52[0] = NtCurrentPeb()->NumberOfHeaps - 1;
    v52[2] = *(_DWORD *)(a1 + 500);
    v52[3] = *(_DWORD *)(a1 + 504) - *(_DWORD *)(a1 + 580);
    v52[7] = RtlpEstimateAllocatedSize(a1);
    v52[8] = 8 * *(_DWORD *)(a1 + 116);
    v52[6] = *(_DWORD *)(a1 + 520);
    v55 = *(_DWORD *)(a1 + 512);
    v52[5] = *(_DWORD *)(a1 + 508);
    v52[4] = *(_DWORD *)(a1 + 516);
    v56 = *(_DWORD *)(a1 + 524);
    v57 = v56;
    v8 = *(int **)(a1 + 180);
    if ( v8 )
    {
      v9 = v8[3];
      v53 = v9;
      v10 = *v8;
      if ( v10 )
        v53 = v9 + *(_DWORD *)(v10 + 12);
    }
    v11 = *(int **)(a1 + 200);
    v12 = *(_DWORD *)(a1 + 536);
    v54 = v12;
    if ( v11 )
    {
      v13 = *v11;
      if ( v13 != -1 )
        v2 = *(_DWORD *)(v13 + 20);
      v54 = v12 + v2;
    }
  }
  return v6(v6, &v47, v38);
}
