/*
 * XREFs of sub_180012C30 @ 0x180012C30
 * Callers:
 *     sub_180014230 @ 0x180014230 (sub_180014230.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18000F730 @ 0x18000F730 (sub_18000F730.c)
 *     sub_180013120 @ 0x180013120 (sub_180013120.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800C64A4 @ 0x1800C64A4 (sub_1800C64A4.c)
 *     sub_1800CA660 @ 0x1800CA660 (sub_1800CA660.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_180012C30(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        _OWORD *a10,
        __int64 a11,
        __int64 a12,
        void *Src,
        int a14,
        __int64 a15,
        unsigned int a16,
        char a17,
        __int64 a18,
        __int64 a19)
{
  int v20; // edx
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // r15d
  __int64 v25; // rdi
  _QWORD *v26; // rsi
  _QWORD *v27; // rbx
  __int64 v28; // rsi
  bool v29; // al
  unsigned int v30; // eax
  __int64 v31; // rbx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // r14
  __int64 v36; // rcx
  __int64 v37; // r14
  int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // r8
  void *v42; // [rsp+20h] [rbp-D9h]
  __int64 v43; // [rsp+60h] [rbp-99h] BYREF
  __int64 v44; // [rsp+68h] [rbp-91h] BYREF
  __int64 *v45; // [rsp+70h] [rbp-89h]
  __int64 v46; // [rsp+78h] [rbp-81h] BYREF
  char v47; // [rsp+80h] [rbp-79h]
  char v48; // [rsp+89h] [rbp-70h]
  __int64 v49; // [rsp+90h] [rbp-69h]
  __int64 v50; // [rsp+98h] [rbp-61h] BYREF
  __int64 v51[2]; // [rsp+A0h] [rbp-59h] BYREF
  __int64 v52; // [rsp+B0h] [rbp-49h]
  char v53; // [rsp+B8h] [rbp-41h]
  __int64 v54; // [rsp+C0h] [rbp-39h]
  __int64 v55; // [rsp+C8h] [rbp-31h]
  _QWORD v56[2]; // [rsp+D0h] [rbp-29h] BYREF
  __int64 v57; // [rsp+E0h] [rbp-19h] BYREF
  void *retaddr; // [rsp+138h] [rbp+3Fh]

  v52 = a4;
  v57 = a2;
  v49 = a11;
  v55 = a15;
  v43 = a18;
  v54 = a19;
  if ( (a6 & 4) != 0 || (a6 & 0xFFF8) != 0 || a7 == 1 && a6 < 0 || (a6 & 0x88000000) == 0x8000000 )
  {
    sub_18004BD84(retaddr, 1066LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp", 2147942487LL);
    return 2147942487LL;
  }
  v50 = 0LL;
  if ( a12 )
    v20 = *(_DWORD *)(a12 + 52);
  else
    v20 = 0;
  *(_OWORD *)v51 = *a10;
  v21 = sub_180013120(
          a1,
          a8,
          a14,
          *(_QWORD *)(a11 + 32),
          v42,
          (__int64)v51,
          a17,
          (a6 & 1) != 0,
          Src,
          v20,
          (__int64)&v50);
  v24 = v21;
  v25 = v50;
  if ( v21 >= 0 )
  {
    v26 = 0LL;
    v51[0] = 0LL;
    if ( !a14 && !*(_BYTE *)(v50 + 48) )
    {
      v27 = (_QWORD *)sub_18006A18C(24LL, &unk_18019F848);
      if ( v27 )
      {
        v27[1] = 0LL;
        v27[2] = 0LL;
        *v27 = 0LL;
      }
      else
      {
        v27 = 0LL;
      }
      if ( !v27 )
      {
        v24 = -2147024882;
        sub_18004BD84(
          retaddr,
          883LL,
          "avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          2147942414LL);
        sub_18004BD84(
          retaddr,
          1075LL,
          "avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          2147942414LL);
        goto LABEL_54;
      }
      v28 = *v27;
      *v27 = a3;
      if ( a3 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
      if ( v28 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
      v29 = a5 != 3 && a5 != 8 && (a6 & 0x1000000) == 0;
      *((_BYTE *)v27 + 8) = v29;
      v27[2] = v25;
      v26 = v27;
      v51[0] = (__int64)v27;
    }
    if ( (byte_18019F980 & 0x20) != 0 )
      sub_18000F730(v22, (__int64)&unk_18015A8F0, v23, 1LL, (__int64)v56);
    v30 = RpcImpersonateClient(0LL);
    if ( !v30 )
    {
      v48 = 1;
      v31 = 0LL;
      v56[0] = 0LL;
      if ( v43 )
      {
        sub_1800C64A4(v56);
        v31 = v56[0];
        v37 = v49;
LABEL_46:
        *(_QWORD *)(v37 + 152) = *(_QWORD *)v25;
        v52 = v37;
        v53 = 1;
        v38 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, unsigned int, __int64))(*(_QWORD *)v31 + 24LL))(
                v31,
                v57,
                v37,
                v55,
                a16,
                v54);
        v24 = v38;
        if ( v38 < 0 )
        {
          sub_18004BD84(
            retaddr,
            1117LL,
            "avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (unsigned int)v38);
        }
        else
        {
          if ( (byte_18019F980 & 0x20) != 0 )
            sub_18000F730(v39, (__int64)&unk_18015A8E0, v40, 1LL, (__int64)&v57);
          v24 = 0;
        }
        *(_QWORD *)(v37 + 152) = 0LL;
        goto LABEL_51;
      }
      v44 = 0LL;
      v45 = &v44;
      v46 = 0LL;
      v47 = 1;
      v24 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64, __int64 *))(*(_QWORD *)qword_18019EE48
                                                                                             + 48LL))(
              qword_18019EE48,
              v52,
              v25,
              a16,
              a12,
              &v46);
      if ( v47 )
      {
        v32 = *v45;
        *v45 = v46;
        if ( v32 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
      }
      if ( v24 < 0 )
      {
        sub_18004BD84(
          retaddr,
          1088LL,
          "avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (unsigned int)v24);
      }
      else
      {
        v33 = v44;
        v31 = v44;
        v56[0] = v44;
        if ( v44 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 8LL))(v44);
          v33 = v44;
        }
        if ( !v26 )
        {
          v37 = v49;
LABEL_44:
          if ( v33 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
          goto LABEL_46;
        }
        v43 = 0LL;
        v45 = &v43;
        v46 = 0LL;
        v47 = 1;
        v24 = (*(__int64 (__fastcall **)(__int64, _QWORD *, _QWORD, __int64 *))(*(_QWORD *)v33 + 296LL))(
                v33,
                v26,
                a16,
                &v46);
        if ( v47 )
        {
          v34 = *v45;
          *v45 = v46;
          if ( v34 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
        }
        if ( v24 >= 0 )
        {
          v35 = v31;
          v36 = v43;
          v31 = v43;
          v56[0] = v43;
          if ( v43 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 8LL))(v43);
            v36 = v43;
          }
          if ( v35 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
            v36 = v43;
          }
          v37 = v49;
          *(_DWORD *)(v49 + 196) = 1;
          if ( v36 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
          v33 = v44;
          goto LABEL_44;
        }
        sub_18004BD84(
          retaddr,
          1097LL,
          "avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (unsigned int)v24);
        sub_18000F708(&v43);
      }
      sub_18000F708(&v44);
LABEL_51:
      if ( v31 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
      RpcRevertToSelf();
      goto LABEL_54;
    }
    v24 = sub_1800CA660(retaddr, 1080LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp", v30);
LABEL_54:
    if ( v26 )
    {
      if ( *v26 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v26 + 16LL))(*v26);
      sub_18006A148(v26, 24LL);
    }
    goto LABEL_58;
  }
  sub_18004BD84(
    retaddr,
    1071LL,
    "avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (unsigned int)v21);
LABEL_58:
  if ( v25 )
  {
    sub_18006A148(*(_QWORD *)(v25 + 56), 16LL);
    *(_QWORD *)(v25 + 56) = 0LL;
    CoTaskMemFree(*(LPVOID *)(v25 + 16));
    *(_QWORD *)(v25 + 16) = 0LL;
    CoTaskMemFree(*(LPVOID *)v25);
    *(_QWORD *)v25 = 0LL;
    sub_18006A148(v25, 64LL);
  }
  return (unsigned int)v24;
}
