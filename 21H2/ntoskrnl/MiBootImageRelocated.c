/*
 * XREFs of MiBootImageRelocated @ 0x140A93B80
 * Callers:
 *     MiHandleBootImage @ 0x140A50B14 (MiHandleBootImage.c)
 * Callees:
 *     VslReserveProtectedPages @ 0x14077D510 (VslReserveProtectedPages.c)
 *     MiUpdateThunks @ 0x140A93C6C (MiUpdateThunks.c)
 */

NTSTATUS __fastcall MiBootImageRelocated(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v8; // rbx
  NTSTATUS result; // eax

  *(_QWORD *)(a2 + 48) = a4;
  v8 = a4 - a3 + a5;
  *(_QWORD *)(v8 + 48) = a4;
  MiUpdateThunks(a1, a3, a4, *(unsigned int *)(a2 + 64));
  *(_DWORD *)(a2 + 104) |= 0x1000000u;
  *(_QWORD *)(a2 + 56) = a4 + *(unsigned int *)(v8 + 40);
  result = a6 << 12;
  *(_DWORD *)(a2 + 64) = a6 << 12;
  if ( (MiFlags & 0x8000) != 0 )
    return VslReserveProtectedPages(0LL, a3, 0, 2u);
  return result;
}
