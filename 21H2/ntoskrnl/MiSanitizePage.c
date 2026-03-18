/*
 * XREFs of MiSanitizePage @ 0x140215598
 * Callers:
 *     MiMapContiguousMemory @ 0x14021538C (MiMapContiguousMemory.c)
 *     MiRotateToFrameBufferNoCopy @ 0x14065FFA0 (MiRotateToFrameBufferNoCopy.c)
 *     MiMapLockedPagesInUserSpace @ 0x140693498 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x140852834 (MiMapViewOfPhysicalSection.c)
 *     MiRotateToFrameBuffer @ 0x14096D3A4 (MiRotateToFrameBuffer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSanitizePage(unsigned __int64 a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // r8

  v1 = a1;
  v2 = 1LL << ((unsigned __int8)dword_140C50720 - 12);
  if ( a1 >= v2 )
    return (v2 - 1) & a1;
  return v1;
}
