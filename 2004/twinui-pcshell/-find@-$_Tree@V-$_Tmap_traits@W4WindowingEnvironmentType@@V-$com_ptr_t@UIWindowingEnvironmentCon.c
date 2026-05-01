/*
 * XREFs of ?find@?$_Tree@V?$_Tmap_traits@W4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@U?$less@W4WindowingEnvironmentType@@@std@@V?$allocator@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@AEBW4WindowingEnvironmentType@@@Z @ 0x1802E59A4
 * Callers:
 *     _lambda_f27b60bae871d07517fb334ba178f733_::operator() @ 0x1802E46EC (_lambda_f27b60bae871d07517fb334ba178f733_--operator().c)
 *     ?CreateWindowingEnvironmentConfig@WindowingEnvironmentManager@@UEAAJW4WindowingEnvironmentType@@PEAPEAUIWindowingEnvironmentConfig@@@Z @ 0x1802E4C80 (-CreateWindowingEnvironmentConfig@WindowingEnvironmentManager@@UEAAJW4WindowingEnvironmentType@@.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall std::_Tree<std::_Tmap_traits<enum WindowingEnvironmentType,wil::com_ptr_t<IWindowingEnvironmentConfigInternal,wil::err_exception_policy>,std::less<enum WindowingEnvironmentType>,std::allocator<std::pair<enum WindowingEnvironmentType const,wil::com_ptr_t<IWindowingEnvironmentConfigInternal,wil::err_exception_policy>>>,0>>::find(
        __int64 **a1,
        __int64 **a2,
        int *a3)
{
  __int64 *v3; // r9
  __int64 *v4; // rcx
  __int64 *v5; // rax
  int v6; // r8d

  v3 = *a1;
  v4 = v3;
  v5 = (__int64 *)v3[1];
  if ( *((_BYTE *)v5 + 25) )
    goto LABEL_9;
  v6 = *a3;
  do
  {
    if ( *((_DWORD *)v5 + 8) >= v6 )
    {
      v4 = v5;
      v5 = (__int64 *)*v5;
    }
    else
    {
      v5 = (__int64 *)v5[2];
    }
  }
  while ( !*((_BYTE *)v5 + 25) );
  if ( v4 == v3 || v6 < *((_DWORD *)v4 + 8) )
LABEL_9:
    v4 = v3;
  *a2 = v4;
  return a2;
}
