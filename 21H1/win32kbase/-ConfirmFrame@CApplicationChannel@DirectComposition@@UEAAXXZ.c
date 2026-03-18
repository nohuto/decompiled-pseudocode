/*
 * XREFs of ?ConfirmFrame@CApplicationChannel@DirectComposition@@UEAAXXZ @ 0x1C00C35A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CApplicationChannel::ConfirmFrame(DirectComposition::CApplicationChannel *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 95);
  *((_DWORD *)this + 164) = 0;
  *((_DWORD *)this + 96) = v1;
}
