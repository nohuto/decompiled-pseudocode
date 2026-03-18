/*
 * XREFs of HvResetLogFileStatusAll @ 0x1406E9D84
 * Callers:
 *     CmpFlushHive @ 0x1406885A4 (CmpFlushHive.c)
 *     HvpPerformLogFileRecovery @ 0x14091ADA0 (HvpPerformLogFileRecovery.c)
 * Callees:
 *     HvpLogTypeToLogArrayIndex @ 0x140689DAC (HvpLogTypeToLogArrayIndex.c)
 */

__int64 __fastcall HvResetLogFileStatusAll(__int64 a1)
{
  unsigned int v1; // eax
  __int64 v2; // r8
  __int64 result; // rax
  __int64 v4; // r8

  if ( *(_DWORD *)(a1 + 168) == 1 )
  {
    result = HvpLogTypeToLogArrayIndex(1);
  }
  else
  {
    v1 = HvpLogTypeToLogArrayIndex(4);
    *(_BYTE *)(v1 + v2 + 192) = 0;
    result = HvpLogTypeToLogArrayIndex(5);
  }
  *(_BYTE *)((unsigned int)result + v4 + 192) = 0;
  return result;
}
