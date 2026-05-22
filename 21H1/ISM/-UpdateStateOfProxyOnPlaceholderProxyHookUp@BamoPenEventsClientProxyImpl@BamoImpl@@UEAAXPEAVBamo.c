/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoPenEventsClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180047820
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateDockedEventsRequired@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N@Z @ 0x180134F60 (-UpdateDockedEventsRequired@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N@Z.c)
 *     ?UpdateTailButtonClickedEventsRequired@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N@Z @ 0x1801350A8 (-UpdateTailButtonClickedEventsRequired@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N@Z.c)
 *     ?UpdateTailButtonDoubleClickedEventsRequired@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N@Z @ 0x18013514C (-UpdateTailButtonDoubleClickedEventsRequired@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N@Z.c)
 *     ?UpdateTailButtonLongPressedEventsRequired@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N@Z @ 0x1801351F0 (-UpdateTailButtonLongPressedEventsRequired@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N@Z.c)
 *     ?UpdateUndockedEventsRequired@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N@Z @ 0x180135294 (-UpdateUndockedEventsRequired@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N@Z.c)
 */

void __fastcall BamoImpl::BamoPenEventsClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoPenEventsClientProxyImpl *this,
        struct Microsoft::BamoImpl::BamoProxyImpl *a2)
{
  BamoImpl::BamoPenEventsClientProxyImpl::UpdateTailButtonClickedEventsRequired(this, *((_BYTE *)a2 + 32));
  BamoImpl::BamoPenEventsClientProxyImpl::UpdateTailButtonDoubleClickedEventsRequired(this, *((_BYTE *)a2 + 33));
  BamoImpl::BamoPenEventsClientProxyImpl::UpdateTailButtonLongPressedEventsRequired(this, *((_BYTE *)a2 + 34));
  BamoImpl::BamoPenEventsClientProxyImpl::UpdateDockedEventsRequired(this, *((_BYTE *)a2 + 35));
  BamoImpl::BamoPenEventsClientProxyImpl::UpdateUndockedEventsRequired(this, *((_BYTE *)a2 + 36));
  BamoImpl::BamoPenEventsClientProxyImpl::UpdateIsShell(this, *((_BYTE *)a2 + 37));
}
