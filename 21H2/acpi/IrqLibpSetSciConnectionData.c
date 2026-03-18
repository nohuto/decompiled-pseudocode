/*
 * XREFs of IrqLibpSetSciConnectionData @ 0x1C00BDF94
 * Callers:
 *     AcpiIrqLibSetupSciInterrupt @ 0x1C009D86C (AcpiIrqLibSetupSciInterrupt.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002F140 (__security_check_cookie.c)
 */

NTSTATUS __fastcall IrqLibpSetSciConnectionData(__int128 *a1, struct _DEVICE_OBJECT *a2)
{
  __int128 v2; // xmm0
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int64 Data; // [rsp+40h] [rbp-78h] BYREF
  __int128 v9; // [rsp+48h] [rbp-70h]
  __int128 v10; // [rsp+58h] [rbp-60h]
  __int128 v11; // [rsp+68h] [rbp-50h]
  __int128 v12; // [rsp+78h] [rbp-40h]
  __int128 v13; // [rsp+88h] [rbp-30h]
  __int64 v14; // [rsp+98h] [rbp-20h]

  v2 = *a1;
  Data = 1LL;
  v3 = a1[1];
  v9 = v2;
  v4 = a1[2];
  v10 = v3;
  v5 = a1[3];
  v11 = v4;
  v6 = a1[4];
  v12 = v5;
  *(_QWORD *)&v5 = *((_QWORD *)a1 + 10);
  v13 = v6;
  v14 = v5;
  return IoSetDevicePropertyData(a2, &INTERRUPT_CONNECTION_DATA_PKEY, 0, 0, 0x1003u, 0x60u, &Data);
}
