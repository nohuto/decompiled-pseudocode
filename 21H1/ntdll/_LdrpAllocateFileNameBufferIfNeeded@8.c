/*
 * XREFs of _LdrpAllocateFileNameBufferIfNeeded@8 @ 0x4B2CE9A7
 * Callers:
 *     _LdrpAppendAnsiStringToFilenameBuffer@8 @ 0x4B2CE8EA (_LdrpAppendAnsiStringToFilenameBuffer@8.c)
 * Callees:
 *     _NtdllpAllocateStringRoutine@4 @ 0x4B2C5D10 (_NtdllpAllocateStringRoutine@4.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _NtdllpReallocateStringRoutine@8 @ 0x4B333B47 (_NtdllpReallocateStringRoutine@8.c)
 */

int __fastcall LdrpAllocateFileNameBufferIfNeeded(unsigned __int16 *a1, unsigned int a2)
{
  unsigned int v4; // esi
  PVOID StringRoutine; // ebx
  SIZE_T v6; // [esp-8h] [ebp-14h]
  size_t v7; // [esp-4h] [ebp-10h]

  if ( a2 <= a1[1] )
    return 0;
  if ( a2 > 0xFFFE )
    return -1073741562;
  v4 = (a2 + 63) & 0xFFFFFFC0;
  if ( v4 > 0xFFFE )
    v4 = 65534;
  if ( *((unsigned __int16 **)a1 + 1) != a1 + 4 )
  {
    HIDWORD(v6) = *((_DWORD *)a1 + 1);
    LODWORD(v6) = v4;
    StringRoutine = (PVOID)NtdllpReallocateStringRoutine(v6);
    goto LABEL_12;
  }
  StringRoutine = NtdllpAllocateStringRoutine(v4);
  if ( StringRoutine )
  {
    if ( *a1 )
    {
      LODWORD(v7) = *a1;
      memcpy(StringRoutine, *((const void **)a1 + 1), v7);
    }
LABEL_12:
    if ( StringRoutine )
    {
      *((_DWORD *)a1 + 1) = StringRoutine;
      a1[1] = v4;
      return 0;
    }
  }
  return -1073741801;
}
