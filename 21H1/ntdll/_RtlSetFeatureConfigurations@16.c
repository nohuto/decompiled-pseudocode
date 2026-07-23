/*
 * XREFs of _RtlSetFeatureConfigurations@16 @ 0x4B369740
 * Callers:
 *     <none>
 * Callees:
 *     _RtlULongPtrAdd@12 @ 0x4B2A9463 (_RtlULongPtrAdd@12.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlULongLongToUInt@12 @ 0x4B2E4CC8 (_RtlULongLongToUInt@12.c)
 *     _ZwSetSystemInformation@12 @ 0x4B2F4420 (_ZwSetSystemInformation@12.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

NTSTATUS __cdecl RtlSetFeatureConfigurations(
        PRTL_FEATURE_CHANGE_STAMP PreviousChangeStamp,
        RTL_FEATURE_CONFIGURATION_TYPE ConfigurationType,
        PRTL_FEATURE_CONFIGURATION_UPDATE ConfigurationUpdates,
        SIZE_T ConfigurationUpdateCount)
{
  NTSTATUS v4; // edi
  _DWORD *Heap; // esi
  SIZE_T v7; // [esp-4h] [ebp-18h]
  size_t v8; // [esp-4h] [ebp-18h]
  int Size; // [esp+Ch] [ebp-8h] BYREF
  ULONG Size_4; // [esp+10h] [ebp-4h] BYREF

  Size_4 = 16;
  v4 = RtlULongLongToUInt(
         &Size,
         32 * ConfigurationUpdateCount,
         (unsigned __int64)(unsigned int)ConfigurationUpdateCount >> 27);
  if ( v4 >= 0 )
  {
    v4 = RtlULongPtrAdd(0x10u, Size, (int *)&Size_4);
    if ( v4 >= 0 )
    {
      LODWORD(v7) = Size_4;
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v7);
      if ( Heap )
      {
        Heap[2] = ConfigurationType;
        if ( PreviousChangeStamp )
          *(_QWORD *)Heap = *PreviousChangeStamp;
        LODWORD(v8) = Size;
        Heap[3] = ConfigurationUpdateCount;
        memcpy(Heap + 4, ConfigurationUpdates, v8);
        v4 = ZwSetSystemInformation(SystemFeatureConfigurationInformation, Heap, Size_4);
        if ( v4 >= 0 )
          v4 = 0;
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      }
      else
      {
        return -1073741670;
      }
    }
  }
  return v4;
}
