/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_7c875662d6abaa9f8d1386a75bd755d7__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::IPropertyValue___::_scalar_deleting_destructor_ @ 0x180111FB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C740 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18003D284 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

char *__fastcall Windows::Internal::COperationLambdaVar_0__lambda_7c875662d6abaa9f8d1386a75bd755d7__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::IPropertyValue___::_scalar_deleting_destructor_(
        char *a1,
        char a2)
{
  `eh vector destructor iterator'(
    a1 + 40,
    8LL,
    1LL,
    (void (*)(void *))Microsoft::WRL::ComPtr<Windows::Internal::Holographic::ISpatialGraphNodePropertiesUpdatedCallback>::~ComPtr<Windows::Internal::Holographic::ISpatialGraphNodePropertiesUpdatedCallback>);
  *(_QWORD *)a1 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CNoResult>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x30);
  return a1;
}
