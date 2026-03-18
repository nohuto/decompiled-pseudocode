/*
 * XREFs of _HasInputTransform@4 @ 0x15E9E3
 * Callers:
 *     <none>
 * Callees:
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 */

BOOL __stdcall HasInputTransform(unsigned int a1)
{
  int v1; // eax
  int v2; // ecx
  int v3; // esi

  v1 = HMValidateHandleNoSecure(a1, 1);
  if ( !v1 )
    return 0;
  v2 = 3;
  v3 = v1 + 28;
  while ( v2 )
  {
    v3 += 4;
    --v2;
  }
  return *(_DWORD *)(v1 + 160) != 0;
}
