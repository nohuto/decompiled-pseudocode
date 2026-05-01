/*
 * XREFs of ?_AreStringsEqual@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@CA_NAEBVHString@Wrappers@WRL@Microsoft@@0_N@Z @ 0x180029028
 * Callers:
 *     ?_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x1800290A8 (-_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@.c)
 *     _lambda_2d796ec39c4cc1ad3399d6c724543242_::operator() @ 0x18002C6A0 (_lambda_2d796ec39c4cc1ad3399d6c724543242_--operator().c)
 * Callees:
 *     <none>
 */

bool __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_AreStringsEqual(
        HSTRING *a1,
        HSTRING *a2,
        unsigned __int8 a3)
{
  int bIgnoreCase; // esi
  const WCHAR *StringRawBuffer; // rdi
  const WCHAR *v6; // rax
  UINT32 length; // [rsp+40h] [rbp+8h] BYREF
  UINT32 v9; // [rsp+50h] [rbp+18h] BYREF

  bIgnoreCase = a3;
  StringRawBuffer = WindowsGetStringRawBuffer(*a1, &length);
  v6 = WindowsGetStringRawBuffer(*a2, &v9);
  return CompareStringOrdinal(StringRawBuffer, length, v6, v9, bIgnoreCase) == 2;
}
