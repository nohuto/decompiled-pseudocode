/*
 * XREFs of _RtlpFindAndCommitPages@8 @ 0x4B2C0640
 * Callers:
 *     _RtlpExtendHeap@8 @ 0x4B2C0405 (_RtlpExtendHeap@8.c)
 * Callees:
 *     _DbgPrint @ 0x4B2AB8D0 (_DbgPrint.c)
 *     _RtlpHeapRemoveListEntry@24 @ 0x4B2C032A (_RtlpHeapRemoveListEntry@24.c)
 *     _RtlpCreateUCREntry@24 @ 0x4B2C092B (_RtlpCreateUCREntry@24.c)
 *     @RtlpFindUCREntry@8 @ 0x4B2C0A8E (@RtlpFindUCREntry@8.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0 (_NtAllocateVirtualMemory@24.c)
 *     _NtQueryVirtualMemory@24 @ 0x4B2F2BB0 (_NtQueryVirtualMemory@24.c)
 *     _RtlpAnalyzeHeapFailure@12 @ 0x4B36D496 (_RtlpAnalyzeHeapFailure@12.c)
 *     _RtlpLogHeapCommit@16 @ 0x4B36EE23 (_RtlpLogHeapCommit@16.c)
 *     _RtlpLogHeapExtendEvent@20 @ 0x4B36F013 (_RtlpLogHeapExtendEvent@20.c)
 *     _RtlpReportHeapFailure@4 @ 0x4B36FAE5 (_RtlpReportHeapFailure@4.c)
 *     _RtlpLogHeapFailure@24 @ 0x4B375E3D (_RtlpLogHeapFailure@24.c)
 */

