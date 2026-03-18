/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_DEVICE_OBJECT@@$$A6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1C00D01E4
 * Callers:
 *     DrvEnumDisplayDevices @ 0x1C0055B20 (DrvEnumDisplayDevices.c)
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>(
        void **a1)
{
  void *v1; // rcx
  LONG_PTR result; // rax

  v1 = *a1;
  if ( v1 )
    return ObfDereferenceObject(v1);
  return result;
}
