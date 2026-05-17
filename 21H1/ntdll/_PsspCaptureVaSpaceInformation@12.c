/*
 * XREFs of _PsspCaptureVaSpaceInformation@12 @ 0x4B387B12
 * Callers:
 *     _PssNtCaptureSnapshot@16 @ 0x4B386310 (_PssNtCaptureSnapshot@16.c)
 * Callees:
 *     _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0 (_NtAllocateVirtualMemory@24.c)
 *     _NtFreeVirtualMemory@16 @ 0x4B2F2B60 (_NtFreeVirtualMemory@16.c)
 *     PsspCaptureVaSpaceInformation2 @ 0x4B3876A6 (PsspCaptureVaSpaceInformation2.c)
 */

int __fastcall PsspCaptureVaSpaceInformation(int a1, int a2, __int16 a3)
{
  int VirtualMemory; // ecx
  int v6; // esi
  int v8; // [esp+10h] [ebp-14h] BYREF
  int v9; // [esp+14h] [ebp-10h] BYREF
  _DWORD v10[3]; // [esp+18h] [ebp-Ch] BYREF

  if ( (a3 & 0x4000) == 0 )
    return PsspCaptureVaSpaceInformation2(
             a1,
             a2,
             (int (__thiscall *)(_DWORD, int, int, int, unsigned int *, int, unsigned int *))NtQueryVirtualMemory,
             a2,
             a3);
  v10[0] = 0x4000;
  while ( 1 )
  {
    v9 = 0;
    VirtualMemory = NtAllocateVirtualMemory(-1, (int)&v9, 0, (int)v10, 4096, 4);
    if ( VirtualMemory >= 0 )
      break;
    v10[0] -= 4096;
    if ( !v10[0] )
      goto LABEL_7;
  }
  v10[1] = 0;
  *(_DWORD *)(v9 + 4) = 0;
LABEL_7:
  if ( VirtualMemory < 0 )
    return PsspCaptureVaSpaceInformation2(
             a1,
             a2,
             (int (__thiscall *)(_DWORD, int, int, int, unsigned int *, int, unsigned int *))NtQueryVirtualMemory,
             a2,
             a3);
  v8 = a2;
  v6 = PsspCaptureVaSpaceInformation2(
         a1,
         a2,
         (int (__thiscall *)(_DWORD, int, int, int, unsigned int *, int, unsigned int *))PsspQueryVmBulkMode,
         (int)&v8,
         a3);
  NtFreeVirtualMemory(-1, (int)&v9, (int)v10, 0x8000);
  return v6;
}
