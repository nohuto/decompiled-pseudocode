/*
 * XREFs of ACPIDevicePowerProcessPhase4 @ 0x1C002B774
 * Callers:
 *     ACPIDevicePowerDpc @ 0x1C001FDD0 (ACPIDevicePowerDpc.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C001D52C (WPP_RECORDER_SF_.c)
 *     ACPIDeviceCompleteRequest @ 0x1C001E888 (ACPIDeviceCompleteRequest.c)
 *     WPP_RECORDER_SF_qDqss @ 0x1C004E12C (WPP_RECORDER_SF_qDqss.c)
 */

__int64 ACPIDevicePowerProcessPhase4()
{
  __int64 *v0; // rdi
  __int64 *v1; // rcx
  __int64 *v3; // r14
  __int64 *v4; // rsi
  __int64 *v5; // rbx
  _QWORD *v6; // r15
  PVOID *v7; // rbx
  PVOID *v8; // rbp
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  void *v11; // r8
  void *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // [rsp+48h] [rbp-30h]
  __int64 *v15; // [rsp+80h] [rbp+8h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xAu,
      0x46u,
      (__int64)&WPP_095c070a05c4368bad966ca54a81e920_Traceguids);
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  v0 = (__int64 *)AcpiPowerNodeList;
  while ( v0 != &AcpiPowerNodeList )
  {
    v1 = v0;
    v0 = (__int64 *)*v0;
    if ( (v1[2] & 0x10000) != 0 )
    {
      if ( AcpiPowerPhase0List == &AcpiPowerPhase0List
        && (__int64 *)AcpiPowerPhase1List == &AcpiPowerPhase1List
        && (__int64 *)AcpiPowerPhase2List == &AcpiPowerPhase2List )
      {
        _InterlockedAnd64(v1 + 2, 0xFFFFFFFFFFFEFFFFuLL);
      }
      v3 = v1 + 6;
      v4 = (__int64 *)v1[6];
      v15 = v1 + 6;
      if ( v4 != v1 + 6 )
      {
        do
        {
          v5 = v4;
          v4 = (__int64 *)*v4;
          KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
          v6 = (_QWORD *)*(v5 - 1);
          v7 = (PVOID *)AcpiPowerPhase4List;
          if ( AcpiPowerPhase4List != &AcpiPowerPhase4List )
          {
            do
            {
              v8 = v7;
              v7 = (PVOID *)*v7;
              v9 = v8[5];
              if ( v9 == v6 )
              {
                LOBYTE(v10) = 0;
                v11 = &unk_1C00701BA;
                v12 = &unk_1C00701BA;
                if ( v9 )
                {
                  v10 = v8[5];
                  v13 = v9[1];
                  if ( (v13 & 0x200000000000LL) != 0 )
                  {
                    v11 = (void *)v10[71];
                    if ( (v13 & 0x400000000000LL) != 0 )
                      v12 = (void *)v10[72];
                  }
                }
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  v14 = (__int64)v12;
                  LOBYTE(v12) = 4;
                  WPP_RECORDER_SF_qDqss(
                    WPP_GLOBAL_Control->DeviceExtension,
                    (_DWORD)v12,
                    10,
                    71,
                    (__int64)&WPP_095c070a05c4368bad966ca54a81e920_Traceguids,
                    (char)v8,
                    33,
                    (char)v10,
                    (__int64)v11,
                    v14);
                }
                *((_DWORD *)v8 + 64) = -1072431071;
                ACPIDeviceCompleteRequest((struct _SLIST_ENTRY *)v8);
              }
            }
            while ( v7 != &AcpiPowerPhase4List );
            v3 = v15;
          }
          KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
        }
        while ( v4 != v3 );
      }
    }
  }
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  return 0LL;
}
