/*
 * XREFs of sub_1800322B0 @ 0x1800322B0
 * Callers:
 *     sub_180031784 @ 0x180031784 (sub_180031784.c)
 * Callees:
 *     sub_180003AB0 @ 0x180003AB0 (sub_180003AB0.c)
 *     sub_18000D02C @ 0x18000D02C (sub_18000D02C.c)
 *     sub_180017BB0 @ 0x180017BB0 (sub_180017BB0.c)
 *     sub_1800324C8 @ 0x1800324C8 (sub_1800324C8.c)
 *     sub_180032EA0 @ 0x180032EA0 (sub_180032EA0.c)
 *     sub_180032FAC @ 0x180032FAC (sub_180032FAC.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800322B0(__int64 a1, unsigned int *a2, unsigned int *a3)
{
  wchar_t *v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // edx
  unsigned int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  wchar_t *v17; // rcx
  unsigned int v18; // edi
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int v21; // edi
  wchar_t *v22; // rdx
  __int64 v24[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 retaddr; // [rsp+48h] [rbp+18h]
  wchar_t *Str; // [rsp+68h] [rbp+38h] BYREF

  sub_180017BB0((void **)&Str, a1);
  if ( *((int *)Str - 4) < 0 || (v5 = wcsstr(Str, L"_")) == 0LL || (v6 = v5 - Str, (_DWORD)v6 == -1) )
  {
    v21 = -2147024809;
    sub_180003AB0(
      retaddr,
      668,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
      -2147024809);
    goto LABEL_25;
  }
  sub_180032EA0(&Str, v24, (unsigned int)v6);
  v7 = v24[0];
  if ( !(unsigned __int8)sub_1800324C8(v24[0]) )
  {
    v10 = 674;
LABEL_20:
    v21 = -2147024809;
    sub_180003AB0(
      retaddr,
      v10,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
      -2147024809);
    goto LABEL_22;
  }
  *(_DWORD *)o__errno(v9, v8) = 0;
  if ( *(int *)(v7 - 8) > 1 )
  {
    sub_18000D02C(v24, *(_DWORD *)(v7 - 16));
    v7 = v24[0];
  }
  v11 = o__wtoi(v7);
  if ( *(_DWORD *)o__errno(v13, v12) )
  {
    v10 = 681;
    goto LABEL_20;
  }
  if ( v11 > 8 )
  {
    v10 = 684;
    goto LABEL_20;
  }
  sub_180032FAC(&Str, v14, (unsigned int)(v6 + 1));
  if ( !(unsigned __int8)sub_1800324C8(Str) )
  {
    v10 = 693;
    goto LABEL_20;
  }
  *(_DWORD *)o__errno(v16, v15) = 0;
  v17 = Str;
  if ( *((int *)Str - 2) > 1 )
  {
    sub_18000D02C((__int64 *)&Str, *((_DWORD *)Str - 4));
    v17 = Str;
  }
  v18 = o__wtoi(v17);
  if ( *(_DWORD *)o__errno(v20, v19) )
  {
    v10 = 699;
    goto LABEL_20;
  }
  if ( v18 > 1 )
  {
    v10 = 702;
    goto LABEL_20;
  }
  *a2 = v18;
  *a3 = v11;
  v21 = 0;
LABEL_22:
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v7 - 24 + 16), 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v7 - 24) + 8LL))(*(_QWORD *)(v7 - 24));
LABEL_25:
  v22 = Str - 12;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Str - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v22 + 8LL))(*(_QWORD *)v22);
  return v21;
}
