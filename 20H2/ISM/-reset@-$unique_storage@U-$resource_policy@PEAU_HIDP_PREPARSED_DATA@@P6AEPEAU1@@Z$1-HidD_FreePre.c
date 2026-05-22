/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAU_HIDP_PREPARSED_DATA@@P6AEPEAU1@@Z$1?HidD_FreePreparsedData@@YAE0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_HIDP_PREPARSED_DATA@@@Z @ 0x180131B5C
 * Callers:
 *     ??0PenDevice@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@PEAX1@Z @ 0x180130E04 (--0PenDevice@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@PEAX1@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<_HIDP_PREPARSED_DATA *,unsigned char (*)(_HIDP_PREPARSED_DATA *),&unsigned char HidD_FreePreparsedData(_HIDP_PREPARSED_DATA *),wistd::integral_constant<unsigned __int64,0>,_HIDP_PREPARSED_DATA *,_HIDP_PREPARSED_DATA *,0,std::nullptr_t>>::reset(
        struct _HIDP_PREPARSED_DATA **a1,
        struct _HIDP_PREPARSED_DATA *a2)
{
  struct _HIDP_PREPARSED_DATA *v2; // rsi
  DWORD LastError; // ebx

  v2 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    HidD_FreePreparsedData(v2);
    SetLastError(LastError);
  }
  *a1 = a2;
}
