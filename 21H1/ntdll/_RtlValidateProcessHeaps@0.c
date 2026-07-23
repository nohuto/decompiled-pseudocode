/*
 * XREFs of _RtlValidateProcessHeaps@0 @ 0x4B3574F0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlValidateHeap@12 @ 0x4B2A7420 (_RtlValidateHeap@12.c)
 *     _RtlpSecMemFreeVirtualMemory@16 @ 0x4B2AFA7A (_RtlpSecMemFreeVirtualMemory@16.c)
 *     _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0 (_NtAllocateVirtualMemory@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlGetProcessHeaps@8 @ 0x4B356960 (_RtlGetProcessHeaps@8.c)
 */

BOOLEAN RtlValidateProcessHeaps(void)
{
  BOOLEAN v0; // bl
  ULONG v1; // eax
  int v2; // ecx
  ULONG v3; // esi
  ULONG i; // edi
  ULONG_PTR v6; // [esp-10h] [ebp-828h]
  ULONG v7; // [esp+0h] [ebp-818h]
  ULONG_PTR v8; // [esp+Ch] [ebp-80Ch] BYREF
  PVOID ProcessHeaps[512]; // [esp+14h] [ebp-804h] BYREF

  v0 = 1;
  HIDWORD(v8) = ProcessHeaps;
  v1 = RtlGetProcessHeaps(0x200u, ProcessHeaps);
  v3 = v1;
  if ( v1 > 0x200 )
  {
    v8 = 4 * v1;
    HIDWORD(v6) = &v8;
    LODWORD(v6) = 0;
    if ( NtAllocateVirtualMemory((HANDLE)0xFFFFFFFF, (PVOID *)&v8 + 1, v6, (PSIZE_T)0x1000, 4u, v7) < 0 )
      return 0;
    v3 = RtlGetProcessHeaps(v3, (PVOID *)HIDWORD(v8));
  }
  for ( i = 0; i < v3; ++i )
    v0 &= -(RtlValidateHeap(*(PVOID *)(HIDWORD(v8) + 4 * i), 0, 0) != 0);
  if ( (PVOID *)HIDWORD(v8) != ProcessHeaps )
    RtlpSecMemFreeVirtualMemory(v2, (PVOID *)&v8 + 1, &v8, 0x8000u);
  return v0;
}
