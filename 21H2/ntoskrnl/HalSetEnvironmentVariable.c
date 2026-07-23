/*
 * XREFs of HalSetEnvironmentVariable @ 0x1404BBEF0
 * Callers:
 *     NtSetSystemEnvironmentValue @ 0x140955510 (NtSetSystemEnvironmentValue.c)
 * Callees:
 *     HalpAcquireCmosSpinLock @ 0x14023430C (HalpAcquireCmosSpinLock.c)
 *     _stricmp @ 0x1403D1F40 (_stricmp.c)
 */

__int64 __fastcall HalSetEnvironmentVariable(const char *a1, const char *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned __int8 v7; // al
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned __int8 v11; // al

  if ( HalFirmwareTypeEfi )
    return 7LL;
  if ( stricmp(a1, "LastKnownGood") )
    return 16LL;
  if ( stricmp(a2, "TRUE") )
  {
    if ( !stricmp(a2, "FALSE") )
    {
      HalpAcquireCmosSpinLock(v9, v8, v10);
      __outbyte(0x70u, 0xBu);
      v11 = __inbyte(0x71u);
      __outbyte(0x70u, 0xBu);
      __outbyte(0x71u, v11 & 0xFE);
      goto LABEL_8;
    }
    return 16LL;
  }
  HalpAcquireCmosSpinLock(v5, v4, v6);
  __outbyte(0x70u, 0xBu);
  v7 = __inbyte(0x71u);
  __outbyte(0x70u, 0xBu);
  __outbyte(0x71u, v7 | 1);
LABEL_8:
  _InterlockedExchange(&HalpSystemHardwareLock, -1);
  if ( HalpSystemHardwareLockInterruptsEnabled )
    _enable();
  return 0LL;
}
