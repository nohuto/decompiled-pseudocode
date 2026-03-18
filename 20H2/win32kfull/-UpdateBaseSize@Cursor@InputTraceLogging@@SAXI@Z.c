/*
 * XREFs of ?UpdateBaseSize@Cursor@InputTraceLogging@@SAXI@Z @ 0x1C01D396C
 * Callers:
 *     ?RefreshSizes@CCursorSizes@@QEAAXXZ @ 0x1C0027F24 (-RefreshSizes@CCursorSizes@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C01D1B24 (_tlgWriteTransfer_EtwWriteTransfer.c)
 */

void __fastcall InputTraceLogging::Cursor::UpdateBaseSize(int a1)
{
  int v1; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+38h] [rbp-40h] BYREF
  int *v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+60h] [rbp-18h]
  int v5; // [rsp+64h] [rbp-14h]

  if ( (unsigned int)dword_1C032FB30 > 4 && (qword_1C032FB40 & 8) != 0 && (qword_1C032FB48 & 8) == qword_1C032FB48 )
  {
    v1 = a1;
    v3 = &v1;
    v5 = 0;
    v4 = 4;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C032FB30, (unsigned __int8 *)dword_1C02EED60, 0LL, 0LL, 3u, &v2);
  }
}
