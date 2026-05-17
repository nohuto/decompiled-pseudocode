/*
 * XREFs of _EtwpWriteBufferCompressed@16 @ 0x4B3831CD
 * Callers:
 *     _EtwpFlushBuffer@12 @ 0x4B2EDE46 (_EtwpFlushBuffer@12.c)
 * Callees:
 *     _NtWriteFile@36 @ 0x4B2F29E0 (_NtWriteFile@36.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _RtlCompressBuffer@32 @ 0x4B35A4F0 (_RtlCompressBuffer@32.c)
 */

int __fastcall EtwpWriteBufferCompressed(int *a1, int a2, int *a3, int *a4)
{
  int v6; // ecx
  int v7; // edx
  int v8; // edx
  unsigned int v9; // eax
  int v10; // eax
  int v11; // edi
  size_t v12; // edx
  int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // ecx
  _DWORD *v16; // esi
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  bool v20; // cf
  size_t v21; // edx
  int v22; // eax
  void *v24; // [esp-Ch] [ebp-28h]
  char v25[8]; // [esp+Ch] [ebp-10h] BYREF
  int v26; // [esp+14h] [ebp-8h] BYREF
  int v27; // [esp+18h] [ebp-4h]

  *a3 = 0;
  v6 = a1[80];
  v7 = a1[78];
  *a4 = 0;
  v8 = v6 + v7 + 72;
  v9 = a1[79] - v6 - 72;
  if ( v9 >= a1[35] )
    v9 = a1[35];
  v10 = RtlCompressBuffer(3, a2 + 72, *(_DWORD *)(a2 + 48) - 72, v8, v9, 0, (int)&v26, a1[77]);
  v11 = v10;
  v27 = v10;
  if ( v10 == -1073741789 )
  {
    v24 = (void *)(a1[78] + a1[80]);
    v27 = *(_DWORD *)(a2 + 48);
    memcpy(v24, (const void *)a2, v27);
    v12 = v27;
  }
  else
  {
    if ( v10 < 0 )
    {
      *a4 = 1;
      return v11;
    }
    *(_WORD *)(a2 + 52) |= 0x40u;
    qmemcpy((void *)(a1[78] + a1[80]), (const void *)a2, 0x48u);
    v11 = v27;
    v12 = v26 + 72;
  }
  *(_DWORD *)(a1[80] + a1[78]) = v12;
  v13 = a1[80];
  ++a1[81];
  v14 = v12 + v13;
  a1[80] = v14;
  v15 = a1[35];
  if ( v14 >= v15 )
  {
    v16 = a1 + 62;
    v11 = NtWriteFile(a1[26], 0, 0, 0, (int)v25, a1[78], v15, (int)(a1 + 62), 0);
    if ( v11 >= 0 )
    {
      v19 = a1[35];
      v20 = __CFADD__(v19, *v16);
      *v16 += v19;
      a1[63] += v20;
      v21 = a1[80] - v19;
      v22 = a1[81];
      a1[80] = v21;
      a1[82] = v21;
      if ( v21 )
      {
        a1[81] = 1;
        *a3 = v22 - 1;
        memcpy((void *)a1[78], (const void *)(a1[78] + a1[35]), v21);
      }
      else
      {
        a1[81] = 0;
        *a3 = v22;
      }
    }
    else
    {
      v17 = a1[82];
      v18 = a1[81];
      a1[80] = v17;
      if ( v17 )
        --v18;
      *a4 = v18;
      a1[81] = v17 != 0;
    }
  }
  return v11;
}
