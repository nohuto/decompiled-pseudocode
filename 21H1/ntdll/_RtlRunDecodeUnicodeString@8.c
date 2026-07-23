/*
 * XREFs of _RtlRunDecodeUnicodeString@8 @ 0x4B3471B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlRunDecodeUnicodeString(UCHAR Seed, PUNICODE_STRING String)
{
  unsigned __int16 Length; // ax
  unsigned int v3; // edx

  Length = String->Length;
  v3 = String->Length;
  if ( v3 > 1 )
  {
    do
    {
      *((_BYTE *)String->Buffer + v3 - 1) ^= Seed ^ *((_BYTE *)String->Buffer + v3 - 2);
      --v3;
    }
    while ( v3 > 1 );
    Length = String->Length;
  }
  if ( Length )
    *(_BYTE *)String->Buffer ^= Seed | 0x43;
}
