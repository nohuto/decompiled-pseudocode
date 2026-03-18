/*
 * XREFs of ?GrowUMPDHeap@UMPDOBJ@@AAEHPAU_UMPDHEAP@@K@Z @ 0x1F3C92
 * Callers:
 *     ?_AllocUserMem@UMPDOBJ@@AAEPAXKH@Z @ 0x1F40D8 (-_AllocUserMem@UMPDOBJ@@AAEPAXKH@Z.c)
 * Callees:
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 *     _SIZETAdd@12 @ 0x192B76 (_SIZETAdd@12.c)
 */

int __thiscall UMPDOBJ::GrowUMPDHeap(UMPDOBJ *this, unsigned int BaseAddress, unsigned int a3)
{
  unsigned int v3; // edi
  HANDLE v4; // esi
  SIZE_T v6; // [esp+0h] [ebp-Ch]
  unsigned int v7; // [esp+0h] [ebp-Ch]
  SIZE_T *v8; // [esp+4h] [ebp-8h]
  unsigned int *v9; // [esp+4h] [ebp-8h]
  SIZE_T Augend; // [esp+8h] [ebp-4h] BYREF

  v3 = BaseAddress;
  v4 = 0;
  Augend = 0;
  if ( SIZETAdd((SIZE_T)&Augend, v6, v8) < 0 )
    return 0;
  BaseAddress = 0;
  if ( (ULongAdd(4095, Augend, (int *)&BaseAddress, v7, v9) & 0x80000000) != 0 )
    return 0;
  Augend = BaseAddress & 0xFFFFF000;
  if ( (BaseAddress & 0xFFFFF000) > 0x400000 )
    return 0;
  BaseAddress = *(_DWORD *)v3;
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFF, (PVOID *)&BaseAddress, 0, &Augend, 0x1000u, 4u) >= 0 )
    v4 = MmSecureVirtualMemory((PVOID)BaseAddress, Augend, 4u);
  if ( !v4 )
    return 0;
  if ( *(_DWORD *)(v3 + 4) )
    MmUnsecureVirtualMemory(*(HANDLE *)(v3 + 4));
  *(_DWORD *)(v3 + 8) = Augend;
  *(_DWORD *)(v3 + 4) = v4;
  return 1;
}
