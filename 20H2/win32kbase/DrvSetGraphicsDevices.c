/*
 * XREFs of DrvSetGraphicsDevices @ 0x1C00979D0
 * Callers:
 *     <none>
 * Callees:
 *     DrvUpdateGraphicsDeviceList @ 0x1C00522D0 (DrvUpdateGraphicsDeviceList.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0097A34 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall DrvSetGraphicsDevices(unsigned __int16 *a1)
{
  __int64 result; // rax

  StringCchCopyW((unsigned __int16 *)qword_1C024B228, (unsigned int)dword_1C024B230, a1);
  if ( gProtocolType )
  {
    gcRemoteNextGlobalDeviceNumber = 0;
    gcRemoteNextMirrorDriverDeviceNumber = 0;
  }
  else
  {
    gcLocalNextGlobalDeviceNumber = 0;
  }
  result = DrvUpdateGraphicsDeviceList(1);
  if ( gpGdiSharedMemory )
    _InterlockedIncrement((volatile signed __int32 *)gpGdiSharedMemory + 393256);
  return result;
}
