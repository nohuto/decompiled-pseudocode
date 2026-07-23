/*
 * XREFs of EtwpWriteBufferCompressed @ 0x1800878B0
 * Callers:
 *     EtwpFlushBuffer @ 0x180055494 (EtwpFlushBuffer.c)
 * Callees:
 *     RtlCompressBuffer @ 0x1800828A0 (RtlCompressBuffer.c)
 *     NtWriteFile @ 0x18009D1B0 (NtWriteFile.c)
 *     memmove @ 0x1800A3EC0 (memmove.c)
 */

__int64 __fastcall EtwpWriteBufferCompressed(__int64 a1, UCHAR *a2, _DWORD *a3, _DWORD *a4)
{
  __int64 v4; // r10
  int v7; // eax
  UCHAR *v10; // r9
  ULONG v11; // r10d
  NTSTATUS v12; // eax
  NTSTATUS v13; // ebp
  __int64 v14; // rcx
  __int64 v15; // rax
  ULONG v16; // esi
  int v17; // ecx
  ULONG v18; // ecx
  ULONG Length; // eax
  int v21; // r8d
  int v22; // ecx
  int v23; // eax
  __int64 v24; // rax
  unsigned int v25; // edx
  int v26; // eax
  char *v27; // rcx
  size_t v28; // r8
  char *v29; // rdx
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-28h] BYREF
  ULONG v31; // [rsp+80h] [rbp+8h] BYREF

  v4 = *(unsigned int *)(a1 + 452);
  *a4 = 0;
  v7 = *(_DWORD *)(a1 + 448);
  *a3 = 0;
  v10 = (UCHAR *)(v4 + *(_QWORD *)(a1 + 440) + 72LL);
  v11 = v7 - v4 - 72;
  if ( v11 >= *(_DWORD *)(a1 + 208) )
    v11 = *(_DWORD *)(a1 + 208);
  v12 = RtlCompressBuffer(3u, a2 + 72, *((_DWORD *)a2 + 12) - 72, v10, v11, 0, &v31, *(PVOID *)(a1 + 432));
  v13 = v12;
  if ( v12 == -1073741789 )
  {
    v16 = *((_DWORD *)a2 + 12);
    memmove((void *)(*(_QWORD *)(a1 + 440) + *(unsigned int *)(a1 + 452)), a2, v16);
  }
  else
  {
    if ( v12 < 0 )
    {
      *a4 = 1;
      return (unsigned int)v13;
    }
    *((_WORD *)a2 + 26) |= 0x40u;
    v14 = *(unsigned int *)(a1 + 452);
    v15 = *(_QWORD *)(a1 + 440);
    *(_OWORD *)(v14 + v15) = *(_OWORD *)a2;
    *(_OWORD *)(v14 + v15 + 16) = *((_OWORD *)a2 + 1);
    *(_OWORD *)(v14 + v15 + 32) = *((_OWORD *)a2 + 2);
    *(_OWORD *)(v14 + v15 + 48) = *((_OWORD *)a2 + 3);
    *(_QWORD *)(v14 + v15 + 64) = *((_QWORD *)a2 + 8);
    v16 = v31 + 72;
  }
  *(_DWORD *)(*(unsigned int *)(a1 + 452) + *(_QWORD *)(a1 + 440)) = v16;
  v17 = *(_DWORD *)(a1 + 452);
  ++*(_DWORD *)(a1 + 456);
  v18 = v16 + v17;
  *(_DWORD *)(a1 + 452) = v18;
  Length = *(_DWORD *)(a1 + 208);
  if ( v18 >= Length )
  {
    v13 = NtWriteFile(
            *(HANDLE *)(a1 + 144),
            0LL,
            0LL,
            0LL,
            &IoStatusBlock,
            *(PVOID *)(a1 + 440),
            Length,
            (PLARGE_INTEGER)(a1 + 360),
            0LL);
    if ( v13 >= 0 )
    {
      v24 = *(unsigned int *)(a1 + 208);
      *(_QWORD *)(a1 + 360) += v24;
      v25 = *(_DWORD *)(a1 + 452) - v24;
      v26 = *(_DWORD *)(a1 + 456);
      *(_DWORD *)(a1 + 452) = v25;
      *(_DWORD *)(a1 + 460) = v25;
      if ( v25 )
      {
        v27 = *(char **)(a1 + 440);
        v28 = v25;
        *(_DWORD *)(a1 + 456) = 1;
        v29 = &v27[*(unsigned int *)(a1 + 208)];
        *a3 = v26 - 1;
        memmove(v27, v29, v28);
      }
      else
      {
        *(_DWORD *)(a1 + 456) = 0;
        *a3 = v26;
      }
    }
    else
    {
      v21 = *(_DWORD *)(a1 + 460);
      v22 = *(_DWORD *)(a1 + 456);
      *(_DWORD *)(a1 + 452) = v21;
      v23 = v22 - 1;
      if ( !v21 )
        v23 = v22;
      *a4 = v23;
      *(_DWORD *)(a1 + 456) = v21 != 0;
    }
  }
  return (unsigned int)v13;
}
