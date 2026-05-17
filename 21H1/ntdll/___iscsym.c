/*
 * XREFs of ___iscsym @ 0x4B2F6050
 * Callers:
 *     <none>
 * Callees:
 *     ___pctype_func @ 0x4B2FB4F6 (___pctype_func.c)
 */

int __cdecl __iscsym(int C)
{
  return (__pctype_func()[(unsigned __int8)C] & 0x107) != 0 || (_BYTE)C == 95;
}
