/*
 * XREFs of ?CreateUMPDHeap@UMPDOBJ@@AAEPAU_UMPDHEAP@@XZ @ 0x1F39C5
 * Callers:
 *     ?_AllocUserMem@UMPDOBJ@@AAEPAXKH@Z @ 0x1F40D8 (-_AllocUserMem@UMPDOBJ@@AAEPAXKH@Z.c)
 *     ?bInit@UMPDOBJ@@QAEHXZ @ 0x1F428A (-bInit@UMPDOBJ@@QAEHXZ.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 */

struct _UMPDHEAP *__thiscall UMPDOBJ::CreateUMPDHeap(UMPDOBJ *this)
{
  struct _UMPDHEAP *v1; // esi
  struct _UMPDHEAP *result; // eax
  ULONG_PTR RegionSize; // [esp+4h] [ebp-8h] BYREF
  PVOID BaseAddress; // [esp+8h] [ebp-4h] BYREF

  v1 = (struct _UMPDHEAP *)PALLOCMEM2(0x10u, 1886221639, 1);
  if ( v1 )
  {
    BaseAddress = 0;
    RegionSize = 0x400000;
    if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, 0, &RegionSize, 0x2000u, 4u) >= 0 )
    {
      *(_DWORD *)v1 = BaseAddress;
      result = v1;
      *((_DWORD *)v1 + 3) = 0;
      return result;
    }
    Win32FreePool((PATHOBJ *)v1);
  }
  return 0;
}
