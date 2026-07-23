/*
 * XREFs of HvResetLogFileStatusAll @ 0x1406206D0
 * Callers:
 *     CmpFlushHive @ 0x1406A48D8 (CmpFlushHive.c)
 *     HvpPerformLogFileRecovery @ 0x14087421C (HvpPerformLogFileRecovery.c)
 * Callees:
 *     HvpLogTypeToLogArrayIndex @ 0x1406FC688 (HvpLogTypeToLogArrayIndex.c)
 */

__int64 __fastcall HvResetLogFileStatusAll(__int64 a1)
{
  unsigned int v1; // eax
  __int64 v2; // r8
  __int64 result; // rax
  __int64 v4; // r8

  if ( *(_DWORD *)(a1 + 164) == 1 )
  {
    result = HvpLogTypeToLogArrayIndex(1LL);
  }
  else
  {
    v1 = HvpLogTypeToLogArrayIndex(4LL);
    *(_BYTE *)(v1 + v2 + 188) = 0;
    result = HvpLogTypeToLogArrayIndex(5LL);
  }
  *(_BYTE *)((unsigned int)result + v4 + 188) = 0;
  return result;
}
