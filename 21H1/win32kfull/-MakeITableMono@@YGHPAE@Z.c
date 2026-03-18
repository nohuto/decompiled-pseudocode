/*
 * XREFs of ?MakeITableMono@@YGHPAE@Z @ 0x1FACB1
 * Callers:
 *     ?MakeITable@@YGHPAEPAURGBX@@H@Z @ 0xB7744 (-MakeITable@@YGHPAEPAURGBX@@H@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall MakeITableMono(bool *this)
{
  unsigned int v1; // edx
  unsigned int v2; // ecx
  unsigned int v3; // esi
  bool *v4; // edx
  int v5; // edi
  bool v6; // zf
  int v8; // [esp+Ch] [ebp-10h]
  unsigned int v9; // [esp+10h] [ebp-Ch]
  int v10; // [esp+14h] [ebp-8h]

  v1 = 0;
  v9 = 0;
  v8 = 32;
  do
  {
    v2 = 0;
    v10 = 32;
    do
    {
      v3 = v1;
      v4 = this;
      v5 = 32;
      do
      {
        *v4++ = (v2 >> 1) + (v3++ >> 2) > 0xF;
        --v5;
      }
      while ( v5 );
      ++v2;
      this = v4;
      v6 = v10-- == 1;
      v1 = v9;
    }
    while ( !v6 );
    v1 = v9 + 1;
    v6 = v8-- == 1;
    ++v9;
  }
  while ( !v6 );
  return 1;
}
