/*
 * XREFs of ?LowerBound@?$CSortedVector@IPAU_FONTFILEVIEW@@@NSInstrumentation@@QBEIABI@Z @ 0x8C002
 * Callers:
 *     ?LookUp@?$CSortedVector@IPAU_FONTFILEVIEW@@@NSInstrumentation@@QAE_NABIPAPAU_FONTFILEVIEW@@@Z @ 0x8BF98 (-LookUp@-$CSortedVector@IPAU_FONTFILEVIEW@@@NSInstrumentation@@QAE_NABIPAPAU_FONTFILEVIEW@@@Z.c)
 *     ?Insert@?$CSortedVector@IPAU_FONTFILEVIEW@@@NSInstrumentation@@QAE_NABIABQAU_FONTFILEVIEW@@@Z @ 0xDE3D8 (-Insert@-$CSortedVector@IPAU_FONTFILEVIEW@@@NSInstrumentation@@QAE_NABIABQAU_FONTFILEVIEW@@@Z.c)
 *     ?Remove@?$CSortedVector@IPAU_FONTFILEVIEW@@@NSInstrumentation@@QAE_NABI@Z @ 0xDF050 (-Remove@-$CSortedVector@IPAU_FONTFILEVIEW@@@NSInstrumentation@@QAE_NABI@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::LowerBound(_DWORD *this, _DWORD *a2)
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
    if ( *(_DWORD *)(this[7] + 8 * v4) < *a2 )
    {
      v3 = v4 + 1;
      v2 += -1 - (v2 >> 1);
    }
    else
    {
      v2 >>= 1;
    }
  }
  while ( v2 );
  return v3;
}
