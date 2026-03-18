/*
 * XREFs of ?PerformLegacyDpiUpgrade@@YGHPAU_UNICODE_STRING@@K@Z @ 0xD6204
 * Callers:
 *     _xxxUpdatePerUserSystemParameters@8 @ 0xD78DE (_xxxUpdatePerUserSystemParameters@8.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?PerformWin8DpiUpgrade@@YGHPAU_UNICODE_STRING@@K@Z @ 0x14341A (-PerformWin8DpiUpgrade@@YGHPAU_UNICODE_STRING@@K@Z.c)
 */

int __fastcall PerformLegacyDpiUpgrade(int a1, int a2)
{
  int v2; // edi
  int v5; // ecx
  int v6; // edx
  int v7; // eax
  struct _UNICODE_STRING *v8; // [esp+0h] [ebp-28h]
  unsigned int v9; // [esp+4h] [ebp-24h]
  int v11; // [esp+10h] [ebp-18h] BYREF
  int v12; // [esp+14h] [ebp-14h] BYREF
  int v13; // [esp+18h] [ebp-10h] BYREF
  int v14; // [esp+1Ch] [ebp-Ch] BYREF
  int v15; // [esp+20h] [ebp-8h] BYREF

  v2 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  FastGetProfileDword(a1, 4, L"Win8DpiScaling", 0xFFFF, &v14);
  FastGetProfileDword(a1, 4, L"DpiScalingVer", 0, &v12);
  v13 = v12;
  if ( v12 == 4096 )
  {
    if ( v14 )
      *(_DWORD *)(_gpsi + 1836) |= 0x20u;
    else
      *(_DWORD *)(_gpsi + 1836) &= ~0x20u;
    return 0;
  }
  FastGetProfileIntW(a1, 4, L"DesktopDPIOverride", 0xFFFF, &v15, 0);
  v5 = v15;
  v6 = v13;
  if ( a2 || v13 || v15 != 0xFFFF )
  {
    v7 = v14;
    if ( v14 == 0xFFFF )
    {
      v13 = 2048;
      v7 = PerformWin8DpiUpgrade(v8, v9);
      v5 = v15;
      v6 = v13;
      v14 = v7;
    }
    goto LABEL_13;
  }
  v7 = v14;
  if ( v14 != 0xFFFF )
  {
LABEL_13:
    if ( v7 )
    {
      v7 = a2;
      v14 = a2;
    }
    if ( v6 < 4096 )
    {
      v15 = v5 != 0xFFFF ? v5 : 0;
      DrvDxgkUpgradeLegacyDpiSettings(&v13, &v11);
      v7 = v14;
    }
    goto LABEL_17;
  }
  v7 = PerformWin8DpiUpgrade(v8, v9);
  v14 = v7;
LABEL_17:
  if ( v7 )
    *(_DWORD *)(_gpsi + 1836) |= 0x20u;
  else
    *(_DWORD *)(_gpsi + 1836) &= ~0x20u;
  v12 = 4096;
  FastWriteProfileValue(a1, 4, L"DpiScalingVer", 4, &v12, 4);
  if ( v14 || v11 )
    return 1;
  return v2;
}
