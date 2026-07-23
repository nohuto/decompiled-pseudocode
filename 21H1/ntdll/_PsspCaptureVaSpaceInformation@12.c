/*
 * XREFs of _PsspCaptureVaSpaceInformation@12 @ 0x4B387B12
 * Callers:
 *     _PssNtCaptureSnapshot@16 @ 0x4B386310 (_PssNtCaptureSnapshot@16.c)
 * Callees:
 *     _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0 (_NtAllocateVirtualMemory@24.c)
 *     _NtFreeVirtualMemory@16 @ 0x4B2F2B60 (_NtFreeVirtualMemory@16.c)
 *     PsspCaptureVaSpaceInformation2 @ 0x4B3876A6 (PsspCaptureVaSpaceInformation2.c)
 */

int __fastcall PsspCaptureVaSpaceInformation(int a1, void *a2, __int16 a3)
{
  NTSTATUS v5; // ecx
  int v6; // esi
  ULONG_PTR v8; // [esp-10h] [ebp-34h]
  ULONG v9; // [esp+0h] [ebp-24h]
  void *v10; // [esp+10h] [ebp-14h] BYREF
  PVOID BaseAddress; // [esp+14h] [ebp-10h] BYREF
  ULONG_PTR RegionSize; // [esp+18h] [ebp-Ch] BYREF

  if ( (a3 & 0x4000) == 0 )
    return PsspCaptureVaSpaceInformation2(
             a1,
             a2,
             (int (__thiscall *)(_DWORD, int, int, int, unsigned int *, int, unsigned int *))NtQueryVirtualMemory,
             (int)a2,
             a3);
  LODWORD(RegionSize) = 0x4000;
  while ( 1 )
  {
    BaseAddress = 0;
    HIDWORD(v8) = &RegionSize;
    LODWORD(v8) = 0;
    v5 = NtAllocateVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, v8, (PSIZE_T)0x1000, 4u, v9);
    if ( v5 >= 0 )
      break;
    LODWORD(RegionSize) = RegionSize - 4096;
    if ( !(_DWORD)RegionSize )
      goto LABEL_7;
  }
  HIDWORD(RegionSize) = 0;
  *((_DWORD *)BaseAddress + 1) = 0;
LABEL_7:
  if ( v5 < 0 )
    return PsspCaptureVaSpaceInformation2(
             a1,
             a2,
             (int (__thiscall *)(_DWORD, int, int, int, unsigned int *, int, unsigned int *))NtQueryVirtualMemory,
             (int)a2,
             a3);
  v10 = a2;
  v6 = PsspCaptureVaSpaceInformation2(
         a1,
         a2,
         (int (__thiscall *)(_DWORD, int, int, int, unsigned int *, int, unsigned int *))&PsspQueryVmBulkMode,
         (int)&v10,
         a3);
  NtFreeVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, &RegionSize, 0x8000u);
  return v6;
}
