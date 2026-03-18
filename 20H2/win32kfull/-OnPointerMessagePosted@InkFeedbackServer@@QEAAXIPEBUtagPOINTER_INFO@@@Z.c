/*
 * XREFs of ?OnPointerMessagePosted@InkFeedbackServer@@QEAAXIPEBUtagPOINTER_INFO@@@Z @ 0x1C025384C
 * Callers:
 *     ?OnPointerMessagePosted@InkProcessor@@QEAAXI_K@Z @ 0x1C024F2E8 (-OnPointerMessagePosted@InkProcessor@@QEAAXI_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C01D1B24 (_tlgWriteTransfer_EtwWriteTransfer.c)
 */

void __fastcall InkFeedbackServer::OnPointerMessagePosted(
        InkFeedbackServer **this,
        int a2,
        const struct tagPOINTER_INFO *a3)
{
  InkFeedbackServer *i; // rbx
  int v6; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+38h] [rbp-40h] BYREF
  int *v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+60h] [rbp-18h]
  int v10; // [rsp+64h] [rbp-14h]

  if ( a2 == 583 || a2 == 594 )
  {
    if ( a3 )
    {
      for ( i = *this; i != (InkFeedbackServer *)this; i = *(InkFeedbackServer **)i )
        (*(void (__fastcall **)(__int64, _QWORD))(*((_QWORD *)i - 1) + 16LL))((__int64)i - 8, *((unsigned int *)a3 + 1));
    }
    else if ( (unsigned int)dword_1C032A288 > 2 )
    {
      v10 = 0;
      v8 = &v6;
      v6 = -1073741823;
      v9 = 4;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C032A288,
        (unsigned __int8 *)dword_1C02F0A0C,
        0LL,
        0LL,
        3u,
        &v7);
    }
  }
}
