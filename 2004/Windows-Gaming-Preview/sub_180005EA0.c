/*
 * XREFs of sub_180005EA0 @ 0x180005EA0
 * Callers:
 *     sub_180006368 @ 0x180006368 (sub_180006368.c)
 * Callees:
 *     sub_18000228C @ 0x18000228C (sub_18000228C.c)
 *     sub_18000335C @ 0x18000335C (sub_18000335C.c)
 *     sub_180004044 @ 0x180004044 (sub_180004044.c)
 *     sub_1800040EC @ 0x1800040EC (sub_1800040EC.c)
 *     sub_18000507C @ 0x18000507C (sub_18000507C.c)
 *     sub_180005258 @ 0x180005258 (sub_180005258.c)
 *     __security_check_cookie @ 0x1800440D0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180045C20 (_alloca_probe.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_180005EA0(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // r13
  unsigned __int64 v6; // r15
  unsigned int v7; // r9d
  __int16 v8; // cx
  __int64 v9; // rax
  int v10; // ebx
  unsigned int v11; // eax
  int v12; // eax
  char v13; // cl
  char v14; // cl
  __int64 v15; // r9
  int v16; // ebx
  unsigned int v17; // r14d
  __int64 v18; // r12
  char v19; // bl
  __int64 v20; // r9
  void *v21; // r14
  HANDLE ProcessHeap; // rax
  void *v23; // rbx
  HANDLE v24; // rax
  __int64 *v26; // [rsp+20h] [rbp-E0h]
  int v27; // [rsp+20h] [rbp-E0h]
  int v28; // [rsp+40h] [rbp-C0h] BYREF
  int v29; // [rsp+48h] [rbp-B8h] BYREF
  const void *v30; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v31; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v32; // [rsp+68h] [rbp-98h]
  _WORD v33[2]; // [rsp+80h] [rbp-80h] BYREF
  char v34; // [rsp+84h] [rbp-7Ch]
  __int16 v35; // [rsp+86h] [rbp-7Ah]
  char v36; // [rsp+88h] [rbp-78h]
  __int64 v37; // [rsp+90h] [rbp-70h]
  __int64 v38; // [rsp+98h] [rbp-68h]
  __int128 v39; // [rsp+A0h] [rbp-60h]
  LPVOID lpMem; // [rsp+B0h] [rbp-50h]
  __int16 v41; // [rsp+B8h] [rbp-48h]
  char v42; // [rsp+BAh] [rbp-46h]
  __int64 v43; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v44; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v45; // [rsp+D0h] [rbp-30h] BYREF
  __int16 v46; // [rsp+D8h] [rbp-28h] BYREF
  char v47; // [rsp+DAh] [rbp-26h]
  int v48; // [rsp+DCh] [rbp-24h]
  unsigned __int16 v49; // [rsp+E0h] [rbp-20h]
  __int128 v50; // [rsp+E8h] [rbp-18h]
  __int64 v51; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v52; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v53[2]; // [rsp+108h] [rbp+8h] BYREF
  char v54; // [rsp+118h] [rbp+18h] BYREF
  __int64 (__fastcall **v55)(); // [rsp+120h] [rbp+20h] BYREF
  __int128 v56; // [rsp+128h] [rbp+28h]
  _WORD *v57; // [rsp+138h] [rbp+38h]
  __int64 (__fastcall ***v58)(); // [rsp+188h] [rbp+88h]
  _BYTE v59[4096]; // [rsp+190h] [rbp+90h] BYREF

  v3 = a3;
  v4 = a1;
  v5 = a1 + 8 * a2;
  v6 = 0LL;
  v44 = 0LL;
  while ( 1 )
  {
    LOBYTE(a3) = *(_BYTE *)(v3 + 8);
    v7 = *(unsigned __int16 *)(v3 + 6);
    LOBYTE(a2) = *(_BYTE *)(v3 + 4);
    v8 = *(_WORD *)(v3 + 2);
    v33[0] = *(_WORD *)v3;
    v33[1] = v8;
    v34 = a2;
    v35 = v7;
    v36 = a3;
    if ( (_WORD)v7 )
    {
      v9 = v7;
      if ( (_BYTE)a3 == 1 )
      {
        v9 = v7 + 2LL;
      }
      else if ( (_BYTE)a3 == 2 )
      {
        v9 = v7 + 4LL;
      }
      v37 = v9;
    }
    else
    {
      v37 = 0LL;
    }
    v38 = 0LL;
    v39 = 0LL;
    lpMem = 0LL;
    v41 = 0;
    v42 = 0;
    v28 = 4096;
    v10 = sub_180004044(v4, a2, a3, (__int64)&v29, (__int64)v59, (__int64)&v28);
    sub_18000228C(v10);
    if ( v10 )
    {
      v11 = 0;
      v28 = 0;
      v29 = 0;
    }
    else
    {
      v11 = v28;
    }
    LOBYTE(v12) = sub_180005258((__int64)v33, (__int64)v59, v11, 0x1000uLL);
    if ( HIBYTE(v41) )
      break;
    v43 = 0LL;
    *(_QWORD *)&v31 = &v43;
    *((_QWORD *)&v31 + 1) = &v44;
    *(_QWORD *)&v32 = v33;
    v55 = off_1800480B8;
    v56 = v31;
    v57 = v33;
    v58 = &v55;
    v53[1] = &v54;
    v30 = (const void *)(*(_QWORD *)(v3 + 24) + 10LL);
    v13 = *(_BYTE *)(v3 + 4);
    LOWORD(v31) = *(_WORD *)(v3 + 2);
    BYTE2(v31) = v13;
    DWORD1(v31) = 0;
    WORD4(v31) = 0;
    v32 = 0LL;
    v14 = *(_BYTE *)(v3 + 8);
    v46 = *(_WORD *)(v3 + 6);
    v47 = v14;
    v48 = 0;
    v49 = 0;
    v50 = 0LL;
LABEL_14:
    while ( sub_18000507C((__int16 *)&v31, &v30, *(_QWORD *)(v3 + 32)) )
    {
      v16 = 0;
      v17 = DWORD1(v31);
      if ( DWORD1(v31) )
      {
        v18 = *((_QWORD *)&v32 + 1);
        while ( sub_18000507C(&v46, &v30, *(_QWORD *)(v3 + 32)) )
        {
          v28 = v48;
          v51 = v49;
          v52 = *((_QWORD *)&v50 + 1);
          v53[0] = WORD4(v31);
          v45 = v18;
          if ( !v58 )
            sub_18000335C();
          v26 = &v51;
          if ( !((unsigned __int8 (__fastcall *)(__int64 (__fastcall ***)(), __int64 *, _QWORD *, __int64 *))(*v58)[4])(
                  v58,
                  &v45,
                  v53,
                  &v52) )
          {
            if ( v58 )
              ((void (__fastcall *)(__int64 (__fastcall ***)()))(*v58)[3])(v58);
            v19 = 0;
            goto LABEL_28;
          }
          if ( ++v16 >= v17 )
            goto LABEL_14;
        }
      }
    }
    if ( v58 )
      ((void (__fastcall *)(__int64 (__fastcall ***)()))(*v58)[3])(v58);
    v19 = 1;
LABEL_28:
    if ( (_BYTE)v41 )
    {
      v12 = sub_1800040EC(v4, v38, (int)v39 - (int)v38, v15, (int)v26, v29, 1);
      if ( v12 == -1073741823 )
      {
        ++v6;
        v19 = 0;
        goto LABEL_33;
      }
      if ( v12 )
        sub_1800040EC(v4, v38, v39 - v38, v20, v27, 0, 0);
    }
    v4 += 8LL;
    LOBYTE(v12) = v43;
    v44 = v43;
LABEL_33:
    v21 = lpMem;
    lpMem = 0LL;
    if ( v21 )
    {
      ProcessHeap = GetProcessHeap();
      LOBYTE(v12) = HeapFree(ProcessHeap, 0, v21);
    }
    if ( v19 || v4 >= v5 || v6 >= 0x32 )
      return v12;
  }
  v23 = lpMem;
  lpMem = 0LL;
  if ( v23 )
  {
    v24 = GetProcessHeap();
    LOBYTE(v12) = HeapFree(v24, 0, v23);
  }
  return v12;
}
