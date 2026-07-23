/*
 * XREFs of _LdrpGetModuleName@16 @ 0x4B32F32C
 * Callers:
 *     _LdrQueryModuleInfoFromLdrEntry@20 @ 0x4B32E910 (_LdrQueryModuleInfoFromLdrEntry@20.c)
 * Callees:
 *     _RtlUnicodeStringToAnsiString@12 @ 0x4B2E0C90 (_RtlUnicodeStringToAnsiString@12.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     LdrpReadMemory @ 0x4B32F4DC (LdrpReadMemory.c)
 */

NTSTATUS __fastcall LdrpGetModuleName(int a1, unsigned __int16 *a2, int a3, int a4)
{
  unsigned __int16 v4; // si
  NTSTATUS result; // eax
  char *v6; // eax
  UNICODE_STRING SourceString; // [esp+8h] [ebp-218h] BYREF
  _STRING DestinationString; // [esp+10h] [ebp-210h] BYREF
  _BYTE v9[512]; // [esp+18h] [ebp-208h] BYREF
  __int16 v10; // [esp+218h] [ebp-8h]

  v4 = 512;
  if ( *a2 < 0x200u )
    v4 = *a2;
  result = LdrpReadMemory(v9, v4);
  if ( result >= 0 )
  {
    SourceString.MaximumLength = v4;
    v10 = 0;
    SourceString.Buffer = (wchar_t *)v9;
    DestinationString.Buffer = (char *)(a3 + 28);
    SourceString.Length = v4;
    *(_DWORD *)&DestinationString.Length = 0x1000000;
    result = RtlUnicodeStringToAnsiString(&DestinationString, &SourceString, 0);
    if ( result >= 0 )
    {
      v6 = &DestinationString.Buffer[DestinationString.Length];
      while ( v6 > DestinationString.Buffer )
      {
        if ( *--v6 == 92 )
        {
          LOWORD(v6) = (_WORD)v6 + 1;
          break;
        }
      }
      *(_WORD *)(a3 + 26) = (_WORD)v6 - LOWORD(DestinationString.Buffer);
      return 0;
    }
  }
  return result;
}
