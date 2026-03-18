/*
 * XREFs of ?ApplyFullKeyboardStates@@YAXPEAX0@Z @ 0x1C01AE620
 * Callers:
 *     ?ivHandleKeyboardStatesPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B2A60 (-ivHandleKeyboardStatesPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject.c)
 * Callees:
 *     PostUpdateKeyStateEvent @ 0x1C0076CF0 (PostUpdateKeyStateEvent.c)
 */

void __fastcall ApplyFullKeyboardStates(_OWORD *a1, __int128 *a2)
{
  char *v2; // rdi
  char *i; // rbx
  __int64 v4; // rcx
  __m128i si128; // xmm0

  *(_OWORD *)gafRawKeyState = *a1;
  xmmword_1C0249850 = a1[1];
  unk_1C0249860 = a1[2];
  xmmword_1C0249870 = a1[3];
  gafAsyncKeyState = *a2;
  xmmword_1C02498B0 = a2[1];
  unk_1C02498C0 = a2[2];
  xmmword_1C02498D0 = a2[3];
  if ( grpdeskRitInput )
  {
    v2 = (char *)grpdeskRitInput + 168;
    for ( i = (char *)*((_QWORD *)grpdeskRitInput + 21); i != v2; i = *(char **)i )
    {
      v4 = *((_QWORD *)i - 39);
      si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
      *(_DWORD *)(v4 + 388) |= 1u;
      *(__m128i *)(v4 + 196) = si128;
      *(__m128i *)(v4 + 212) = si128;
      PostUpdateKeyStateEvent(v4);
    }
  }
}
