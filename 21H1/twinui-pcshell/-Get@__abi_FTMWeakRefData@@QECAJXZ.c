/*
 * XREFs of ?Get@__abi_FTMWeakRefData@@QECAJXZ @ 0x1802CF364
 * Callers:
 *     ?CopyToOrDetach@?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@AE$AAAXPEAPEAVXmlnsDefinition@Markup@Xaml@UI@Windows@@PEAI@Z @ 0x1802CEE88 (-CopyToOrDetach@-$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@AE$AAAXPEAPEAVXml.c)
 *     ?CopyToOrDetach@?$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@AE$AAAXPEAPEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAI@Z @ 0x1802DE67C (-CopyToOrDetach@-$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Pla.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall __abi_FTMWeakRefData::Get(__int64 a1)
{
  if ( *(_QWORD *)a1 )
    return *(unsigned int *)(*(_QWORD *)a1 + 12LL);
  else
    return 0xFFFFFFFFLL;
}
