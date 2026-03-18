/*
 * XREFs of HalpInterruptFindLinesForGsiRange @ 0x140375D78
 * Callers:
 *     HalDisableInterrupt @ 0x140374050 (HalDisableInterrupt.c)
 *     HalpInterruptGetApicVersion @ 0x140375370 (HalpInterruptGetApicVersion.c)
 *     HalpInterruptApplyOverrides @ 0x140375BF4 (HalpInterruptApplyOverrides.c)
 *     HalpInterruptGsiToLine @ 0x140375D2C (HalpInterruptGsiToLine.c)
 *     HalpUnmaskInterrupt @ 0x1403891A0 (HalpUnmaskInterrupt.c)
 *     HalpMaskInterrupt @ 0x1403A3B50 (HalpMaskInterrupt.c)
 *     HalpInterruptRegisterLine @ 0x1403A7B80 (HalpInterruptRegisterLine.c)
 *     HalpInterruptRequestInterrupt @ 0x1404B7190 (HalpInterruptRequestInterrupt.c)
 *     HalpInterruptPerformDirectedEndOfInterrupt @ 0x1404B8568 (HalpInterruptPerformDirectedEndOfInterrupt.c)
 *     HalpInterruptServiceActiveBoth @ 0x1404B85DC (HalpInterruptServiceActiveBoth.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall HalpInterruptFindLinesForGsiRange(unsigned int a1, unsigned int a2)
{
  ULONG_PTR *v2; // r8
  ULONG_PTR *v5; // r11
  _QWORD **v6; // r11
  _QWORD *v7; // r9
  _DWORD *v8; // r10
  unsigned int v9; // edx
  unsigned int v10; // eax

  v2 = (ULONG_PTR *)HalpRegisteredInterruptControllers;
  while ( v2 != &HalpRegisteredInterruptControllers )
  {
    v5 = v2;
    v2 = (ULONG_PTR *)*v2;
    v6 = (_QWORD **)(v5 + 30);
    v7 = *v6;
    while ( v7 != v6 )
    {
      v8 = v7;
      v7 = (_QWORD *)*v7;
      v9 = v8[7];
      if ( v9 != -1 )
      {
        if ( v9 >= a1 && v9 < a2 )
          return v8;
        v10 = v8[6] - v8[5] + v9 - 1;
        if ( v10 < a2 && v10 >= a1 )
          return v8;
        if ( v9 < a1 && v10 >= a2 )
          return v8;
      }
    }
  }
  return 0LL;
}
