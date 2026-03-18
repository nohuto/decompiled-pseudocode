/*
 * XREFs of ?HFFToPPFF@PFTOBJ@@QAEPAVPFF@@K@Z @ 0x1D043E
 * Callers:
 *     ?TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CGXPAX00@Z @ 0x22904B (-TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CGXPAX00@Z.c)
 * Callees:
 *     <none>
 */

struct PFF *__thiscall PFTOBJ::HFFToPPFF(PFTOBJ *this, unsigned int a2)
{
  int v2; // ecx
  unsigned int v3; // edx
  unsigned int v4; // esi
  struct PFF **v5; // ecx
  struct PFF *result; // eax

  v2 = *(_DWORD *)this;
  v3 = 0;
  v4 = *(_DWORD *)(v2 + 12);
  if ( v4 )
  {
    v5 = (struct PFF **)(v2 + 24);
    do
    {
      for ( result = *v5; result; result = (struct PFF *)*((_DWORD *)result + 1) )
      {
        if ( a2 == *((_DWORD *)result + 14) )
          return result;
      }
      ++v3;
      ++v5;
    }
    while ( v3 < v4 );
  }
  return 0;
}
