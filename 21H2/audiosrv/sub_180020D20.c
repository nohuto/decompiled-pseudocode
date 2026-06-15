/*
 * XREFs of sub_180020D20 @ 0x180020D20
 * Callers:
 *     sub_1800374C8 @ 0x1800374C8 (sub_1800374C8.c)
 *     sub_180037744 @ 0x180037744 (sub_180037744.c)
 *     sub_1800485D0 @ 0x1800485D0 (sub_1800485D0.c)
 *     sub_180048B1C @ 0x180048B1C (sub_180048B1C.c)
 *     sub_18004978C @ 0x18004978C (sub_18004978C.c)
 *     sub_18011C680 @ 0x18011C680 (sub_18011C680.c)
 *     sub_18011C754 @ 0x18011C754 (sub_18011C754.c)
 * Callees:
 *     sub_180020F10 @ 0x180020F10 (sub_180020F10.c)
 *     sub_1800234D0 @ 0x1800234D0 (sub_1800234D0.c)
 *     sub_1800326B0 @ 0x1800326B0 (sub_1800326B0.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180020D20(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        _OWORD *a5,
        unsigned int a6,
        int a7,
        int a8,
        _QWORD *a9,
        _QWORD *a10,
        _QWORD *a11)
{
  int v11; // ebx
  unsigned int v13; // esi
  __int64 v14; // rcx
  _QWORD *v15; // rdi
  _QWORD *v16; // r14
  _QWORD *v17; // r15
  unsigned int v18; // r12d
  _OWORD *v19; // r13
  int v20; // eax
  void *v21; // rbx
  int v22; // eax
  __int64 v23; // rax
  __int64 v25; // rdx
  __int64 v26; // [rsp+40h] [rbp-28h] BYREF
  LPVOID pv; // [rsp+48h] [rbp-20h] BYREF
  int v28[6]; // [rsp+50h] [rbp-18h] BYREF
  void *retaddr; // [rsp+A8h] [rbp+40h]
  int v31; // [rsp+B8h] [rbp+50h] BYREF
  int v32; // [rsp+C0h] [rbp+58h]
  int v33; // [rsp+C8h] [rbp+60h]

  v33 = a4;
  v32 = a3;
  v11 = a2;
  v13 = 0;
  v14 = 0LL;
  v26 = 0LL;
  v15 = a9;
  if ( a9 )
    *a9 = 0LL;
  v16 = a10;
  if ( a10 )
    *a10 = 0LL;
  v17 = a11;
  if ( a11 )
    *a11 = 0LL;
  if ( !a2 )
    goto LABEL_16;
  if ( !a7 || (unsigned int)sub_1800234D0(a1) )
  {
    LODWORD(a9) = 0;
    pv = 0LL;
    v18 = a6;
    v19 = a5;
    *(_OWORD *)v28 = *a5;
    v20 = sub_180020F10(v11, (int)v28, a6 != 0, (int)&a9, (SIZE_T)&pv, 0);
    v13 = v20;
    if ( v20 < 0 )
    {
      sub_18004BD84(
        retaddr,
        1193LL,
        "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (unsigned int)v20);
      v21 = pv;
    }
    else
    {
      v21 = pv;
      if ( !(_DWORD)a9 )
      {
LABEL_14:
        CoTaskMemFree(v21);
        v13 = 0;
        goto LABEL_15;
      }
      LODWORD(a11) = v33 == 1;
      *(_QWORD *)v28 = pv;
      LODWORD(a10) = *(_DWORD *)(a1 + 188);
      v31 = v32;
      v22 = sub_1800326B0(
              (unsigned int)&v26,
              (unsigned int)&v31,
              (unsigned int)&a11,
              (unsigned int)&a10,
              (__int64)&a9,
              (__int64)v28);
      v13 = v22;
      if ( v22 < 0 )
      {
        v25 = 1203LL;
      }
      else
      {
        if ( !v16 && !v17 )
          goto LABEL_14;
        *(_OWORD *)v28 = *v19;
        v22 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *, _QWORD, int, _QWORD *, _QWORD *))(*(_QWORD *)v26 + 24LL))(
                v26,
                *(_QWORD *)(a1 + 16),
                v28,
                v18,
                a8,
                v16,
                v17);
        v13 = v22;
        if ( v22 >= 0 )
          goto LABEL_14;
        v25 = 1207LL;
      }
      sub_18004BD84(
        retaddr,
        v25,
        "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (unsigned int)v22);
    }
    CoTaskMemFree(v21);
    v14 = v26;
    goto LABEL_18;
  }
LABEL_15:
  v14 = v26;
LABEL_16:
  if ( v15 )
  {
    v23 = v14;
    v14 = 0LL;
    v26 = 0LL;
    *v15 = v23;
  }
LABEL_18:
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  return v13;
}
