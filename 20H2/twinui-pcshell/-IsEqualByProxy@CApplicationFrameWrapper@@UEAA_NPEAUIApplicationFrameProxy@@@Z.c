/*
 * XREFs of ?IsEqualByProxy@CApplicationFrameWrapper@@UEAA_NPEAUIApplicationFrameProxy@@@Z @ 0x180031390
 * Callers:
 *     CApplicationFrameService::_FindFrameWrapper__lambda_d5c7cbbc439aa6a2a7ca836937602fed___ @ 0x18003A2A4 (CApplicationFrameService--_FindFrameWrapper__lambda_d5c7cbbc439aa6a2a7ca836937602fed___.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CApplicationFrameWrapper::IsEqualByProxy(
        CApplicationFrameWrapper *this,
        struct IApplicationFrameProxy *a2)
{
  char v2; // bl
  struct IApplicationFrameProxy *v4; // rcx
  int (__fastcall **v5)(struct IApplicationFrameProxy *, GUID *, __int64 *); // rax
  int v6; // edi
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v4 = (CApplicationFrameWrapper *)((char *)this - 8);
  if ( v4 && a2 )
  {
    if ( v4 == a2 )
      return 1;
    v5 = *(int (__fastcall ***)(struct IApplicationFrameProxy *, GUID *, __int64 *))v4;
    v9 = 0LL;
    v8 = 0LL;
    if ( (*v5)(v4, &GUID_00000000_0000_0000_c000_000000000046, &v9) >= 0 )
    {
      v6 = (**(__int64 (__fastcall ***)(struct IApplicationFrameProxy *, GUID *, __int64 *))a2)(
             a2,
             &GUID_00000000_0000_0000_c000_000000000046,
             &v8);
      if ( v6 >= 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      if ( v6 >= 0 && v9 == v8 )
        return 1;
    }
  }
  return v2;
}
