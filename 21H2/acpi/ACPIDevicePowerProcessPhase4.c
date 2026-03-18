/*
 * XREFs of ACPIDevicePowerProcessPhase4 @ 0x1C0022A98
 * Callers:
 *     ACPIDevicePowerDpc @ 0x1C000F880 (ACPIDevicePowerDpc.c)
 * Callees:
 *     WPP_RECORDER_SF_qLqss @ 0x1C0003A80 (WPP_RECORDER_SF_qLqss.c)
 *     ACPIDeviceCompleteRequest @ 0x1C000AA40 (ACPIDeviceCompleteRequest.c)
 *     WPP_RECORDER_SF_ @ 0x1C00234AC (WPP_RECORDER_SF_.c)
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
  PVOID v10; // rax
  const char *v11; // r8
  const char *v12; // rdx
  __int64 v13; // rcx
  __int64 *v14; // [rsp+80h] [rbp+8h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      4,
      10,
      72,
      (__int64)&WPP_a8f7cd0141bb322231380cc24ac7ac02_Traceguids);
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
      v14 = v1 + 6;
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
                v11 = (const char *)&unk_1C006FB8B;
                v12 = (const char *)&unk_1C006FB8B;
                if ( v9 )
                {
                  v10 = v8[5];
                  v13 = v9[1];
                  if ( (v13 & 0x200000000000LL) != 0 )
                  {
                    v11 = (const char *)*((_QWORD *)v10 + 76);
                    if ( (v13 & 0x400000000000LL) != 0 )
                      v12 = (const char *)*((_QWORD *)v10 + 77);
                  }
                }
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_SF_qLqss(
                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                    4u,
                    0xAu,
                    0x49u,
                    (__int64)&WPP_a8f7cd0141bb322231380cc24ac7ac02_Traceguids,
                    (char)v8,
                    33,
                    (char)v10,
                    v11,
                    v12);
                *((_DWORD *)v8 + 64) = -1072431071;
                ACPIDeviceCompleteRequest((struct _SLIST_ENTRY *)v8);
              }
            }
            while ( v7 != &AcpiPowerPhase4List );
            v3 = v14;
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
