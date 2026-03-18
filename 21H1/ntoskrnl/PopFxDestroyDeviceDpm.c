/*
 * XREFs of PopFxDestroyDeviceDpm @ 0x1403C91E8
 * Callers:
 *     PopFxUnregisterDevice @ 0x14079C1FC (PopFxUnregisterDevice.c)
 *     PoFxUnregisterDevice @ 0x1407BF030 (PoFxUnregisterDevice.c)
 * Callees:
 *     IoFreeIrp @ 0x1402541B0 (IoFreeIrp.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     PopFxDestroyDeviceCommon @ 0x1403C9340 (PopFxDestroyDeviceCommon.c)
 *     Feature_Servicing_27169067__private_IsEnabled @ 0x1403F0FA0 (Feature_Servicing_27169067__private_IsEnabled.c)
 *     PopFxReleaseAcpiRefDevice @ 0x14056689C (PopFxReleaseAcpiRefDevice.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopFxDestroyDeviceDpm(__int64 a1, __int64 a2)
{
  void *v4; // rcx
  void *v5; // rcx
  IRP *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rbp
  void *v11; // rcx
  __int64 v12; // rdi
  signed __int32 v13; // eax
  signed __int32 v14; // ett

  v4 = *(void **)(a2 + 104);
  if ( v4 )
    ObfDereferenceObjectWithTag(v4, 0x78466F50u);
  v5 = *(void **)(a2 + 96);
  if ( v5 )
    ObfDereferenceObjectWithTag(v5, 0x78466F50u);
  if ( a1 )
    ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 32), 0x78466F50u);
  v6 = *(IRP **)(a2 + 16);
  if ( v6 )
    IoFreeIrp(v6);
  v7 = *(void **)(a2 + 1200);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x4D584650u);
  v8 = *(void **)(a2 + 832);
  if ( v8 )
  {
    v9 = 0LL;
    if ( *(_DWORD *)(a2 + 828) )
    {
      do
      {
        v10 = *(_QWORD *)(*(_QWORD *)(a2 + 832) + 8 * v9);
        v11 = *(void **)(v10 + 424);
        if ( v11 )
        {
          ExFreePoolWithTag(v11, 0x4D584650u);
          *(_QWORD *)(v10 + 424) = 0LL;
        }
        v9 = (unsigned int)(v9 + 1);
      }
      while ( (unsigned int)v9 < *(_DWORD *)(a2 + 828) );
      v8 = *(void **)(a2 + 832);
    }
    ExFreePoolWithTag(v8, 0x4D584650u);
    *(_QWORD *)(a2 + 832) = 0LL;
  }
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_QWORD *)(a2 + 64) = 0LL;
  *(_QWORD *)(a2 + 72) = 0LL;
  if ( a1 )
  {
    v12 = a1 + 296;
    _InterlockedAnd((volatile signed __int32 *)(a1 + 296), 0xFFFFFFBF);
  }
  else
  {
    v12 = 296LL;
  }
  if ( (unsigned int)Feature_Servicing_27169067__private_IsEnabled() )
    return PopFxDestroyDeviceCommon((PVOID)a2);
  if ( !a1 )
    return PopFxDestroyDeviceCommon((PVOID)a2);
  _m_prefetchw((const void *)v12);
  v13 = *(_DWORD *)v12;
  do
  {
    v14 = v13;
    v13 = _InterlockedCompareExchange((volatile signed __int32 *)v12, v13 & 0xFFFFBFFF, v13);
  }
  while ( v14 != v13 );
  if ( (v13 & 0x4000) != 0 )
    return PopFxReleaseAcpiRefDevice(a2);
  else
    return PopFxDestroyDeviceCommon((PVOID)a2);
}
