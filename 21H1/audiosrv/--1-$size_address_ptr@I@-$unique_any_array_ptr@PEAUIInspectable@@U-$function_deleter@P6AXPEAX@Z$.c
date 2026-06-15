/*
 * XREFs of ??1?$size_address_ptr@I@?$unique_any_array_ptr@PEAUIInspectable@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Ucom_unknown_deleter@details@3@@wil@@QEAA@XZ @ 0x180135354
 * Callers:
 *     _ScanForInstalledSpatialAudioSubtypeAppServices_::_1_::dtor$12 @ 0x18007CC00 (_ScanForInstalledSpatialAudioSubtypeAppServices_--_1_--dtor$12.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::unique_any_array_ptr<IInspectable *,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::details::com_unknown_deleter>::size_address_ptr<unsigned int>::~size_address_ptr<unsigned int>(
        __int64 *a1)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 12) )
  {
    result = *a1;
    *(_QWORD *)(*a1 + 8) = *((unsigned int *)a1 + 2);
  }
  return result;
}
