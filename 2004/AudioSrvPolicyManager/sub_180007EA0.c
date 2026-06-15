/*
 * XREFs of sub_180007EA0 @ 0x180007EA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800017C0 @ 0x1800017C0 (sub_1800017C0.c)
 *     sub_180003AB0 @ 0x180003AB0 (sub_180003AB0.c)
 *     sub_1800055CC @ 0x1800055CC (sub_1800055CC.c)
 *     sub_1800071E0 @ 0x1800071E0 (sub_1800071E0.c)
 *     sub_180018844 @ 0x180018844 (sub_180018844.c)
 *     sub_180039DDC @ 0x180039DDC (sub_180039DDC.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180007EA0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        unsigned int a7)
{
  __int64 v7; // r12
  _DWORD *v11; // rcx
  __int64 v12; // r8
  int v13; // r15d
  __int64 v14; // rbx
  __int64 v15; // rax
  int v16; // edx
  __int64 v17; // rdi
  int v18; // esi
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r9
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rcx
  int v28; // r9d
  int v29; // edx
  int v30; // eax
  __int64 v32; // [rsp+28h] [rbp-48h]
  unsigned int v33; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v34; // [rsp+44h] [rbp-2Ch] BYREF
  __int64 v35; // [rsp+48h] [rbp-28h] BYREF
  __int64 v36; // [rsp+50h] [rbp-20h] BYREF
  __int64 v37; // [rsp+58h] [rbp-18h] BYREF
  __int64 v38; // [rsp+60h] [rbp-10h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+68h] [rbp-8h] BYREF
  __int64 retaddr; // [rsp+A8h] [rbp+38h]

  v7 = a4;
  v11 = (_DWORD *)*((_QWORD *)sub_1800055CC() + 1);
  if ( *v11 > 4u )
  {
    v34 = a6;
    v36 = (__int64)off_18003F8D0[v7];
    v33 = a7;
    v37 = a3;
    sub_1800017C0(
      (__int64)v11,
      (unsigned __int8 *)dword_180045E68,
      v12,
      a7,
      (void **)&v37,
      (void **)&v36,
      (__int64)&v34,
      (__int64)&v33);
  }
  sub_1800071E0(a1 - 16, (__int64 *)&lpCriticalSection);
  v13 = 0;
  v14 = 0LL;
  v38 = 0LL;
  v15 = sub_180039DDC(48LL, &unk_18004FFC8);
  v17 = v15;
  if ( !v15 )
  {
    v18 = -2147024882;
LABEL_18:
    sub_180003AB0(
      retaddr,
      718,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
      v18);
    goto LABEL_33;
  }
  v19 = qword_18004FE28;
  *(_DWORD *)(v15 + 12) = 1;
  *(_QWORD *)v15 = off_18003E480;
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
  *(_QWORD *)v17 = off_18003E6B8;
  v20 = v17 + 24;
  *(_QWORD *)(v17 + 24) = 0LL;
  *(_QWORD *)(v17 + 16) = a2;
  if ( a2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    v20 = v17 + 24;
  }
  v21 = -1LL;
  LOBYTE(v13) = (_DWORD)v7 == 3;
  *(_DWORD *)(v17 + 36) = v13;
  *(_DWORD *)(v17 + 32) = a5 == 1;
  *(_DWORD *)(v17 + 40) = a7 == 1;
  do
    ++v21;
  while ( *(_WORD *)(a3 + 2 * v21) );
  v32 = v20;
  v22 = sub_180018844(v19, v16, a3, v21);
  v18 = v22;
  if ( v22 >= 0 )
    v18 = 0;
  else
    sub_180003AB0(
      retaddr,
      21,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\virtualaudioinfo.cpp",
      v22);
  v23 = *(_QWORD *)v17;
  if ( v18 >= 0 )
  {
    (*(void (__fastcall **)(__int64))(v23 + 8))(v17);
    v24 = *(_QWORD *)v17;
    v14 = v17;
    v38 = v17;
    (*(void (__fastcall **)(__int64))(v24 + 16))(v17);
    v18 = 0;
  }
  else
  {
    (*(void (__fastcall **)(__int64))(v23 + 16))(v17);
  }
  if ( v18 < 0 )
    goto LABEL_18;
  v35 = 0LL;
  v25 = sub_180039DDC(32LL, &unk_18004FFC8);
  v26 = v25;
  if ( !v25 )
  {
    v18 = -2147024882;
LABEL_26:
    v28 = v18;
    v29 = 722;
LABEL_29:
    sub_180003AB0(
      retaddr,
      v29,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
      v28);
    goto LABEL_31;
  }
  v27 = qword_18004FE28;
  *(_DWORD *)(v25 + 12) = 1;
  *(_QWORD *)v25 = off_18003E510;
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 8LL))(v27);
  *(_QWORD *)v26 = off_18003E5F0;
  *(_QWORD *)(v26 + 16) = v14;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
  *(_DWORD *)(v26 + 24) = a4;
  *(_DWORD *)(v26 + 28) = a5 != 0;
  v18 = (**(__int64 (__fastcall ***)(__int64, void *, __int64 *))v26)(v26, &unk_180042868, &v35);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  if ( v18 < 0 )
    goto LABEL_26;
  v30 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 16)
                                                                                                  + 16LL)
                                                                                      + 80LL))(
          *(_QWORD *)(a1 + 16) + 16LL,
          v14,
          a6,
          a7,
          v35,
          v32);
  v18 = v30;
  if ( v30 < 0 )
  {
    v28 = v30;
    v29 = 724;
    goto LABEL_29;
  }
  v18 = 0;
LABEL_31:
  if ( v35 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
LABEL_33:
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v18;
}
