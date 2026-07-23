/*
 * XREFs of _RtlMultiAppendUnicodeStringBuffer@12 @ 0x4B2E13B0
 * Callers:
 *     _RtlDosApplyFileIsolationRedirection_Ustr@36 @ 0x4B2C9830 (_RtlDosApplyFileIsolationRedirection_Ustr@36.c)
 *     _RtlAppendPathElement@12 @ 0x4B32CEB0 (_RtlAppendPathElement@12.c)
 * Callees:
 *     _RtlpEnsureBufferSize@12 @ 0x4B2E1480 (_RtlpEnsureBufferSize@12.c)
 *     _memmove @ 0x4B2F8BF0 (_memmove.c)
 */

int __stdcall RtlMultiAppendUnicodeStringBuffer(unsigned __int16 *a1, int a2, int a3)
{
  int v3; // ecx
  int v4; // edx
  unsigned int v5; // ebx
  unsigned int v6; // esi
  unsigned int v7; // esi
  int v8; // eax
  int result; // eax
  size_t v10; // [esp-4h] [ebp-14h]
  int v11; // [esp+Ch] [ebp-4h]

  v3 = 0;
  v4 = 0;
  v11 = 0;
  v5 = *a1;
  v6 = v5;
  if ( a2 )
  {
    do
    {
      v6 += *(unsigned __int16 *)(a3 + 8 * v4);
      if ( v6 > 0xFFFE )
        return -1073741562;
    }
    while ( ++v4 != a2 );
  }
  v7 = v6 + 2;
  if ( v7 > 0xFFFE )
    return -1073741562;
  if ( a1 == (unsigned __int16 *)-8 || v7 > *((_DWORD *)a1 + 4) )
  {
    result = RtlpEnsureBufferSize(0, a1 + 4, v7);
    if ( result < 0 )
      return result;
    v3 = 0;
  }
  a1[1] = v7;
  *a1 = v7 - 2;
  v8 = *((_DWORD *)a1 + 2);
  *((_DWORD *)a1 + 1) = v8;
  if ( a2 )
  {
    do
    {
      LODWORD(v10) = *(unsigned __int16 *)(a3 + 8 * v3);
      memmove((void *)(*((_DWORD *)a1 + 1) + 2 * (v5 >> 1)), *(const void **)(a3 + 8 * v3 + 4), v10);
      v5 += *(unsigned __int16 *)(a3 + 8 * v11);
      v3 = v11 + 1;
      v11 = v3;
    }
    while ( v3 != a2 );
    v8 = *((_DWORD *)a1 + 1);
  }
  *(_WORD *)(v8 + 2 * (v5 >> 1)) = 0;
  return 0;
}
