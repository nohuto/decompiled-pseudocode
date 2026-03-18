/*
 * XREFs of ?UpdateExpressions@CComposition@@QEAAXXZ @ 0x180050684
 * Callers:
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x18007D2F8 (-PreRender@CComposition@@IEAAJXZ.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180014C58 (McGenEventWrite_EventWriteTransfer.c)
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x1800506EC (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

void __fastcall CComposition::UpdateExpressions(CComposition *this, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-28h] BYREF

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McGenEventWrite_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_PROCESS_EXPRESSIONS_Start,
      a3,
      1u,
      &v5);
  CExpressionManager::UpdateExpressions(
    *((CExpressionManager **)this + 53),
    *((_QWORD *)this + 76),
    *((_QWORD *)this + 62));
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McGenEventWrite_EventWriteTransfer(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_PROCESS_EXPRESSIONS_Stop,
      v4,
      1u,
      &v5);
}
