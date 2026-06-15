/*
 * XREFs of std::find_if_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext___________lambda_a1b7f4c1e370eee7ceb304e65e8c3eda___ @ 0x1800710F8
 * Callers:
 *     ?GetAppSubmixClientContextHelper@CProcessSubmixManager@@AEAAJKW4ProcessSubmixCapture@@PEBGPEAUIAudioProcess@@PEAPEAVCAppSubmixClient@@@Z @ 0x1800F09E8 (-GetAppSubmixClientContextHelper@CProcessSubmixManager@@AEAAJKW4ProcessSubmixCapture@@PEBGPEAUIA.c)
 * Callees:
 *     _lambda_a1b7f4c1e370eee7ceb304e65e8c3eda_::operator()_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext____const__ @ 0x180071030 (_lambda_a1b7f4c1e370eee7ceb304e65e8c3eda_--operator()_std--unique_ptr_CAppSubmixClientContext_st.c)
 */

__int64 **__fastcall std::find_if_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext___________lambda_a1b7f4c1e370eee7ceb304e65e8c3eda___(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4)
{
  __int64 *i; // rdi
  __int64 **result; // rax

  for ( i = a2; i != a3; ++i )
  {
    if ( lambda_a1b7f4c1e370eee7ceb304e65e8c3eda_::operator()_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext____const__(
           a4,
           i) )
    {
      break;
    }
  }
  result = a1;
  *a1 = i;
  return result;
}
