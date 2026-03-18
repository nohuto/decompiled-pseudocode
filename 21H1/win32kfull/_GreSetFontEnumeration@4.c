/*
 * XREFs of _GreSetFontEnumeration@4 @ 0xD885A
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 *     _xxxUpdatePerUserSystemParameters@8 @ 0xD78DE (_xxxUpdatePerUserSystemParameters@8.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
int __fastcall GreSetFontEnumeration(char a1)
{
  int v1; // eax
  int v2; // edx

  if ( (a1 & 4) != 0 )
  {
    v1 = _gulFontInformation & 0x11;
    v2 = a1 & 2;
  }
  else
  {
    if ( (a1 & 0x20) == 0 )
    {
      _gulFontInformation = a1 & 1 | _gulFontInformation & 0x12;
      return _gulFontInformation;
    }
    v1 = _gulFontInformation & 3;
    v2 = a1 & 0x10;
  }
  _gulFontInformation = v2 | v1;
  return _gulFontInformation;
}
