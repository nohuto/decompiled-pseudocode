/*
 * XREFs of HalpDpStartProcessor @ 0x1409A9984
 * Callers:
 *     HalpDpReplaceControl @ 0x1409A96B0 (HalpDpReplaceControl.c)
 * Callees:
 *     HalGetProcessorIdByNtNumber @ 0x1403770A0 (HalGetProcessorIdByNtNumber.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x1403A24C4 (HalpQueryMaximumRegisteredProcessorCount.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     HalpInterruptStartProcessor @ 0x14099AF74 (HalpInterruptStartProcessor.c)
 */

__int64 __fastcall HalpDpStartProcessor(ULONG_PTR BugCheckParameter2, _DWORD *a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // ebx
  __int64 v5; // r15
  ULONG_PTR MaximumRegisteredProcessorCount; // r14
  unsigned int v10; // ecx
  __int64 result; // rax
  ULONG_PTR BugCheckParameter3; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0;
  v5 = (unsigned int)BugCheckParameter2;
  LODWORD(BugCheckParameter3) = 0;
  MaximumRegisteredProcessorCount = (unsigned int)HalpQueryMaximumRegisteredProcessorCount();
  CurTiledCr3LowPart = *(_DWORD *)(HalpTiledCr3Addresses + 8 * v5 + 4);
  if ( HalGetProcessorIdByNtNumber(v5, &BugCheckParameter3) < 0 )
    KeBugCheckEx(0x5Cu, 0x2001uLL, (unsigned int)v5, (unsigned int)MaximumRegisteredProcessorCount, 0LL);
  v10 = 0;
  if ( a4 )
  {
    while ( *a2 != (_DWORD)BugCheckParameter3 )
    {
      ++v10;
      ++a2;
      if ( v10 >= a4 )
        goto LABEL_8;
    }
    v4 = *(_DWORD *)(a3 + 4LL * v10);
  }
LABEL_8:
  if ( v10 == a4 )
    KeBugCheckEx(0x5Cu, 0x2001uLL, (unsigned int)v5, (unsigned int)BugCheckParameter3, 1uLL);
  result = HalpInterruptStartProcessor(v5, v4, 3, (const void *)(HalpHiberProcState + 1472LL * (unsigned int)v5));
  if ( (_DWORD)result != 4 )
    KeBugCheckEx(0x5Cu, 0x2001uLL, (unsigned int)v5, MaximumRegisteredProcessorCount, 2uLL);
  return result;
}
