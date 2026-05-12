/*
 * XREFs of StorpUninititalizePerUnitPerfTelemetry @ 0x1C001BDD4
 * Callers:
 *     RaidUnitFreeResources @ 0x1C0015704 (RaidUnitFreeResources.c)
 *     StorpInitializeUnitTelemetry @ 0x1C0018F2C (StorpInitializeUnitTelemetry.c)
 * Callees:
 *     <none>
 */

void __fastcall StorpUninititalizePerUnitPerfTelemetry(_QWORD *a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  v2 = (void *)a1[281];
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x65546152u);
    a1[281] = 0LL;
  }
  v3 = (void *)a1[283];
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x65546152u);
    a1[283] = 0LL;
  }
  v4 = (void *)a1[284];
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0x65546152u);
    a1[284] = 0LL;
  }
}
