/*
 * XREFs of _EtwpGetStackExtendedHeaderItem@8 @ 0x4B3817C8
 * Callers:
 *     _EtwpWriteToPrivateBuffers@40 @ 0x4B381B7E (_EtwpWriteToPrivateBuffers@40.c)
 * Callees:
 *     _RtlWalkFrameChain@12 @ 0x4B2DC050 (_RtlWalkFrameChain@12.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

ULONG __usercall EtwpGetStackExtendedHeaderItem@<eax>(unsigned __int16 *a1@<edx>, ULONG *a2@<ecx>, int a3@<esi>)
{
  ULONG result; // eax
  __int16 v5; // bx
  int v6; // ecx
  unsigned __int16 v7; // si
  ULONG v8; // eax
  size_t v9; // [esp-8h] [ebp-14h]

  result = 4 * RtlWalkFrameChain((PVOID *)(*a2 + 16), 0x100u, 0);
  v5 = result;
  if ( (_WORD)result )
  {
    HIDWORD(v9) = a3;
    v6 = (unsigned __int16)(result + 16);
    v7 = (result + 23) & 0xFFF8;
    LODWORD(v9) = v7 - v6;
    memset((void *)(v6 + *a2), 0, v9);
    *a1 = v7;
    v8 = *a2;
    *(_DWORD *)(v8 + 8) = 0;
    *(_DWORD *)(v8 + 12) = 0;
    *(_WORD *)*a2 = v7;
    *(_WORD *)(*a2 + 2) = 5;
    *(_WORD *)(*a2 + 6) = v5;
    *(_WORD *)(*a2 + 4) &= ~1u;
    result = *a2;
    *(_WORD *)(*a2 + 4) &= 1u;
  }
  else
  {
    *a2 = 0;
  }
  return result;
}
