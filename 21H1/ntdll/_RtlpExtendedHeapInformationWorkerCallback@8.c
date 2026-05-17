/*
 * XREFs of _RtlpExtendedHeapInformationWorkerCallback@8 @ 0x4B357C60
 * Callers:
 *     <none>
 * Callees:
 *     _ZwMapViewOfSection@40 @ 0x4B2F2C00 (_ZwMapViewOfSection@40.c)
 *     _NtUnmapViewOfSection@8 @ 0x4B2F2C20 (_NtUnmapViewOfSection@8.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __stdcall RtlpExtendedHeapInformationWorkerCallback(_DWORD *Src, int a2)
{
  unsigned int v2; // eax
  int result; // eax
  unsigned int v4; // edi
  size_t v5; // ecx
  int v6; // eax
  bool v7; // cf

  v2 = Src[1];
  if ( v2 > 0x10000 )
    return -1073741595;
  *(_DWORD *)(a2 + 28) += v2;
  if ( *(_DWORD *)(a2 + 24) == -1073741789 )
    return 0;
  v4 = (*(_DWORD *)(a2 + 56) + 3) & 0xFFFFFFFC;
  *(_DWORD *)(a2 + 56) = v4;
  v5 = Src[1];
  if ( v4 + v5 <= *(_DWORD *)(a2 + 40) )
  {
LABEL_10:
    memcpy((void *)(v4 + *(_DWORD *)(a2 + 36)), Src, v5);
    ++*(_DWORD *)(a2 + 32);
    *(_DWORD *)(a2 + 56) += Src[1];
    return 0;
  }
  NtUnmapViewOfSection(-1, *(_DWORD *)(a2 + 36));
  v4 = 0;
  *(_DWORD *)(a2 + 36) = 0;
  v6 = *(_DWORD *)(a2 + 40);
  v7 = __CFADD__(v6, *(_DWORD *)(a2 + 48));
  *(_DWORD *)(a2 + 48) += v6;
  *(_DWORD *)(a2 + 52) += v7;
  if ( *(_QWORD *)(a2 + 48) < *(_QWORD *)(a2 + 8) )
  {
    result = ZwMapViewOfSection(*(_DWORD *)a2, -1, a2 + 36, 0, v6, a2 + 48, a2 + 40, 2, 0, 4);
    if ( result < 0 )
      return result;
    *(_DWORD *)(a2 + 56) = 0;
    v5 = Src[1];
    goto LABEL_10;
  }
  *(_DWORD *)(a2 + 24) = -1073741789;
  return 0;
}
