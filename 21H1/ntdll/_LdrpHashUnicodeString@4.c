/*
 * XREFs of _LdrpHashUnicodeString@4 @ 0x4B2CE090
 * Callers:
 *     _LdrpLoadKnownDll@4 @ 0x4B2CEF5D (_LdrpLoadKnownDll@4.c)
 *     _LdrpInsertDataTableEntry@4 @ 0x4B2D15EF (_LdrpInsertDataTableEntry@4.c)
 *     _LdrpMapDllFullPath@4 @ 0x4B2DE04A (_LdrpMapDllFullPath@4.c)
 *     _LdrpMapDllSearchPath@4 @ 0x4B2DE148 (_LdrpMapDllSearchPath@4.c)
 *     _LdrpAddRedirectedFunction@12 @ 0x4B333F08 (_LdrpAddRedirectedFunction@12.c)
 * Callees:
 *     <none>
 */

int __thiscall LdrpHashUnicodeString(_DWORD *this)
{
  int result; // eax
  int v2; // ebx
  unsigned __int16 *i; // edi
  unsigned int v4; // ecx

  result = 0;
  if ( !this )
    return 0x80000000;
  v2 = *(unsigned __int16 *)this >> 1;
  for ( i = (unsigned __int16 *)this[1]; v2; result = (unsigned __int16)v4 + 65599 * result )
  {
    v4 = *i++;
    --v2;
    if ( v4 >= 0x61 )
    {
      if ( v4 > 0x7A )
      {
        if ( Nls844UnicodeUpcaseTable )
        {
          if ( (unsigned __int16)v4 >= 0xC0u )
            LOWORD(v4) = v4
                       + *(_WORD *)(Nls844UnicodeUpcaseTable
                                  + 2
                                  * ((v4 & 0xF)
                                   + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                         + 2
                                                         * ((((unsigned __int16)v4 >> 4) & 0xF)
                                                          + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                + 2 * BYTE1(v4))))));
        }
      }
      else
      {
        LOWORD(v4) = v4 - 32;
      }
    }
  }
  if ( !result )
    return 0x80000000;
  return result;
}
