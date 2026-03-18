/*
 * XREFs of ?GetCustomFlickPath@@YGHABU_GUID@@PAU_UNICODE_STRING@@@Z @ 0x16F7C3
 * Callers:
 *     ?GetCustomFlick@@YGHPAUtagCUSTOM_FLICK@@@Z @ 0x16F6E7 (-GetCustomFlick@@YGHPAUtagCUSTOM_FLICK@@@Z.c)
 *     ?SetCustomFlick@@YGHPAUtagCUSTOM_FLICK@@@Z @ 0x16F840 (-SetCustomFlick@@YGHPAUtagCUSTOM_FLICK@@@Z.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall GetCustomFlickPath(const GUID *a1, struct _UNICODE_STRING *a2)
{
  BOOL v3; // edi
  WCHAR *v5; // eax
  struct _UNICODE_STRING GuidString; // [esp+Ch] [ebp-8h] BYREF

  v3 = 0;
  *(_DWORD *)&GuidString.Length = 0;
  GuidString.Buffer = 0;
  *(_DWORD *)&a2->Length = 14548992;
  v5 = (WCHAR *)Win32AllocPool(222, 2020635477);
  if ( v5 )
  {
    a2->Buffer = v5;
    if ( RtlAppendUnicodeToString(a2, L"\\Software\\Microsoft\\Wisp\\Pen\\SysEventParameters\\CustomFlickCommands\\") >= 0
      && RtlStringFromGUID(a1, &GuidString) >= 0 )
    {
      GuidString.Buffer[39] = 0;
      v3 = RtlAppendUnicodeStringToString(a2, &GuidString) >= 0;
      RtlFreeUnicodeString(&GuidString);
    }
  }
  return v3;
}
