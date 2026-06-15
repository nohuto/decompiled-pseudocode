/*
 * XREFs of ?Callback@AudioSrvPolicyManagerTelemetryProvider@@CAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x18000A540
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x180032A0C (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 */

void __fastcall AudioSrvPolicyManagerTelemetryProvider::Callback(const struct _GUID *a1, int a2)
{
  _QWORD v2[9]; // [rsp+20h] [rbp-48h] BYREF

  if ( (unsigned int)(a2 - 1) <= 1 )
  {
    v2[0] = off_180043130;
    v2[7] = v2;
    QueueGenericWorkItem(v2);
  }
}
