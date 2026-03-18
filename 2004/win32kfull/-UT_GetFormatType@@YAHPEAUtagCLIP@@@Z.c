/*
 * XREFs of ?UT_GetFormatType@@YAHPEAUtagCLIP@@@Z @ 0x1C014F1F4
 * Callers:
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1C014F178 (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UT_GetFormatType(struct tagCLIP *a1)
{
  __int64 result; // rax

  result = 2LL;
  switch ( *(_DWORD *)a1 )
  {
    case 2:
      return 1LL;
    case 3:
      return 3LL;
    case 9:
      return 1LL;
    case 0xE:
      return 3LL;
    case 0x80:
      return 0LL;
    case 0x82:
      return 1LL;
    case 0x83:
    case 0x8E:
      return 3LL;
  }
  return result;
}
