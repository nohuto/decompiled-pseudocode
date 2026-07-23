/*
 * XREFs of HalpSfiTimerInitialize @ 0x1404D5AB0
 * Callers:
 *     HalpSfiTimerStop @ 0x1404D5C00 (HalpSfiTimerStop.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x1402CF130 (KeStallExecutionProcessor.c)
 *     HalMapIoSpace @ 0x1403AD060 (HalMapIoSpace.c)
 *     HalpUnmapVirtualAddress @ 0x1403BBA00 (HalpUnmapVirtualAddress.c)
 *     HalSetTimerProblem @ 0x1404D5840 (HalSetTimerProblem.c)
 */

__int64 __fastcall HalpSfiTimerInitialize(LARGE_INTEGER *a1)
{
  _DWORD *QuadPart; // rbx
  _DWORD *v3; // rax
  unsigned int v4; // ebx
  int v5; // edx
  unsigned int i; // esi
  unsigned int v7; // ebp
  unsigned int j; // esi
  unsigned __int64 v9; // rcx
  signed __int32 v11[10]; // [rsp+0h] [rbp-28h] BYREF

  QuadPart = (_DWORD *)a1[1].QuadPart;
  if ( QuadPart
    || (v3 = HalMapIoSpace(*a1, 0x14uLL, MmNonCached), a1[1].QuadPart = (LONGLONG)v3, (QuadPart = v3) != 0LL) )
  {
    for ( i = 0; i < 0x64; ++i )
    {
      if ( (QuadPart[4] & 1) == 0 )
        break;
      KeStallExecutionProcessor(0x32u);
    }
    if ( i != 100 )
    {
      QuadPart[2] = QuadPart[2] & 0xFFFFFFFA | 4;
      _InterlockedOr(v11, 0);
      *QuadPart = -1;
      _InterlockedOr(v11, 0);
      QuadPart[2] &= ~2u;
      _InterlockedOr(v11, 0);
      QuadPart[2] |= 5u;
      _InterlockedOr(v11, 0);
      v7 = QuadPart[1];
      for ( j = 0; j < 0x64; ++j )
      {
        if ( v7 > QuadPart[1] )
          break;
        KeStallExecutionProcessor(0x32u);
      }
      if ( j != 100 )
        return 0;
    }
    v5 = 2;
    v4 = -1073741823;
  }
  else
  {
    v4 = -1073741801;
    v5 = 1;
  }
  HalSetTimerProblem((__int64)a1, v5, 0);
  v9 = a1[1].QuadPart;
  if ( v9 )
  {
    HalpUnmapVirtualAddress(v9, 1LL, 0LL);
    a1[1].QuadPart = 0LL;
  }
  return v4;
}
