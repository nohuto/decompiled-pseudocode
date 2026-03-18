/*
 * XREFs of VidSchiFillSubmitCommandData @ 0x1C0016A58
 * Callers:
 *     VidSchiSendToExecutionQueue @ 0x1C0007900 (VidSchiSendToExecutionQueue.c)
 * Callees:
 *     memset @ 0x1C00185C0 (memset.c)
 */

__int64 __fastcall VidSchiFillSubmitCommandData(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rsi
  __int64 v5; // r14
  __int64 v6; // rbp
  __int64 v7; // rax
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  unsigned int v11; // ecx
  int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 *v17; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 48);
  v5 = *(_QWORD *)(v2 + 96);
  v6 = *(_QWORD *)(v5 + 24);
  memset(a2, 0, 0x60uLL);
  if ( (*(_DWORD *)(v2 + 112) & 2) != 0 )
    goto LABEL_17;
  v7 = *(_QWORD *)(a1 + 56);
  if ( v7 )
    LODWORD(v7) = (*(_DWORD *)(v7 + 72) >> 15) & 1;
  if ( (_DWORD)v7 )
LABEL_17:
    v8 = 8;
  else
    v8 = 0;
  *((_DWORD *)a2 + 18) = v8;
  v9 = v8 | (*(_DWORD *)(a1 + 92) >> 6) & 0x40;
  *((_DWORD *)a2 + 18) = v9;
  v10 = v9 | (*(_DWORD *)(a1 + 92) >> 7) & 0x80;
  *((_DWORD *)a2 + 18) = v10;
  if ( *(_DWORD *)(a1 + 88) )
  {
    *((_DWORD *)a2 + 18) = v10 | 1;
    *a2 = *(_QWORD *)(v2 + 64);
  }
  else
  {
    *a2 = *(_QWORD *)(v2 + 64);
    v11 = *(_DWORD *)(a1 + 92);
    if ( (v11 & 0x10) != 0 )
    {
      v10 |= 0x30u;
      *((_DWORD *)a2 + 18) = v10;
      *((_DWORD *)a2 + 17) = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 396LL);
      *((_DWORD *)a2 + 16) = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 160LL);
      v11 = *(_DWORD *)(a1 + 92);
    }
    v12 = v10 | (v11 >> 7) & 2;
    *((_DWORD *)a2 + 18) = v12;
    *((_DWORD *)a2 + 18) = v12 | (*(_DWORD *)(a1 + 92) >> 1) & 4;
  }
  v13 = *(_QWORD *)(a1 + 64);
  if ( v13 )
  {
    *((_DWORD *)a2 + 6) = *(_DWORD *)(v13 + 40);
    a2[5] = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 128LL);
    *((_DWORD *)a2 + 12) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 136LL) + 88LL);
  }
  *((_DWORD *)a2 + 2) = *(_DWORD *)(a1 + 128);
  a2[2] = *(_QWORD *)(a1 + 136);
  *((_DWORD *)a2 + 7) = *(_DWORD *)(a1 + 144);
  *((_DWORD *)a2 + 8) = *(_DWORD *)(a1 + 148);
  *((_DWORD *)a2 + 15) = *(_DWORD *)(a1 + 104);
  *((_DWORD *)a2 + 13) = *(_DWORD *)(a1 + 152);
  *((_DWORD *)a2 + 14) = *(_DWORD *)(a1 + 156);
  v14 = *(unsigned __int16 *)(v5 + 4);
  v15 = *(_QWORD *)(v6 + 624);
  if ( (unsigned int)v14 < *(_DWORD *)(v6 + 696) )
    v15 += 8 * v14;
  *((_DWORD *)a2 + 19) = *(unsigned __int16 *)(*(_QWORD *)v15 + 6LL);
  v16 = *(unsigned __int16 *)(v5 + 4);
  v17 = *(__int64 **)(v6 + 624);
  if ( (unsigned int)v16 < *(_DWORD *)(v6 + 696) )
    v17 += v16;
  result = *v17;
  *((_DWORD *)a2 + 22) = *(unsigned __int16 *)(*v17 + 8);
  return result;
}
