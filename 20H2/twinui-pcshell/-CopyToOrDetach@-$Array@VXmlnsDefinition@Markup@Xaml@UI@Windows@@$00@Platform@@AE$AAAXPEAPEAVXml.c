/*
 * XREFs of ?CopyToOrDetach@?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@AE$AAAXPEAPEAVXmlnsDefinition@Markup@Xaml@UI@Windows@@PEAI@Z @ 0x1802F0138
 * Callers:
 *     ??$__abi_array_copy_to_and_release@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Details@Platform@@YAXP$01E$AAV?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@1@PEAPEAXPEAI@Z @ 0x1802EEE64 (--$__abi_array_copy_to_and_release@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Details@Platform.c)
 * Callees:
 *     ?AllocateAndCopyElements@?$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@KAPEAVXmlnsDefinition@Markup@Xaml@UI@Windows@@PEBV34567@I@Z @ 0x1802F0074 (-AllocateAndCopyElements@-$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@.c)
 *     ?Get@__abi_FTMWeakRefData@@QECAJXZ @ 0x1802F0614 (-Get@__abi_FTMWeakRefData@@QECAJXZ.c)
 */

void __fastcall Platform::Array<Windows::UI::Xaml::Markup::XmlnsDefinition,1>::CopyToOrDetach(
        __int64 a1,
        char **a2,
        _DWORD *a3)
{
  char v6; // al
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  _DWORD *v10; // r8

  if ( !a2 || !a3 )
  {
LABEL_13:
    __abi_WinRTraiseNullReferenceException();
    __debugbreak();
    JUMPOUT(0x1802F01F5LL);
  }
  if ( !*(_DWORD *)(a1 + 72) )
  {
    *a2 = 0LL;
    *a3 = 0;
    return;
  }
  if ( !*(_QWORD *)(a1 + 80) )
    goto LABEL_12;
  v6 = *(_BYTE *)(a1 + 76);
  v7 = a1 + 88;
  if ( !v6 )
  {
    if ( (unsigned int)__abi_FTMWeakRefData::Get(v7, 0LL) == 1 )
    {
      *a2 = *(char **)(a1 + 80);
      *v10 = *(_DWORD *)(a1 + 72);
      *(_DWORD *)(a1 + 72) = v8;
      *(_BYTE *)(a1 + 76) = v8;
      *(_QWORD *)(a1 + 80) = v8;
      return;
    }
    if ( !*(_BYTE *)(a1 + 76) && (int)__abi_FTMWeakRefData::Get(v9, v8) <= 1 )
    {
LABEL_12:
      __abi_WinRTraiseFailureException();
      __debugbreak();
      goto LABEL_13;
    }
  }
  *a2 = Platform::WriteOnlyArray<Windows::UI::Xaml::Markup::XmlnsDefinition,1>::AllocateAndCopyElements(
          *(_QWORD **)(a1 + 80),
          *(_DWORD *)(a1 + 72));
  *a3 = *(_DWORD *)(a1 + 72);
}
