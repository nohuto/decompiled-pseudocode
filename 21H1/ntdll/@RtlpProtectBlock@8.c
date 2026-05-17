/*
 * XREFs of @RtlpProtectBlock@8 @ 0x4B370C9F
 * Callers:
 *     @RtlpSubSegmentDebugInitialize@28 @ 0x4B370CFD (@RtlpSubSegmentDebugInitialize@28.c)
 * Callees:
 *     _ZwProtectVirtualMemory@20 @ 0x4B2F2E80 (_ZwProtectVirtualMemory@20.c)
 */

int __fastcall RtlpProtectBlock(int a1, int a2)
{
  int result; // eax
  int v3; // eax
  _BYTE v4[4]; // [esp+0h] [ebp-18h] BYREF
  _BYTE v5[4]; // [esp+4h] [ebp-14h] BYREF
  int v6; // [esp+8h] [ebp-10h] BYREF
  int v7; // [esp+Ch] [ebp-Ch] BYREF
  int v8; // [esp+10h] [ebp-8h] BYREF
  int v9; // [esp+14h] [ebp-4h] BYREF

  result = *(unsigned __int16 *)(a1 + 22);
  if ( (result & 1) != 0 )
  {
    v3 = *(unsigned __int16 *)(a1 + 20);
    v9 = 4096;
    v8 = a2 + 8 * v3;
    return ZwProtectVirtualMemory(-1, (int)&v8, (int)&v9, 1, (int)v5);
  }
  else if ( (result & 2) != 0 )
  {
    v7 = 4096;
    v6 = a2 - 4096;
    return ZwProtectVirtualMemory(-1, (int)&v6, (int)&v7, 1, (int)v4);
  }
  return result;
}
