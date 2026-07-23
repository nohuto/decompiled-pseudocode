/*
 * XREFs of _RtlpExtendedHeapInformationWorkerCallback@8 @ 0x4B357C60
 * Callers:
 *     <none>
 * Callees:
 *     _ZwMapViewOfSection@40 @ 0x4B2F2C00 (_ZwMapViewOfSection@40.c)
 *     _NtUnmapViewOfSection@8 @ 0x4B2F2C20 (_NtUnmapViewOfSection@8.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

NTSTATUS __userpurge RtlpExtendedHeapInformationWorkerCallback@<eax>(int a1@<edi>, ULONG a2@<esi>, _DWORD *Src, int a4)
{
  unsigned int v4; // eax
  NTSTATUS result; // eax
  unsigned int v6; // edi
  int v7; // ecx
  int v8; // eax
  bool v9; // cf
  ULONG_PTR v10; // [esp-24h] [ebp-2Ch]
  SIZE_T v11; // [esp-1Ch] [ebp-24h]
  size_t v12; // [esp-Ch] [ebp-14h]

  v4 = Src[1];
  if ( v4 > 0x10000 )
    return -1073741595;
  *(_DWORD *)(a4 + 28) += v4;
  if ( *(_DWORD *)(a4 + 24) == -1073741789 )
    return 0;
  HIDWORD(v12) = a1;
  v6 = (*(_DWORD *)(a4 + 56) + 3) & 0xFFFFFFFC;
  *(_DWORD *)(a4 + 56) = v6;
  v7 = Src[1];
  if ( v6 + v7 <= *(_DWORD *)(a4 + 40) )
  {
LABEL_10:
    LODWORD(v12) = v7;
    memcpy((void *)(v6 + *(_DWORD *)(a4 + 36)), Src, v12);
    ++*(_DWORD *)(a4 + 32);
    *(_DWORD *)(a4 + 56) += Src[1];
    return 0;
  }
  NtUnmapViewOfSection((HANDLE)0xFFFFFFFF, *(PVOID *)(a4 + 36));
  v6 = 0;
  *(_DWORD *)(a4 + 36) = 0;
  v8 = *(_DWORD *)(a4 + 40);
  v9 = __CFADD__(v8, *(_DWORD *)(a4 + 48));
  *(_DWORD *)(a4 + 48) += v8;
  *(_DWORD *)(a4 + 52) += v9;
  if ( *(_QWORD *)(a4 + 48) < *(_QWORD *)(a4 + 8) )
  {
    HIDWORD(v11) = a4 + 40;
    LODWORD(v11) = a4 + 48;
    HIDWORD(v10) = v8;
    LODWORD(v10) = 0;
    result = ZwMapViewOfSection(
               *(HANDLE *)a4,
               (HANDLE)0xFFFFFFFF,
               (PVOID *)(a4 + 36),
               v10,
               v11,
               (PLARGE_INTEGER)2,
               0,
               (SECTION_INHERIT)4,
               HIDWORD(v12),
               a2);
    if ( result < 0 )
      return result;
    *(_DWORD *)(a4 + 56) = 0;
    v7 = Src[1];
    goto LABEL_10;
  }
  *(_DWORD *)(a4 + 24) = -1073741789;
  return 0;
}
