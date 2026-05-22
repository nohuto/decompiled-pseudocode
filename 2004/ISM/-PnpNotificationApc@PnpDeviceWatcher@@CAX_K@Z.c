/*
 * XREFs of ?PnpNotificationApc@PnpDeviceWatcher@@CAX_K@Z @ 0x180033D40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PnpDeviceWatcher::PnpNotificationApc(__int64 *Parameter)
{
  __int64 v1; // rax
  __int64 **v2; // rdx

  v1 = Parameter[2] + 32;
  v2 = *(__int64 ***)(Parameter[2] + 40);
  if ( *v2 != (__int64 *)v1 )
    __fastfail(3u);
  *Parameter = v1;
  Parameter[1] = (__int64)v2;
  *v2 = Parameter;
  ++*(_QWORD *)(v1 + 16);
  *(_QWORD *)(v1 + 8) = Parameter;
}
