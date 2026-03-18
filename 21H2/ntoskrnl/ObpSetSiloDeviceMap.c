/*
 * XREFs of ObpSetSiloDeviceMap @ 0x14082C6E0
 * Callers:
 *     ObpCreateDosDevicesDirectory @ 0x14082C49C (ObpCreateDosDevicesDirectory.c)
 * Callees:
 *     HalSystemVectorDispatchEntry @ 0x140203DC0 (HalSystemVectorDispatchEntry.c)
 *     PsGetEffectiveServerSilo @ 0x14020A3D0 (PsGetEffectiveServerSilo.c)
 *     ObpSetDeviceMap @ 0x14069B8FC (ObpSetDeviceMap.c)
 */

NTSTATUS __fastcall ObpSetSiloDeviceMap(__int64 a1, void *a2, __int64 *a3)
{
  void *EffectiveServerSilo; // rax
  PEPROCESS v7; // rdx
  char v8; // di

  EffectiveServerSilo = (void *)HalSystemVectorDispatchEntry();
  if ( (void *)a1 == EffectiveServerSilo )
  {
    v7 = PsInitialSystemProcess;
    v8 = 3;
  }
  else
  {
    v8 = 4;
    EffectiveServerSilo = (void *)PsGetEffectiveServerSilo(a1);
    v7 = 0LL;
  }
  return ObpSetDeviceMap(EffectiveServerSilo, (__int64)v7, a2, 0, v8, a3);
}
