/*
 * XREFs of ?IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00058D0
 * Callers:
 *     ?PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C0005B94 (-PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 *     ?PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z @ 0x1C010DD9C (-PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z.c)
 *     ?PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z @ 0x1C01214E4 (-PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z.c)
 * Callees:
 *     ?IsSourceAndTargetPinned@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C000491C (-IsSourceAndTargetPinned@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0005A68 (-DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 */

unsigned __int8 __fastcall DMMVIDPNPRESENTPATH::IsValidContentScaling(DMMVIDPNPRESENTPATH *this)
{
  unsigned __int8 v3; // al
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax

  if ( *((_DWORD *)this + 28) == 254 || !DMMVIDPNPRESENTPATH::IsSourceAndTargetPinned(this) )
    return 1;
  v3 = DMMVIDPNPRESENTPATH::DoSourceTargetResolutionsMatch(this);
  v5 = *((unsigned int *)this + 28);
  if ( !v3 )
  {
    if ( (_DWORD)v5 == 1 )
    {
      v7 = WdLogNewEntry5_WdWarning();
      *(_QWORD *)(v7 + 24) = *((int *)this + 28);
      WdLogEvent5_WdWarning(v7);
    }
    return 1;
  }
  if ( (((_DWORD)v5 - 1) & 0xFFFFFFFB) == 0 )
    return 1;
  v6 = WdLogNewEntry5_WdError(v5, v4);
  *(_QWORD *)(v6 + 24) = *((int *)this + 28);
  WdLogEvent5_WdError(v6);
  return 0;
}
