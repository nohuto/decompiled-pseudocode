/*
 * XREFs of RtlRunEncodeUnicodeString @ 0x1800E7020
 * Callers:
 *     <none>
 * Callees:
 *     ZwQuerySystemTime @ 0x18009E140 (ZwQuerySystemTime.c)
 */

void __cdecl RtlRunEncodeUnicodeString(PUCHAR Seed, PUNICODE_STRING String)
{
  UCHAR v2; // r8
  char v5; // al
  unsigned int v6; // r8d
  __int64 v7; // rax
  unsigned __int16 Length; // ax
  unsigned int v9; // r9d
  __int64 v10; // rax
  __int64 v11; // rdx
  LARGE_INTEGER SystemTime; // [rsp+30h] [rbp+8h] BYREF

  v2 = *Seed;
  if ( !*Seed )
  {
    ZwQuerySystemTime(&SystemTime);
    v5 = BYTE1(SystemTime.LowPart);
    v6 = 1;
    *Seed = BYTE1(SystemTime.LowPart);
    if ( !v5 )
    {
      do
      {
        if ( v6 >= 8 )
          break;
        v7 = v6++;
        *Seed |= *((_BYTE *)&SystemTime.LowPart + v7);
      }
      while ( !*Seed );
    }
    v2 = *Seed;
    if ( !*Seed )
    {
      *Seed = 1;
      v2 = 1;
    }
  }
  Length = String->Length;
  if ( String->Length )
  {
    *(_BYTE *)String->Buffer ^= v2 | 0x43;
    Length = String->Length;
  }
  v9 = 1;
  if ( Length > 1u )
  {
    do
    {
      v10 = v9 - 1;
      v11 = v9++;
      *((_BYTE *)String->Buffer + v11) ^= *Seed ^ *((_BYTE *)String->Buffer + v10);
    }
    while ( v9 < String->Length );
  }
}
