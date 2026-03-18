/*
 * XREFs of KiDetectTsx @ 0x1403B396C
 * Callers:
 *     KiInitializeBootStructures @ 0x14099E840 (KiInitializeBootStructures.c)
 *     KeInitSystem @ 0x140A4ABFC (KeInitSystem.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 */

_BOOL8 KiDetectTsx()
{
  _RAX = 0LL;
  __asm { cpuid }
  if ( (unsigned int)_RAX < 7 )
    return 0LL;
  _RAX = 7LL;
  __asm { cpuid }
  return (_RBX & 0x800) != 0 || (_RBX & 0x10) != 0;
}
