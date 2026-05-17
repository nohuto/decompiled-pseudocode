/*
 * XREFs of vscan_fn @ 0x4B2F99A0
 * Callers:
 *     _sscanf @ 0x4B2F9980 (_sscanf.c)
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 */

int __cdecl vscan_fn(int (__cdecl *a1)(const char **, int, int, int), const char *a2, int a3, int a4, int a5)
{
  unsigned int v5; // ecx
  const char *v7; // [esp+4h] [ebp-20h] BYREF
  int v8; // [esp+8h] [ebp-1Ch]
  const char *v9; // [esp+Ch] [ebp-18h]
  int v10; // [esp+10h] [ebp-14h]

  v5 = strlen(a2);
  if ( a2 && a3 )
  {
    v10 = 73;
    v9 = a2;
    v7 = a2;
    v8 = 0x7FFFFFFF;
    if ( v5 <= 0x7FFFFFFF )
      v8 = v5;
    return a1(&v7, a3, a4, a5);
  }
  else
  {
    _invalid_parameter();
    return -1;
  }
}
