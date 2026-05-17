/*
 * XREFs of __checkTOS_withFB @ 0x4B2FAFE8
 * Callers:
 *     __CIcos_default @ 0x4B2F5AC2 (__CIcos_default.c)
 *     __CIlog_default @ 0x4B2F5B82 (__CIlog_default.c)
 *     __CIsin_default @ 0x4B2F5EA2 (__CIsin_default.c)
 *     __CIsqrt @ 0x4B2F5F70 (__CIsqrt.c)
 *     __CIatan_default @ 0x4B2F8092 (__CIatan_default.c)
 *     __CItan_default @ 0x4B2FA472 (__CItan_default.c)
 * Callees:
 *     <none>
 */

int __cdecl _checkTOS_withFB(int a1, int a2)
{
  int result; // eax

  result = a2 & 0x7FF00000;
  if ( (a2 & 0x7FF00000) == 0x7FF00000 )
    return a2;
  return result;
}