unsigned int *__fastcall RtlpFindAndCommitPages(_DWORD *a1, unsigned int *a2)
{
  int UCREntry; // eax
  int *v5; // edi
  unsigned __int8 v6; // al
  unsigned int *v7; // ebx
  int v8; // eax
  unsigned int *v9; // edx
  unsigned int *v10; // eax
  unsigned int v11; // ecx
  int v12; // eax
  _DWORD *SharedData; // eax
  int v14; // eax
  unsigned int v15; // edx
  unsigned int v16; // ecx
  int v17; // eax
  int *v18; // ecx
  bool v19; // zf
  unsigned int v20; // eax
  _DWORD *v21; // edx
  int *v22; // ecx
  int v23; // eax
  int *v24; // edx
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  unsigned int *v27; // edx
  unsigned int v28; // eax
  unsigned int v29; // ecx
  unsigned int v30; // eax
  _DWORD *v31; // eax
  int v32; // eax
  unsigned int *v33; // edi
  _DWORD *v34; // eax
  int v35; // eax
  unsigned int v37; // ecx
  int v38; // eax
  unsigned int v39; // ecx
  int v40; // eax
  int v41; // eax
  _DWORD *v42; // [esp+10h] [ebp-38h] BYREF
  int v43; // [esp+14h] [ebp-34h]
  _DWORD *v44; // [esp+2Ch] [ebp-1Ch]
  int (__thiscall *v45)(int, _DWORD *, int *, unsigned int *); // [esp+30h] [ebp-18h]
  int *v46; // [esp+34h] [ebp-14h]
  int v47; // [esp+38h] [ebp-10h] BYREF
  int v48; // [esp+3Ch] [ebp-Ch]
  unsigned int v49; // [esp+40h] [ebp-8h]
  unsigned int *v50; // [esp+44h] [ebp-4h]

  v50 = a2;
  UCREntry = RtlpFindUCREntry(a1, *a2);
  v5 = (int *)UCREntry;
  if ( (_DWORD *)UCREntry == a1 + 35 )
    return 0;
  if ( RtlpHeapErrorHandlerThreshold >= 1 && *(_DWORD *)(UCREntry + 20) < *a2 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("(UCRBlock->Size >= *Size)");
    if ( !byte_4B3A5DA8 )
      RtlpReportHeapFailure(1);
  }
  v6 = *((_BYTE *)v5 - 2);
  v7 = (unsigned int *)(v5 - 2);
  if ( v6 )
    v49 = ((unsigned int)v7 & 0xFFFF0000) - (v6 << 16) + 0x10000;
  else
    v49 = (unsigned int)a1;
  v47 = v5[4];
  v8 = RtlpHeapKey ^ a1[51];
  v45 = (int (__thiscall *)(int, _DWORD *, int *, unsigned int *))v8;
  if ( v8 )
  {
    v12 = v45(v8, a1, &v47, v50);
    v9 = v50;
  }
  else
  {
    v9 = v50;
    if ( v5[5] - *v50 <= 8 * a1[27] )
    {
      v37 = v5[5];
      if ( v37 < 8 * a1[23] )
        *v50 = v37;
    }
    if ( (a1[16] & 0x40000) != 0 )
    {
      v48 = 64;
      if ( (int)NtQueryVirtualMemory(-1, a1, 3, &v42, 28, 0) < 0 || (v43 & 0x60) == 0 || v42 != a1 )
      {
        RtlpLogHeapFailure(1, v43, 0, 0);
        v48 = 4;
      }
      v9 = v50;
    }
    else
    {
      v48 = 4;
    }
    v44 = (_DWORD *)*v9;
    v45 = (int (__thiscall *)(int, _DWORD *, int *, unsigned int *))(a1[126] - a1[145]);
    v10 = a1 + 53;
    v46 = a1 + 53;
    if ( !dword_4B3A373C
      && ((v11 = *v10) != 0 || (v11 = dword_4B3A432C, v46 = &dword_4B3A432C, dword_4B3A432C))
      && (v7 = (unsigned int *)(v5 - 2), (unsigned int)v45 + *v9 > v11) )
    {
      v38 = v46[1];
      if ( v38 )
      {
        RtlpLogHeapFailure(0, v38, v44, v45);
        v9 = v50;
      }
      v12 = -1073741523;
    }
    else
    {
      v12 = NtAllocateVirtualMemory(-1, &v47, 0, v9, 4096, v48);
      v9 = v50;
    }
    ++a1[135];
  }
  if ( v12 < 0 )
  {
    ++a1[137];
    return 0;
  }
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v14 = (int)NtCurrentPeb()->SharedData + 550;
  else
    v14 = 2147353472;
  if ( *(_BYTE *)v14 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    RtlpLogHeapCommit(*v9, 2);
  if ( a1[19] )
  {
    v15 = *v7 ^ a1[20];
    *v7 = v15;
    v16 = HIWORD(v15);
    LOBYTE(v16) = v15 ^ BYTE1(v15) ^ BYTE2(v15);
    if ( HIBYTE(v15) != (_BYTE)v16 )
      RtlpAnalyzeHeapFailure(v16);
  }
  *((_BYTE *)v7 + 2) = 0;
  *((_BYTE *)v7 + 7) = 0;
  v17 = v5[2];
  v18 = (int *)v5[3];
  v19 = *v18 == *(_DWORD *)(v17 + 4);
  v44 = *(_DWORD **)(v17 + 4);
  if ( v19 && (int *)*v18 == v5 + 2 )
  {
    *v18 = v17;
    *(_DWORD *)(v17 + 4) = v18;
  }
  else
  {
    RtlpLogHeapFailure(v5 + 2, v44, *v18, 0);
  }
  v20 = v5[5];
  if ( v20 )
  {
    v21 = (_DWORD *)a1[46];
    if ( v21 )
    {
      v39 = v20 >> 12;
      if ( v20 >> 12 >= v21[1] )
      {
        while ( 1 )
        {
          v19 = *v21 == 0;
          v44 = (_DWORD *)*v21;
          v20 = v5[5];
          if ( v19 )
            break;
          v21 = v44;
          if ( v39 < v44[1] )
            goto LABEL_79;
        }
        v39 = v21[1] - 1;
      }
LABEL_79:
      RtlpHeapRemoveListEntry((int)a1, v21, 0, v5, v39, v20);
    }
    v22 = (int *)v5[1];
    v23 = *v5;
    v24 = (int *)*v22;
    if ( *v22 == *(_DWORD *)(*v5 + 4) && v24 == v5 )
    {
      *v22 = v23;
      *(_DWORD *)(v23 + 4) = v22;
    }
    else
    {
      RtlpLogHeapFailure(v5, *(_DWORD *)(v23 + 4), v24, 0);
    }
  }
  v25 = v49;
  --*(_DWORD *)(v49 + 48);
  *(_DWORD *)(v25 + 44) -= (unsigned int)v5[5] >> 12;
  a1[126] += v5[5];
  ++a1[131];
  --a1[130];
  v26 = v5[5];
  if ( v26 >= 0x7F000 )
  {
    a1[127] -= v26;
    v26 = v5[5];
  }
  v27 = v50;
  v28 = *v50;
  if ( v26 <= *v50 )
  {
    v27 = v50;
    if ( v26 + v5[4] != *(_DWORD *)(v49 + 40) )
    {
      *v50 += 8 * *(unsigned __int16 *)v7;
      goto LABEL_33;
    }
    v28 = *v50;
  }
  RtlpCreateUCREntry(*v27 + v5[4] - 24, v26 - v28, v7, v27);
  *v50 *= 8;
LABEL_33:
  v29 = v49;
  *((_BYTE *)v7 + 3) = 0;
  if ( *(_DWORD *)(v29 + 24) == v29 )
  {
    LOBYTE(v30) = 0;
  }
  else
  {
    v30 = (((unsigned int)v7 - v29) >> 16) + 1;
    v44 = (_DWORD *)v30;
    if ( v30 >= 0xFE )
    {
      RtlpLogHeapFailure(v7, v29, 0, 0);
      LOBYTE(v30) = (_BYTE)v44;
    }
  }
  *((_BYTE *)v7 + 6) = v30;
  v31 = NtCurrentPeb()->SharedData;
  if ( v31 && *v31 )
    v32 = (int)NtCurrentPeb()->SharedData + 550;
  else
    v32 = 2147353472;
  if ( *(_BYTE *)v32 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v40 = (int)NtCurrentPeb()->SharedData + 550;
    else
      v40 = 2147353472;
    v33 = v50;
    RtlpLogHeapExtendEvent(*v50, 8 * a1[29], *(unsigned __int8 *)v40);
  }
  else
  {
    v33 = v50;
  }
  v34 = NtCurrentPeb()->SharedData;
  if ( v34 && *v34 )
    v35 = (int)NtCurrentPeb()->SharedData + 560;
  else
    v35 = 2147353482;
  if ( *(_BYTE *)v35 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v41 = (int)NtCurrentPeb()->SharedData + 560;
    else
      v41 = 2147353482;
    RtlpLogHeapExtendEvent(*v33, 8 * a1[29], *(unsigned __int8 *)v41);
  }
  return v7;
}
