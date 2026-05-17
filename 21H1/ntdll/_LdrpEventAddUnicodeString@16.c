/*
 * XREFs of _LdrpEventAddUnicodeString@16 @ 0x4B32FC55
 * Callers:
 *     _LdrpLogDelayLoadTrigger@16 @ 0x4B2C02B9 (_LdrpLogDelayLoadTrigger@16.c)
 *     _LdrpLogEtwDllSearchResults@8 @ 0x4B32FECC (_LdrpLogEtwDllSearchResults@8.c)
 *     _LdrpLogEtwEvent@24 @ 0x4B330117 (_LdrpLogEtwEvent@24.c)
 * Callees:
 *     _RtlStringCchCopyExW@24 @ 0x4B330DC4 (_RtlStringCchCopyExW@24.c)
 */

int *__fastcall LdrpEventAddUnicodeString(int a1, _WORD *a2, unsigned int a3, int *a4)
{
  int v4; // ecx
  int *result; // eax
  _BYTE v6[4]; // [esp+0h] [ebp-8h] BYREF
  int v7; // [esp+4h] [ebp-4h] BYREF

  if ( a1 && *(_WORD *)a1 )
  {
    RtlStringCchCopyExW(*(_DWORD *)(a1 + 4), v6, &v7, a1);
    v4 = a3 + 2 * (1 - v7);
  }
  else
  {
    v4 = 2;
    if ( a3 < 2 )
      v4 = 0;
    else
      *a2 = 0;
  }
  result = a4;
  *a4 = v4;
  return result;
}
