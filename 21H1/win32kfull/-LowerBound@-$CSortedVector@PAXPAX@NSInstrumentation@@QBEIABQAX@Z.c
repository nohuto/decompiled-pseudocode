/*
 * XREFs of ?LowerBound@?$CSortedVector@PAXPAX@NSInstrumentation@@QBEIABQAX@Z @ 0x24A000
 * Callers:
 *     ?Insert@?$CSortedVector@PAXPAX@NSInstrumentation@@QAE_NABQAX0@Z @ 0x249EE0 (-Insert@-$CSortedVector@PAXPAX@NSInstrumentation@@QAE_NABQAX0@Z.c)
 *     ?LookUpAndRemove@?$CSortedVector@PAXPAX@NSInstrumentation@@QAE_NABQAXPAPAX@Z @ 0x249F8E (-LookUpAndRemove@-$CSortedVector@PAXPAX@NSInstrumentation@@QAE_NABQAXPAPAX@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall NSInstrumentation::CSortedVector<void *,void *>::LowerBound(_DWORD *this, _DWORD *a2)
{
  unsigned int v2; // edx
  int v4; // esi
  int v5; // eax

  v2 = this[6];
  if ( !v2 )
    return 0;
  v4 = 0;
  do
  {
    v5 = (v2 >> 1) + v4;
    if ( *(_DWORD *)(this[7] + 8 * v5) >= *a2 )
    {
      v2 >>= 1;
    }
    else
    {
      v4 = v5 + 1;
      v2 += -1 - (v2 >> 1);
    }
  }
  while ( v2 );
  return v4;
}
