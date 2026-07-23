/*
 * XREFs of PiControlGetDeviceDepth @ 0x14061CB50
 * Callers:
 *     <none>
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140252870 (PiControlFreeUserModeCallersBuffer.c)
 *     PiGetDeviceDepth @ 0x14061CBF0 (PiGetDeviceDepth.c)
 *     PiControlMakeUserModeCallersCopy @ 0x14062A4E0 (PiControlMakeUserModeCallersCopy.c)
 */

__int64 __fastcall PiControlGetDeviceDepth(__int64 a1, unsigned __int16 *a2, __int64 a3, char a4)
{
  unsigned int v4; // ecx
  __int64 result; // rax
  unsigned int DeviceDepth; // ebx
  __int128 v10; // [rsp+30h] [rbp-18h] BYREF

  v4 = *a2;
  v10 = 0LL;
  WORD1(v10) = v4;
  LOWORD(v10) = v4;
  if ( (unsigned __int16)(v4 - 1) > 0x18Fu || (v4 & 1) != 0 )
    return 3221225485LL;
  result = PiControlMakeUserModeCallersCopy((char *)&v10 + 8, *((_QWORD *)a2 + 1), v4, 2LL, a4, 1);
  if ( (int)result >= 0 )
  {
    DeviceDepth = PiGetDeviceDepth(&v10, a2 + 8);
    PiControlFreeUserModeCallersBuffer(a4, *((void **)&v10 + 1));
    return DeviceDepth;
  }
  return result;
}
