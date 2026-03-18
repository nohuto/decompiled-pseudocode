/*
 * XREFs of VidSchiFillSubmitCommandDataVirtual @ 0x1C0006700
 * Callers:
 *     VidSchiSendToExecutionQueue @ 0x1C0008360 (VidSchiSendToExecutionQueue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiFillSubmitCommandDataVirtual(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  __int64 v4; // r11
  __int64 v5; // r9
  __int64 v6; // rax
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // ebx
  unsigned int v11; // ecx
  int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 *v16; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 48);
  v4 = *(_QWORD *)(v2 + 96);
  v5 = *(_QWORD *)(v4 + 24);
  *(_OWORD *)a2 = 0LL;
  *(_OWORD *)(a2 + 16) = 0LL;
  *(_OWORD *)(a2 + 32) = 0LL;
  *(_OWORD *)(a2 + 48) = 0LL;
  *(_OWORD *)(a2 + 64) = 0LL;
  *(_OWORD *)(a2 + 80) = 0LL;
  if ( (*(_DWORD *)(v2 + 112) & 2) != 0 || (v6 = *(_QWORD *)(a1 + 56)) != 0 && (*(_DWORD *)(v6 + 72) & 0x8000) != 0 )
    v7 = 8;
  else
    v7 = 0;
  *(_DWORD *)(a2 + 52) = v7;
  v8 = v7 | (*(_DWORD *)(a1 + 92) >> 6) & 0x40;
  *(_DWORD *)(a2 + 52) = v8;
  v9 = v8 | (*(_DWORD *)(a1 + 92) >> 7) & 0x80;
  *(_DWORD *)(a2 + 52) = v9;
  v10 = v9 | ((*(_BYTE *)(v2 + 901) & 1) << 8);
  *(_DWORD *)(a2 + 52) = v10;
  if ( *(_DWORD *)(a1 + 88) )
  {
    *(_DWORD *)(a2 + 52) = v10 | 1;
    *(_QWORD *)a2 = *(_QWORD *)(v2 + 64);
  }
  else
  {
    *(_QWORD *)a2 = *(_QWORD *)(v2 + 64);
    v11 = *(_DWORD *)(a1 + 92);
    if ( (v11 & 0x10) != 0 )
    {
      v10 |= 0x30u;
      *(_DWORD *)(a2 + 52) = v10;
      *(_DWORD *)(a2 + 48) = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 396LL);
      *(_DWORD *)(a2 + 44) = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 160LL);
      v11 = *(_DWORD *)(a1 + 92);
    }
    v12 = v10 | (v11 >> 7) & 2;
    *(_DWORD *)(a2 + 52) = v12;
    *(_DWORD *)(a2 + 52) = v12 | (*(_DWORD *)(a1 + 92) >> 1) & 4;
  }
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 176);
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(a1 + 148);
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 192) + *(unsigned int *)(a1 + 152);
  *(_DWORD *)(a2 + 32) = *(_DWORD *)(a1 + 156) - *(_DWORD *)(a1 + 152);
  *(_DWORD *)(a2 + 36) = *(_DWORD *)(a1 + 184);
  *(_DWORD *)(a2 + 40) = *(_DWORD *)(a1 + 104);
  v13 = *(unsigned __int16 *)(v4 + 4);
  v14 = *(_QWORD *)(v5 + 624);
  if ( (unsigned int)v13 < *(_DWORD *)(v5 + 696) )
    v14 += 8 * v13;
  *(_DWORD *)(a2 + 56) = *(unsigned __int16 *)(*(_QWORD *)v14 + 6LL);
  v15 = *(unsigned __int16 *)(v4 + 4);
  v16 = *(__int64 **)(v5 + 624);
  if ( (unsigned int)v15 < *(_DWORD *)(v5 + 696) )
    v16 += v15;
  result = *v16;
  *(_DWORD *)(a2 + 60) = *(unsigned __int16 *)(*v16 + 8);
  return result;
}
