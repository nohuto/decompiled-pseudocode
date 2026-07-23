/*
 * XREFs of EtwpGetStackExtendedHeaderItem @ 0x180110F68
 * Callers:
 *     EtwpWriteToPrivateBuffers @ 0x18005064C (EtwpWriteToPrivateBuffers.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x180052720 (RtlWalkFrameChain.c)
 */

int __fastcall EtwpGetStackExtendedHeaderItem(__int64 *a1, _WORD *a2)
{
  __int64 v4; // rax
  __int16 v5; // r8

  LODWORD(v4) = RtlWalkFrameChain((PVOID *)(*a1 + 16), 0x100u, 0);
  v5 = 8 * v4;
  if ( 8 * (_WORD)v4 )
  {
    *a2 = v5 + 16;
    *(_QWORD *)(*a1 + 8) = 0LL;
    *(_WORD *)*a1 = v5 + 16;
    *(_WORD *)(*a1 + 2) = 6;
    *(_WORD *)(*a1 + 6) = v5;
    *(_WORD *)(*a1 + 4) &= ~1u;
    v4 = *a1;
    *(_WORD *)(*a1 + 4) &= 1u;
  }
  else
  {
    *a1 = 0LL;
  }
  return v4;
}
