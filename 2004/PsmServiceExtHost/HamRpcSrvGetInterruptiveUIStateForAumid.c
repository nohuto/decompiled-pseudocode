/*
 * XREFs of HamRpcSrvGetInterruptiveUIStateForAumid @ 0x180080390
 * Callers:
 *     <none>
 * Callees:
 *     ?HamSrvGetInterruptiveUIStateForAumid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z @ 0x180079634 (-HamSrvGetInterruptiveUIStateForAumid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z.c)
 */

__int64 __fastcall HamRpcSrvGetInterruptiveUIStateForAumid(
        __int64 a1,
        const WCHAR *a2,
        void *a3,
        __int64 a4,
        unsigned int a5,
        _BYTE *a6)
{
  __int64 result; // rax
  unsigned int v7[6]; // [rsp+30h] [rbp-18h] BYREF

  result = HamSrvGetInterruptiveUIStateForAumid(
             (struct _RM_SERVICE_GLOBALS *)((char *)RmSvcGlobals + 1768),
             a2,
             a3,
             a4,
             a5,
             v7);
  if ( (int)result >= 0 )
  {
    *a6 = v7[0];
    return 0LL;
  }
  return result;
}
