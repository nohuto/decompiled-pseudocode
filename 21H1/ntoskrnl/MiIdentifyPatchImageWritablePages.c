/*
 * XREFs of MiIdentifyPatchImageWritablePages @ 0x1408C5EF8
 * Callers:
 *     MiApplyDriverHotPatch @ 0x1408C4464 (MiApplyDriverHotPatch.c)
 * Callees:
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
 *     MiSectionControlArea @ 0x1402A1930 (MiSectionControlArea.c)
 *     RtlSetBitsEx @ 0x1402A30D0 (RtlSetBitsEx.c)
 */

__int64 __fastcall MiIdentifyPatchImageWritablePages(_QWORD *a1)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rdi
  PVOID Pool; // rax
  unsigned int v6; // edi
  unsigned __int64 i; // rbx

  v2 = MiSectionControlArea(*(_QWORD *)(*a1 + 112LL));
  v3 = *(unsigned int *)(*(_QWORD *)v2 + 8LL);
  Pool = MiAllocatePool(64, (unsigned __int64)(unsigned int)(v3 + 7) >> 3, 0x4D424450u);
  if ( !Pool )
    return 3221225626LL;
  a1[5] = v3;
  v6 = 0;
  a1[6] = Pool;
  for ( i = v2 + 128; i; i = *(_QWORD *)(i + 16) )
  {
    if ( (*(_BYTE *)(i + 32) & 8) != 0 )
      RtlSetBitsEx((__int64)(a1 + 5), v6, *(unsigned int *)(i + 44));
    v6 += *(_DWORD *)(i + 44);
  }
  return 1LL;
}
