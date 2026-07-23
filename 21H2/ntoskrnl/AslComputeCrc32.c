/*
 * XREFs of AslComputeCrc32 @ 0x140967CB8
 * Callers:
 *     AslpFileGetCrcChecksum @ 0x14096B0EC (AslpFileGetCrcChecksum.c)
 *     AslpFileLargeGetCrcChecksum @ 0x14096C400 (AslpFileLargeGetCrcChecksum.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AslComputeCrc32(int a1, _BYTE *a2, unsigned int a3)
{
  unsigned int v4; // r9d
  __int64 v5; // r11
  unsigned __int8 v6; // dl

  v4 = ~a1;
  if ( a3 )
  {
    v5 = a3;
    do
    {
      v6 = *a2++ ^ v4;
      v4 = (v4 >> 8) ^ *((_DWORD *)AslpCrc32Table + v6);
      --v5;
    }
    while ( v5 );
  }
  return ~v4;
}
