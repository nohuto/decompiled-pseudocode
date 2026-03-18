/*
 * XREFs of ACPIFilterIrpDeviceUsageNotificationCompletion @ 0x1C000E1B0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002980 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0002C90 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIInternalDecrementIrpReferenceCount @ 0x1C000E3B8 (ACPIInternalDecrementIrpReferenceCount.c)
 */

__int64 __fastcall ACPIFilterIrpDeviceUsageNotificationCompletion(ULONG_PTR a1, __int64 a2)
{
  __int64 DeviceExtension; // rbx
  __int64 v5; // rdi
  int v6; // r14d
  const char *v7; // rax
  char v8; // r8
  const char *v9; // rdx
  __int64 v10; // rcx
  char v11; // al
  int v13; // edx
  unsigned int v14; // edx

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(v5 + 3) |= 1u;
  v6 = *(_DWORD *)(a2 + 48);
  v7 = (const char *)&unk_1C00701BA;
  v8 = 0;
  v9 = (const char *)&unk_1C00701BA;
  if ( DeviceExtension )
  {
    v10 = *(_QWORD *)(DeviceExtension + 8);
    v8 = DeviceExtension;
    if ( (v10 & 0x200000000000LL) != 0 )
    {
      v7 = *(const char **)(DeviceExtension + 568);
      if ( (v10 & 0x400000000000LL) != 0 )
        v9 = *(const char **)(DeviceExtension + 576);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0xCu,
      (__int64)&WPP_22c0b63b2f1d30c22e2e761bc8912dea_Traceguids,
      a2,
      off_1C007F0C0[0],
      v6,
      v8,
      v7,
      v9);
  if ( v6 >= 0 )
  {
    if ( *(_DWORD *)(v5 + 16) == 2 )
    {
      if ( *(_BYTE *)(v5 + 8) )
        _InterlockedIncrement((volatile signed __int32 *)(DeviceExtension + 696));
      else
        _InterlockedDecrement((volatile signed __int32 *)(DeviceExtension + 696));
    }
    if ( *(_DWORD *)(v5 + 16) == 1 )
    {
      if ( *(_BYTE *)(v5 + 8) )
        _InterlockedIncrement((volatile signed __int32 *)(DeviceExtension + 700));
      else
        _InterlockedDecrement((volatile signed __int32 *)(DeviceExtension + 700));
    }
    if ( *(_DWORD *)(v5 + 16) == 3 )
    {
      if ( *(_BYTE *)(v5 + 8) )
        _InterlockedIncrement((volatile signed __int32 *)(DeviceExtension + 704));
      else
        _InterlockedDecrement((volatile signed __int32 *)(DeviceExtension + 704));
    }
    v11 = *(_BYTE *)(v5 + 8);
    if ( v11 == 1 )
    {
      *(_DWORD *)(a1 + 48) &= ~0x2000u;
      v11 = *(_BYTE *)(v5 + 8);
    }
    if ( !v11 && (*(_BYTE *)(DeviceExtension + 8) & 0x40) != 0 )
    {
      v13 = *(_DWORD *)(a1 + 48);
      if ( (*(_DWORD *)(*(_QWORD *)(DeviceExtension + 736) + 48LL) & 0x2000) != 0 )
        v14 = v13 | 0x2000;
      else
        v14 = v13 & 0xFFFFDFFF;
      *(_DWORD *)(a1 + 48) = v14;
    }
    IoInvalidateDeviceState(*(PDEVICE_OBJECT *)(DeviceExtension + 744));
  }
  ACPIInternalDecrementIrpReferenceCount(DeviceExtension);
  return 0LL;
}
