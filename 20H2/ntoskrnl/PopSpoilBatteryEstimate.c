/*
 * XREFs of PopSpoilBatteryEstimate @ 0x14077D828
 * Callers:
 *     PopSpoilEstimatesOnPowerStateTransitionWorker @ 0x140776690 (PopSpoilEstimatesOnPowerStateTransitionWorker.c)
 *     PopUpdateConsoleDisplayState @ 0x14077D704 (PopUpdateConsoleDisplayState.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140244AF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     DbgPrintEx @ 0x14037EFE0 (DbgPrintEx.c)
 *     PopBatteryQueueWork @ 0x14039A64C (PopBatteryQueueWork.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall PopSpoilBatteryEstimate(int a1, unsigned __int8 a2)
{
  int v2; // edi
  unsigned int v4; // r8d
  const char *v5; // r9
  NTSTATUS result; // eax
  int v7; // [rsp+30h] [rbp-68h] BYREF
  int v8; // [rsp+34h] [rbp-64h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+40h] [rbp-58h] BYREF
  int *v10; // [rsp+60h] [rbp-38h]
  int v11; // [rsp+68h] [rbp-30h]
  int v12; // [rsp+6Ch] [rbp-2Ch]
  int *v13; // [rsp+70h] [rbp-28h]
  int v14; // [rsp+78h] [rbp-20h]
  int v15; // [rsp+7Ch] [rbp-1Ch]

  if ( a1 < 2 )
  {
    v2 = a2;
    v4 = (unsigned __int8)(1 << a1);
    if ( a2 )
      _InterlockedOr(&PopEstimateSpoilerMask, v4);
    else
      _InterlockedAnd(&PopEstimateSpoilerMask, ~v4);
    PopBatteryQueueWork(4u);
    v5 = "indefinitely";
    if ( !(_BYTE)v2 )
      v5 = "temporarily";
    result = DbgPrintEx(0x92u, 3u, "Battery estimates spoiled %s by %d; mask=%x\n", v5, a1, PopEstimateSpoilerMask);
    if ( (unsigned int)dword_140C021E8 > 5 )
    {
      v12 = 0;
      v15 = 0;
      v10 = &v7;
      v7 = v2;
      v13 = &v8;
      v11 = 4;
      v8 = a1;
      v14 = 4;
      return tlgWriteTransfer_EtwWriteTransfer(
               (__int64)&dword_140C021E8,
               (unsigned __int8 *)byte_1400288F8,
               0LL,
               0LL,
               4u,
               &v9);
    }
  }
  return result;
}
