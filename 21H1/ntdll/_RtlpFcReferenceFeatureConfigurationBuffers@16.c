/*
 * XREFs of _RtlpFcReferenceFeatureConfigurationBuffers@16 @ 0x4B2E5255
 * Callers:
 *     _RtlQueryFeatureConfiguration@16 @ 0x4B2E51D0 (_RtlQueryFeatureConfiguration@16.c)
 *     _RtlNotifyFeatureUsage@4 @ 0x4B3695D0 (_RtlNotifyFeatureUsage@4.c)
 *     _RtlQueryAllFeatureConfigurations@16 @ 0x4B369640 (_RtlQueryAllFeatureConfigurations@16.c)
 *     _RtlQueryFeatureUsageNotificationSubscriptions@8 @ 0x4B3696E0 (_RtlQueryFeatureUsageNotificationSubscriptions@8.c)
 * Callees:
 *     _RtlpFcUpdateLocalConfiguration@16 @ 0x4B2E4FCD (_RtlpFcUpdateLocalConfiguration@16.c)
 *     _RtlpFcBufferManagerDereferenceBuffers@8 @ 0x4B2E5160 (_RtlpFcBufferManagerDereferenceBuffers@8.c)
 *     _RtlpFcBufferManagerReferenceBuffers@12 @ 0x4B2E5302 (_RtlpFcBufferManagerReferenceBuffers@12.c)
 */

NTSTATUS __fastcall RtlpFcReferenceFeatureConfigurationBuffers(int a1, char a2, _DWORD *a3, _DWORD *a4)
{
  unsigned __int64 v5; // rdi
  void *v6; // edx
  NTSTATUS result; // eax
  int v8; // eax
  int v9; // [esp+0h] [ebp-18h]
  int v10; // [esp+4h] [ebp-14h]
  int v11; // [esp+Ch] [ebp-Ch] BYREF
  unsigned __int64 v12; // [esp+10h] [ebp-8h] BYREF
  int vars0; // [esp+18h] [ebp+0h]
  void *retaddr; // [esp+1Ch] [ebp+4h]

  v11 = 0;
  RtlpFcBufferManagerReferenceBuffers(&v11);
  while ( 1 )
  {
    v5 = MEMORY[0x7FFE0710];
    if ( MEMORY[0x7FFE0714] == MEMORY[0x7FFE0718] )
      break;
    _mm_pause();
  }
  v6 = (void *)HIDWORD(v12);
  if ( v12 < MEMORY[0x7FFE0710] )
  {
    RtlpFcBufferManagerDereferenceBuffers(v9, v10);
    HIDWORD(v12) = 0;
    result = RtlpFcUpdateLocalConfiguration(&RtlpFcProcessManager, a2, v5);
    if ( result < 0 )
      return result;
    RtlpFcBufferManagerReferenceBuffers((char *)&v12 + 4);
    v6 = retaddr;
  }
  *a3 = vars0;
  v8 = HIDWORD(v12);
  a3[1] = v6;
  *a4 = v8;
  return 0;
}
