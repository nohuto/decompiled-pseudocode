/*
 * XREFs of _VerSetConditionMask@16 @ 0x4B2E60B0
 * Callers:
 *     <none>
 * Callees:
 *     __allshl @ 0x4B2F65F0 (__allshl.c)
 */

ULONGLONG __stdcall VerSetConditionMask(ULONGLONG ConditionMask, DWORD TypeMask, BYTE Condition)
{
  DWORD v3; // eax
  char v4; // cl

  v3 = TypeMask;
  if ( !TypeMask )
    return 0LL;
  v4 = 0;
  do
  {
    ++v4;
    v3 >>= 1;
  }
  while ( v3 );
  return ConditionMask | ((unsigned __int64)(Condition & 7) << (3 * v4 - 3)) | 0x8000000000000000uLL;
}
