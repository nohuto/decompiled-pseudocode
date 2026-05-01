/*
 * XREFs of sub_180013E00 @ 0x180013E00
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000D958 @ 0x18000D958 (sub_18000D958.c)
 *     sub_18000DA2C @ 0x18000DA2C (sub_18000DA2C.c)
 *     _o__invalid_parameter_noinfo @ 0x18004534E (_o__invalid_parameter_noinfo.c)
 */

__int64 __fastcall sub_180013E00(__int64 a1, unsigned int a2, HSTRING a3)
{
  __int64 v3; // r15
  HSTRING v5; // rdi
  HRESULT v6; // esi
  _DWORD *v7; // r14
  __int64 v8; // rcx
  HSTRING *v9; // rdx
  char v11; // [rsp+70h] [rbp+18h] BYREF
  HSTRING newString; // [rsp+78h] [rbp+20h] BYREF

  v3 = a2;
  v5 = 0LL;
  v6 = WindowsDuplicateString(a3, &newString);
  if ( v6 < 0 )
  {
    newString = 0LL;
    goto LABEL_17;
  }
  v7 = (_DWORD *)(a1 + 112);
  if ( *(_DWORD *)(a1 + 104) == 1 )
  {
    if ( !*v7 )
      *v7 = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 112));
  }
  if ( (unsigned int)v3 >= *(_DWORD *)(a1 + 72) )
  {
    v6 = -2147483637;
LABEL_11:
    RoOriginateError((unsigned int)v6, 0LL);
    goto LABEL_13;
  }
  sub_18000DA2C((__int64)&v11);
  v6 = 0;
  v9 = (HSTRING *)(*(_QWORD *)(a1 + 88) + 8 * v3);
  if ( !v9 )
  {
    *(_DWORD *)o__errno(v8, 0LL) = 22;
    o__invalid_parameter_noinfo();
    v6 = -2147418113;
    goto LABEL_11;
  }
  v5 = *v9;
  *v9 = newString;
  newString = 0LL;
  ++*(_DWORD *)(a1 + 120);
  WindowsDeleteString(0LL);
LABEL_13:
  if ( a1 != -104 )
  {
    if ( *(_DWORD *)(a1 + 104) == 1 )
      *v7 += 0x10000000;
    else
      ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 112));
  }
LABEL_17:
  WindowsDeleteString(newString);
  newString = 0LL;
  WindowsDeleteString(v5);
  if ( v6 >= 0 )
    return (unsigned int)sub_18000D958();
  return (unsigned int)v6;
}
