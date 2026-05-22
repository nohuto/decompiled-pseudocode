/*
 * XREFs of ??$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z @ 0x18002E358
 * Callers:
 *     ?RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyReconnectAdapterOwner@@@Z @ 0x18002DEC8 (-RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyRecon.c)
 *     ?OnConstantChanged@MPCConstantManagerClient@@QEAAJPEAVBamoMPCConstantManagerClientCallbacksStub@@W4InputType@@PEBGAEBUtagPROPVARIANT@@3@Z @ 0x180116BA0 (-OnConstantChanged@MPCConstantManagerClient@@QEAAJPEAVBamoMPCConstantManagerClientCallbacksStub@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Wrappers::HString::Set<unsigned short const *>(
        Microsoft::WRL::Wrappers::HString *a1,
        const wchar_t **a2)
{
  const wchar_t *v2; // rdx
  unsigned int v3; // r8d
  unsigned __int64 v4; // rax

  v2 = *a2;
  v3 = 0;
  if ( !v2 )
  {
    v2 = &word_1801C2344;
    return Microsoft::WRL::Wrappers::HString::Set(a1, v2, v3);
  }
  v4 = -1LL;
  do
    ++v4;
  while ( v2[v4] );
  if ( v4 <= 0xFFFFFFFF )
  {
    v3 = v4;
    return Microsoft::WRL::Wrappers::HString::Set(a1, v2, v3);
  }
  return 2147942934LL;
}
