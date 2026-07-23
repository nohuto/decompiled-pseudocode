/*
 * XREFs of PsspCaptureVaSpaceInformation @ 0x1801153DC
 * Callers:
 *     PssNtCaptureSnapshot @ 0x180113CB0 (PssNtCaptureSnapshot.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x18009D900 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x18009D9C0 (ZwFreeVirtualMemory.c)
 *     PsspCaptureVaSpaceInformation2 @ 0x1801154CC (PsspCaptureVaSpaceInformation2.c)
 */

__int64 __fastcall PsspCaptureVaSpaceInformation(int a1, __int64 a2, int a3)
{
  NTSTATUS v6; // ecx
  unsigned int v7; // ebx
  __int64 v9; // [rsp+30h] [rbp-20h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-18h] BYREF
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-10h] BYREF
  int v12; // [rsp+48h] [rbp-8h]

  if ( (a3 & 0x4000) == 0 )
    return PsspCaptureVaSpaceInformation2(a1, a2, (unsigned int)ZwQueryVirtualMemory, a2, a3);
  RegionSize = 0x4000LL;
  while ( 1 )
  {
    BaseAddress = 0LL;
    v6 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
    if ( v6 >= 0 )
      break;
    RegionSize -= 4096LL;
    if ( !RegionSize )
      goto LABEL_7;
  }
  v12 = 0;
  *((_DWORD *)BaseAddress + 1) = 0;
LABEL_7:
  if ( v6 < 0 )
    return PsspCaptureVaSpaceInformation2(a1, a2, (unsigned int)ZwQueryVirtualMemory, a2, a3);
  v9 = a2;
  v7 = PsspCaptureVaSpaceInformation2(a1, a2, (unsigned int)PsspQueryVmBulkMode, (unsigned int)&v9, a3);
  ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  return v7;
}
