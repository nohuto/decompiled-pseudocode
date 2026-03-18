/*
 * XREFs of ?Create@UmfdUMBuffer@@SGPAV1@XZ @ 0xE91E8
 * Callers:
 *     ?Create@UmfdTls@@CGPAV1@XZ @ 0xE91AE (-Create@UmfdTls@@CGPAV1@XZ.c)
 * Callees:
 *     <none>
 */

PVOID *__stdcall UmfdUMBuffer::Create()
{
  PVOID *v0; // esi
  ULONG_PTR RegionSize; // [esp+4h] [ebp-4h] BYREF

  v0 = (PVOID *)EngAllocMem(0, 0x18u, 0x6D554446u);
  if ( !v0 )
    return v0;
  RegionSize = 0x400000;
  memset(v0, 0, 0x18u);
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFF, v0 + 3, 0, &RegionSize, 0x2000u, 4u) >= 0 )
  {
    v0[5] = (PVOID)RegionSize;
    return v0;
  }
  EngFreeMem(v0);
  return 0;
}
