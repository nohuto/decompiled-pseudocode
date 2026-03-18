/*
 * XREFs of UpdateGraphicsDeviceList @ 0x1C0093320
 * Callers:
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C004E1B0 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 *     NtUserEnumDisplayDevices @ 0x1C0093220 (NtUserEnumDisplayDevices.c)
 * Callees:
 *     UserIsWddmConnectedSession @ 0x1C0093360 (UserIsWddmConnectedSession.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C0093390 (DrvUpdateGraphicsDeviceList.c)
 *     SafeEnableMDEV @ 0x1C00CBEC0 (SafeEnableMDEV.c)
 *     SafeDisableMDEV @ 0x1C00CBF40 (SafeDisableMDEV.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall UpdateGraphicsDeviceList(int *a1))(_QWORD, _QWORD)
{
  int v2; // ebx
  __int64 (__fastcall *result)(_QWORD, _QWORD); // rax
  __int64 v4; // rdx
  __int64 v5; // rcx

  v2 = 0;
  result = (__int64 (__fastcall *)(_QWORD, _QWORD))UserIsWddmConnectedSession();
  if ( (_DWORD)result )
  {
    result = (__int64 (__fastcall *)(_QWORD, _QWORD))DrvUpdateGraphicsDeviceList(0LL);
    if ( !(_DWORD)result )
    {
      result = (__int64 (__fastcall *)(_QWORD, _QWORD))SafeDisableMDEV(1LL);
      if ( (_DWORD)result )
      {
        DrvUpdateGraphicsDeviceList(1LL);
        SafeEnableMDEV(1LL);
        result = qword_1C02584F8;
        if ( qword_1C02584F8 )
          result = (__int64 (__fastcall *)(_QWORD, _QWORD))qword_1C02584F8(v5, v4);
        v2 = 1;
      }
    }
  }
  *a1 = v2;
  return result;
}
