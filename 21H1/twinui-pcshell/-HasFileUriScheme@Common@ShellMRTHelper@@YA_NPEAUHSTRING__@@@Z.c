/*
 * XREFs of ?HasFileUriScheme@Common@ShellMRTHelper@@YA_NPEAUHSTRING__@@@Z @ 0x18044BC54
 * Callers:
 *     ?GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z @ 0x18044AB18 (-GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall ShellMRTHelper::Common::HasFileUriScheme(ShellMRTHelper::Common *this, HSTRING a2)
{
  const WCHAR *StringRawBuffer; // rax
  char v3; // bl
  UINT32 length; // [rsp+48h] [rbp+10h] BYREF

  length = 0;
  StringRawBuffer = WindowsGetStringRawBuffer((HSTRING)this, &length);
  if ( length < 5 )
    return 0;
  v3 = 1;
  if ( CompareStringOrdinal(StringRawBuffer, 5, L"file:", 5, 1) != 2 )
    return 0;
  return v3;
}
