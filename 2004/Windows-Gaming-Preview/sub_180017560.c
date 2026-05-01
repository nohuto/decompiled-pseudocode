/*
 * XREFs of sub_180017560 @ 0x180017560
 * Callers:
 *     sub_18003B720 @ 0x18003B720 (sub_18003B720.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_180016FE4 @ 0x180016FE4 (sub_180016FE4.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 *     j_??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800447FC (j_--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180017560(__int64 a1, __int64 *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rcx
  int v7; // edi
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  HRESULT ApartmentType; // eax
  int v11; // ecx
  WCHAR *v13; // rax
  const WCHAR *v14; // rbx
  int v15; // r9d
  int v16; // edx
  int v17; // eax
  __int64 v18; // rdx
  __int64 retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v20; // [rsp+50h] [rbp+8h] BYREF
  WCHAR *pAptType; // [rsp+60h] [rbp+18h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+68h] [rbp+20h] BYREF

  v20 = 0;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, unsigned int *))(*(_QWORD *)a1 + 80LL))(a1, 5LL, 0LL, &v20);
  v5 = v4;
  if ( (_WORD)v4 == 2 )
  {
    v6 = *a2;
    if ( *a2 )
    {
      *a2 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    *a2 = 0LL;
    v7 = 0;
    v8 = operator new(0x68uLL, (const struct std::nothrow_t *)&unk_18005AF88);
    v9 = v8;
    if ( v8 )
    {
      v8[4] = 1LL;
      *v8 = off_180049CB0;
      v8[1] = off_180049C90;
      v8[2] = off_180049C58;
      if ( qword_18005ADB0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18005ADB0 + 8LL))(qword_18005ADB0);
      *v9 = off_180049DA0;
      v9[1] = off_180049D80;
      v9[2] = off_180049D48;
      *((_DWORD *)v9 + 10) = 0;
      *((_DWORD *)v9 + 11) = 0;
      *((_DWORD *)v9 + 12) = 0;
      v9[7] = 0LL;
      ApartmentType = CoGetApartmentType((APTTYPE *)&pAptType, &pAptQualifier);
      v11 = (int)pAptType;
      if ( ApartmentType < 0 )
        v11 = 1;
      LODWORD(pAptType) = v11;
      if ( v11 == 3 || !v11 )
      {
        *((_DWORD *)v9 + 18) = 1;
        *((_DWORD *)v9 + 20) = 0;
      }
      else
      {
        *((_DWORD *)v9 + 18) = 0;
        InitializeSRWLock((PSRWLOCK)v9 + 10);
      }
      *((_DWORD *)v9 + 22) = 0;
      *((_DWORD *)v9 + 24) = 0;
    }
    else
    {
      v7 = -2147024882;
      v9 = 0LL;
    }
    if ( v7 >= 0 )
    {
      *a2 = (__int64)v9;
      v9 = 0LL;
    }
    if ( v9 )
      (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
    if ( v7 >= 0 )
      return 0LL;
    sub_180003268(retaddr, 551, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp", v7);
    return (unsigned int)v7;
  }
  if ( v4 < 0 )
  {
    sub_180003268(retaddr, 556, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp", v4);
    return v5;
  }
  v13 = (WCHAR *)operator new(v20 + 2LL, (const struct std::nothrow_t *)&unk_18005AF88);
  v14 = v13;
  pAptType = v13;
  if ( !v13 )
  {
    v7 = -2147024882;
    v15 = -2147024882;
    v16 = 561;
LABEL_31:
    sub_180003268(retaddr, v16, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp", v15);
    goto LABEL_33;
  }
  v17 = (*(__int64 (__fastcall **)(__int64, __int64, WCHAR *, unsigned int *))(*(_QWORD *)a1 + 80LL))(
          a1,
          5LL,
          v13,
          &v20);
  v7 = v17;
  if ( v17 < 0 )
  {
    v16 = 563;
LABEL_30:
    v15 = v17;
    goto LABEL_31;
  }
  v17 = sub_180016FE4(v14, v20, a2);
  v7 = v17;
  if ( v17 < 0 )
  {
    v16 = 564;
    goto LABEL_30;
  }
  v7 = 0;
LABEL_33:
  if ( v14 )
    j_j__o_free(v14, v18);
  return (unsigned int)v7;
}
