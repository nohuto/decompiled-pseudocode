/*
 * XREFs of _RtlInitializeCorrelationVector@12 @ 0x4B362370
 * Callers:
 *     <none>
 * Callees:
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     RtlpBase64Encode @ 0x4B362482 (RtlpBase64Encode.c)
 */

int __stdcall RtlInitializeCorrelationVector(char *a1, char a2, int a3)
{
  int result; // eax
  int v4; // [esp-4h] [ebp-Ch]

  if ( (unsigned __int8)(a2 - 1) > 1u || !a3 )
    return -1073741811;
  memset(a1 + 1, 0, 0x81u);
  *a1 = a2;
  result = RtlpBase64Encode(a1 + 1, v4);
  if ( result >= 0 )
  {
    if ( a2 == 1 )
      strcpy(a1 + 17, ".0");
    else
      strcpy(a1 + 23, ".0");
  }
  return result;
}
