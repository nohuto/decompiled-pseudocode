/*
 * XREFs of _RtlpHpRemoteStackSerializeWriter@12 @ 0x4B358870
 * Callers:
 *     <none>
 * Callees:
 *     _ZwMapViewOfSection@40 @ 0x4B2F2C00 (_ZwMapViewOfSection@40.c)
 *     _NtUnmapViewOfSection@8 @ 0x4B2F2C20 (_NtUnmapViewOfSection@8.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __stdcall RtlpHpRemoteStackSerializeWriter(char *Src, size_t Size, int a3)
{
  size_t v3; // edi
  int result; // eax
  int v5; // ecx
  unsigned int *v6; // ebx
  unsigned int v7; // edx
  const void *v8; // eax
  bool v9; // cf
  unsigned int v10; // edx
  unsigned int v11; // eax
  int v12; // ecx
  size_t v13; // [esp+8h] [ebp-8h]
  char *v14; // [esp+Ch] [ebp-4h]

  v3 = Size;
  *(_DWORD *)(a3 + 28) += Size;
  if ( *(_DWORD *)(a3 + 24) == -1073741789 || !Size )
    return 0;
  v5 = *(_DWORD *)(a3 + 56);
  v6 = (unsigned int *)(a3 + 40);
  v7 = *(_DWORD *)(a3 + 40);
  v8 = Src;
  if ( v5 + Size <= v7 )
  {
LABEL_12:
    memcpy((void *)(v5 + *(_DWORD *)(a3 + 36)), v8, v3);
    *(_DWORD *)(a3 + 56) += v3;
  }
  else
  {
    v14 = Src;
    while ( 1 )
    {
      v13 = v7 - v5;
      memcpy((void *)(v5 + *(_DWORD *)(a3 + 36)), v8, v7 - v5);
      v14 += v13;
      v3 -= v13;
      v9 = __CFADD__(*v6, *(_DWORD *)(a3 + 48));
      *(_DWORD *)(a3 + 48) += *v6;
      v10 = *(_DWORD *)(a3 + 48);
      *(_DWORD *)(a3 + 52) += v9;
      if ( __SPAIR64__(*(_DWORD *)(a3 + 52), v10) >= *(_QWORD *)(a3 + 8) )
        break;
      NtUnmapViewOfSection(-1, *(_DWORD *)(a3 + 36));
      v11 = *(_DWORD *)(a3 + 8) - *(_DWORD *)(a3 + 48);
      *(_DWORD *)(a3 + 36) = 0;
      v12 = *v6;
      if ( *v6 >= v11 )
        v12 = v11;
      *v6 = v12;
      result = ZwMapViewOfSection(*(_DWORD *)a3, -1, a3 + 36, 0, v12, a3 + 48, a3 + 40, 2, 0, 4);
      if ( result < 0 )
        return result;
      *(_DWORD *)(a3 + 56) = 0;
      v5 = 0;
      v7 = *v6;
      v8 = v14;
      if ( v3 <= *v6 )
        goto LABEL_12;
      v5 = 0;
    }
    *(_DWORD *)(a3 + 24) = -1073741789;
  }
  return 0;
}
