/*
 * XREFs of ?AllocTemporaryBuffer@UmfdUMBuffer@@AAE_NK@Z @ 0x24B7D4
 * Callers:
 *     ?CommitUMBuffer@UmfdTls@@QAEPAXK_N@Z @ 0x8C446 (-CommitUMBuffer@UmfdTls@@QAEPAXK_N@Z.c)
 * Callees:
 *     ?AlignSizeTo@UmfdUMBuffer@@CG_NKKPAK@Z @ 0x8AFD0 (-AlignSizeTo@UmfdUMBuffer@@CG_NKKPAK@Z.c)
 */

char __thiscall UmfdUMBuffer::AllocTemporaryBuffer(UmfdUMBuffer *this, PVOID a2)
{
  ULONG_PTR v3; // edi
  void *v4; // eax
  ULONG_PTR v6; // eax
  unsigned int v7; // [esp+0h] [ebp-14h]
  unsigned int *v8; // [esp+4h] [ebp-10h]
  PVOID BaseAddress; // [esp+8h] [ebp-Ch] BYREF
  ULONG_PTR RegionSize; // [esp+Ch] [ebp-8h] BYREF
  ULONG_PTR v11; // [esp+10h] [ebp-4h] BYREF

  v3 = (ULONG_PTR)a2;
  v4 = (void *)*((_DWORD *)this + 1);
  if ( v4 )
  {
    if ( (unsigned int)a2 <= *((_DWORD *)this + 2) )
      return 1;
    RegionSize = 0;
    BaseAddress = v4;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, &RegionSize, 0x8000u);
    *((_DWORD *)this + 1) = 0;
    *((_DWORD *)this + 2) = 0;
  }
  a2 = 0;
  if ( UmfdUMBuffer::AlignSizeTo(v3, (int *)&a2, v7, v8) )
  {
    v6 = (ULONG_PTR)a2;
    a2 = 0;
    v11 = v6;
    if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFF, &a2, 0, &v11, 0x3000u, 4u) >= 0 )
    {
      if ( v11 >= v3 )
      {
        *((_DWORD *)this + 2) = v11;
        *((_DWORD *)this + 1) = a2;
        return 1;
      }
      BaseAddress = 0;
      RegionSize = (ULONG_PTR)a2;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFF, (PVOID *)&RegionSize, (PSIZE_T)&BaseAddress, 0x8000u);
    }
  }
  return 0;
}
