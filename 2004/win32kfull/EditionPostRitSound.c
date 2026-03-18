/*
 * XREFs of EditionPostRitSound @ 0x1C0213DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00B029C (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 */

__int64 __fastcall EditionPostRitSound(unsigned int a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 40LL) + 56LL) + 16LL);
  return PostEventMessageEx((struct tagTHREADINFO *)v3, *(struct tagQ **)(v3 + 424), 0xEu, 0LL, a1, a2, a3, 0LL);
}
