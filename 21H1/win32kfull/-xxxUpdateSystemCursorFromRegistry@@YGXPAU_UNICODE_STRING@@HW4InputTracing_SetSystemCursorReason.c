/*
 * XREFs of ?xxxUpdateSystemCursorFromRegistry@@YGXPAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReason@@@Z @ 0xD8DF2
 * Callers:
 *     ?xxxUpdateSystemCursorsFromRegistry@@YGXPAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0xD8DC8 (-xxxUpdateSystemCursorsFromRegistry@@YGXPAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason.c)
 *     ?xxxRestoreMouseCursors@Feedback@@YGXXZ @ 0x148C7F (-xxxRestoreMouseCursors@Feedback@@YGXXZ.c)
 * Callees:
 *     _RtlInitUnicodeStringOrId@8 @ 0xABF7C (_RtlInitUnicodeStringOrId@8.c)
 *     ?zzzInternalSetSystemCursor@@YGXPAUtagCURSOR@@IPAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0xD8F80 (-zzzInternalSetSystemCursor@@YGXPAUtagCURSOR@@IPAU_UNICODE_STRING@@W4InputTracing_SetSystemCurso.c)
 *     _xxxClientLoadImage@28 @ 0xD94BC (_xxxClientLoadImage@28.c)
 *     _xxxClientExpandStringW@4 @ 0xD97D4 (_xxxClientExpandStringW@4.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall xxxUpdateSystemCursorFromRegistry(int a1, int a2, int a3)
{
  int v4; // esi
  int v5; // ecx
  USHORT v6; // ax
  int result; // eax
  _DWORD v8[2]; // [esp+10h] [ebp-434h] BYREF
  _BYTE *v9; // [esp+18h] [ebp-42Ch]
  int v10; // [esp+1Ch] [ebp-428h]
  struct _UNICODE_STRING DestinationString; // [esp+20h] [ebp-424h] BYREF
  _BYTE v12[520]; // [esp+28h] [ebp-41Ch] BYREF
  WCHAR SourceString[262]; // [esp+230h] [ebp-214h] BYREF

  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  v4 = 576;
  FastGetProfileStringFromIDW(a1, 1, HIWORD(_gasyscur[134 * a2]), byte_FC318, SourceString, 260, 0);
  if ( SourceString[0] )
  {
    v10 = 592;
    qmemcpy(v12, SourceString, sizeof(v12));
    v9 = v12;
    v8[0] = 2 * wcslen(SourceString);
    if ( v8[0] >= 0x206u )
      v8[0] = 518;
    v8[1] = 520;
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( xxxClientExpandStringW(v8) )
    {
      v6 = v8[0];
      qmemcpy(DestinationString.Buffer, v9, 0x208u);
      v5 = 518;
      v10 = 80;
      DestinationString.Length = v6;
      if ( v6 >= 0x206u )
        DestinationString.Length = 518;
      DestinationString.MaximumLength = 520;
    }
    v4 = v10;
  }
  else
  {
    RtlInitUnicodeStringOrId(&DestinationString, (WCHAR *)(unsigned __int16)(a2 + 100));
  }
  result = xxxClientLoadImage(2, 0, 0, v4, v5);
  if ( result )
    return zzzInternalSetSystemCursor(result, a2, &DestinationString, a3);
  return result;
}
