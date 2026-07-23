/*
 * XREFs of @RtlpProtectBlock@8 @ 0x4B370C9F
 * Callers:
 *     @RtlpSubSegmentDebugInitialize@28 @ 0x4B370CFD (@RtlpSubSegmentDebugInitialize@28.c)
 * Callees:
 *     _ZwProtectVirtualMemory@20 @ 0x4B2F2E80 (_ZwProtectVirtualMemory@20.c)
 */

NTSTATUS __fastcall RtlpProtectBlock(int a1, int a2)
{
  NTSTATUS result; // eax
  int v3; // eax
  ULONG OldProtect; // [esp+0h] [ebp-18h] BYREF
  ULONG v5; // [esp+4h] [ebp-14h] BYREF
  PVOID v6; // [esp+8h] [ebp-10h] BYREF
  ULONG_PTR RegionSize; // [esp+Ch] [ebp-Ch] BYREF
  int v8; // [esp+14h] [ebp-4h] BYREF

  result = *(unsigned __int16 *)(a1 + 22);
  if ( (result & 1) != 0 )
  {
    v3 = *(unsigned __int16 *)(a1 + 20);
    v8 = 4096;
    HIDWORD(RegionSize) = a2 + 8 * v3;
    return ZwProtectVirtualMemory((HANDLE)0xFFFFFFFF, (PVOID *)&RegionSize + 1, (PSIZE_T)&v8, 1u, &v5);
  }
  else if ( (result & 2) != 0 )
  {
    LODWORD(RegionSize) = 4096;
    v6 = (PVOID)(a2 - 4096);
    return ZwProtectVirtualMemory((HANDLE)0xFFFFFFFF, &v6, &RegionSize, 1u, &OldProtect);
  }
  return result;
}
