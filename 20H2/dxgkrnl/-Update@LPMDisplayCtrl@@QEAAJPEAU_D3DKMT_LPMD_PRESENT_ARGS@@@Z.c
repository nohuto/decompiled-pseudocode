/*
 * XREFs of ?Update@LPMDisplayCtrl@@QEAAJPEAU_D3DKMT_LPMD_PRESENT_ARGS@@@Z @ 0x1C0275128
 * Callers:
 *     ?DxgkLPMDisplayControl@@YAJPEAU_D3DKMT_LPM_DISPLAY_CONTROL@@@Z @ 0x1C02745A0 (-DxgkLPMDisplayControl@@YAJPEAU_D3DKMT_LPM_DISPLAY_CONTROL@@@Z.c)
 * Callees:
 *     ?CallDriver@LPMDisplayCtrl@@AEAAJKPEAXK0KPEA_K@Z @ 0x1C02743C8 (-CallDriver@LPMDisplayCtrl@@AEAAJKPEAXK0KPEA_K@Z.c)
 */

NTSTATUS __fastcall LPMDisplayCtrl::Update(LPMDisplayCtrl *this, struct _D3DKMT_LPMD_PRESENT_ARGS *a2)
{
  __int64 v2; // r8
  __int16 v4; // ax
  int v5; // eax
  __int128 InputBuffer; // [rsp+40h] [rbp-20h] BYREF
  __int128 v7; // [rsp+50h] [rbp-10h]
  LPMDisplayCtrl *v8; // [rsp+70h] [rbp+10h] BYREF

  v8 = this;
  if ( !a2 )
    return -1073741811;
  v2 = *((_QWORD *)a2 + 2);
  if ( !v2 )
    return -1073741811;
  if ( !*((_DWORD *)FileObject + 8) )
    return -1073741637;
  if ( !*((_DWORD *)FileObject + 9) )
    return -1073741808;
  v4 = *((_WORD *)FileObject + 35);
  InputBuffer = 0LL;
  LOBYTE(InputBuffer) = 1;
  WORD2(InputBuffer) = v4 - 1;
  v5 = *((_DWORD *)a2 + 2);
  WORD1(InputBuffer) = 0;
  HIDWORD(InputBuffer) = 100;
  v7 = 0LL;
  if ( v5 == -1 )
  {
    BYTE6(InputBuffer) = 0;
  }
  else
  {
    BYTE6(InputBuffer) = 1;
    DWORD2(InputBuffer) = v5;
  }
  LODWORD(v7) = *((_DWORD *)FileObject + 30);
  WORD2(v7) = *((_WORD *)FileObject + 62);
  *((_QWORD *)&v7 + 1) = v2;
  LODWORD(v8) = 0;
  return LPMDisplayCtrl::CallDriver(FileObject, 0x83212010, &InputBuffer, 0x20u, &v8, 4u, 0LL);
}
