/*
 * XREFs of HvlLpGetMachineCheckContext @ 0x1404F5520
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     HvlpGetLogicalProcessorProperty @ 0x1404F2E88 (HvlpGetLogicalProcessorProperty.c)
 */

__int64 __fastcall HvlLpGetMachineCheckContext(int a1, _DWORD *a2, _QWORD *a3, _DWORD *a4)
{
  _QWORD v9[408]; // [rsp+20h] [rbp-CC8h] BYREF

  memset(v9, 0, 0xCB8uLL);
  if ( (int)HvlpGetLogicalProcessorProperty(a1, 4, v9) < 0 )
    return 3221225473LL;
  *a2 = v9[0];
  *a3 = v9[1];
  *a4 = v9[2];
  return 0LL;
}
