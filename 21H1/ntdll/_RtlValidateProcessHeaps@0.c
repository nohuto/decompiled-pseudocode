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

char __stdcall RtlValidateProcessHeaps()
{
  char v0; // bl
  unsigned int ProcessHeaps; // eax
  int v2; // ecx
  unsigned int v3; // esi
  unsigned int i; // edi
  int v6; // [esp+Ch] [ebp-80Ch] BYREF
  _BYTE *v7; // [esp+10h] [ebp-808h] BYREF
  _BYTE v8[2048]; // [esp+14h] [ebp-804h] BYREF

  v0 = 1;
  v7 = v8;
  ProcessHeaps = RtlGetProcessHeaps(512, (int)v8);
  v3 = ProcessHeaps;
  if ( ProcessHeaps > 0x200 )
  {
    v7 = 0;
    v6 = 4 * ProcessHeaps;
    if ( NtAllocateVirtualMemory(-1, (int)&v7, 0, (int)&v6, 4096, 4) < 0 )
      return 0;
    v3 = RtlGetProcessHeaps(v3, (int)v7);
  }
  for ( i = 0; i < v3; ++i )
    v0 = RtlValidateHeap(*(_DWORD *)&v7[4 * i], 0, 0) ? v0 : 0;
  if ( v7 != v8 )
    RtlpSecMemFreeVirtualMemory(v2, &v7, &v6, 0x8000);
  return v0;
}
