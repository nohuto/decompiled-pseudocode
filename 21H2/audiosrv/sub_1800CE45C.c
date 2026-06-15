/*
 * XREFs of sub_1800CE45C @ 0x1800CE45C
 * Callers:
 *     sub_1800CFF9C @ 0x1800CFF9C (sub_1800CFF9C.c)
 * Callees:
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800CE45C(PCWSTR sourceString, unsigned int a2, bool *a3)
{
  unsigned int v6; // ebx
  HSTRING v7; // rbx
  int ActivationFactory; // eax
  __int64 v9; // r13
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rdi
  HSTRING v12; // rdi
  int v13; // eax
  int v14; // edx
  int v16; // [rsp+40h] [rbp-39h] BYREF
  __int64 v17; // [rsp+48h] [rbp-31h] BYREF
  __int64 v18; // [rsp+50h] [rbp-29h] BYREF
  HSTRING string; // [rsp+58h] [rbp-21h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+60h] [rbp-19h] BYREF
  HSTRING v21; // [rsp+78h] [rbp-1h] BYREF
  HSTRING_HEADER v22; // [rsp+80h] [rbp+7h] BYREF
  _UNKNOWN *retaddr; // [rsp+D8h] [rbp+5Fh]

  if ( a2 )
  {
    v18 = 0LL;
    if ( WindowsCreateStringReference(
           L"Windows.Internal.CapabilityAccess.CapabilityAccess",
           0x32u,
           &hstringHeader,
           &string) < 0 )
      RaiseException(0xC000000D, 1u, 0, 0LL);
    v7 = string;
    sub_1800461B8(&v18);
    ActivationFactory = RoGetActivationFactory(v7, &unk_18015DC98, &v18);
    v6 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      sub_18004BD84(
        (int)retaddr,
        1647,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
        ActivationFactory);
LABEL_22:
      sub_1800461B8(&v18);
      return v6;
    }
    v17 = 0LL;
    v9 = v18;
    sub_1800461B8(&v17);
    v10 = -1LL;
    v11 = -1LL;
    do
      ++v11;
    while ( aMicrophone[v11] );
    if ( v11 > 0xFFFFFFFF )
    {
      LODWORD(v11) = -1;
      RaiseException(0xC000000D, 1u, 0, 0LL);
    }
    WindowsCreateStringReference(L"microphone", v11, &hstringHeader, &string);
    v12 = string;
    do
      ++v10;
    while ( sourceString[v10] );
    if ( v10 > 0xFFFFFFFF )
    {
      LODWORD(v10) = -1;
      RaiseException(0xC000000D, 1u, 0, 0LL);
    }
    WindowsCreateStringReference(sourceString, v10, &v22, &v21);
    v13 = (*(__int64 (__fastcall **)(__int64, HSTRING, HSTRING, _QWORD, _DWORD, __int64 *))(*(_QWORD *)v9 + 56LL))(
            v9,
            v21,
            v12,
            a2,
            0,
            &v17);
    v6 = v13;
    if ( v13 >= 0 )
    {
      v16 = 3;
      v13 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v17 + 136LL))(v17, &v16);
      v6 = v13;
      if ( v13 >= 0 )
      {
        *a3 = v16 == 3;
        v6 = 0;
        goto LABEL_21;
      }
      v14 = 1658;
    }
    else
    {
      v14 = 1655;
    }
    sub_18004BD84((int)retaddr, v14, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp", v13);
LABEL_21:
    sub_1800461B8(&v17);
    goto LABEL_22;
  }
  v6 = -2147024809;
  sub_18004BD84(
    (int)retaddr,
    1643,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
    -2147024809);
  return v6;
}
