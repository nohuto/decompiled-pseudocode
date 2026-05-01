/*
 * XREFs of ?HampAppInfoValidateAndCapture@@YAJPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z @ 0x1800375A4
 * Callers:
 *     ?HamSrvGetApplicationInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z @ 0x180037448 (-HamSrvGetApplicationInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z.c)
 *     ?HamSrvTerminateApplicationForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKW4_HAM_TERMINATE_REASON@@@Z @ 0x18007AF20 (-HamSrvTerminateApplicationForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKW4_HAM_TERMINATE_REASO.c)
 * Callees:
 *     ?HampAppInfoInitialize@@YAXPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z @ 0x1800268E4 (-HampAppInfoInitialize@@YAXPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z.c)
 *     ?HampAppInfoValidate@@YAJPEBGPEAEKK@Z @ 0x180026A00 (-HampAppInfoValidate@@YAJPEBGPEAEKK@Z.c)
 */

__int64 __fastcall HampAppInfoValidateAndCapture(
        const unsigned __int16 *a1,
        unsigned __int8 *a2,
        unsigned int a3,
        int a4,
        struct _HAM_APPLICATION_INFO *a5)
{
  __int64 result; // rax

  result = HampAppInfoValidate(a1, a2, a3);
  if ( (int)result >= 0 )
  {
    HampAppInfoInitialize(a1, a2, a3, a4, a5);
    return 0LL;
  }
  return result;
}
