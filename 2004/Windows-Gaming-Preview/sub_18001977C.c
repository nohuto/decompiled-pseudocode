/*
 * XREFs of sub_18001977C @ 0x18001977C
 * Callers:
 *     sub_180016FE4 @ 0x180016FE4 (sub_180016FE4.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18001977C(__int64 a1, __int64 a2, char a3)
{
  HRESULT ApartmentType; // eax
  APTTYPE v5; // ecx
  __int64 result; // rax
  __int64 pAptQualifier; // [rsp+38h] [rbp+10h] BYREF
  APTTYPE pAptType; // [rsp+40h] [rbp+18h] BYREF

  LOBYTE(pAptType) = a3;
  pAptQualifier = a2;
  *(_QWORD *)a1 = off_180049CB0;
  *(_QWORD *)(a1 + 32) = 1LL;
  *(_QWORD *)(a1 + 8) = off_180049C90;
  *(_QWORD *)(a1 + 16) = off_180049C58;
  if ( qword_18005ADB0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18005ADB0 + 8LL))(qword_18005ADB0);
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)a1 = off_180049DA0;
  *(_QWORD *)(a1 + 8) = off_180049D80;
  *(_QWORD *)(a1 + 16) = off_180049D48;
  ApartmentType = CoGetApartmentType(&pAptType, (APTTYPEQUALIFIER *)&pAptQualifier);
  v5 = pAptType;
  if ( ApartmentType < 0 )
    v5 = APTTYPE_MTA;
  pAptType = v5;
  if ( v5 == APTTYPE_MAINSTA || v5 == APTTYPE_STA )
  {
    *(_DWORD *)(a1 + 72) = 1;
    *(_DWORD *)(a1 + 80) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 72) = 0;
    InitializeSRWLock((PSRWLOCK)(a1 + 80));
  }
  *(_DWORD *)(a1 + 88) = 0;
  result = a1;
  *(_DWORD *)(a1 + 96) = 0;
  return result;
}
