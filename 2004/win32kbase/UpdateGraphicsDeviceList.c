/*
 * XREFs of UpdateGraphicsDeviceList @ 0x1C00B4A30
 * Callers:
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C005BB70 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 *     NtUserEnumDisplayDevices @ 0x1C00B4930 (NtUserEnumDisplayDevices.c)
 * Callees:
 *     UserIsWddmConnectedSession @ 0x1C00B4A70 (UserIsWddmConnectedSession.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C00B4AA0 (DrvUpdateGraphicsDeviceList.c)
 *     SafeEnableMDEV @ 0x1C00CC770 (SafeEnableMDEV.c)
 *     SafeDisableMDEV @ 0x1C00CC7F0 (SafeDisableMDEV.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
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
        result = qword_1C0252538;
        if ( qword_1C0252538 )
          result = (__int64 (__fastcall *)(_QWORD, _QWORD))qword_1C0252538(v5, v4);
        v2 = 1;
      }
    }
  }
  *a1 = v2;
  return result;
}
