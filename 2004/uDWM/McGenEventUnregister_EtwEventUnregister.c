/*
 * XREFs of McGenEventUnregister_EtwEventUnregister @ 0x18008D474
 * Callers:
 *     DllMain @ 0x1800558E8 (DllMain.c)
 * Callees:
 *     <none>
 */

__int64 McGenEventUnregister_EtwEventUnregister()
{
  __int64 result; // rax

  if ( !Microsoft_Windows_Dwm_Udwm_Provider_Context[0] )
    return 0LL;
  result = EtwEventUnregister(Microsoft_Windows_Dwm_Udwm_Provider_Context[0]);
  Microsoft_Windows_Dwm_Udwm_Provider_Context[0] = 0LL;
  return result;
}
