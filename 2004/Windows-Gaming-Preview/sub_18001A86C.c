/*
 * XREFs of sub_18001A86C @ 0x18001A86C
 * Callers:
 *     sub_180018660 @ 0x180018660 (sub_180018660.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18001A86C(__int64 a1, _DWORD *a2, char a3)
{
  char v4; // di
  HRESULT ApartmentType; // eax
  APTTYPE v7; // ecx
  APTTYPEQUALIFIER pAptQualifier; // [rsp+40h] [rbp+8h] BYREF
  APTTYPE pAptType; // [rsp+50h] [rbp+18h] BYREF

  LOBYTE(pAptType) = a3;
  *(_QWORD *)a1 = off_180049A08;
  *(_QWORD *)(a1 + 24) = 1LL;
  *(_QWORD *)(a1 + 8) = off_1800499E8;
  v4 = 0;
  if ( qword_18005ADB0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18005ADB0 + 8LL))(qword_18005ADB0);
  *(_QWORD *)a1 = &off_180049C00;
  *(_QWORD *)(a1 + 8) = off_180049BE0;
  *(_QWORD *)(a1 + 32) = a2;
  if ( a2 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a2 + 8LL))(a2);
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 52) = a2[22];
  ApartmentType = CoGetApartmentType(&pAptType, &pAptQualifier);
  v7 = pAptType;
  if ( ApartmentType < 0 )
    v7 = APTTYPE_MTA;
  if ( v7 == APTTYPE_MAINSTA || v7 == APTTYPE_STA )
    v4 = 1;
  *(_BYTE *)(a1 + 56) = v4;
  return a1;
}
