/*
 * XREFs of _RtlQueryAllFeatureConfigurations@16 @ 0x4B369640
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpFcBufferManagerDereferenceBuffers@8 @ 0x4B2E5160 (_RtlpFcBufferManagerDereferenceBuffers@8.c)
 *     _RtlpFcReferenceFeatureConfigurationBuffers@16 @ 0x4B2E5255 (_RtlpFcReferenceFeatureConfigurationBuffers@16.c)
 *     _RtlpFcQueryAllFeatureConfigurationsFromBufferSet@16 @ 0x4B3A1246 (_RtlpFcQueryAllFeatureConfigurationsFromBufferSet@16.c)
 */

int __thiscall RtlQueryAllFeatureConfigurations(void *this, int a2, _DWORD *a3, int a4, int a5)
{
  int AllFeatureConfigurationsFromBufferSet; // esi
  int v7; // [esp+0h] [ebp-10h]
  int v8[2]; // [esp+4h] [ebp-Ch] BYREF
  int v9; // [esp+Ch] [ebp-4h] BYREF

  v9 = 0;
  AllFeatureConfigurationsFromBufferSet = RtlpFcReferenceFeatureConfigurationBuffers((int)this, 1, v8, &v9);
  if ( AllFeatureConfigurationsFromBufferSet >= 0 )
  {
    AllFeatureConfigurationsFromBufferSet = RtlpFcQueryAllFeatureConfigurationsFromBufferSet(a4, a5);
    if ( AllFeatureConfigurationsFromBufferSet >= 0 )
    {
      if ( a3 )
      {
        *a3 = v8[0];
        a3[1] = v8[1];
      }
      AllFeatureConfigurationsFromBufferSet = 0;
    }
  }
  if ( v9 )
    RtlpFcBufferManagerDereferenceBuffers(v7, v8[0]);
  return AllFeatureConfigurationsFromBufferSet;
}
