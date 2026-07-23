/*
 * XREFs of _RtlpHpRemoteStackSerializeWriter@12 @ 0x4B358870
 * Callers:
 *     <none>
 * Callees:
 *     _ZwMapViewOfSection@40 @ 0x4B2F2C00 (_ZwMapViewOfSection@40.c)
 *     _NtUnmapViewOfSection@8 @ 0x4B2F2C20 (_NtUnmapViewOfSection@8.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

NTSTATUS __userpurge RtlpHpRemoteStackSerializeWriter@<eax>(int a1@<ebx>, char *Src, unsigned int Size, int Size_4)
{
  unsigned int v4; // edi
  NTSTATUS result; // eax
  int v6; // ecx
  unsigned int *v7; // ebx
  unsigned int v8; // edx
  const void *v9; // eax
  bool v10; // cf
  unsigned int v11; // edx
  unsigned int v12; // eax
  unsigned int v13; // ecx
  ULONG_PTR v14; // [esp-20h] [ebp-30h]
  SIZE_T v15; // [esp-18h] [ebp-28h]
  size_t v16; // [esp-8h] [ebp-18h]
  ULONG v17; // [esp-4h] [ebp-14h]
  ULONG v18; // [esp+0h] [ebp-10h]
  int v19; // [esp+8h] [ebp-8h]
  char *v20; // [esp+Ch] [ebp-4h]

  v4 = Size;
  *(_DWORD *)(Size_4 + 28) += Size;
  if ( *(_DWORD *)(Size_4 + 24) == -1073741789 || !Size )
    return 0;
  v6 = *(_DWORD *)(Size_4 + 56);
  HIDWORD(v16) = a1;
  v7 = (unsigned int *)(Size_4 + 40);
  v8 = *(_DWORD *)(Size_4 + 40);
  v9 = Src;
  if ( v6 + Size <= v8 )
  {
LABEL_12:
    LODWORD(v16) = v4;
    memcpy((void *)(v6 + *(_DWORD *)(Size_4 + 36)), v9, v16);
    *(_DWORD *)(Size_4 + 56) += v4;
  }
  else
  {
    v20 = Src;
    while ( 1 )
    {
      LODWORD(v16) = v8 - v6;
      v19 = v8 - v6;
      memcpy((void *)(v6 + *(_DWORD *)(Size_4 + 36)), v9, v16);
      v20 += v19;
      v4 -= v19;
      v10 = __CFADD__(*v7, *(_DWORD *)(Size_4 + 48));
      *(_DWORD *)(Size_4 + 48) += *v7;
      v11 = *(_DWORD *)(Size_4 + 48);
      *(_DWORD *)(Size_4 + 52) += v10;
      if ( __SPAIR64__(*(_DWORD *)(Size_4 + 52), v11) >= *(_QWORD *)(Size_4 + 8) )
        break;
      NtUnmapViewOfSection((HANDLE)0xFFFFFFFF, *(PVOID *)(Size_4 + 36));
      v12 = *(_DWORD *)(Size_4 + 8) - *(_DWORD *)(Size_4 + 48);
      *(_DWORD *)(Size_4 + 36) = 0;
      v13 = *v7;
      if ( *v7 >= v12 )
        v13 = v12;
      HIDWORD(v15) = Size_4 + 40;
      LODWORD(v15) = Size_4 + 48;
      HIDWORD(v14) = v13;
      LODWORD(v14) = 0;
      *v7 = v13;
      result = ZwMapViewOfSection(
                 *(HANDLE *)Size_4,
                 (HANDLE)0xFFFFFFFF,
                 (PVOID *)(Size_4 + 36),
                 v14,
                 v15,
                 (PLARGE_INTEGER)2,
                 0,
                 (SECTION_INHERIT)4,
                 v17,
                 v18);
      if ( result < 0 )
        return result;
      *(_DWORD *)(Size_4 + 56) = 0;
      v6 = 0;
      v8 = *v7;
      v9 = v20;
      if ( v4 <= *v7 )
        goto LABEL_12;
      v6 = 0;
    }
    *(_DWORD *)(Size_4 + 24) = -1073741789;
  }
  return 0;
}
