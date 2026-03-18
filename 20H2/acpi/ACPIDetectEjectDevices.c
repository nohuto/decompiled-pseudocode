/*
 * XREFs of ACPIDetectEjectDevices @ 0x1C004F470
 * Callers:
 *     ACPIDockIrpQueryEjectRelations @ 0x1C00AB9F8 (ACPIDockIrpQueryEjectRelations.c)
 *     ACPIBusAndFilterIrpQueryEjectRelations @ 0x1C00AD690 (ACPIBusAndFilterIrpQueryEjectRelations.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0019748 (WPP_RECORDER_SF_qD.c)
 *     ACPIExtListTestElement @ 0x1C001A6A4 (ACPIExtListTestElement.c)
 *     ACPIExtListStartEnum @ 0x1C001AB38 (ACPIExtListStartEnum.c)
 *     ACPIExtListEnumNext @ 0x1C001AE90 (ACPIExtListEnumNext.c)
 *     memmove @ 0x1C0031EC0 (memmove.c)
 *     memset @ 0x1C0032180 (memset.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C004B9D4 (ACPIBuildMissingEjectionRelations.c)
 *     ACPIExtListIsMemberOfRelation @ 0x1C0054FA4 (ACPIExtListIsMemberOfRelation.c)
 *     ACPIDetectCouldExtensionBeInRelation @ 0x1C009DA84 (ACPIDetectCouldExtensionBeInRelation.c)
 */

__int64 __fastcall ACPIDetectEjectDevices(__int64 a1, PVOID *a2, __int64 a3)
{
  unsigned int *v3; // rdi
  unsigned int v4; // r14d
  __int64 v8; // r15
  char *i; // rax
  char *v10; // rbx
  int v11; // eax
  __int64 v12; // rcx
  PVOID *v13; // r12
  __int64 v14; // rcx
  bool v15; // zf
  unsigned int *PoolWithTag; // rax
  unsigned int *v17; // rsi
  unsigned int v19; // ebx
  char *j; // rax
  char *v21; // r15
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rax
  unsigned int v28; // ecx
  __int64 v29; // rbx
  PVOID *v30; // r14
  NTSTATUS v31; // eax
  __int64 v32; // rdx
  void *v33; // rcx
  __int64 v34; // [rsp+30h] [rbp-50h]
  __int64 v35; // [rsp+40h] [rbp-40h] BYREF
  __int64 v36; // [rsp+48h] [rbp-38h]
  PKSPIN_LOCK SpinLock; // [rsp+50h] [rbp-30h]
  KIRQL NewIrql[16]; // [rsp+58h] [rbp-28h]
  __int64 v39; // [rsp+68h] [rbp-18h]
  int v40; // [rsp+70h] [rbp-10h]
  int v41; // [rsp+74h] [rbp-Ch]
  __int64 v42; // [rsp+C0h] [rbp+40h] BYREF
  PVOID *v43; // [rsp+C8h] [rbp+48h]

  v43 = a2;
  *(_OWORD *)NewIrql = 0LL;
  v41 = 0;
  v3 = 0LL;
  v42 = 0LL;
  v4 = 0;
  ACPIBuildMissingEjectionRelations();
  if ( a2 && *a2 )
  {
    v4 = *(_DWORD *)*a2;
    v3 = (unsigned int *)*a2;
  }
  v36 = 0LL;
  v8 = a1 + 792;
  SpinLock = &AcpiDeviceTreeLock;
  v35 = a1 + 792;
  v39 = 808LL;
  v40 = 1;
  for ( i = ACPIExtListStartEnum((__int64)&v35); ; i = ACPIExtListEnumNext((__int64)&v35) )
  {
    v10 = i;
    if ( !ACPIExtListTestElement((__int64)&v35, 1) )
      break;
    if ( (*((_QWORD *)v10 + 1) & 0x2000000000002LL) == 0 )
    {
      if ( *((_QWORD *)v10 + 93) )
      {
        v11 = ACPIDetectCouldExtensionBeInRelation((_DWORD)v10, (_DWORD)v3, 0, 0, (__int64)&v42);
        if ( !v42 && v11 >= 0 )
        {
          v12 = *((_QWORD *)v10 + 93);
          if ( v12 )
          {
            if ( !(unsigned __int8)ACPIExtListIsMemberOfRelation(v12, v3) )
              ++v4;
          }
        }
      }
    }
  }
  v13 = v43;
  if ( a3 )
  {
    if ( (*(_QWORD *)(a3 + 8) & 0x2000000000002LL) == 0 )
    {
      v14 = *(_QWORD *)(a3 + 744);
      if ( v14 )
      {
        if ( !(unsigned __int8)ACPIExtListIsMemberOfRelation(v14, v3) )
          ++v4;
      }
    }
  }
  if ( v3 )
    v15 = v4 == *v3;
  else
    v15 = v4 == 0;
  if ( !v15 )
  {
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 8 * v4 + 8, 0x44706341u);
    v17 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    memset(PoolWithTag, 0, 8 * v4 + 8);
    if ( v3 )
    {
      memmove(v17 + 2, v3 + 2, 8LL * *v3);
      v19 = *v3;
    }
    else
    {
      v19 = 0;
    }
    v36 = 0LL;
    SpinLock = &AcpiDeviceTreeLock;
    v35 = v8;
    v39 = 808LL;
    v40 = 1;
    for ( j = ACPIExtListStartEnum((__int64)&v35); ; j = ACPIExtListEnumNext((__int64)&v35) )
    {
      v21 = j;
      if ( !ACPIExtListTestElement((__int64)&v35, v4 > v19) )
        break;
      if ( !v21 )
      {
        if ( v40 == 2 )
          KeReleaseSpinLock(SpinLock, NewIrql[0]);
        break;
      }
      if ( (*((_QWORD *)v21 + 1) & 0x202000000000002LL) == 0 )
      {
        v22 = *((_QWORD *)v21 + 93);
        if ( v22 )
        {
          if ( !(unsigned __int8)ACPIExtListIsMemberOfRelation(v22, v3) && v19 < v4 )
          {
            v24 = v19++;
            *(_QWORD *)&v17[2 * v24 + 2] = v23;
          }
        }
      }
    }
    if ( a3 )
    {
      if ( (*(_QWORD *)(a3 + 8) & 0x2000000000002LL) == 0 )
      {
        v25 = *(_QWORD *)(a3 + 744);
        if ( v25 )
        {
          if ( !(unsigned __int8)ACPIExtListIsMemberOfRelation(v25, v3) && v19 < v4 )
          {
            v27 = v19++;
            *(_QWORD *)&v17[2 * v27 + 2] = v26;
          }
        }
      }
    }
    *v17 = v19;
    if ( v3 )
      v28 = *v3;
    else
      v28 = 0;
    if ( v28 < v19 )
    {
      v29 = v19 - v28;
      v30 = (PVOID *)&v17[2 * v28 + 2];
      do
      {
        v31 = ObReferenceObjectByPointer(*v30, 0, 0LL, 0);
        if ( v31 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v34) = v31;
            WPP_RECORDER_SF_qD(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              0x16u,
              0xFu,
              (__int64)&WPP_c0e337b8db3d3f7e68015837118db5e6_Traceguids,
              *v30,
              v34);
          }
          v32 = --*v17;
          v33 = *(void **)&v17[2 * v32 + 2];
          *(_QWORD *)&v17[2 * v32 + 2] = *v30;
          *v30 = v33;
        }
        ++v30;
        --v29;
      }
      while ( v29 );
    }
    if ( v3 )
      ExFreePoolWithTag(*v13, 0);
    *v13 = v17;
  }
  return 0LL;
}
