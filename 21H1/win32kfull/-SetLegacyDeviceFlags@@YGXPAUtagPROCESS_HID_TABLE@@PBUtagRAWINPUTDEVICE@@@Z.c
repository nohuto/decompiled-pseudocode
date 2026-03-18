/*
 * XREFs of ?SetLegacyDeviceFlags@@YGXPAUtagPROCESS_HID_TABLE@@PBUtagRAWINPUTDEVICE@@@Z @ 0xC4D14
 * Callers:
 *     ?SetProcDeviceRequest@@YGHPAUtagPROCESSINFO@@PAUtagRAWINPUTDEVICE@@PAUtagPROCESS_HID_REQUEST@@KW4_REGISTER_RAW_INPUT_INTERNAL@@@Z @ 0xC9ACA (-SetProcDeviceRequest@@YGHPAUtagPROCESSINFO@@PAUtagRAWINPUTDEVICE@@PAUtagPROCESS_HID_REQUEST@@KW.c)
 * Callees:
 *     <none>
 */

void __fastcall SetLegacyDeviceFlags(int a1, int a2)
{
  int v3; // eax
  unsigned int v4; // ecx
  int v5; // eax
  unsigned int v6; // ecx
  int v7; // eax

  v3 = *(_DWORD *)(a2 + 4) & 0xF0;
  if ( (!v3 || v3 == 48) && *(_WORD *)a2 == 1 )
  {
    if ( *(_WORD *)(a2 + 2) == 6 )
    {
      v4 = *(_DWORD *)(a1 + 52) & 0xFFFFFFDF | (32 * (v3 == 48));
      *(_DWORD *)(a1 + 52) = v4;
      v5 = v4 ^ ((unsigned __int16)v4 ^ (unsigned __int16)*(_DWORD *)(a2 + 4)) & 0x200;
      *(_DWORD *)(a1 + 52) = v5;
      v6 = v5 ^ ((unsigned __int16)v5 ^ (unsigned __int16)*(_DWORD *)(a2 + 4)) & 0x400;
      *(_DWORD *)(a1 + 52) = v6;
      v7 = ((unsigned __int16)v6 ^ (unsigned __int16)(*(_DWORD *)(a2 + 4) >> 3)) & 0x800;
LABEL_5:
      *(_DWORD *)(a1 + 52) = v6 ^ v7;
      return;
    }
    if ( *(_WORD *)(a2 + 2) == 2 )
    {
      v6 = *(_DWORD *)(a1 + 52) & 0xFFFFFFFD | (2 * (v3 == 48));
      *(_DWORD *)(a1 + 52) = v6;
      v7 = ((unsigned __int16)v6 ^ (unsigned __int16)(*(_DWORD *)(a2 + 4) >> 1)) & 0x100;
      goto LABEL_5;
    }
  }
}
