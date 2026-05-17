/*
 * XREFs of _EtwpValidateLoggerInfo@4 @ 0x4B2F0042
 * Callers:
 *     _EtwProcessPrivateLoggerRequest@4 @ 0x4B2EFF20 (_EtwProcessPrivateLoggerRequest@4.c)
 * Callees:
 *     _memcmp @ 0x4B2F8860 (_memcmp.c)
 */

int __thiscall EtwpValidateLoggerInfo(_DWORD *this)
{
  if ( this && *this >= 0xB0u && (this[11] & 0x20000) != 0 && memcmp(this + 6, &SystemTraceControlGuid, 0x10u) )
    return 0;
  else
    return 13;
}
