/*
 * XREFs of ?LayoutRow@GridRow@@QEAAXAEBUCRect@Geometry@@@Z @ 0x1803B7F20
 * Callers:
 *     ?LayoutRows@GridLayout@@QEAAXAEBUCRect@Geometry@@@Z @ 0x1803B80B4 (-LayoutRows@GridLayout@@QEAAXAEBUCRect@Geometry@@@Z.c)
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x18001BD54 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     GetThreadUILanguage_0 @ 0x18008EA46 (GetThreadUILanguage_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall GridRow::LayoutRow(GridRow *this, const struct Geometry::CRect *a2)
{
  _QWORD *v2; // rsi
  int v5; // r12d
  int v6; // edi
  _QWORD *v7; // r14
  int v8; // ecx
  int v9; // eax
  int v10; // r14d
  int v11; // esi
  int v12; // eax
  LANGID ThreadUILanguage_0; // ax
  int v14; // eax
  _QWORD *v15; // rdi
  _QWORD *v16; // r12
  __int64 v17; // r15
  unsigned int v18; // esi
  __int64 v19; // rcx
  int v20; // eax
  int v21; // r8d
  int v22; // edx
  int v23; // ecx
  __int64 v24[2]; // [rsp+20h] [rbp-40h] BYREF
  __int128 v25; // [rsp+30h] [rbp-30h]
  __int128 v26; // [rsp+40h] [rbp-20h] BYREF

  v2 = (_QWORD *)*((_QWORD *)this + 3);
  v5 = *((_DWORD *)this + 1);
  v6 = 0;
  v7 = &v2[*((_QWORD *)this + 4)];
  while ( v2 != v7 )
  {
    if ( v6 )
      v6 += *(_DWORD *)this;
    v6 += (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v2 + 72LL))(*v2, *((unsigned int *)this + 1));
    ++v2;
  }
  v8 = *(_DWORD *)a2;
  v9 = *((_DWORD *)a2 + 2);
  v10 = *((_DWORD *)a2 + 1);
  DWORD1(v25) = v10;
  v11 = v10 + v5;
  v12 = (v9 - (v8 + v6)) / 2;
  HIDWORD(v25) = v10 + v5;
  LODWORD(v25) = v12 + v8;
  DWORD2(v25) = v8 + v6 + v12;
  *((_DWORD *)this + 2) = v12 + v8;
  *((_DWORD *)this + 3) = v10;
  *((_DWORD *)this + 4) = v8 + v6 + v12;
  *((_DWORD *)this + 5) = v10 + v5;
  ThreadUILanguage_0 = GetThreadUILanguage_0();
  v14 = IsBiDiLocale(ThreadUILanguage_0);
  v15 = (_QWORD *)*((_QWORD *)this + 3);
  v16 = &v15[*((_QWORD *)this + 4)];
  if ( v15 != v16 )
  {
    v17 = v14;
    v18 = v11 - v10;
    do
    {
      v24[0] = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v24);
      (**(void (__fastcall ***)(_QWORD, GUID *, __int64 *))*v15)(*v15, &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d, v24);
      v19 = *v15;
      v26 = v25;
      v20 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v19 + 72LL))(v19, v18);
      v21 = v26;
      v22 = v20 + v26;
      v23 = v20 + v26 + *(_DWORD *)this;
      DWORD2(v26) = v20 + v26;
      LODWORD(v25) = v23;
      if ( v17 )
      {
        LODWORD(v26) = *((_DWORD *)this + 2) + *((_DWORD *)this + 4) - v22;
        DWORD2(v26) = v26 + v22 - v21;
      }
      (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v24[0] + 104LL))(v24[0], &v26);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v24);
      ++v15;
    }
    while ( v15 != v16 );
  }
}
