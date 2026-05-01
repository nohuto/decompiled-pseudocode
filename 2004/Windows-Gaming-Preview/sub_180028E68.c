/*
 * XREFs of sub_180028E68 @ 0x180028E68
 * Callers:
 *     sub_1800296C0 @ 0x1800296C0 (sub_1800296C0.c)
 *     sub_180029930 @ 0x180029930 (sub_180029930.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_180011B00 @ 0x180011B00 (sub_180011B00.c)
 *     sub_180012300 @ 0x180012300 (sub_180012300.c)
 *     sub_180016688 @ 0x180016688 (sub_180016688.c)
 *     sub_180016730 @ 0x180016730 (sub_180016730.c)
 *     sub_180016970 @ 0x180016970 (sub_180016970.c)
 *     sub_180028DE8 @ 0x180028DE8 (sub_180028DE8.c)
 *     sub_18002A4F4 @ 0x18002A4F4 (sub_18002A4F4.c)
 *     sub_18002A5F4 @ 0x18002A5F4 (sub_18002A5F4.c)
 *     sub_18002BD00 @ 0x18002BD00 (sub_18002BD00.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18002CC2C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_18002CDA4 @ 0x18002CDA4 (sub_18002CDA4.c)
 *     sub_1800389C0 @ 0x1800389C0 (sub_1800389C0.c)
 *     sub_180038EAC @ 0x180038EAC (sub_180038EAC.c)
 *     sub_1800391C0 @ 0x1800391C0 (sub_1800391C0.c)
 *     sub_180039484 @ 0x180039484 (sub_180039484.c)
 *     sub_18003B1DC @ 0x18003B1DC (sub_18003B1DC.c)
 *     ??2@YAPEAX_K@Z @ 0x18004482C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_180028E68(__int64 a1, __int128 *a2, __int64 *a3, __int64 a4)
{
  __int64 v6; // rbx
  HSTRING *v7; // r15
  int v8; // edx
  int v9; // eax
  unsigned int v10; // edi
  int v11; // edx
  _QWORD *v12; // r12
  __int64 **v13; // r15
  _QWORD *v15; // rbx
  int v16; // eax
  __int64 v17; // rcx
  int v18; // edx
  int v19; // eax
  __int64 v20; // rcx
  int v21; // edx
  __int64 v22; // rcx
  HSTRING v23; // rbx
  int v24; // eax
  _QWORD *v25; // r12
  int v26; // eax
  int v27; // eax
  HSTRING v28; // rcx
  __int64 (__fastcall ***v29)(_QWORD, void *, HSTRING *); // rdx
  PCWSTR StringRawBuffer; // rax
  int v31; // eax
  volatile signed __int64 **v32; // rdi
  int v33; // eax
  __int64 *v34; // rcx
  int v35; // eax
  __int64 v36; // rcx
  int v37; // edx
  __int64 (__fastcall ***v38)(_QWORD, void *, HSTRING *); // rcx
  int v39; // eax
  __int64 v40; // rcx
  int v41; // edx
  HSTRING v42; // rdi
  HSTRING v43; // rcx
  __int64 *v44; // rcx
  int v45; // eax
  __int64 v46; // rcx
  int v47; // edx
  volatile signed __int64 *v48; // r15
  __int64 v49; // rdi
  _OWORD *v50; // rax
  __int64 v51; // rdx
  int v52; // eax
  int v53; // r9d
  int v54; // edx
  volatile signed __int64 *v55; // rcx
  int v56; // eax
  char v57; // [rsp+30h] [rbp-50h]
  HSTRING v58; // [rsp+38h] [rbp-48h] BYREF
  HSTRING string[2]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v60; // [rsp+50h] [rbp-30h] BYREF
  volatile signed __int64 **v61; // [rsp+60h] [rbp-20h]
  __int128 v62; // [rsp+70h] [rbp-10h] BYREF
  __int64 retaddr; // [rsp+B8h] [rbp+38h]
  __int64 v65; // [rsp+D8h] [rbp+58h]

  v65 = a4;
  v6 = *a3;
  v7 = (HSTRING *)(a1 + 160);
  v57 = 1;
  if ( *(_DWORD *)(*a3 + 20) != 2 )
  {
    if ( *v7 )
    {
      v8 = 645;
      goto LABEL_18;
    }
    goto LABEL_12;
  }
  if ( !*v7 )
  {
    v8 = 629;
LABEL_18:
    v10 = -2147024891;
    sub_180003268(retaddr, v8, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", -2147024891);
    goto LABEL_19;
  }
  WindowsDeleteString(0LL);
  string[0] = 0LL;
  v9 = sub_180016970(v6, string);
  if ( v9 < 0 )
    sub_180012300(retaddr, 634, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v9);
  if ( string[0] )
  {
    if ( !sub_180028DE8(v7, string, 1u) )
    {
      v10 = -2147024891;
      v11 = 641;
      goto LABEL_8;
    }
    WindowsDeleteString(string[0]);
    a4 = v65;
LABEL_12:
    v12 = (_QWORD *)(a1 + 280);
    v61 = (volatile signed __int64 **)(a1 + 280);
    v13 = (__int64 **)(a1 + 288);
    if ( *(_QWORD *)(a1 + 280) && *v13 )
    {
      v60 = *a2;
      if ( sub_1800389C0(*v12, &v60) )
        return 0LL;
    }
    else
    {
      v57 = 0;
      std::shared_ptr<__ExceptionPtr>::operator=(a1 + 288, a4);
    }
    v15 = (_QWORD *)(a1 + 152);
    v60 = *a2;
    if ( *(_QWORD *)(a1 + 152) )
    {
      v16 = sub_180016688(*v13, &v60, 0xFu, (HSTRING *)(a1 + 152));
      v17 = retaddr;
      if ( v16 >= 0 )
        goto LABEL_39;
      v18 = 679;
      goto LABEL_38;
    }
    WindowsDeleteString(0LL);
    *v15 = 0LL;
    if ( (int)sub_180016730((__int64)*v13, &v60, 15LL, (HSTRING *)(a1 + 152)) < 0 || !*v15 )
    {
LABEL_39:
      v23 = 0LL;
      *(_QWORD *)&v60 = 0LL;
      if ( v57 )
      {
        WindowsDeleteString(0LL);
        *(_QWORD *)&v60 = 0LL;
        v24 = sub_18002BD00(a1 + 16, &v60);
        if ( v24 < 0 )
          sub_180012300(retaddr, 710, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v24);
        v23 = (HSTRING)v60;
      }
      v25 = (_QWORD *)(a1 + 304);
      if ( !*(_QWORD *)(a1 + 304) && !v23 )
      {
        if ( v57 )
        {
          string[0] = 0LL;
          v62 = *a2;
          WindowsDeleteString(0LL);
          string[0] = 0LL;
          v26 = sub_180016730((__int64)*v13, &v62, 25LL, string);
          v10 = v26;
          if ( v26 < 0 )
          {
            sub_180003268(
              retaddr,
              767,
              (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
              v26);
LABEL_50:
            WindowsDeleteString(string[0]);
LABEL_91:
            WindowsDeleteString(v23);
            return v10;
          }
          v58 = 0LL;
          v62 = *a2;
          WindowsDeleteString(0LL);
          v58 = 0LL;
          v27 = sub_180016730((__int64)*v13, &v62, 26LL, &v58);
          v10 = v27;
          if ( v27 < 0 )
          {
            sub_180003268(
              retaddr,
              774,
              (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
              v27);
            WindowsDeleteString(v58);
            v58 = 0LL;
            goto LABEL_50;
          }
          v28 = string[0];
          if ( string[0] || v58 )
          {
            v29 = (__int64 (__fastcall ***)(_QWORD, void *, HSTRING *))*v25;
            if ( *v25 )
            {
              *v25 = 0LL;
              ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, void *, HSTRING *)))(*v29)[2])(v29);
              v28 = string[0];
            }
            if ( v28 )
            {
              StringRawBuffer = WindowsGetStringRawBuffer(v28, 0LL);
              v31 = sub_18002A5F4(StringRawBuffer, v25);
              if ( v31 < 0 )
                sub_180012300(
                  retaddr,
                  782,
                  (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
                  v31);
            }
            v32 = v61;
            v33 = sub_180038EAC(*v61, string, &v58);
            if ( v33 < 0 )
              sub_180012300(
                retaddr,
                785,
                (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
                v33);
          }
          else
          {
            v32 = v61;
          }
          WindowsDeleteString(v58);
          v58 = 0LL;
          WindowsDeleteString(string[0]);
LABEL_84:
          if ( v57 )
          {
            v62 = *a2;
            v48 = *v32;
            if ( v62 != 0 && *a3 && *((_QWORD *)v48 + 11) )
            {
              v49 = *((_QWORD *)v48 + 10);
              v62 = (unsigned __int64)(v48 + 10);
              v50 = operator new(0x38uLL);
              v50[2] = *a2;
              v51 = *a3;
              *a3 = 0LL;
              *((_QWORD *)v50 + 6) = v51;
              *(_QWORD *)v50 = v49;
              *((_QWORD *)v50 + 1) = v49;
              *((_QWORD *)v50 + 2) = v49;
              *((_WORD *)v50 + 12) = 0;
              sub_18003B1DC(v48 + 10, &v62);
              v52 = sub_180039484(v48);
              if ( v52 < 0 )
                sub_180012300(
                  retaddr,
                  82,
                  (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
                  v52);
LABEL_90:
              v10 = 0;
              goto LABEL_91;
            }
            v10 = -2147024809;
            sub_180003268(
              retaddr,
              78,
              (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
              -2147024809);
            v53 = -2147024809;
            v54 = 793;
          }
          else
          {
            v55 = *v32;
            if ( *v32 )
            {
              *v32 = 0LL;
              sub_180011B00(v55);
            }
            v56 = sub_18002CDA4(v32, a2, a3, v65);
            v10 = v56;
            if ( v56 >= 0 )
              goto LABEL_90;
            v53 = v56;
            v54 = 801;
          }
          sub_180003268(retaddr, v54, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v53);
          goto LABEL_91;
        }
LABEL_83:
        v32 = v61;
        goto LABEL_84;
      }
      v34 = *v13;
      v62 = *a2;
      if ( v23 )
      {
        v35 = sub_180016688(v34, &v62, 0x1Au, (HSTRING *)&v60);
        v36 = retaddr;
        if ( v35 >= 0 )
          goto LABEL_68;
        v37 = 722;
      }
      else
      {
        v35 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, __int64, const WCHAR *, int))(*v34 + 72))(
                v34,
                &v62,
                26LL,
                &word_180051520,
                2);
        v36 = retaddr;
        if ( v35 >= 0 )
          goto LABEL_68;
        v37 = 729;
      }
      sub_180012300(v36, v37, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v35);
LABEL_68:
      string[0] = 0LL;
      v38 = (__int64 (__fastcall ***)(_QWORD, void *, HSTRING *))*v25;
      if ( !*v25 )
        goto LABEL_76;
      v58 = 0LL;
      v39 = (**v38)(v38, &unk_180050DB8, &v58);
      v40 = retaddr;
      if ( v39 >= 0 )
      {
        v42 = v58;
        WindowsDeleteString(string[0]);
        string[0] = 0LL;
        v39 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v42 + 96LL))(v42, string);
        v40 = retaddr;
        if ( v39 >= 0 )
          goto LABEL_74;
        v41 = 738;
      }
      else
      {
        v41 = 736;
      }
      sub_180012300(v40, v41, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v39);
LABEL_74:
      v43 = v58;
      if ( v58 )
      {
        v58 = 0LL;
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v43 + 16LL))(v43);
      }
LABEL_76:
      v44 = *v13;
      v62 = *a2;
      if ( string[0] )
      {
        v45 = sub_180016688(v44, &v62, 0x19u, string);
        v46 = retaddr;
        if ( v45 < 0 )
        {
          v47 = 748;
LABEL_81:
          sub_180012300(v46, v47, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v45);
        }
      }
      else
      {
        v45 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, __int64, const WCHAR *, int))(*v44 + 72))(
                v44,
                &v62,
                25LL,
                &word_180051520,
                2);
        v46 = retaddr;
        if ( v45 < 0 )
        {
          v47 = 756;
          goto LABEL_81;
        }
      }
      WindowsDeleteString(string[0]);
      goto LABEL_83;
    }
    if ( !*(_QWORD *)(a1 + 256) || !*(_QWORD *)(a1 + 240) )
    {
LABEL_35:
      if ( v57 )
      {
        v16 = sub_1800391C0(*v12, 15LL, a1 + 152);
        v17 = retaddr;
        if ( v16 < 0 )
        {
          v18 = 702;
LABEL_38:
          sub_180012300(v17, v18, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v16);
          goto LABEL_39;
        }
      }
      goto LABEL_39;
    }
    *(_QWORD *)&v60 = 0LL;
    v19 = sub_18002A4F4(a1, &v60);
    v20 = retaddr;
    if ( v19 >= 0 )
    {
      v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v60 + 72LL))(v60, *v15);
      v20 = retaddr;
      if ( v19 >= 0 )
        goto LABEL_33;
      v21 = 696;
    }
    else
    {
      v21 = 694;
    }
    sub_180012300(v20, v21, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v19);
LABEL_33:
    v22 = v60;
    if ( (_QWORD)v60 )
    {
      *(_QWORD *)&v60 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    }
    goto LABEL_35;
  }
  v10 = -2147024809;
  v11 = 636;
LABEL_8:
  sub_180003268(retaddr, v11, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v10);
  WindowsDeleteString(string[0]);
LABEL_19:
  sub_180003268(retaddr, 656, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v10);
  return v10;
}
