/*
 * XREFs of _xxxComputeInputSinkInfo@0 @ 0x151EE5
 * Callers:
 *     ?xxxRealSleepThread@@YGHIKHHPAW4SLEEP_STATUS@@@Z @ 0x45220 (-xxxRealSleepThread@@YGHIKHHPAW4SLEEP_STATUS@@@Z.c)
 *     _EditionHandleMitSignal@4 @ 0xAFAEE (_EditionHandleMitSignal@4.c)
 * Callees:
 *     _memset @ 0xF92A7 (_memset.c)
 */

void *__stdcall xxxComputeInputSinkInfo()
{
  void *result; // eax
  _BYTE v1[104]; // [esp+10h] [ebp-98h] BYREF
  _DWORD v2[12]; // [esp+78h] [ebp-30h] BYREF

  result = (void *)IsInputThread();
  if ( (_BYTE)result )
  {
    memset(&v2[1], 0, 16);
    memset(&v2[7], 0, 20);
    v2[0] = *((_DWORD *)&_gInputSinkInfoRetrieval + 3);
    v2[5] = *((_DWORD *)&_gInputSinkInfoRetrieval + 1);
    v2[6] = *((_DWORD *)&_gInputSinkInfoRetrieval + 2);
    result = (void *)DCompHitTest(v1, v2, 0, 0);
  }
  if ( !*((_DWORD *)&_gInputSinkInfoRetrieval + 4) )
  {
    result = memset(v1, 0, 0x64u);
    qmemcpy(_gInputSinkInfoRetrieval, v1, 0x64u);
  }
  if ( gbCompositionInputSinkQueryBlockedOnDIT )
    return (void *)KeSetEvent(gpkeDITCompositionInputSinkQueryResponseEvent, 1, 0);
  return result;
}
