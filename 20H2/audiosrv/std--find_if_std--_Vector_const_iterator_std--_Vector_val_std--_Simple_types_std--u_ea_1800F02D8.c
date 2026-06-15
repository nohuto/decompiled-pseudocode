/*
 * XREFs of std::find_if_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient___________lambda_0960f3740b145ee4ec2f585e7c8d5cb2___ @ 0x1800F02D8
 * Callers:
 *     ?GetAppSubmixClientContextHelper@CProcessSubmixManager@@AEAAJKW4ProcessSubmixCapture@@PEBGPEAUIAudioProcess@@PEAPEAVCAppSubmixClient@@@Z @ 0x1800F09E8 (-GetAppSubmixClientContextHelper@CProcessSubmixManager@@AEAAJKW4ProcessSubmixCapture@@PEBGPEAUIA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

__int64 ***__fastcall std::find_if_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient___________lambda_0960f3740b145ee4ec2f585e7c8d5cb2___(
        __int64 ***a1,
        __int64 **a2,
        __int64 **a3,
        _QWORD *a4)
{
  __int64 **i; // r15
  __int64 v8; // r14
  int v9; // esi
  __int64 ***result; // rax

  for ( i = a2; i != a3; ++i )
  {
    v8 = **i;
    v9 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 40LL))(*a4);
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v8 + 40LL))(v8) == v9 )
      break;
  }
  result = a1;
  *a1 = i;
  return result;
}
