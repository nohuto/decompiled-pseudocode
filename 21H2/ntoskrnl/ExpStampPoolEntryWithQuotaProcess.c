/*
 * XREFs of ExpStampPoolEntryWithQuotaProcess @ 0x140367C0C
 * Callers:
 *     ExpStampPoolWithQuotaProcess @ 0x140367B44 (ExpStampPoolWithQuotaProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpStampPoolEntryWithQuotaProcess(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 3) & 8) == 0 )
    return -1LL;
  result = a1 ^ ExpPoolQuotaCookie ^ *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = a2 ^ a1 ^ ExpPoolQuotaCookie;
  return result;
}
