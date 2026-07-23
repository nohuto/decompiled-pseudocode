/*
 * XREFs of Amd64ConfigureCounter @ 0x1404DDA4C
 * Callers:
 *     Amd64DisableMonitoring @ 0x1404DDAC0 (Amd64DisableMonitoring.c)
 *     Amd64EnableMonitoring @ 0x1404DDB60 (Amd64EnableMonitoring.c)
 *     Amd64RestartProfiling @ 0x1409AA790 (Amd64RestartProfiling.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall Amd64ConfigureCounter(int a1, char a2, int a3, unsigned int a4, char a5)
{
  unsigned __int64 v5; // r10
  unsigned int v6; // ecx
  unsigned __int64 result; // rax

  v5 = 0LL;
  if ( a2 )
  {
    __writemsr(a1 - 1073676284, -(__int64)(a3 & (unsigned int)-(a5 != 0)));
    v6 = a1 - 1073676288;
    v5 = a4 | (a5 != 0 ? 5242880LL : 0x400000LL);
  }
  else
  {
    v6 = a1 - 1073676288;
  }
  result = v5;
  __writemsr(v6, v5);
  return result;
}
