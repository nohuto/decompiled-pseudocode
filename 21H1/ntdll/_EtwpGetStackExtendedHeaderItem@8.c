/*
 * XREFs of _EtwpGetStackExtendedHeaderItem@8 @ 0x4B3817C8
 * Callers:
 *     _EtwpWriteToPrivateBuffers@40 @ 0x4B381B7E (_EtwpWriteToPrivateBuffers@40.c)
 * Callees:
 *     _RtlWalkFrameChain@12 @ 0x4B2DC050 (_RtlWalkFrameChain@12.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

int __fastcall EtwpGetStackExtendedHeaderItem(int *a1, unsigned __int16 *a2)
{
  int result; // eax
  __int16 v4; // bx
  unsigned __int16 v5; // si
  int v6; // eax

  result = 4 * RtlWalkFrameChain(*a1 + 16, 0x100u, 0);
  v4 = result;
  if ( (_WORD)result )
  {
    v5 = (result + 23) & 0xFFF8;
    memset((void *)((unsigned __int16)(result + 16) + *a1), 0, v5 - (unsigned __int16)(result + 16));
    *a2 = v5;
    v6 = *a1;
    *(_DWORD *)(v6 + 8) = 0;
    *(_DWORD *)(v6 + 12) = 0;
    *(_WORD *)*a1 = v5;
    *(_WORD *)(*a1 + 2) = 5;
    *(_WORD *)(*a1 + 6) = v4;
    *(_WORD *)(*a1 + 4) &= ~1u;
    result = *a1;
    *(_WORD *)(*a1 + 4) &= 1u;
  }
  else
  {
    *a1 = 0;
  }
  return result;
}
