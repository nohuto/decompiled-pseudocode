/*
 * XREFs of ?Delete@CInputSink@@UEAAJPEAU_WIN32_DELETEMETHOD_PARAMETERS@@@Z @ 0x1C00B1060
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CInputSink::Delete(CInputSink *this, struct _WIN32_DELETEMETHOD_PARAMETERS *a2)
{
  char *v4; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+38h] [rbp-40h] BYREF
  char **v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+60h] [rbp-18h]
  int v8; // [rsp+64h] [rbp-14h]

  if ( (unsigned int)dword_1C0244A70 > 5 && tlgKeywordOn((__int64)&dword_1C0244A70, 4LL) )
  {
    v8 = 0;
    v4 = (char *)this - 24;
    v7 = 8;
    v6 = &v4;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C0244A70, (unsigned __int8 *)dword_1C021A92A, 0LL, 0LL, 3u, &v5);
  }
  if ( (**(unsigned __int8 (__fastcall ***)(CInputSink *, struct _WIN32_DELETEMETHOD_PARAMETERS *))this)(this, a2) )
    (*(void (__fastcall **)(CInputSink *))(*(_QWORD *)this + 8LL))(this);
  return 0LL;
}
