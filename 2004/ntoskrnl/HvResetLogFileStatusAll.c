/*
 * XREFs of HvResetLogFileStatusAll @ 0x14070F060
 * Callers:
 *     CmpFlushHive @ 0x14061F888 (CmpFlushHive.c)
 *     HvpPerformLogFileRecovery @ 0x140870C80 (HvpPerformLogFileRecovery.c)
 * Callees:
 *     HvpLogTypeToLogArrayIndex @ 0x1406397A0 (HvpLogTypeToLogArrayIndex.c)
 */

__int64 __fastcall HvResetLogFileStatusAll(__int64 a1)
{
  unsigned int v1; // eax
  __int64 v2; // r8
  __int64 result; // rax
  __int64 v4; // r8

  if ( *(_DWORD *)(a1 + 164) == 1 )
  {
    result = HvpLogTypeToLogArrayIndex(1);
  }
  else
  {
    v1 = HvpLogTypeToLogArrayIndex(4);
    *(_BYTE *)(v1 + v2 + 188) = 0;
    result = HvpLogTypeToLogArrayIndex(5);
  }
  *(_BYTE *)((unsigned int)result + v4 + 188) = 0;
  return result;
}
