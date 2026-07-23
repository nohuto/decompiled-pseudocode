/*
 * XREFs of _EtwpWriteBufferCompressed@16 @ 0x4B3831CD
 * Callers:
 *     _EtwpFlushBuffer@12 @ 0x4B2EDE46 (_EtwpFlushBuffer@12.c)
 * Callees:
 *     _NtWriteFile@36 @ 0x4B2F29E0 (_NtWriteFile@36.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _RtlCompressBuffer@32 @ 0x4B35A4F0 (_RtlCompressBuffer@32.c)
 */

NTSTATUS __fastcall EtwpWriteBufferCompressed(int a1, int a2, _DWORD *a3, _DWORD *a4)
{
  int v6; // ecx
  int v7; // edx
  UCHAR *v8; // edx
  ULONG v9; // eax
  NTSTATUS v10; // eax
  NTSTATUS v11; // edi
  ULONG v12; // edx
  int v13; // eax
  ULONG v14; // eax
  ULONG v15; // ecx
  _DWORD *v16; // esi
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  bool v20; // cf
  int v21; // edx
  int v22; // eax
  void *v24; // [esp-Ch] [ebp-28h]
  size_t v25; // [esp-4h] [ebp-20h]
  _IO_STATUS_BLOCK IoStatusBlock; // [esp+Ch] [ebp-10h] BYREF
  ULONG FinalCompressedSize; // [esp+14h] [ebp-8h] BYREF
  NTSTATUS v28; // [esp+18h] [ebp-4h]

  *a3 = 0;
  v6 = *(_DWORD *)(a1 + 320);
  v7 = *(_DWORD *)(a1 + 312);
  *a4 = 0;
  v8 = (UCHAR *)(v6 + v7 + 72);
  v9 = *(_DWORD *)(a1 + 316) - v6 - 72;
  if ( v9 >= *(_DWORD *)(a1 + 140) )
    v9 = *(_DWORD *)(a1 + 140);
  v10 = RtlCompressBuffer(
          3u,
          (PUCHAR)(a2 + 72),
          *(_DWORD *)(a2 + 48) - 72,
          v8,
          v9,
          0,
          &FinalCompressedSize,
          *(PVOID *)(a1 + 308));
  v11 = v10;
  v28 = v10;
  if ( v10 == -1073741789 )
  {
    v24 = (void *)(*(_DWORD *)(a1 + 312) + *(_DWORD *)(a1 + 320));
    v28 = *(_DWORD *)(a2 + 48);
    LODWORD(v25) = v28;
    memcpy(v24, (const void *)a2, v25);
    v12 = v28;
  }
  else
  {
    if ( v10 < 0 )
    {
      *a4 = 1;
      return v11;
    }
    *(_WORD *)(a2 + 52) |= 0x40u;
    qmemcpy((void *)(*(_DWORD *)(a1 + 312) + *(_DWORD *)(a1 + 320)), (const void *)a2, 0x48u);
    v11 = v28;
    v12 = FinalCompressedSize + 72;
  }
  *(_DWORD *)(*(_DWORD *)(a1 + 320) + *(_DWORD *)(a1 + 312)) = v12;
  v13 = *(_DWORD *)(a1 + 320);
  ++*(_DWORD *)(a1 + 324);
  v14 = v12 + v13;
  *(_DWORD *)(a1 + 320) = v14;
  v15 = *(_DWORD *)(a1 + 140);
  if ( v14 >= v15 )
  {
    v16 = (_DWORD *)(a1 + 248);
    v11 = NtWriteFile(
            *(HANDLE *)(a1 + 104),
            0,
            0,
            0,
            &IoStatusBlock,
            *(PVOID *)(a1 + 312),
            v15,
            (PLARGE_INTEGER)(a1 + 248),
            0);
    if ( v11 >= 0 )
    {
      v19 = *(_DWORD *)(a1 + 140);
      v20 = __CFADD__(v19, *v16);
      *v16 += v19;
      *(_DWORD *)(a1 + 252) += v20;
      v21 = *(_DWORD *)(a1 + 320) - v19;
      v22 = *(_DWORD *)(a1 + 324);
      *(_DWORD *)(a1 + 320) = v21;
      *(_DWORD *)(a1 + 328) = v21;
      if ( v21 )
      {
        *(_DWORD *)(a1 + 324) = 1;
        *a3 = v22 - 1;
        LODWORD(v25) = v21;
        memcpy(*(void **)(a1 + 312), (const void *)(*(_DWORD *)(a1 + 312) + *(_DWORD *)(a1 + 140)), v25);
      }
      else
      {
        *(_DWORD *)(a1 + 324) = 0;
        *a3 = v22;
      }
    }
    else
    {
      v17 = *(_DWORD *)(a1 + 328);
      v18 = *(_DWORD *)(a1 + 324);
      *(_DWORD *)(a1 + 320) = v17;
      if ( v17 )
        --v18;
      *a4 = v18;
      *(_DWORD *)(a1 + 324) = v17 != 0;
    }
  }
  return v11;
}
