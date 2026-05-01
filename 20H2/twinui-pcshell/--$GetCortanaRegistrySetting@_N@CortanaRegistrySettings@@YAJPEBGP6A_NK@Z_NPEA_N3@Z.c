/*
 * XREFs of ??$GetCortanaRegistrySetting@_N@CortanaRegistrySettings@@YAJPEBGP6A_NK@Z_NPEA_N3@Z @ 0x180208AD0
 * Callers:
 *     CortanaHelpers::IsCortanaInAmbientMode @ 0x18020C888 (CortanaHelpers--IsCortanaInAmbientMode.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Boolify@CortanaRegistrySettings@@YA_NK@Z @ 0x180211558 (-_Boolify@CortanaRegistrySettings@@YA_NK@Z.c)
 */

__int64 __fastcall CortanaRegistrySettings::GetCortanaRegistrySetting<bool>(
        LPCWSTR lpValue,
        __int64 a2,
        char a3,
        _BYTE *a4)
{
  LSTATUS ValueW; // eax
  unsigned int v6; // edx
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  DWORD v10; // [rsp+58h] [rbp+10h] BYREF
  int v11; // [rsp+5Ch] [rbp+14h]
  CortanaRegistrySettings *v12; // [rsp+60h] [rbp+18h] BYREF

  v11 = HIDWORD(a2);
  LODWORD(v12) = 0;
  *a4 = a3;
  v10 = 4;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Search",
             lpValue,
             0x10u,
             0LL,
             &v12,
             &v10);
  v7 = ValueW;
  if ( !ValueW )
  {
    *a4 = CortanaRegistrySettings::_Boolify((CortanaRegistrySettings *)(unsigned int)v12, v6);
    return 0LL;
  }
  if ( ValueW == 1168 || ValueW == 2 )
    return 0LL;
  if ( ValueW > 0 )
    v7 = (unsigned __int16)ValueW | 0x80070000;
  if ( (v7 & 0x80000000) != 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7D,
      (__int64)"onecoreuap\\internal\\shell\\inc\\CortanaRegistrySettings.h",
      (const char *)v7);
  return v7;
}
