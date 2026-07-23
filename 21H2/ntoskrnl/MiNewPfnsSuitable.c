/*
 * XREFs of MiNewPfnsSuitable @ 0x1408C6080
 * Callers:
 *     MiAllocateEntireImageFileExtents @ 0x1408CF404 (MiAllocateEntireImageFileExtents.c)
 *     MiAllocateFileExtents @ 0x1408CF670 (MiAllocateFileExtents.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiNewPfnsSuitable(__int64 a1)
{
  unsigned int v1; // r9d
  int v2; // edx
  _QWORD *i; // rcx
  ULONG_PTR v4; // r8
  ULONG_PTR v5; // r10

  v1 = *(_DWORD *)(a1 + 4);
  v2 = 0;
  if ( !v1 )
    return 1LL;
  for ( i = (_QWORD *)(a1 + 16); ; i += 2 )
  {
    v4 = *(i - 1);
    if ( v4 != 0x8000000000000000uLL )
    {
      v5 = v4 + *i;
      if ( v5 >= qword_140C4E9E0 && v4 < qword_140C4E9E0 + 2048 )
        break;
      if ( v5 >= 0xFFFFFFFFALL )
        break;
    }
    if ( ++v2 >= v1 )
      return 1LL;
  }
  return 0LL;
}
