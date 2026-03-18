/*
 * XREFs of ??1FxAutoString@@QEAA@XZ @ 0x1C00278E4
 * Callers:
 *     imp_WdfDriverCreate @ 0x1C0027650 (imp_WdfDriverCreate.c)
 *     imp_WdfDeviceCreateSymbolicLink @ 0x1C00313A0 (imp_WdfDeviceCreateSymbolicLink.c)
 *     ?CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0031464 (-CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     LogDriverInfoStream @ 0x1C0071780 (LogDriverInfoStream.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005F0C (-FxPoolFree@@YAXPEAX@Z.c)
 */

void __fastcall FxAutoString::~FxAutoString(FxAutoString *this)
{
  wchar_t *Buffer; // rcx

  Buffer = this->m_UnicodeString.Buffer;
  if ( Buffer )
  {
    FxPoolFree((FX_POOL_TRACKER *)Buffer);
    *this = 0LL;
  }
}
