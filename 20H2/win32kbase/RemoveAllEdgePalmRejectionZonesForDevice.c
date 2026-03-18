/*
 * XREFs of RemoveAllEdgePalmRejectionZonesForDevice @ 0x1C01A8A00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x1C0008EE4 (-GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ.c)
 *     ?RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C01A866C (-RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 */

DelayZonePalmRejection *__fastcall RemoveAllEdgePalmRejectionZonesForDevice(void *a1)
{
  DelayZonePalmRejection *result; // rax
  unsigned int v3; // ebx

  result = DelayZonePalmRejection::GetInstance();
  v3 = 0;
  if ( result )
  {
    LOBYTE(v3) = DelayZonePalmRejection::RemoveEdgeZonesForDevice(result, a1) != 0;
    return (DelayZonePalmRejection *)v3;
  }
  return result;
}
