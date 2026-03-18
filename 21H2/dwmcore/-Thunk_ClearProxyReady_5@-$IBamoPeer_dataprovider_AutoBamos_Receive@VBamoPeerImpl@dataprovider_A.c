/*
 * XREFs of ?Thunk_ClearProxyReady_5@?$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180198680
 * Callers:
 *     <none>
 * Callees:
 *     ?GetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z @ 0x1800F73F8 (-GetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z.c)
 */

__int64 __fastcall IBamoPeer_dataprovider_AutoBamos_Receive<BamoImpl::dataprovider_AutoBamos::BamoPeerImpl>::Thunk_ClearProxyReady_5(
        __int64 a1,
        unsigned int **a2)
{
  *((_BYTE *)Microsoft::BamoImpl::BaseBamoConnectionImpl::GetItem(
               *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(a1 + 24) + 32LL),
               *(unsigned int *)(a1 + 36),
               **a2)
  + 28) = 0;
  return 0LL;
}
