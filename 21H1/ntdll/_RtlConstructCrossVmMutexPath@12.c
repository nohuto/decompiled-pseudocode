/*
 * XREFs of _RtlConstructCrossVmMutexPath@12 @ 0x4B35AB80
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpConstructCrossVmObjectPath@12 @ 0x4B35AB97 (_RtlpConstructCrossVmObjectPath@12.c)
 */

int __stdcall RtlConstructCrossVmMutexPath(int a1, int a2, int a3)
{
  return RtlpConstructCrossVmObjectPath(a3);
}
