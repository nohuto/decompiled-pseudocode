/*
 * XREFs of ?StartInContact@CScrollAnimation@@AEAAXXZ @ 0x180254860
 * Callers:
 *     ?CalculateInContactValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x180253F88 (-CalculateInContactValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180025194 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180074108 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CScrollAnimation::StartInContact(CScrollAnimation *this)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rcx
  CScrollAnimation *v5; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+38h] [rbp-40h] BYREF
  __int64 v7; // [rsp+48h] [rbp-30h]
  CScrollAnimation **v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+60h] [rbp-18h]
  int v10; // [rsp+64h] [rbp-14h]

  v2 = *(_QWORD *)(*((_QWORD *)this + 2) + 608LL);
  v7 = 0LL;
  v3 = *(_QWORD *)this;
  *((_OWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 45) = v2;
  *((_QWORD *)this + 56) = v7;
  (*(void (**)(void))(v3 + 336))();
  *((_DWORD *)this + 84) = 1;
  if ( (unsigned int)dword_1803D0EF0 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1803D0EF0, 2LL) )
    {
      v10 = 0;
      v8 = &v5;
      v5 = this;
      v9 = 8;
      tlgWriteTransfer_EventWriteTransfer(v4, (unsigned __int8 *)dword_18037242C, 0LL, 0LL, 3u, &v6);
    }
  }
}
