/*
 * XREFs of UpdateGraphicsDeviceList @ 0x1C0053230
 * Callers:
 *     NtUserEnumDisplayDevices @ 0x1C00532A0 (NtUserEnumDisplayDevices.c)
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C00BBFE0 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 * Callees:
 *     DrvUpdateGraphicsDeviceList @ 0x1C00522D0 (DrvUpdateGraphicsDeviceList.c)
 *     UserIsWddmConnectedSession @ 0x1C0053270 (UserIsWddmConnectedSession.c)
 *     SafeEnableMDEV @ 0x1C00CB980 (SafeEnableMDEV.c)
 *     SafeDisableMDEV @ 0x1C00CBA00 (SafeDisableMDEV.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 (*__fastcall UpdateGraphicsDeviceList(int *a1, __int64 a2))(void)
{
  int v3; // ebx
  __int64 (*result)(void); // rax

  v3 = 0;
  result = (__int64 (*)(void))UserIsWddmConnectedSession(a1, a2);
  if ( (_DWORD)result )
  {
    result = (__int64 (*)(void))DrvUpdateGraphicsDeviceList(0);
    if ( !(_DWORD)result )
    {
      result = (__int64 (*)(void))SafeDisableMDEV(1LL);
      if ( (_DWORD)result )
      {
        DrvUpdateGraphicsDeviceList(1);
        SafeEnableMDEV(1LL);
        result = qword_1C0250538;
        if ( qword_1C0250538 )
          result = (__int64 (*)(void))qword_1C0250538();
        v3 = 1;
      }
    }
  }
  *a1 = v3;
  return result;
}
