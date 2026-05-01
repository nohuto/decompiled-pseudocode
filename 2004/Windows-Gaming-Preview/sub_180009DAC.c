/*
 * XREFs of sub_180009DAC @ 0x180009DAC
 * Callers:
 *     sub_18001C4E4 @ 0x18001C4E4 (sub_18001C4E4.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_18000A1B0 @ 0x18000A1B0 (sub_18000A1B0.c)
 *     sub_18000BD70 @ 0x18000BD70 (sub_18000BD70.c)
 *     sub_180011F90 @ 0x180011F90 (sub_180011F90.c)
 *     __security_check_cookie @ 0x1800440D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180009DAC(_QWORD *a1, __int64 a2, __int64 a3, HSTRING a4)
{
  __int64 v5; // rcx
  __int64 v9; // rcx
  HRESULT v10; // eax
  PCWSTR StringRawBuffer; // rax
  _WORD *v12; // rax
  PCWSTR v13; // rax
  int v14; // eax
  unsigned int v15; // ebx
  INT32 result; // [rsp+20h] [rbp-40h] BYREF
  HSTRING newString; // [rsp+28h] [rbp-38h] BYREF
  HSTRING v19; // [rsp+30h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-28h] BYREF
  HSTRING string; // [rsp+50h] [rbp-10h] BYREF
  __int64 retaddr; // [rsp+88h] [rbp+28h]

  v5 = a1[14];
  if ( v5 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v5 = a1[14];
    }
    a1[14] = a2;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v9 = a1[26];
  if ( v9 != a3 )
  {
    if ( a3 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
      v9 = a1[26];
    }
    a1[26] = a3;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  if ( !WindowsIsStringEmpty(a4) )
  {
    newString = 0LL;
    string = 0LL;
    v10 = WindowsCreateStringReference(L"processexe:", 0xBu, &hstringHeader, &string);
    if ( v10 < 0 )
    {
      sub_180011F90((unsigned int)v10);
      JUMPOUT(0x180009FDCLL);
    }
    WindowsDeleteString(newString);
    if ( WindowsSubstringWithSpecifiedLength(a4, 0, 0xBu, &newString) >= 0 )
    {
      result = 0;
      if ( WindowsCompareStringOrdinal(newString, string, &result) >= 0 && !result )
      {
        WindowsDeleteString(0LL);
        v19 = 0LL;
        if ( WindowsSubstring(a4, 0xCu, &v19) >= 0 )
        {
          StringRawBuffer = WindowsGetStringRawBuffer(v19, 0LL);
          sub_18000BD70(a1 + 11, StringRawBuffer);
        }
        WindowsDeleteString(v19);
      }
    }
    v12 = (_WORD *)a1[11];
    if ( !v12 || !*v12 )
    {
      v13 = WindowsGetStringRawBuffer(a4, 0LL);
      sub_18000BD70(a1 + 8, v13);
    }
    string = 0LL;
    WindowsDeleteString(newString);
  }
  v14 = sub_18000A1B0(a1);
  v15 = v14;
  if ( v14 < 0 )
    sub_180003268(retaddr, 61, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp", v14);
  return v15;
}
