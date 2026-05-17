/*
 * XREFs of EtwpWriteBufferCompressed @ 0x1800877B0
 * Callers:
 *     EtwpFlushBuffer @ 0x180055444 (EtwpFlushBuffer.c)
 * Callees:
 *     RtlCompressBuffer @ 0x1800827A0 (RtlCompressBuffer.c)
 *     NtWriteFile @ 0x18009CF10 (NtWriteFile.c)
 *     memmove @ 0x1800A3C00 (memmove.c)
 */

__int64 __fastcall EtwpWriteBufferCompressed(__int64 a1, _OWORD *a2, _DWORD *a3, _DWORD *a4)
{
  int v8; // eax
  int v9; // ebp
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned int v12; // esi
  int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // eax
  int v17; // r8d
  int v18; // ecx
  int v19; // eax
  __int64 v20; // rax
  unsigned int v21; // edx
  int v22; // eax
  char *v23; // rcx
  size_t v24; // r8
  char *v25; // rdx
  char v26[16]; // [rsp+50h] [rbp-28h] BYREF
  int v27; // [rsp+80h] [rbp+8h]

  *a4 = 0;
  *a3 = 0;
  v8 = RtlCompressBuffer(3u);
  v9 = v8;
  if ( v8 == -1073741789 )
  {
    v12 = *((_DWORD *)a2 + 12);
    memmove((void *)(*(_QWORD *)(a1 + 440) + *(unsigned int *)(a1 + 452)), a2, v12);
  }
  else
  {
    if ( v8 < 0 )
    {
      *a4 = 1;
      return (unsigned int)v9;
    }
    *((_WORD *)a2 + 26) |= 0x40u;
    v10 = *(unsigned int *)(a1 + 452);
    v11 = *(_QWORD *)(a1 + 440);
    *(_OWORD *)(v10 + v11) = *a2;
    *(_OWORD *)(v10 + v11 + 16) = a2[1];
    *(_OWORD *)(v10 + v11 + 32) = a2[2];
    *(_OWORD *)(v10 + v11 + 48) = a2[3];
    *(_QWORD *)(v10 + v11 + 64) = *((_QWORD *)a2 + 8);
    v12 = v27 + 72;
  }
  *(_DWORD *)(*(unsigned int *)(a1 + 452) + *(_QWORD *)(a1 + 440)) = v12;
  v13 = *(_DWORD *)(a1 + 452);
  ++*(_DWORD *)(a1 + 456);
  v14 = v12 + v13;
  *(_DWORD *)(a1 + 452) = v14;
  v15 = *(_DWORD *)(a1 + 208);
  if ( v14 >= v15 )
  {
    v9 = NtWriteFile(*(_QWORD *)(a1 + 144), 0LL, 0LL, 0LL, v26, *(_QWORD *)(a1 + 440), v15, a1 + 360, 0LL);
    if ( v9 >= 0 )
    {
      v20 = *(unsigned int *)(a1 + 208);
      *(_QWORD *)(a1 + 360) += v20;
      v21 = *(_DWORD *)(a1 + 452) - v20;
      v22 = *(_DWORD *)(a1 + 456);
      *(_DWORD *)(a1 + 452) = v21;
      *(_DWORD *)(a1 + 460) = v21;
      if ( v21 )
      {
        v23 = *(char **)(a1 + 440);
        v24 = v21;
        *(_DWORD *)(a1 + 456) = 1;
        v25 = &v23[*(unsigned int *)(a1 + 208)];
        *a3 = v22 - 1;
        memmove(v23, v25, v24);
      }
      else
      {
        *(_DWORD *)(a1 + 456) = 0;
        *a3 = v22;
      }
    }
    else
    {
      v17 = *(_DWORD *)(a1 + 460);
      v18 = *(_DWORD *)(a1 + 456);
      *(_DWORD *)(a1 + 452) = v17;
      v19 = v18 - 1;
      if ( !v17 )
        v19 = v18;
      *a4 = v19;
      *(_DWORD *)(a1 + 456) = v17 != 0;
    }
  }
  return (unsigned int)v9;
}
