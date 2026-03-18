/*
 * XREFs of DrvSetGraphicsDevices @ 0x1C00C1100
 * Callers:
 *     <none>
 * Callees:
 *     DrvUpdateGraphicsDeviceList @ 0x1C0093390 (DrvUpdateGraphicsDeviceList.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00C0A20 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall DrvSetGraphicsDevices(char *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 result; // rax

  StringCchCopyW((char *)qword_1C0253228, (unsigned int)dword_1C0253230, a1);
  if ( gProtocolType )
  {
    gcRemoteNextGlobalDeviceNumber = 0;
    gcRemoteNextMirrorDriverDeviceNumber = 0;
  }
  else
  {
    gcLocalNextGlobalDeviceNumber = 0;
  }
  result = DrvUpdateGraphicsDeviceList(1LL, v1, v2);
  if ( gpGdiSharedMemory )
    _InterlockedIncrement((volatile signed __int32 *)gpGdiSharedMemory + 393256);
  return result;
}
