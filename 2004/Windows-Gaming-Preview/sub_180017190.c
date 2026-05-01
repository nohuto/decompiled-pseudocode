/*
 * XREFs of sub_180017190 @ 0x180017190
 * Callers:
 *     sub_180039484 @ 0x180039484 (sub_180039484.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_180016FE4 @ 0x180016FE4 (sub_180016FE4.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 *     j_??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800447FC (j_--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180017190(__int64 a1, __int128 *a2, __int64 *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  int v9; // edi
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  HRESULT ApartmentType; // eax
  int v13; // ecx
  const WCHAR *v15; // rbx
  int v16; // r9d
  int v17; // edx
  int v18; // eax
  __int64 v19; // rdx
  __int128 v20; // [rsp+30h] [rbp-10h] BYREF
  __int64 retaddr; // [rsp+68h] [rbp+28h]
  unsigned int v22; // [rsp+70h] [rbp+30h] BYREF
  const WCHAR *pAptType; // [rsp+78h] [rbp+38h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+88h] [rbp+48h] BYREF

  v22 = 0;
  v20 = *a2;
  v6 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64))(*(_QWORD *)a1 + 64LL))(a1, &v20, 22LL);
  v7 = v6;
  if ( (_WORD)v6 == 2 )
  {
    v8 = *a3;
    if ( *a3 )
    {
      *a3 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    *a3 = 0LL;
    v9 = 0;
    v10 = operator new(0x68uLL, (const struct std::nothrow_t *)&unk_18005AF88);
    v11 = v10;
    if ( v10 )
    {
      v10[4] = 1LL;
      *v10 = off_180049CB0;
      v10[1] = off_180049C90;
      v10[2] = off_180049C58;
      if ( qword_18005ADB0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18005ADB0 + 8LL))(qword_18005ADB0);
      *v11 = off_180049DA0;
      v11[1] = off_180049D80;
      v11[2] = off_180049D48;
      *((_DWORD *)v11 + 10) = 0;
      *((_DWORD *)v11 + 11) = 0;
      *((_DWORD *)v11 + 12) = 0;
      v11[7] = 0LL;
      ApartmentType = CoGetApartmentType((APTTYPE *)&pAptType, &pAptQualifier);
      v13 = (int)pAptType;
      if ( ApartmentType < 0 )
        v13 = 1;
      LODWORD(pAptType) = v13;
      if ( v13 == 3 || !v13 )
      {
        *((_DWORD *)v11 + 18) = 1;
        *((_DWORD *)v11 + 20) = 0;
      }
      else
      {
        *((_DWORD *)v11 + 18) = 0;
        InitializeSRWLock((PSRWLOCK)v11 + 10);
      }
      *((_DWORD *)v11 + 22) = 0;
      *((_DWORD *)v11 + 24) = 0;
    }
    else
    {
      v9 = -2147024882;
      v11 = 0LL;
    }
    if ( v9 >= 0 )
    {
      *a3 = (__int64)v11;
      v11 = 0LL;
    }
    if ( v11 )
      (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
    if ( v9 >= 0 )
      return 0LL;
    sub_180003268(retaddr, 499, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp", v9);
    return (unsigned int)v9;
  }
  if ( v6 < 0 )
  {
    sub_180003268(retaddr, 504, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp", v6);
    return v7;
  }
  v15 = (const WCHAR *)operator new(v22 + 2LL, (const struct std::nothrow_t *)&unk_18005AF88);
  pAptType = v15;
  if ( !v15 )
  {
    v9 = -2147024882;
    v16 = -2147024882;
    v17 = 509;
LABEL_31:
    sub_180003268(retaddr, v17, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp", v16);
    goto LABEL_33;
  }
  v20 = *a2;
  v18 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, const WCHAR *, unsigned int *))(*(_QWORD *)a1 + 64LL))(
          a1,
          &v20,
          22LL,
          v15,
          &v22);
  v9 = v18;
  if ( v18 < 0 )
  {
    v17 = 511;
LABEL_30:
    v16 = v18;
    goto LABEL_31;
  }
  v18 = sub_180016FE4(v15, v22, a3);
  v9 = v18;
  if ( v18 < 0 )
  {
    v17 = 512;
    goto LABEL_30;
  }
  v9 = 0;
LABEL_33:
  if ( v15 )
    j_j__o_free(v15, v19);
  return (unsigned int)v9;
}
