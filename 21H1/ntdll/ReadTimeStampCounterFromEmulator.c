/*
 * XREFs of ReadTimeStampCounterFromEmulator @ 0x4B344841
 * Callers:
 *     _RtlQueryPerformanceCounter@4 @ 0x4B2DBC20 (_RtlQueryPerformanceCounter@4.c)
 * Callees:
 *     _RtlWow64GetProcessMachines@12 @ 0x4B2DBD70 (_RtlWow64GetProcessMachines@12.c)
 */

char __fastcall ReadTimeStampCounterFromEmulator(_DWORD *a1, char a2)
{
  int v4; // edx
  _DWORD *v6; // ecx
  _DWORD v7[2]; // [esp+8h] [ebp-14h] BYREF
  _DWORD *v8; // [esp+10h] [ebp-Ch]
  USHORT ProcessMachine; // [esp+14h] [ebp-8h] BYREF
  USHORT NativeMachine; // [esp+18h] [ebp-4h] BYREF

  v8 = a1;
  RtlWow64GetProcessMachines((HANDLE)0xFFFFFFFF, &ProcessMachine, &NativeMachine);
  if ( NativeMachine != 0xAA64 )
    return 0;
  v6 = v8;
  __asm { int     81h }
  *v8 = 43620;
  v6[1] = v4;
  if ( (a2 & 0x40) != 0 )
  {
    v8 = v7;
    __asm { int     81h }
    v7[0] = v7;
    v7[1] = v4;
    if ( (((unsigned __int8)v4 ^ (unsigned __int8)a1[1]) & 1) == 0 )
    {
      *a1 = v7[0];
      a1[1] = v4;
    }
  }
  return 1;
}
