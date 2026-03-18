/*
 * XREFs of ?ProcessSetVisualTree@CCaptureController@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURECONTROLLER_SETVISUALTREE@@@Z @ 0x1801BAFCC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCaptureController::ProcessSetVisualTree(
        CCaptureController *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_CAPTURECONTROLLER_SETVISUALTREE *a3)
{
  _QWORD *v3; // rbx
  _QWORD *v5; // rsi
  unsigned int v6; // edi
  int v7; // eax
  __int64 v8; // rcx

  v3 = (_QWORD *)*((_QWORD *)this + 7);
  v5 = (_QWORD *)*((_QWORD *)this + 8);
  v6 = 0;
  while ( v3 != v5 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v3 + 328LL))(*v3, *((_QWORD *)a3 + 1));
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x29u, 0LL);
      return v6;
    }
    ++v3;
  }
  return v6;
}
