/*
 * XREFs of ?HidIsRequestedByThisProcess@@YGPAUtagPROCESS_HID_REQUEST@@PAUDEVICEINFO@@PAUtagPROCESS_HID_TABLE@@@Z @ 0x143C12
 * Callers:
 *     _xxxProcessHidInput@4 @ 0x144ADA (_xxxProcessHidInput@4.c)
 * Callees:
 *     ?InProcessDeviceTypeRequestTable@@YGPAUtagPROCESS_HID_REQUEST@@PAUtagPROCESS_HID_TABLE@@GG@Z @ 0xC9F82 (-InProcessDeviceTypeRequestTable@@YGPAUtagPROCESS_HID_REQUEST@@PAUtagPROCESS_HID_TABLE@@GG@Z.c)
 */

struct tagPROCESS_HID_REQUEST *__usercall HidIsRequestedByThisProcess@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        unsigned __int16 a3@<bx>,
        unsigned __int16 a4@<di>)
{
  struct tagPROCESS_HID_REQUEST *result; // eax
  int v6; // eax
  __int16 v7; // bx
  __int16 v8; // di

  if ( !a1 )
    return 0;
  v6 = *(_DWORD *)(a2 + 276);
  v7 = *(_WORD *)(v6 + 22);
  v8 = *(_WORD *)(v6 + 20);
  if ( *(_WORD *)(a1 + 48) == v7 && *(_WORD *)(a1 + 50) == v8 )
    return *(struct tagPROCESS_HID_REQUEST **)(a1 + 44);
  result = InProcessDeviceTypeRequestTable(a1, (struct tagPROCESS_HID_TABLE *)*(unsigned __int16 *)(v6 + 20), a4, a3);
  if ( result )
  {
    *(_WORD *)(a1 + 48) = v7;
    *(_WORD *)(a1 + 50) = v8;
    *(_DWORD *)(a1 + 44) = result;
  }
  return result;
}
