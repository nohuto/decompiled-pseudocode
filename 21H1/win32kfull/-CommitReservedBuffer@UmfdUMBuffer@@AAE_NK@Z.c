/*
 * XREFs of ?CommitReservedBuffer@UmfdUMBuffer@@AAE_NK@Z @ 0x8C4B6
 * Callers:
 *     ?CommitUMBuffer@UmfdTls@@QAEPAXK_N@Z @ 0x8C446 (-CommitUMBuffer@UmfdTls@@QAEPAXK_N@Z.c)
 * Callees:
 *     ?AlignSizeTo@UmfdUMBuffer@@CG_NKKPAK@Z @ 0x8AFD0 (-AlignSizeTo@UmfdUMBuffer@@CG_NKKPAK@Z.c)
 */

char __thiscall UmfdUMBuffer::CommitReservedBuffer(UmfdUMBuffer *this, ULONG_PTR a2)
{
  ULONG_PTR v3; // ebx
  unsigned int v5; // [esp+0h] [ebp-Ch]
  unsigned int *v6; // [esp+4h] [ebp-8h]
  ULONG_PTR RegionSize; // [esp+8h] [ebp-4h] BYREF

  v3 = *((_DWORD *)this + 4);
  if ( a2 <= v3 )
    return 1;
  RegionSize = 0;
  if ( UmfdUMBuffer::AlignSizeTo(a2, (int *)&RegionSize, v5, v6)
    && RegionSize >= v3
    && RegionSize >= a2
    && RegionSize <= *((_DWORD *)this + 5)
    && ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFF, (PVOID *)this + 3, 0, &RegionSize, 0x1000u, 4u) >= 0
    && RegionSize >= a2 )
  {
    *((_DWORD *)this + 4) = RegionSize;
    return 1;
  }
  return 0;
}
