/*
 * XREFs of RtlSetFeatureConfigurations @ 0x180101CD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     ZwSetSystemInformation @ 0x1800A0B70 (ZwSetSystemInformation.c)
 *     memmove @ 0x1800A4480 (memmove.c)
 */

NTSTATUS __cdecl RtlSetFeatureConfigurations(
        PRTL_FEATURE_CHANGE_STAMP PreviousChangeStamp,
        RTL_FEATURE_CONFIGURATION_TYPE ConfigurationType,
        PRTL_FEATURE_CONFIGURATION_UPDATE ConfigurationUpdates,
        SIZE_T ConfigurationUpdateCount)
{
  int v7; // ebx
  unsigned __int64 v8; // rbx
  int v9; // ebp
  char *Heap; // rax
  void *v11; // rdi

  if ( ConfigurationUpdateCount > 0xFFFFFFFF )
    return -1073741811;
  v8 = 32LL * (unsigned int)ConfigurationUpdateCount;
  v9 = ConfigurationUpdateCount;
  if ( v8 > 0xFFFFFFFF )
    return -1073741675;
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)(v8 + 16));
  v11 = Heap;
  if ( !Heap )
    return -1073741670;
  *((_DWORD *)Heap + 2) = ConfigurationType;
  if ( PreviousChangeStamp )
    *(_QWORD *)Heap = *PreviousChangeStamp;
  *((_DWORD *)Heap + 3) = v9;
  memmove(Heap + 16, ConfigurationUpdates, (unsigned int)v8);
  v7 = ZwSetSystemInformation(SystemFeatureConfigurationInformation, v11, v8 + 16);
  if ( v7 >= 0 )
    v7 = 0;
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
  return v7;
}
