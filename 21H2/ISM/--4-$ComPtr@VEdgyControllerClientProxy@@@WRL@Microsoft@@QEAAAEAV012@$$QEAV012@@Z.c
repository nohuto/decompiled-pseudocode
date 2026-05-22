/*
 * XREFs of ??4?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180178C14
 * Callers:
 *     ??$_Move_unchecked@PEAV?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@PEAV123@@std@@YAPEAV?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@PEAV123@00@Z @ 0x18004A134 (--$_Move_unchecked@PEAV-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@PEAV123@@std@@YAPEAV.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_EdgyControllerClientProxy_________lambda_bf8165f59c1feaeab7cdf7a46b73aec9___ @ 0x18004A22C (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--ComPtr_.c)
 *     ??4Edge@@QEAAAEAV0@$$QEAV0@@Z @ 0x180178C58 (--4Edge@@QEAAAEAV0@$$QEAV0@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F3D4C (-InternalRelease@-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<EdgyControllerClientProxy>::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  if ( &v7 != a2 )
  {
    v4 = *a2;
    *a2 = 0LL;
    v3 = v4;
  }
  v5 = *a1;
  *a1 = v3;
  v7 = v5;
  Microsoft::WRL::ComPtr<EdgyControllerClientProxy>::InternalRelease(&v7);
  return a1;
}
