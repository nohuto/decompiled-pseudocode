/*
 * XREFs of ?OnButtonRegistryKeyChange@ButtonProcessor@@AEAAXPEAUHKEY__@@@Z @ 0x180187F04
 * Callers:
 *     ?OnButtonRegistryKeyChangeStatic@ButtonProcessor@@SAXPEAXPEAUHKEY__@@@Z @ 0x180188000 (-OnButtonRegistryKeyChangeStatic@ButtonProcessor@@SAXPEAXPEAUHKEY__@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ButtonProcessor::OnButtonRegistryKeyChange(ButtonProcessor *this, HKEY a2)
{
  LSTATUS v4; // eax
  bool v5; // sf
  bool v6; // al
  LSTATUS v7; // eax
  bool v8; // sf
  DWORD cbData[4]; // [rsp+30h] [rbp-10h] BYREF
  DWORD Type; // [rsp+60h] [rbp+20h] BYREF
  int Data; // [rsp+68h] [rbp+28h] BYREF

  Type = 0;
  Data = 0;
  cbData[0] = 4;
  v4 = RegQueryValueExW(a2, L"ButtonsAsVKeys", 0LL, &Type, (LPBYTE)&Data, cbData);
  v5 = v4 < 0;
  if ( v4 > 0 )
    v5 = 1;
  v6 = !v5 && Type == 4 && Data;
  *((_BYTE *)this + 120) = v6;
  Type = 0;
  Data = 0;
  cbData[0] = 4;
  v7 = RegQueryValueExW(a2, L"HardwareButtonsAsVKeys", 0LL, &Type, (LPBYTE)&Data, cbData);
  v8 = v7 < 0;
  if ( v7 > 0 )
    v8 = 1;
  if ( !v8 && Type == 4 )
  {
    if ( Data )
      *((_BYTE *)this + 121) = 1;
  }
}
