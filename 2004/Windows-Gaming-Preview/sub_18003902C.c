/*
 * XREFs of sub_18003902C @ 0x18003902C
 * Callers:
 *     sub_180039484 @ 0x180039484 (sub_180039484.c)
 *     sub_1800398F4 @ 0x1800398F4 (sub_1800398F4.c)
 *     sub_180039DA0 @ 0x180039DA0 (sub_180039DA0.c)
 *     sub_180039F50 @ 0x180039F50 (sub_180039F50.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_180011F90 @ 0x180011F90 (sub_180011F90.c)
 *     __security_check_cookie @ 0x1800440D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18003902C(__int64 a1, __int64 *a2, unsigned int a3)
{
  HRESULT v5; // eax
  int ActivationFactory; // eax
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // edx
  __int64 v10; // rcx
  __int64 (__fastcall ***v11)(_QWORD, void *, _QWORD *); // rcx
  __int64 v12; // rcx
  __int64 v14; // [rsp+20h] [rbp-40h] BYREF
  __int64 (__fastcall ***v15)(_QWORD, void *, __int64 *); // [rsp+28h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-30h] BYREF
  HSTRING string; // [rsp+48h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+78h] [rbp+18h]

  v14 = 0LL;
  string = 0LL;
  v5 = WindowsCreateStringReference(L"Windows.Foundation.PropertyValue", 0x20u, &hstringHeader, &string);
  if ( v5 < 0 )
  {
    sub_180011F90(v5);
    JUMPOUT(0x1800391B8LL);
  }
  ActivationFactory = RoGetActivationFactory(string, &unk_180051010, &v14);
  v7 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    sub_180003268(
      retaddr,
      273,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
      ActivationFactory);
    goto LABEL_14;
  }
  v15 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v14 + 80LL))(v14, a3, &v15);
  v7 = v8;
  if ( v8 < 0 )
  {
    v9 = 276;
LABEL_10:
    sub_180003268(retaddr, v9, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp", v8);
    goto LABEL_12;
  }
  v10 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v8 = (**v15)(v15, &unk_180052C08, a2);
  v7 = v8;
  if ( v8 < 0 )
  {
    v9 = 277;
    goto LABEL_10;
  }
  v7 = 0;
LABEL_12:
  v11 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, void *, _QWORD *)))(*v11)[2])(v11);
  }
LABEL_14:
  v12 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return v7;
}
