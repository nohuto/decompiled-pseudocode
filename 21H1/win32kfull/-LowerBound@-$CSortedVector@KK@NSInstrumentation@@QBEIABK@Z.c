/*
 * XREFs of ?LowerBound@?$CSortedVector@KK@NSInstrumentation@@QBEIABK@Z @ 0xDEB5A
 * Callers:
 *     ?Remove@?$CSortedVector@KK@NSInstrumentation@@QAE_NABK@Z @ 0xCDF68 (-Remove@-$CSortedVector@KK@NSInstrumentation@@QAE_NABK@Z.c)
 *     ?Insert@?$CSortedVector@KK@NSInstrumentation@@QAE_NABK0@Z @ 0xDEA66 (-Insert@-$CSortedVector@KK@NSInstrumentation@@QAE_NABK0@Z.c)
 *     ?LookUp@?$CSortedVector@KK@NSInstrumentation@@QAE_NABKPAK@Z @ 0x1F3E44 (-LookUp@-$CSortedVector@KK@NSInstrumentation@@QAE_NABKPAK@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall NSInstrumentation::CSortedVector<unsigned long,unsigned long>::LowerBound(_DWORD *this, _DWORD *a2)
{
  unsigned int v2; // edx
  int v3; // esi
  int v4; // eax

  v2 = this[6];
  if ( !v2 )
    return 0;
  v3 = 0;
  do
  {
    v4 = (v2 >> 1) + v3;
    if ( *(_DWORD *)(this[7] + 8 * v4) >= *a2 )
    {
      v2 >>= 1;
    }
    else
    {
      v3 = v4 + 1;
      v2 += -1 - (v2 >> 1);
    }
  }
  while ( v2 );
  return v3;
}
