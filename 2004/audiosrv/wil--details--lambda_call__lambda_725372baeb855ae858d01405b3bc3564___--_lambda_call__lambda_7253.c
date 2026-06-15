/*
 * XREFs of wil::details::lambda_call__lambda_725372baeb855ae858d01405b3bc3564___::_lambda_call__lambda_725372baeb855ae858d01405b3bc3564___ @ 0x18010F3F4
 * Callers:
 *     _PhoneCallAudio::StartSession_::_1_::dtor$2 @ 0x180110D79 (_PhoneCallAudio--StartSession_--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800CBCC4 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ?CleanupRouting@PhoneCallAudio@@AEAAJXZ @ 0x18010F670 (-CleanupRouting@PhoneCallAudio@@AEAAJXZ.c)
 */

PhoneCallAudio *__fastcall wil::details::lambda_call__lambda_725372baeb855ae858d01405b3bc3564___::_lambda_call__lambda_725372baeb855ae858d01405b3bc3564___(
        __int64 a1)
{
  PhoneCallAudio *result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    PhoneCallAudio::CleanupRouting(*(PhoneCallAudio **)a1);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 136LL) + 480LL))(
      *(_QWORD *)(*(_QWORD *)a1 + 136LL),
      0LL);
    wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)(*(_QWORD *)a1 + 136LL));
    result = *(PhoneCallAudio **)a1;
    *(_DWORD *)(*(_QWORD *)a1 + 68LL) = 0;
  }
  return result;
}
