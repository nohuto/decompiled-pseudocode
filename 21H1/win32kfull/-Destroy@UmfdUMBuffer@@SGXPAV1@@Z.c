/*
 * XREFs of ?Destroy@UmfdUMBuffer@@SGXPAV1@@Z @ 0xD003C
 * Callers:
 *     ?Uninitialize@UmfdTls@@SGXXZ @ 0xD0004 (-Uninitialize@UmfdTls@@SGXXZ.c)
 * Callees:
 *     <none>
 */

void __thiscall UmfdUMBuffer::Destroy(_DWORD *this)
{
  ULONG_PTR v2; // eax
  void *v3; // eax
  ULONG_PTR RegionSize; // [esp+8h] [ebp-8h] BYREF
  PVOID BaseAddress; // [esp+Ch] [ebp-4h] BYREF

  v2 = this[1];
  if ( v2 )
  {
    BaseAddress = 0;
    RegionSize = v2;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFF, (PVOID *)&RegionSize, (PSIZE_T)&BaseAddress, 0x8000u);
  }
  v3 = (void *)this[3];
  if ( v3 )
  {
    RegionSize = 0;
    BaseAddress = v3;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, &RegionSize, 0x8000u);
  }
  EngFreeMem(this);
}
