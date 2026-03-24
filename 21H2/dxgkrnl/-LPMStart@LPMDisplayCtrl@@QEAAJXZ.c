/*
 * XREFs of ?LPMStart@LPMDisplayCtrl@@QEAAJXZ @ 0x1C0276088
 * Callers:
 *     ?DxgkLPMDisplayControl@@YAJPEAU_D3DKMT_LPM_DISPLAY_CONTROL@@@Z @ 0x1C0275830 (-DxgkLPMDisplayControl@@YAJPEAU_D3DKMT_LPM_DISPLAY_CONTROL@@@Z.c)
 *     ?LPMSetTTMDisplayPowerState@@YAJW4_TERMINAL_DISPLAY_STATE@@@Z @ 0x1C0275FC0 (-LPMSetTTMDisplayPowerState@@YAJW4_TERMINAL_DISPLAY_STATE@@@Z.c)
 * Callees:
 *     ?CallDriver@LPMDisplayCtrl@@AEAAJKPEAXK0KPEA_K@Z @ 0x1C0275658 (-CallDriver@LPMDisplayCtrl@@AEAAJKPEAXK0KPEA_K@Z.c)
 */

__int64 __fastcall LPMDisplayCtrl::LPMStart(LPMDisplayCtrl *this)
{
  PFILE_OBJECT *v1; // rbx
  PFILE_OBJECT *v3; // rcx
  NTSTATUS v4; // edi
  PFILE_OBJECT *v5; // [rsp+20h] [rbp-28h]
  LPMDisplayCtrl *InputBuffer; // [rsp+50h] [rbp+8h] BYREF

  InputBuffer = this;
  v1 = FileObject;
  if ( !*((_DWORD *)FileObject + 8) )
    return 3221225659LL;
  v5 = FileObject + 15;
  LODWORD(InputBuffer) = 1;
  v3 = FileObject;
  *(_OWORD *)(FileObject + 15) = 0LL;
  v4 = LPMDisplayCtrl::CallDriver(v3, 0x83212018, &InputBuffer, 4u, v5, 0x10u, 0LL);
  if ( v4 >= 0 )
  {
    *((_DWORD *)v1 + 9) = 1;
    qword_1C00B31A8 = (__int64)PsGetCurrentProcessId();
  }
  return (unsigned int)v4;
}
