/*
 * XREFs of EtwpRegistrationCompare @ 0x18006DB60
 * Callers:
 *     EtwpInsertRegistration @ 0x1800434A4 (EtwpInsertRegistration.c)
 *     EtwpFindRegistration @ 0x18004576C (EtwpFindRegistration.c)
 * Callees:
 *     memcmp @ 0x180090100 (memcmp.c)
 */

int __fastcall EtwpRegistrationCompare(__int64 a1, __int64 a2)
{
  int result; // eax
  unsigned __int16 v5; // cx

  result = memcmp(*(const void **)a1, (const void *)(a2 + 32), 0x10uLL);
  if ( !result )
  {
    v5 = *(_WORD *)(a2 + 96);
    if ( *(_WORD *)(a1 + 8) <= v5 )
    {
      if ( *(_WORD *)(a1 + 8) < v5 )
        return 1;
    }
    else
    {
      return -1;
    }
  }
  return result;
}
