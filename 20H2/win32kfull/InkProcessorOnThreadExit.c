/*
 * XREFs of InkProcessorOnThreadExit @ 0x1C00F81F0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnThreadExit@InkProcessor@@QEAAXPEBUtagTHREADINFO@@@Z @ 0x1C00F8240 (-OnThreadExit@InkProcessor@@QEAAXPEBUtagTHREADINFO@@@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C01D1B24 (_tlgWriteTransfer_EtwWriteTransfer.c)
 */

void __fastcall InkProcessorOnThreadExit(struct tagTHREADINFO *a1)
{
  int v1; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+38h] [rbp-40h] BYREF
  int *v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+60h] [rbp-18h]
  int v5; // [rsp+64h] [rbp-14h]

  if ( InkProcessor::s_pInstance )
  {
    InkProcessor::OnThreadExit(InkProcessor::s_pInstance, a1);
  }
  else if ( (unsigned int)dword_1C032A288 > 2 )
  {
    v5 = 0;
    v3 = &v1;
    v1 = -1073741823;
    v4 = 4;
    tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C032A288, (int)&dword_1C02F0A0C, 0, 0, 3u, &v2);
  }
}
