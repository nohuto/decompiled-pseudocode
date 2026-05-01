/*
 * XREFs of McGenEventRegister_EventRegister @ 0x18013DCFC
 * Callers:
 *     DllMain @ 0x180092348 (DllMain.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall McGenEventRegister_EventRegister(__int64 a1, __int64 a2, void *a3, ULONGLONG *a4)
{
  ULONG result; // eax

  result = 0;
  if ( !*a4 )
    return EventRegister(&MICROSOFT_TWINUI_PUBLISHER, (PENABLECALLBACK)McGenControlCallbackV2, a3, a4);
  return result;
}
