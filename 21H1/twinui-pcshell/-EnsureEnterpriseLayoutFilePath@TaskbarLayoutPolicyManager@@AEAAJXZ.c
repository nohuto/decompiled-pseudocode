/*
 * XREFs of ?EnsureEnterpriseLayoutFilePath@TaskbarLayoutPolicyManager@@AEAAJXZ @ 0x180179470
 * Callers:
 *     ?CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z @ 0x180178ABC (-CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z.c)
 *     ?GetPolicyLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x18017A3A4 (-GetPolicyLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 * Callees:
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x180062B90 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 */

__int64 __fastcall TaskbarLayoutPolicyManager::EnsureEnterpriseLayoutFilePath(LPVOID *this)
{
  __int64 v2; // rsi
  LSTATUS ValueW; // eax
  signed int v4; // ecx
  signed int v5; // ebx
  bool v6; // zf
  DWORD v7; // edi
  LSTATUS v8; // eax
  bool v9; // zf
  LSTATUS v10; // eax
  int v11; // ebx
  __int64 v12; // rdx
  unsigned int pvData; // [rsp+40h] [rbp-C0h] BYREF
  DWORD pcbData; // [rsp+44h] [rbp-BCh] BYREF
  DWORD pdwType; // [rsp+48h] [rbp-B8h] BYREF
  _WORD v17[264]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+298h] [rbp+198h]

  pcbData = 4;
  v2 = -2147483647LL;
  pdwType = 0;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"SOFTWARE\\Policies\\Microsoft\\Windows\\Explorer",
             L"LockedStartLayout",
             0x10000012u,
             &pdwType,
             &pvData,
             &pcbData);
  v4 = ValueW;
  LOWORD(v5) = 13;
  if ( ValueW )
  {
    if ( ValueW == 234 )
      v4 = 13;
    if ( v4 <= 0 )
      goto LABEL_12;
    goto LABEL_11;
  }
  LOWORD(v4) = 13;
  if ( pdwType != 4 )
  {
    if ( pcbData == 4 && (unsigned __int16)(pvData - 48) <= 1u )
    {
      v6 = (_WORD)pvData == 49;
      goto LABEL_4;
    }
    goto LABEL_11;
  }
  v6 = pvData == 1;
  if ( pvData > 1 )
  {
LABEL_11:
    v4 = (unsigned __int16)v4 | 0x80070000;
LABEL_12:
    v7 = pcbData;
    goto LABEL_13;
  }
LABEL_4:
  v4 = 0;
  v7 = v6;
LABEL_13:
  if ( v4 >= 0 && v7 )
    goto LABEL_28;
  pcbData = 0;
  pdwType = 4;
  v2 = -2147483646LL;
  v8 = RegGetValueW(
         HKEY_LOCAL_MACHINE,
         L"SOFTWARE\\Policies\\Microsoft\\Windows\\Explorer",
         L"LockedStartLayout",
         0x10000012u,
         &pcbData,
         &pvData,
         &pdwType);
  if ( !v8 )
  {
    if ( pcbData == 4 )
    {
      v9 = pvData == 1;
      if ( pvData <= 1 )
      {
LABEL_18:
        v5 = 0;
        v7 = v9;
        goto LABEL_26;
      }
    }
    else if ( pdwType == 4 && (unsigned __int16)(pvData - 48) <= 1u )
    {
      v9 = (_WORD)pvData == 49;
      goto LABEL_18;
    }
LABEL_25:
    v5 = (unsigned __int16)v5 | 0x80070000;
    goto LABEL_26;
  }
  if ( v8 == 234 )
    v8 = 13;
  v5 = v8;
  if ( v8 > 0 )
    goto LABEL_25;
LABEL_26:
  if ( v5 < 0 || !v7 )
    return 2147943568LL;
LABEL_28:
  pcbData = 520;
  v10 = RegGetValueW(
          (HKEY)v2,
          L"SOFTWARE\\Policies\\Microsoft\\Windows\\Explorer",
          L"StartLayoutFile",
          2u,
          0LL,
          v17,
          &pcbData);
  v11 = v10;
  if ( v10 )
  {
    v17[0] = 0;
    if ( v10 > 0 )
      v11 = (unsigned __int16)v10 | 0x80070000;
  }
  if ( v11 < 0 )
  {
    v12 = 587LL;
LABEL_33:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
      (const char *)(unsigned int)v11);
    return (unsigned int)v11;
  }
  v11 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
          this + 4,
          (__int64)v17,
          0xFFFFFFFFFFFFFFFFuLL);
  if ( v11 < 0 )
  {
    v12 = 588LL;
    goto LABEL_33;
  }
  return 0LL;
}
