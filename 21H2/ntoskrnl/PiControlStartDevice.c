/*
 * XREFs of PiControlStartDevice @ 0x1408B3D20
 * Callers:
 *     <none>
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140252870 (PiControlFreeUserModeCallersBuffer.c)
 *     PiControlMakeUserModeCallersCopy @ 0x14062A4E0 (PiControlMakeUserModeCallersCopy.c)
 *     PiQueueDeviceRequest @ 0x14072F3E4 (PiQueueDeviceRequest.c)
 */

__int64 __fastcall PiControlStartDevice(__int64 a1, void **a2, __int64 a3, char a4)
{
  unsigned int v4; // ecx
  int UserModeCallersCopy; // ebx
  __int64 v7; // r8
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF

  v4 = *(unsigned __int16 *)a2;
  v9 = 0LL;
  WORD1(v9) = v4;
  LOWORD(v9) = v4;
  if ( (unsigned __int16)(v4 - 1) > 0x18Fu || (v4 & 1) != 0 )
    return 3221225485LL;
  UserModeCallersCopy = PiControlMakeUserModeCallersCopy((void **)&v9 + 1, a2[1], v4, 2u, a4, 1);
  if ( UserModeCallersCopy >= 0 )
  {
    UserModeCallersCopy = PiQueueDeviceRequest((__int64)&v9, 16, v7, 1, 0LL);
    PiControlFreeUserModeCallersBuffer(a4, *((void **)&v9 + 1));
  }
  return (unsigned int)UserModeCallersCopy;
}
