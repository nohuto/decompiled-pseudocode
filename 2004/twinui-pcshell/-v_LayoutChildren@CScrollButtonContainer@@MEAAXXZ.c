/*
 * XREFs of ?v_LayoutChildren@CScrollButtonContainer@@MEAAXXZ @ 0x1803BAD30
 * Callers:
 *     <none>
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x18001BD54 (-IsBiDiLocale@@YAHK@Z.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     GetThreadUILanguage_0 @ 0x18008EA46 (GetThreadUILanguage_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CScrollButtonContainer::v_LayoutChildren(CScrollButtonContainer *this)
{
  __int64 v2; // rcx
  int v3; // edx
  int v4; // eax
  int v5; // esi
  bool v6; // zf
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int128 v10; // xmm6
  int v11; // ebx
  LANGID ThreadUILanguage_0; // ax
  int v13; // esi
  __int64 v14; // rcx
  int v15; // eax
  __int128 v16; // [rsp+30h] [rbp-30h] BYREF

  v2 = *((_QWORD *)this + 11);
  v3 = *((_DWORD *)this + 15);
  LODWORD(v16) = *((_DWORD *)this + 14);
  DWORD2(v16) = v16 + 1;
  DWORD1(v16) = v3;
  HIDWORD(v16) = v3 + 1;
  (*(void (__fastcall **)(__int64, __int128 *, _QWORD, _QWORD))(*(_QWORD *)v2 + 24LL))(v2, &v16, 0LL, 0LL);
  v4 = *((_DWORD *)this + 17) - *((_DWORD *)this + 15);
  v5 = *((_DWORD *)this + 16) - *((_DWORD *)this + 14);
  *(_QWORD *)&v16 = 0LL;
  v6 = (*((_BYTE *)this + 232) & 1) == 0;
  *((_QWORD *)&v16 + 1) = __PAIR64__(v4, v5);
  if ( v6 )
  {
    v10 = v16;
    v11 = v5 / 2;
    DWORD2(v16) = v5 / 2 - (*((_DWORD *)this + 69) >> 1);
    ThreadUILanguage_0 = GetThreadUILanguage_0();
    v13 = IsBiDiLocale(ThreadUILanguage_0);
    if ( v13 )
      v14 = *((_QWORD *)this + 52);
    else
      v14 = *((_QWORD *)this + 51);
    (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v14 + 104LL))(v14, &v16);
    v15 = v11 + (*((_DWORD *)this + 69) >> 1);
    v16 = v10;
    LODWORD(v16) = v15;
    if ( v13 )
    {
      v9 = *((_QWORD *)this + 51);
      goto LABEL_4;
    }
  }
  else
  {
    v7 = *((_QWORD *)this + 35);
    LODWORD(v16) = 0;
    DWORD2(v16) = v7;
    DWORD1(v16) = (v4 - HIDWORD(v7)) / 2;
    v8 = *((_QWORD *)this + 51);
    HIDWORD(v16) = HIDWORD(v7) + DWORD1(v16);
    (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v8 + 104LL))(v8, &v16);
    DWORD2(v16) = v5;
    LODWORD(v16) = v5 - v7;
  }
  v9 = *((_QWORD *)this + 52);
LABEL_4:
  (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v9 + 104LL))(v9, &v16);
}
