/*
 * XREFs of UpdateTPCurrentActiveState @ 0x1C0010E50
 * Callers:
 *     _GetPrecisionTouchPadConfiguration @ 0x1C0010D30 (_GetPrecisionTouchPadConfiguration.c)
 *     _SetPrecisionTouchPadConfiguration @ 0x1C0128BF0 (_SetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     ?EnvironmentChanged@CPTPProcessor@@SAXXZ @ 0x1C0010EB0 (-EnvironmentChanged@CPTPProcessor@@SAXXZ.c)
 *     UpdateMouseConnectionState @ 0x1C0010FD4 (UpdateMouseConnectionState.c)
 *     UpdateInputSettingWnfState @ 0x1C0143670 (UpdateInputSettingWnfState.c)
 */

__int64 UpdateTPCurrentActiveState()
{
  int v0; // ebx
  __int64 result; // rax

  v0 = -__CFSHR__(*(&qword_1C0250FC0 + 1), 4);
  UpdateMouseConnectionState();
  if ( (*(_BYTE *)(&qword_1C0250FC0 + 1) & 1) != 0 )
    *(&qword_1C0250FC0 + 1) |= 8u;
  else
    *(&qword_1C0250FC0 + 1) = *(&qword_1C0250FC0 + 1) & 0xFFFFFFF7 | ((unsigned __int8)(~*((_BYTE *)&qword_1C0250FC0 + 4) & 0x10) >> 1);
  CPTPProcessor::EnvironmentChanged();
  result = v0 != 0;
  if ( (unsigned __int8)(*(_BYTE *)(&qword_1C0250FC0 + 1) & 8) >> 3 != (_DWORD)result )
    return UpdateInputSettingWnfState(175LL);
  return result;
}
