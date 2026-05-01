/*
 * XREFs of HamRpcSrvGetApplicationInterruptiveUIState @ 0x180037400
 * Callers:
 *     <none>
 * Callees:
 *     ?HamSrvGetApplicationInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z @ 0x180037448 (-HamSrvGetApplicationInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z.c)
 */

__int64 __fastcall HamRpcSrvGetApplicationInterruptiveUIState(
        __int64 a1,
        const unsigned __int16 *a2,
        unsigned __int8 *a3,
        unsigned int a4,
        unsigned int a5,
        _BYTE *a6)
{
  __int64 result; // rax
  unsigned int v7[6]; // [rsp+30h] [rbp-18h] BYREF

  result = HamSrvGetApplicationInterruptiveUIState(
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
