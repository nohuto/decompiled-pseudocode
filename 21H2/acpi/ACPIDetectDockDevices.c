/*
 * XREFs of ACPIDetectDockDevices @ 0x1C000A628
 * Callers:
 *     ACPIRootIrpQueryBusRelations @ 0x1C0091924 (ACPIRootIrpQueryBusRelations.c)
 * Callees:
 *     ACPIBuildPdo @ 0x1C0005FA8 (ACPIBuildPdo.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0007340 (WPP_RECORDER_SF_qD.c)
 *     ACPIExtListStartEnum @ 0x1C000990C (ACPIExtListStartEnum.c)
 *     ACPIExtListTestElement @ 0x1C000A7D4 (ACPIExtListTestElement.c)
 *     ACPIExtListEnumNext @ 0x1C000C1AC (ACPIExtListEnumNext.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0010020 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIGet @ 0x1C0010180 (ACPIGet.c)
 *     memmove @ 0x1C002FDC0 (memmove.c)
 *     ACPIExtListIsMemberOfRelation @ 0x1C0054864 (ACPIExtListIsMemberOfRelation.c)
 */

__int64 __fastcall ACPIDetectDockDevices(__int64 a1, PVOID *a2)
{
  char v2; // bl
  int v4; // esi
  unsigned int *v5; // r14
  unsigned int v6; // r15d
  __int64 i; // rax
  __int64 v8; // rdi
  bool v9; // zf
  __int64 v11; // rcx
  NTSTATUS v12; // eax
  void *v13; // rax
  void *v14; // rdx
  __int64 v15; // rcx
  __int64 Pool2; // rax
  _DWORD *v17; // rsi
  unsigned int v18; // edi
  __int64 j; // rax
  __int64 v20; // rdx
  __int64 v21; // r13
  __int64 v22; // rcx
  __int64 v23; // rcx
  unsigned int *v24; // r14
  unsigned int v25; // ecx
  PVOID *v26; // r12
  __int64 v27; // r13
  PVOID *v28; // r15
  NTSTATUS v29; // eax
  __int64 v30; // rdx
  void *v31; // rcx
  __int64 v32; // [rsp+30h] [rbp-49h]
  __int64 v33; // [rsp+40h] [rbp-39h]
  __int64 v34; // [rsp+50h] [rbp-29h] BYREF
  __int64 v35; // [rsp+58h] [rbp-21h]
  PKSPIN_LOCK SpinLock; // [rsp+60h] [rbp-19h]
  KIRQL NewIrql[16]; // [rsp+68h] [rbp-11h]
  __int64 v38; // [rsp+78h] [rbp-1h]
  int v39; // [rsp+80h] [rbp+7h]
  int v40; // [rsp+84h] [rbp+Bh]
  __int64 v41; // [rsp+E0h] [rbp+67h] BYREF
  PVOID *v42; // [rsp+E8h] [rbp+6Fh]
  unsigned int *v43; // [rsp+F0h] [rbp+77h]
  __int64 v44; // [rsp+F8h] [rbp+7Fh]

  v42 = a2;
  v2 = 0;
  v40 = 0;
  v43 = 0LL;
  v4 = 0;
  v41 = 0LL;
  v5 = 0LL;
  v6 = 0;
  *(_OWORD *)NewIrql = 0LL;
  if ( a2 && *a2 )
  {
    v6 = *(_DWORD *)*a2;
    v5 = (unsigned int *)*a2;
    v43 = (unsigned int *)*a2;
  }
  v35 = 0LL;
  v44 = a1 + 800;
  v34 = a1 + 800;
  SpinLock = &AcpiDeviceTreeLock;
  v38 = 816LL;
  v39 = 1;
  for ( i = ACPIExtListStartEnum((__int64)&v34); ; i = ACPIExtListEnumNext(&v34) )
  {
    v8 = i;
    if ( !(unsigned __int8)ACPIExtListTestElement(&v34, v4 >= 0) )
      break;
    if ( !v8 )
    {
      if ( v39 == 2 )
        KeReleaseSpinLock(SpinLock, NewIrql[0]);
      break;
    }
    if ( _bittest64((const signed __int64 *)(v8 + 8), 0x39u) )
    {
      v41 = 0LL;
      v4 = ACPIGet(v8, 1096045407, -1878783998, 0, 0, 0LL, 0LL, (__int64)&v41, 0LL);
      if ( (*(_QWORD *)(v8 + 8) & 0x2000000000002LL) == 0
        || (AcpiOverrideAttributes & 0x80000) != 0 && (*(_DWORD *)(v8 + 1000) & 0x200000) != 0 )
      {
        v11 = *(_QWORD *)(v8 + 768);
        if ( v11
          || (v12 = ACPIBuildPdo(
                      *(struct _DRIVER_OBJECT **)(*(_QWORD *)(a1 + 768) + 8LL),
                      v8,
                      *(struct _DEVICE_OBJECT **)(a1 + 768),
                      0),
              v11 = *(_QWORD *)(v8 + 768),
              v4 = v12,
              v11) )
        {
          if ( !(unsigned __int8)ACPIExtListIsMemberOfRelation(v11, v5) )
            ++v6;
        }
      }
    }
  }
  if ( v4 < 0 )
  {
    v13 = &unk_1C006FB8B;
    v14 = &unk_1C006FB8B;
    if ( v8 )
    {
      v15 = *(_QWORD *)(v8 + 8);
      v2 = v8;
      if ( (v15 & 0x200000000000LL) != 0 )
      {
        v13 = *(void **)(v8 + 608);
        if ( (v15 & 0x400000000000LL) != 0 )
          v14 = *(void **)(v8 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v33 = (__int64)v14;
      LOBYTE(v14) = 2;
      WPP_RECORDER_SF_Lqss(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v14,
        18,
        10,
        (__int64)&WPP_e848b9e179ab32f347f39b604d9f0dbd_Traceguids,
        v4,
        v2,
        (__int64)v13,
        v33);
    }
    return (unsigned int)v4;
  }
  else
  {
    if ( v5 )
      v9 = v6 == *v5;
    else
      v9 = v6 == 0;
    if ( v9 )
      return 0LL;
    Pool2 = ExAllocatePool2(64LL, 8 * v6 + 8, 1148216129LL);
    v17 = (_DWORD *)Pool2;
    if ( Pool2 )
    {
      if ( v5 )
      {
        memmove((void *)(Pool2 + 8), v5 + 2, 8LL * *v5);
        v18 = *v5;
      }
      else
      {
        v18 = 0;
      }
      v34 = v44;
      SpinLock = &AcpiDeviceTreeLock;
      v35 = 0LL;
      v38 = 816LL;
      v39 = 2;
      for ( j = ACPIExtListStartEnum((__int64)&v34); ; j = ACPIExtListEnumNext(&v34) )
      {
        v21 = j;
        LOBYTE(v20) = v6 > v18;
        if ( !(unsigned __int8)ACPIExtListTestElement(&v34, v20) )
          break;
        if ( v18 < v6 )
        {
          v22 = *(_QWORD *)(v21 + 8);
          if ( ((v22 & 0x2000000000002LL) == 0
             || (AcpiOverrideAttributes & 0x80000) != 0 && (*(_DWORD *)(v21 + 1000) & 0x200000) != 0)
            && (v22 & 0x200000000000000LL) != 0
            && *(_QWORD *)(v21 + 768) )
          {
            v23 = v18++;
            *(_QWORD *)&v17[2 * v23 + 2] = *(_QWORD *)(v21 + 784);
          }
        }
      }
      v24 = v43;
      *v17 = v18;
      if ( v24 )
        v25 = *v24;
      else
        v25 = 0;
      v26 = v42;
      if ( v25 < v18 )
      {
        v27 = v18 - v25;
        v28 = (PVOID *)&v17[2 * v25 + 2];
        do
        {
          v29 = ObReferenceObjectByPointer(*v28, 0, 0LL, 0);
          if ( v29 < 0 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v32) = v29;
              WPP_RECORDER_SF_qD(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                2u,
                0x15u,
                0xBu,
                (__int64)&WPP_e848b9e179ab32f347f39b604d9f0dbd_Traceguids,
                *v28,
                v32);
            }
            v30 = (unsigned int)--*v17;
            v31 = *(void **)&v17[2 * v30 + 2];
            *(_QWORD *)&v17[2 * v30 + 2] = *v28;
            *v28 = v31;
          }
          ++v28;
          --v27;
        }
        while ( v27 );
        v26 = v42;
      }
      if ( v24 )
        ExFreePoolWithTag(*v26, 0);
      *v26 = v17;
      return 0LL;
    }
    return 3221225626LL;
  }
}
