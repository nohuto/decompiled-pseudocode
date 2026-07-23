/*
 * XREFs of _EtwpRegistrationCompare@8 @ 0x4B2C1ADC
 * Callers:
 *     _EtwpFindRegistration@8 @ 0x4B2AE6F5 (_EtwpFindRegistration@8.c)
 *     _EtwNotificationRegister@20 @ 0x4B2C1950 (_EtwNotificationRegister@20.c)
 * Callees:
 *     _memcmp @ 0x4B2F8860 (_memcmp.c)
 */

int __stdcall EtwpRegistrationCompare(int a1, int a2)
{
  int result; // eax
  unsigned __int16 v3; // cx
  unsigned __int16 v4; // dx
  size_t v5; // [esp-4h] [ebp-Ch]

  LODWORD(v5) = 16;
  result = memcmp(*(const void **)a1, (const void *)(a2 + 12), v5);
  if ( !result )
  {
    v3 = *(_WORD *)(a1 + 4);
    v4 = *(_WORD *)(a2 + 52);
    if ( v3 <= v4 )
    {
      if ( v3 < v4 )
        return 1;
    }
    else
    {
      return -1;
    }
  }
  return result;
}
