/*
 * XREFs of PepTranslateLimitReason @ 0x1C003AE9C
 * Callers:
 *     RegisterKernelCap @ 0x1C0036C50 (RegisterKernelCap.c)
 *     RegisterKernelPepPerf @ 0x1C0037A50 (RegisterKernelPepPerf.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PepTranslateLimitReason(int a1)
{
  int v1; // ecx
  int v2; // ecx
  __int64 result; // rax

  v1 = a1 - 1;
  if ( !v1 )
    return 4LL;
  v2 = v1 - 1;
  if ( !v2 )
    return 8LL;
  result = 2LL;
  if ( v2 == 2 )
    return 16LL;
  return result;
}
