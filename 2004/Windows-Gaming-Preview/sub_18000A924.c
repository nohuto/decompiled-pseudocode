/*
 * XREFs of sub_18000A924 @ 0x18000A924
 * Callers:
 *     sub_18000A1B0 @ 0x18000A1B0 (sub_18000A1B0.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_18000CE50 @ 0x18000CE50 (sub_18000CE50.c)
 *     sub_18000CF38 @ 0x18000CF38 (sub_18000CF38.c)
 *     sub_18000D0F8 @ 0x18000D0F8 (sub_18000D0F8.c)
 *     sub_1800120A0 @ 0x1800120A0 (sub_1800120A0.c)
 *     sub_180012300 @ 0x180012300 (sub_180012300.c)
 *     sub_18002C2E0 @ 0x18002C2E0 (sub_18002C2E0.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12 #try_helpers=1
__int64 __fastcall sub_18000A924(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  _WORD *v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v9; // rbx
  int v10; // eax
  const WCHAR *StringRawBuffer; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  _WORD *v14; // rax
  int v15; // eax
  __int64 v16; // rbx
  int v17; // eax
  PCWSTR v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  const WCHAR *v21; // rcx
  const WCHAR *v22; // r8
  _QWORD *v23; // rdx
  __int64 v24; // rcx
  signed __int64 v25; // rax
  signed __int64 v26; // rtt
  int v27; // eax
  unsigned int v28; // ebx
  __int64 v29; // rcx
  __int64 v30; // rbx
  int v31; // eax
  unsigned int v32; // ebx
  __int64 v33; // rcx
  __int64 v34; // rbx
  int v35; // eax
  unsigned int v36; // ebx
  __int64 v37; // rcx
  __int64 v38; // rcx
  int v39; // eax
  __int64 v40; // rbx
  int v41; // eax
  unsigned int v42; // ebx
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // [rsp+30h] [rbp-D8h] BYREF
  HSTRING v49; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v50; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v51; // [rsp+48h] [rbp-C0h] BYREF
  HSTRING v52; // [rsp+50h] [rbp-B8h] BYREF
  HSTRING string; // [rsp+58h] [rbp-B0h] BYREF
  HSTRING v54; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v55; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v56; // [rsp+70h] [rbp-98h] BYREF
  HSTRING v57; // [rsp+78h] [rbp-90h] BYREF
  HSTRING v58; // [rsp+80h] [rbp-88h] BYREF
  __int64 v59; // [rsp+88h] [rbp-80h] BYREF
  __int64 v60; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v61[16]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v62[16]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v63[16]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v64[64]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 retaddr; // [rsp+108h] [rbp+0h]
  UINT32 length; // [rsp+110h] [rbp+8h] BYREF
  __int64 v67; // [rsp+118h] [rbp+10h] BYREF
  UINT32 v68; // [rsp+120h] [rbp+18h] BYREF
  __int64 v69; // [rsp+128h] [rbp+20h] BYREF

  v67 = a2;
  v2 = a2;
  v4 = *(_WORD **)(a1 + 88);
  if ( v4 && *v4 )
  {
    v50 = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 96LL))(a2, &v50);
    v6 = v5;
    if ( v5 < 0 )
    {
      sub_180003268(retaddr, 166, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp", v5);
LABEL_5:
      v7 = v50;
      if ( !v50 )
        return v6;
      v50 = 0LL;
LABEL_7:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      return v6;
    }
    v9 = v50;
    if ( !v50 )
      return 0LL;
    string = 0LL;
    WindowsDeleteString(0LL);
    string = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v9 + 56LL))(v9, &string);
    v6 = v10;
    if ( v10 < 0 )
    {
      sub_180003268(retaddr, 170, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp", v10);
      WindowsDeleteString(string);
      string = 0LL;
      goto LABEL_5;
    }
    StringRawBuffer = WindowsGetStringRawBuffer(string, &length);
    if ( !StrStrNW(StringRawBuffer, *(PCWSTR *)(a1 + 88), length) )
    {
      WindowsDeleteString(string);
      string = 0LL;
      v12 = v50;
      if ( v50 )
      {
        v50 = 0LL;
LABEL_39:
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        return 0LL;
      }
      return 0LL;
    }
    WindowsDeleteString(string);
    string = 0LL;
    v13 = v50;
    if ( v50 )
    {
      v50 = 0LL;
LABEL_42:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      goto LABEL_43;
    }
    goto LABEL_43;
  }
  v14 = *(_WORD **)(a1 + 64);
  if ( !v14 || !*v14 )
    goto LABEL_43;
  v51 = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 104LL))(a2, &v51);
  v6 = v15;
  if ( v15 < 0 )
  {
    sub_180003268(retaddr, 179, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp", v15);
LABEL_21:
    v7 = v51;
    if ( !v51 )
      return v6;
    v51 = 0LL;
    goto LABEL_7;
  }
  v16 = v51;
  if ( !v51 )
    return 0LL;
  v54 = 0LL;
  WindowsDeleteString(0LL);
  v54 = 0LL;
  v17 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v16 + 48LL))(v16, &v54);
  v6 = v17;
  if ( v17 < 0 )
  {
    sub_180003268(retaddr, 183, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp", v17);
    WindowsDeleteString(v54);
    v54 = 0LL;
    goto LABEL_21;
  }
  v18 = WindowsGetStringRawBuffer(v54, &v68);
  v19 = *(_QWORD *)(a1 + 72);
  if ( v19 == -1 )
  {
    v20 = *(_QWORD *)(a1 + 64);
    if ( v20 )
    {
      do
        ++v19;
      while ( *(_WORD *)(v20 + 2 * v19) );
    }
    else
    {
      LODWORD(v19) = 0;
    }
  }
  v21 = &word_180051520;
  v22 = &word_180051520;
  if ( v18 )
    v22 = v18;
  if ( *(_QWORD *)(a1 + 64) )
    v21 = *(const WCHAR **)(a1 + 64);
  if ( CompareStringOrdinal(v21, v19, v22, v18 != 0LL ? v68 : 0, 1) != 2 )
  {
    WindowsDeleteString(v54);
    v54 = 0LL;
    v12 = v51;
    if ( v51 )
    {
      v51 = 0LL;
      goto LABEL_39;
    }
    return 0LL;
  }
  WindowsDeleteString(v54);
  v54 = 0LL;
  v13 = v51;
  if ( v51 )
  {
    v51 = 0LL;
    goto LABEL_42;
  }
LABEL_43:
  v69 = 0LL;
  v59 = *(_QWORD *)(a1 + 208);
  v60 = *(_QWORD *)(a1 + 112);
  if ( (int)sub_18000CE50(&v69, &v67, &v60, &v59) < 0 )
  {
    sub_180012300(retaddr, 201LL, "onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp");
LABEL_99:
    if ( v69 )
    {
      v69 = 0LL;
      sub_1800120A0();
    }
    return 0LL;
  }
  v23 = *(_QWORD **)(a1 + 128);
  if ( *(_QWORD **)(a1 + 136) == v23 )
  {
    sub_18000D0F8(a1 + 120, v23, &v69);
  }
  else
  {
    v24 = v69;
    *v23 = v69;
    if ( v24 )
    {
      v25 = *(_QWORD *)(v24 + 136);
      while ( v25 >= 0 )
      {
        v26 = v25;
        v25 = _InterlockedCompareExchange64((volatile signed __int64 *)(v24 + 136), v25 + 1, v25);
        if ( v26 == v25 )
          goto LABEL_51;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v25 + 16));
LABEL_51:
      v2 = v67;
    }
    *(_QWORD *)(a1 + 128) += 8LL;
  }
  v48 = 0LL;
  v27 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 48LL))(v2, &v48);
  v28 = v27;
  if ( v27 < 0 )
  {
    sub_180003268(retaddr, 210, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp", v27);
    v29 = v48;
    if ( v48 )
    {
      v48 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    }
    if ( v69 )
    {
      v69 = 0LL;
      sub_1800120A0();
    }
    return v28;
  }
  v49 = 0LL;
  v30 = v48;
  WindowsDeleteString(0LL);
  v49 = 0LL;
  v31 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v30 + 56LL))(v30, &v49);
  v32 = v31;
  if ( v31 < 0 )
  {
    sub_180003268(retaddr, 212, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp", v31);
    WindowsDeleteString(v49);
    v49 = 0LL;
    v33 = v48;
    if ( v48 )
    {
      v48 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
    }
    if ( v69 )
    {
      v69 = 0LL;
      sub_1800120A0();
    }
    return v32;
  }
  sub_18000CF38(a1 + 144, v61, &v49, &v69);
  v52 = 0LL;
  WindowsDeleteString(0LL);
  v52 = 0LL;
  if ( (int)sub_18002C2E0(v69 + 16, &v52) >= 0 && v52 )
    sub_18000CF38(a1 + 160, v62, &v52, &v69);
  v55 = 0LL;
  if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 104LL))(v2, &v55) >= 0 )
  {
    v34 = v55;
    if ( v55 )
    {
      v57 = 0LL;
      WindowsDeleteString(0LL);
      v57 = 0LL;
      v35 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v34 + 48LL))(v34, &v57);
      v36 = v35;
      if ( v35 < 0 )
      {
        sub_180003268(retaddr, 228, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp", v35);
        WindowsDeleteString(v57);
        v57 = 0LL;
        v37 = v55;
        if ( v55 )
        {
          v55 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
        }
        WindowsDeleteString(v52);
        v52 = 0LL;
        WindowsDeleteString(v49);
        v49 = 0LL;
        v38 = v48;
        if ( v48 )
        {
          v48 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
        }
        if ( v69 )
        {
          v69 = 0LL;
          sub_1800120A0();
        }
        return v36;
      }
      sub_18000CF38(a1 + 176, v63, &v57, &v69);
      WindowsDeleteString(v57);
    }
  }
  v56 = 0LL;
  v39 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 96LL))(v2, &v56);
  v40 = v56;
  if ( v39 < 0 || !v56 )
  {
LABEL_93:
    if ( v40 )
    {
      v56 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
    }
    v46 = v55;
    if ( v55 )
    {
      v55 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
    }
    WindowsDeleteString(v52);
    v52 = 0LL;
    WindowsDeleteString(v49);
    v49 = 0LL;
    v47 = v48;
    if ( v48 )
    {
      v48 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
    }
    goto LABEL_99;
  }
  v58 = 0LL;
  WindowsDeleteString(0LL);
  v58 = 0LL;
  v41 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v40 + 56LL))(v40, &v58);
  v42 = v41;
  if ( v41 >= 0 )
  {
    sub_18000CF38(a1 + 192, v64, &v58, &v69);
    WindowsDeleteString(v58);
    v40 = v56;
    goto LABEL_93;
  }
  sub_180003268(retaddr, 237, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp", v41);
  WindowsDeleteString(v58);
  v58 = 0LL;
  v43 = v56;
  if ( v56 )
  {
    v56 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
  }
  v44 = v55;
  if ( v55 )
  {
    v55 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
  }
  WindowsDeleteString(v52);
  v52 = 0LL;
  WindowsDeleteString(v49);
  v49 = 0LL;
  v45 = v48;
  if ( v48 )
  {
    v48 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
  }
  if ( v69 )
  {
    v69 = 0LL;
    sub_1800120A0();
  }
  return v42;
}
