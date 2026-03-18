/*
 * XREFs of ?Delete@CInputSink@@UEAAJPEAU_WIN32_DELETEMETHOD_PARAMETERS@@@Z @ 0x1C0042F70
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CInputSink::Delete(
        CInputSink *this,
        struct _WIN32_DELETEMETHOD_PARAMETERS *a2,
        __int64 a3,
        __int64 a4)
{
  char *v6; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+38h] [rbp-40h] BYREF
  char **v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+60h] [rbp-18h]
  int v10; // [rsp+64h] [rbp-14h]

  if ( (unsigned int)dword_1C024C960 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 4LL, a3, a4) )
  {
    v10 = 0;
    v6 = (char *)this - 24;
    v9 = 8;
    v8 = &v6;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C024C960, (unsigned __int8 *)dword_1C0222343, 0LL, 0LL, 3u, &v7);
  }
  if ( (**(unsigned __int8 (__fastcall ***)(CInputSink *, struct _WIN32_DELETEMETHOD_PARAMETERS *))this)(this, a2) )
    (*(void (__fastcall **)(CInputSink *))(*(_QWORD *)this + 8LL))(this);
  return 0LL;
}
