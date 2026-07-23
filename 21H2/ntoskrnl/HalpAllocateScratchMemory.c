/*
 * XREFs of HalpAllocateScratchMemory @ 0x1409B6E90
 * Callers:
 *     HalpKdSetupDebuggingDevice @ 0x1409B7480 (HalpKdSetupDebuggingDevice.c)
 * Callees:
 *     HalpMapPhysicalMemory64 @ 0x1403EFFF0 (HalpMapPhysicalMemory64.c)
 *     HalpAllocPhysicalMemory @ 0x140A65AC0 (HalpAllocPhysicalMemory.c)
 */

__int64 __fastcall HalpAllocateScratchMemory(__int64 a1, __int64 a2)
{
  unsigned int v3; // edx
  int v4; // eax
  unsigned int v5; // esi
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned __int64 v9; // rax
  int v10; // [rsp+38h] [rbp+10h] BYREF
  int v11; // [rsp+3Ch] [rbp+14h]

  v3 = *(_DWORD *)(a2 + 192);
  if ( v3 && !*(_QWORD *)(a2 + 184) )
  {
    if ( *(_QWORD *)(a2 + 176) )
    {
      v4 = *(_DWORD *)(a2 + 180);
    }
    else
    {
      v4 = -1;
      *(_QWORD *)(a2 + 176) = -1LL;
    }
    v11 = 0;
    if ( v4 )
      v10 = -1;
    else
      v10 = *(_DWORD *)(a2 + 176);
    v5 = (v3 >> 12) + ((v3 & 0xFFF) != 0);
    v6 = HalpAllocPhysicalMemory(a1, &v10, v5, 0LL);
    v7 = v6;
    if ( !v6 )
      return 3221225626LL;
    v9 = HalpMapPhysicalMemory64(v6, v5, 0, 4LL);
    *(_BYTE *)(a2 + 17) |= 1u;
    *(_QWORD *)(a2 + 184) = v9;
    *(_QWORD *)(a2 + 168) = v7;
  }
  return 0LL;
}
