/*
 * XREFs of ??4CMarshaledInterface@@QEAAAEAV0@$$QEAV0@@Z @ 0x1800A8A28
 * Callers:
 *     ?Close@?$CMarshaledInterfaceResult@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Internal@Windows@@QEAAXXZ @ 0x1802312EC (-Close@-$CMarshaledInterfaceResult@UIGetCurrentActivityForViewOperationResults@Activities@Data@I.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18007B66C (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall CMarshaledInterface::operator=(__int64 *a1, __int64 *a2)
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
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v7);
  return a1;
}
