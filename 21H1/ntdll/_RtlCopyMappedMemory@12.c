/*
 * XREFs of _RtlCopyMappedMemory@12 @ 0x4B35C5D0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpCopyMappedMemoryEx@24 @ 0x4B35C5E9 (_RtlpCopyMappedMemoryEx@24.c)
 */

int __thiscall RtlCopyMappedMemory(void *this, int a2, void *Src, unsigned int Size)
{
  return RtlpCopyMappedMemoryEx(Src, __PAIR64__((unsigned int)this, Size), (int)this);
}
