/*
 * XREFs of RaidCoalescingCallback @ 0x1C002F720
 * Callers:
 *     <none>
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C0011F5C (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x1C0018548 (RaidIsAdapterControlSupported.c)
 *     __security_check_cookie @ 0x1C001BE70 (__security_check_cookie.c)
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x1C00299A4 (McTemplateK0qqqqq_EtwWriteTransfer.c)
 *     RaidAdapterGetSystemPowerHint @ 0x1C002BCD0 (RaidAdapterGetSystemPowerHint.c)
 *     RaidAdapterGetSystemPowerResumeLatency @ 0x1C002BCF4 (RaidAdapterGetSystemPowerResumeLatency.c)
 */

__int64 __fastcall RaidCoalescingCallback(int a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int SystemPowerHint; // eax
  char SystemPowerResumeLatency; // al
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  char v11; // r9
  char v12; // r10
  unsigned __int8 v13; // r11
  char v14; // al
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  char v18; // r10
  unsigned __int8 v19; // r11
  unsigned __int64 v20; // rcx
  int v21; // [rsp+48h] [rbp-20h]
  int v22; // [rsp+48h] [rbp-20h]

  result = RaidIsAdapterControlSupported(a3, 12);
  if ( (_DWORD)result && *(_QWORD *)(a3 + 5096) && *(_QWORD *)(a3 + 5112) )
  {
    SystemPowerHint = RaidAdapterGetSystemPowerHint(a3);
    result = RaidAdapterGetSystemPowerResumeLatency(SystemPowerHint);
    if ( a1 == 1 )
    {
      *(_BYTE *)(a3 + 109) |= 1u;
      v21 = RaidAdapterGetSystemPowerHint(a3);
      SystemPowerResumeLatency = RaidAdapterGetSystemPowerResumeLatency(v21);
      if ( StorEtwLoggingEnabled )
      {
        if ( (v13 & (unsigned __int8)byte_1C0068841) != 0 )
          McTemplateK0qqqqq_EtwWriteTransfer(v9, v8, v10, *(_DWORD *)(a3 + 56), v10, v12, v11, SystemPowerResumeLatency);
      }
      RaCallMiniportAdapterControl(a3 + 304);
      result = MEMORY[0xFFFFF78000000008];
      *(_QWORD *)(a3 + 5352) = MEMORY[0xFFFFF78000000008];
    }
    else if ( a1 == 2 )
    {
      *(_BYTE *)(a3 + 109) &= ~1u;
      v22 = RaidAdapterGetSystemPowerHint(a3);
      v14 = RaidAdapterGetSystemPowerResumeLatency(v22);
      if ( StorEtwLoggingEnabled && (v19 & (unsigned __int8)byte_1C0068841) != 0 )
        McTemplateK0qqqqq_EtwWriteTransfer(v16, v15, v17, *(_DWORD *)(a3 + 56), v17, v18, v15, v14);
      result = RaCallMiniportAdapterControl(a3 + 304);
      if ( *(_QWORD *)(a3 + 5352) )
      {
        v20 = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a3 + 5352);
        result = 0x346DC5D63886594BLL * v20;
        *(_QWORD *)(a3 + 5360) += v20 / 0x2710;
        *(_QWORD *)(a3 + 5352) = 0LL;
      }
    }
  }
  return result;
}
