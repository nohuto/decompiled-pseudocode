/*
 * XREFs of PsspCaptureVaSpaceInformation @ 0x18011541C
 * Callers:
 *     PssNtCaptureSnapshot @ 0x180113CF0 (PssNtCaptureSnapshot.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x18009D940 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x18009DA00 (ZwFreeVirtualMemory.c)
 *     PsspCaptureVaSpaceInformation2 @ 0x18011550C (PsspCaptureVaSpaceInformation2.c)
 */

__int64 __fastcall PsspCaptureVaSpaceInformation(int a1, __int64 a2, int a3)
{
  int VirtualMemory; // ecx
  unsigned int v7; // ebx
  __int64 v9; // [rsp+30h] [rbp-20h] BYREF
  __int64 v10; // [rsp+38h] [rbp-18h]
  __int64 v11; // [rsp+40h] [rbp-10h]
  int v12; // [rsp+48h] [rbp-8h]

  if ( (a3 & 0x4000) == 0 )
    return PsspCaptureVaSpaceInformation2(a1, a2, (unsigned int)ZwQueryVirtualMemory, a2, a3);
  v11 = 0x4000LL;
  while ( 1 )
  {
    v10 = 0LL;
    VirtualMemory = ZwAllocateVirtualMemory();
    if ( VirtualMemory >= 0 )
      break;
    v11 -= 4096LL;
    if ( !v11 )
      goto LABEL_7;
  }
  v12 = 0;
  *(_DWORD *)(v10 + 4) = 0;
LABEL_7:
  if ( VirtualMemory < 0 )
    return PsspCaptureVaSpaceInformation2(a1, a2, (unsigned int)ZwQueryVirtualMemory, a2, a3);
  v9 = a2;
  v7 = PsspCaptureVaSpaceInformation2(a1, a2, (unsigned int)PsspQueryVmBulkMode, (unsigned int)&v9, a3);
  ZwFreeVirtualMemory();
  return v7;
}
