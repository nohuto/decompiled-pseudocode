/*
 * XREFs of IOP_INT_TO_EXT_PRIORITY @ 0x1403F133C
 * Callers:
 *     NtQueryInformationFile @ 0x1405FAEA0 (NtQueryInformationFile.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IOP_INT_TO_EXT_PRIORITY(int a1)
{
  __int64 result; // rax

  result = 2LL;
  if ( a1 )
    return (unsigned int)(a1 - 1);
  return result;
}
