/*
 * XREFs of ?pwszName@FHOBJ@@QAEPAGAAVPFEOBJ@@@Z @ 0xDE982
 * Callers:
 *     ?vDelete@FHOBJ@@QAEXAAVPFEOBJ@@@Z @ 0xCE3DA (-vDelete@FHOBJ@@QAEXAAVPFEOBJ@@@Z.c)
 *     ?bInsert@FHOBJ@@QAEHAAVPFEOBJ@@@Z @ 0xDE69E (-bInsert@FHOBJ@@QAEHAAVPFEOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int16 *__thiscall FHOBJ::pwszName(FHOBJ *this, struct PFEOBJ *a2)
{
  int v2; // edx
  int v3; // eax

  v2 = *(_DWORD *)(*(_DWORD *)a2 + 20);
  if ( *(_DWORD *)(*((_DWORD *)this + 1) + 4) == 1 )
    v3 = *(_DWORD *)(v2 + 8);
  else
    v3 = *(_DWORD *)(v2 + 16);
  return (unsigned __int16 *)(v2 + v3);
}
