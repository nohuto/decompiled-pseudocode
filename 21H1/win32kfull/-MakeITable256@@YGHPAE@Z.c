/*
 * XREFs of ?MakeITable256@@YGHPAE@Z @ 0x1FAC49
 * Callers:
 *     ?MakeITable@@YGHPAEPAURGBX@@H@Z @ 0xB7744 (-MakeITable@@YGHPAEPAURGBX@@H@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall MakeITable256(_BYTE *this)
{
  int i; // edx
  int j; // ebx
  int k; // esi

  for ( i = 0; i < 32; ++i )
  {
    for ( j = 0; j < 32; ++j )
    {
      for ( k = 0; k < 32; ++k )
        *this++ = (8 * (i & 0xFC)) | j & 0x1C | (k >> 3) & 3;
    }
  }
  return 1;
}
