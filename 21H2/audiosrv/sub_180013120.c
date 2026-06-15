/*
 * XREFs of sub_180013120 @ 0x180013120
 * Callers:
 *     sub_180012C30 @ 0x180012C30 (sub_180012C30.c)
 *     sub_1800EABCC @ 0x1800EABCC (sub_1800EABCC.c)
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800EA84C @ 0x1800EA84C (sub_1800EA84C.c)
 *     sub_1800EE22C @ 0x1800EE22C (sub_1800EE22C.c)
 *     sub_1800EFB18 @ 0x1800EFB18 (sub_1800EFB18.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180013120(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        LPVOID a5,
        __int128 *a6,
        unsigned __int8 a7,
        unsigned __int8 a8,
        unsigned __int16 *Src,
        int a10,
        __int64 *a11)
{
  int v14; // eax
  int v15; // esi
  unsigned __int16 *v16; // rsi
  __int64 v17; // rbx
  void *v18; // rax
  void *v19; // rdi
  _QWORD *v20; // rax
  _QWORD *v21; // rdi
  _QWORD *v22; // rbx
  LPVOID v23; // rsi
  void *v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // r8
  __int128 v27; // xmm0
  int v28; // ebp
  int v29; // r14d
  __int64 v30; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rdx
  int v37; // eax
  _QWORD *v38; // [rsp+30h] [rbp-48h] BYREF
  __int128 v39; // [rsp+40h] [rbp-38h]
  void *retaddr; // [rsp+78h] [rbp+0h]
  void *pv; // [rsp+80h] [rbp+8h]

  a5 = 0LL;
  v14 = (*(__int64 (__fastcall **)(_QWORD, LPVOID *))(**(_QWORD **)(a1 + 16) + 40LL))(*(_QWORD *)(a1 + 16), &a5);
  v15 = v14;
  if ( v14 < 0 )
  {
    sub_18004BD84(
      retaddr,
      841LL,
      "avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (unsigned int)v14);
    goto LABEL_19;
  }
  v16 = Src;
  v17 = Src[8];
  v18 = CoTaskMemAlloc(v17 + 18);
  v19 = v18;
  if ( v18 )
  {
    memcpy(v18, v16, v17 + 18);
    v15 = 0;
  }
  else
  {
    v15 = -2147024882;
  }
  pv = v19;
  if ( v15 >= 0 )
  {
    v20 = (_QWORD *)sub_18006A18C(64LL, &unk_18019F848);
    v21 = v20;
    if ( v20 )
    {
      v20[1] = 0LL;
      v20[3] = 0LL;
      v20[4] = 0LL;
      v20[5] = 0LL;
      v20[6] = 0LL;
      *v20 = 0LL;
      v20[2] = 0LL;
      v20[7] = 0LL;
    }
    else
    {
      v21 = 0LL;
    }
    v22 = v21;
    v38 = v21;
    if ( v21 )
    {
      v23 = a5;
      a5 = 0LL;
      CoTaskMemFree((LPVOID)*v21);
      *v21 = v23;
      *((_BYTE *)v21 + 49) = a2 == 3;
      v24 = pv;
      pv = 0LL;
      CoTaskMemFree((LPVOID)v21[2]);
      v21[2] = v24;
      v21[3] = a4;
      v27 = *a6;
      *((_OWORD *)v21 + 2) = *a6;
      v28 = a7;
      *((_BYTE *)v21 + 48) = a7;
      v29 = a8;
      *((_BYTE *)v21 + 50) = a8;
      *((_DWORD *)v21 + 2) = a3;
      v39 = v27;
      v21[7] = 0LL;
      if ( !a10 )
        goto LABEL_9;
      v25 = *((_QWORD *)&v39 + 1);
      v32 = v39 - 0x4CFAB9D6FC1CFC9BLL;
      if ( (_QWORD)v39 == 0x4CFAB9D6FC1CFC9BLL )
        v32 = *((_QWORD *)&v39 + 1) + 0x4D8797E94DB41F4BLL;
      if ( !v32 )
        goto LABEL_40;
      v33 = v39 - 0x4BB7C4368335B450LL;
      if ( (_QWORD)v39 == 0x4BB7C4368335B450LL )
        v33 = *((_QWORD *)&v39 + 1) + 0x1F19ACFA440BC67ALL;
      if ( !v33 )
        goto LABEL_40;
      v34 = v39 - 0x4BE1A88E461D14AFLL;
      if ( (_QWORD)v39 == 0x4BE1A88E461D14AFLL )
        v34 = *((_QWORD *)&v39 + 1) - 0x21014BD4BFD809A8LL;
      if ( v34 )
      {
        v35 = v39 - 0x48B1B9CD98951333LL;
        if ( (_QWORD)v39 == 0x48B1B9CD98951333LL )
          v35 = *((_QWORD *)&v39 + 1) + 0x88CD297BF005C60LL;
        if ( v35 )
          goto LABEL_9;
        v36 = 2LL;
      }
      else
      {
LABEL_40:
        v36 = 0LL;
      }
      v37 = sub_1800EFB18(0LL, v36);
      v15 = v37;
      if ( v37 >= 0 )
      {
LABEL_9:
        if ( a11 != (__int64 *)&v38 )
        {
          v22 = 0LL;
          v30 = *a11;
          *a11 = (__int64)v21;
          if ( v30 )
            ((void (*)(void))sub_1800EA84C)();
        }
        if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
          && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
          && *((_BYTE *)off_18019C348 + 25) >= 4u )
        {
          sub_1800EE22C(*((_QWORD *)off_18019C348 + 2), v25, v26, a4, v28, v29, v38);
        }
        v15 = 0;
        goto LABEL_15;
      }
      sub_18004BD84(
        retaddr,
        858LL,
        "avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (unsigned int)v37);
    }
    else
    {
      sub_18004BD84(retaddr, 847LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp", 2147942414LL);
      v15 = -2147024882;
    }
LABEL_15:
    if ( v22 )
      sub_1800EA84C(v22);
    goto LABEL_17;
  }
  sub_18004BD84(retaddr, 844LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp", (unsigned int)v15);
LABEL_17:
  if ( pv )
    CoTaskMemFree(pv);
LABEL_19:
  if ( a5 )
    CoTaskMemFree(a5);
  return (unsigned int)v15;
}
