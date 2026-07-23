/*
 * XREFs of _RtlRunEncodeUnicodeString@8 @ 0x4B347200
 * Callers:
 *     <none>
 * Callees:
 *     _NtQuerySystemTime@4 @ 0x4B2F2F20 (_NtQuerySystemTime@4.c)
 */

void __cdecl RtlRunEncodeUnicodeString(PUCHAR Seed, PUNICODE_STRING String)
{
  unsigned int v2; // ebx
  UCHAR v3; // cl
  char v4; // al
  unsigned int v5; // ecx
  unsigned __int16 Length; // di
  LARGE_INTEGER SystemTime; // [esp+8h] [ebp-8h] BYREF

  v2 = 1;
  v3 = *Seed;
  if ( !*Seed )
  {
    NtQuerySystemTime(&SystemTime);
    v4 = BYTE1(SystemTime.LowPart);
    v5 = 1;
    *Seed = BYTE1(SystemTime.LowPart);
    if ( !v4 )
    {
      do
      {
        if ( v5 >= 8 )
          break;
        *Seed |= *((_BYTE *)&SystemTime.LowPart + v5++);
      }
      while ( !*Seed );
    }
    v3 = *Seed;
    if ( !*Seed )
    {
      *Seed = 1;
      v3 = 1;
    }
  }
  Length = String->Length;
  if ( String->Length )
  {
    *(_BYTE *)String->Buffer ^= v3 | 0x43;
    Length = String->Length;
  }
  if ( Length > 1u )
  {
    do
    {
      *((_BYTE *)String->Buffer + v2) ^= *Seed ^ *((_BYTE *)String->Buffer + v2 - 1);
      ++v2;
    }
    while ( v2 < String->Length );
  }
}
