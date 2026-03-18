/*
 * XREFs of DrvSetGraphicsDevices @ 0x1C005E570
 * Callers:
 *     <none>
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00A7BB0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C00B4AA0 (DrvUpdateGraphicsDeviceList.c)
 */

__int64 __fastcall DrvSetGraphicsDevices(unsigned __int16 *a1)
{
  __int64 result; // rax

  StringCchCopyW((unsigned __int16 *)qword_1C024D218, (unsigned int)dword_1C024D220, a1);
  if ( gProtocolType )
  {
    gcRemoteNextGlobalDeviceNumber = 0;
    gcRemoteNextMirrorDriverDeviceNumber = 0;
  }
  else
  {
    gcLocalNextGlobalDeviceNumber = 0;
  }
  result = DrvUpdateGraphicsDeviceList(1LL);
  if ( gpGdiSharedMemory )
    _InterlockedIncrement((volatile signed __int32 *)gpGdiSharedMemory + 393256);
  return result;
}
