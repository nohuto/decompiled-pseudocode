/*
 * XREFs of _EtwpGetProcessorStreamsCount@16 @ 0x4B381783
 * Callers:
 *     _EtwpInitLoggerContext@20 @ 0x4B2F1733 (_EtwpInitLoggerContext@20.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall EtwpGetProcessorStreamsCount(int a1, unsigned int a2, _DWORD *a3, _WORD *a4)
{
  __int16 v4; // si
  unsigned __int16 v6; // dx
  unsigned int i; // edi
  _WORD *result; // eax

  v4 = 0;
  v6 = 0;
  for ( i = 0; i < a2; i += (*(unsigned __int16 *)(i + a1 + 4) + 7) & 0xFFFFFFF8 )
  {
    v6 += *(_WORD *)(i + a1 + 44);
    ++v4;
  }
  *a3 = v6;
  result = a4;
  *a4 = v4;
  return result;
}
