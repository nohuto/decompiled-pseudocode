/*
 * XREFs of ?Initialize@AugmentedInputDeviceCollection@@IEAAJPEAPEAX@Z @ 0x1800229F8
 * Callers:
 *     ?Create@AugmentedInputDeviceCollection@@SAJPEAUIRawInputClient@@PEAPEAXPEAPEAV1@@Z @ 0x18002294C (-Create@AugmentedInputDeviceCollection@@SAJPEAUIRawInputClient@@PEAPEAXPEAPEAV1@@Z.c)
 * Callees:
 *     ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x180022E48 (-Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 */

__int64 __fastcall AugmentedInputDeviceCollection::Initialize(
        AugmentedInputDeviceCollection *this,
        void **a2,
        __int64 a3,
        unsigned int a4)
{
  int v5; // eax
  char v6; // bl
  unsigned int v7; // edi
  unsigned __int16 *v9; // rax
  int v10; // r8d
  int v11; // ecx
  int pdwType; // [rsp+20h] [rbp-78h]
  int v13; // [rsp+40h] [rbp-58h] BYREF
  DWORD pcbData; // [rsp+44h] [rbp-54h] BYREF
  __int128 v15; // [rsp+48h] [rbp-50h] BYREF
  int v16; // [rsp+58h] [rbp-40h]
  wchar_t v17; // [rsp+5Ch] [rbp-3Ch]
  _BYTE pvData[24]; // [rsp+60h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v13 = 130986;
  v5 = HIDDeviceCollection::Initialize(this, (unsigned int)a2, (struct _RIM_USAGE_ANDPAGE *const)&v13, a4, 8u, a2);
  v6 = 0;
  v7 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x46,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\augmentedinputdevicecollection.cpp",
      (const char *)(unsigned int)v5,
      pdwType);
    return v7;
  }
  else
  {
    v16 = *(_DWORD *)L"_1";
    v17 = aHololens1[10];
    pcbData = 22;
    v15 = *(_OWORD *)L"HoloLens_1";
    if ( RegGetValueW(
           HKEY_LOCAL_MACHINE,
           L"HARDWARE\\DESCRIPTION\\System\\BIOS",
           L"SystemSKU",
           0x20000002u,
           0LL,
           pvData,
           &pcbData) )
    {
      goto LABEL_3;
    }
    v9 = (unsigned __int16 *)pvData;
    do
    {
      v10 = *(unsigned __int16 *)((char *)v9 + (char *)&v15 - pvData);
      v11 = *v9 - v10;
      if ( v11 )
        break;
      ++v9;
    }
    while ( v10 );
    if ( v11 )
LABEL_3:
      v6 = 1;
    *((_BYTE *)this + 2776) = v6;
    return 0LL;
  }
}
