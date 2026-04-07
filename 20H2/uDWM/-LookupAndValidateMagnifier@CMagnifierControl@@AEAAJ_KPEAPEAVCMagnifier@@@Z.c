/*
 * XREFs of ?LookupAndValidateMagnifier@CMagnifierControl@@AEAAJ_KPEAPEAVCMagnifier@@@Z @ 0x18008BC20
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x18008BCEC (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 *     ?OnMagnifierSyncApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEAX_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18008C604 (-OnMagnifierSyncApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEAX_NKPEBU_REMOTE_PORT_VIEW@@PEAJP.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _Init_thread_footer @ 0x1800537CC (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18005383C (_Init_thread_header.c)
 *     ?FindElement@?$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAPEAVMagnifierTableElement@CMagnifierControl@@PEAUHWND__@@@Z @ 0x18008B998 (-FindElement@-$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAPEAV.c)
 */

__int64 __fastcall CMagnifierControl::LookupAndValidateMagnifier(
        CMagnifierControl *this,
        __int64 a2,
        struct CMagnifier **a3)
{
  unsigned int v4; // ebx
  _QWORD *Element; // rax

  v4 = 0;
  if ( dword_1800E5FCC > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1800E5FCC);
    if ( dword_1800E5FCC == -1 )
    {
      dword_1800E5F08 = -2147023728;
      Init_thread_footer(&dword_1800E5FCC);
    }
  }
  Element = CGenericTableMap<HWND__ *,CMagnifierControl::MagnifierTableElement>::FindElement(
              (struct _RTL_GENERIC_TABLE *)((char *)this + 56),
              a2);
  if ( Element )
  {
    *a3 = (struct CMagnifier *)Element[1];
  }
  else
  {
    v4 = -2147023728;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800E5F08, 1LL, -2147023728, 0x232u);
  }
  return v4;
}
