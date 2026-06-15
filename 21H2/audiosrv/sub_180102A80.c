/*
 * XREFs of sub_180102A80 @ 0x180102A80
 * Callers:
 *     sub_18010063C @ 0x18010063C (sub_18010063C.c)
 * Callees:
 *     sub_180057764 @ 0x180057764 (sub_180057764.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 *     sub_18010046C @ 0x18010046C (sub_18010046C.c)
 *     sub_1801004FC @ 0x1801004FC (sub_1801004FC.c)
 *     sub_1801005A0 @ 0x1801005A0 (sub_1801005A0.c)
 *     sub_180103778 @ 0x180103778 (sub_180103778.c)
 *     sub_180104814 @ 0x180104814 (sub_180104814.c)
 *     sub_180104A20 @ 0x180104A20 (sub_180104A20.c)
 *     sub_180144008 @ 0x180144008 (sub_180144008.c)
 *     sub_1801440B4 @ 0x1801440B4 (sub_1801440B4.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_180102A80(struct _RTL_CRITICAL_SECTION *a1)
{
  __int64 v1; // rsi
  double *v2; // rbx
  __int64 **v3; // r12
  __int64 *v4; // rdx
  int v5; // r14d
  __int64 *v6; // rcx
  __int64 v7; // rax
  int v8; // r8d
  int v9; // r9d
  double v10; // xmm6_8
  __int64 v11; // rcx
  double v12; // xmm0_8
  __int64 v13; // rax
  double v14; // xmm6_8
  __int64 v15; // r8
  double v16; // xmm0_8
  __int64 v17; // rcx
  double v18; // xmm1_8
  __int64 v19; // rax
  double *v20; // rax
  int v21; // ecx
  int v22; // r8d
  int v23; // r9d
  int v24; // ecx
  ATL::CAtlException *v25; // rbx
  __int64 v26; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 *v27; // [rsp+20h] [rbp-B8h]
  __int64 *v28; // [rsp+28h] [rbp-B0h]
  double *v29; // [rsp+50h] [rbp-88h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-80h] BYREF
  char v31; // [rsp+60h] [rbp-78h]
  __int64 v32; // [rsp+68h] [rbp-70h] BYREF
  unsigned __int64 v33; // [rsp+70h] [rbp-68h] BYREF
  int v34; // [rsp+78h] [rbp-60h] BYREF
  double *v35; // [rsp+80h] [rbp-58h] BYREF
  __int64 **v36; // [rsp+88h] [rbp-50h] BYREF
  void *Src; // [rsp+90h] [rbp-48h] BYREF
  ATL::CAtlException *v38; // [rsp+98h] [rbp-40h] BYREF
  struct _RTL_CRITICAL_SECTION *v39; // [rsp+E0h] [rbp+8h] BYREF
  unsigned int v40; // [rsp+E8h] [rbp+10h] BYREF
  __int64 v41; // [rsp+F0h] [rbp+18h] BYREF
  int v42; // [rsp+F8h] [rbp+20h] BYREF

  v39 = a1;
  v1 = (__int64)a1;
  v2 = 0LL;
  v29 = 0LL;
  lpCriticalSection = a1 + 10;
  v31 = 0;
  sub_180057764((__int64)&lpCriticalSection);
  v3 = (__int64 **)(v1 + 88);
  v36 = (__int64 **)(v1 + 88);
  v5 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(v1 + 88) + 40LL))(*(_QWORD *)(v1 + 88), &v42);
  if ( v5 < 0 )
  {
    if ( v31 )
      LeaveCriticalSection(lpCriticalSection);
    goto LABEL_52;
  }
  while ( 1 )
  {
    if ( !v42 )
      goto LABEL_49;
    if ( !*(_QWORD *)(v1 + 320) )
    {
      if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
        && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
        && *((_BYTE *)off_18019C348 + 25) >= 2u )
      {
        sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 0x24u, (__int64)&unk_1801726D0, v42);
      }
      v5 = (*(__int64 (__fastcall **)(_QWORD, __int64 ***, struct _RTL_CRITICAL_SECTION **, unsigned int *, __int64 *, __int64 *))(**(_QWORD **)(v1 + 88) + 24LL))(
             *(_QWORD *)(v1 + 88),
             &v36,
             &v39,
             &v40,
             &v32,
             &v41);
      if ( v5 < 0
        || (v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v1 + 88) + 32LL))(
                   *(_QWORD *)(v1 + 88),
                   (unsigned int)v39),
            v5 < 0) )
      {
LABEL_8:
        if ( v31 )
          LeaveCriticalSection(lpCriticalSection);
        v2 = 0LL;
      }
      else
      {
        LOBYTE(v23) = 12;
        sub_180144008(v21, v1, v22, v23, v32, v41);
        if ( (byte_18019F981 & 1) != 0 )
          sub_180104814(v24, (unsigned int)&unk_18016D470, v1, v32, v41);
        ShipAssert(90113LL, 1LL);
LABEL_49:
        v2 = 0LL;
        v29 = 0LL;
        if ( !v31 )
          goto LABEL_52;
        LeaveCriticalSection(lpCriticalSection);
      }
      v29 = 0LL;
      goto LABEL_52;
    }
    v5 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(v1 + 80) + 48LL))(*(_QWORD *)(v1 + 80), &v34);
    if ( v5 < 0 )
      goto LABEL_8;
    v6 = *v3;
    v7 = **v3;
    v28 = &v32;
    v27 = &v33;
    v5 = (*(__int64 (__fastcall **)(__int64 *, void **, unsigned int *, __int64 *))(v7 + 24))(v6, &Src, &v40, &v41);
    if ( v5 < 0 )
      goto LABEL_8;
    v2 = (double *)sub_180103778(v1 + 304);
    v29 = v2;
    if ( (v33 & 0x8000000000000000uLL) != 0LL )
      v10 = (double)(int)(v33 & 1 | (v33 >> 1)) + (double)(int)(v33 & 1 | (v33 >> 1));
    else
      v10 = (double)(int)v33;
    v11 = *(_QWORD *)(v1 + 136);
    if ( v11 < 0 )
    {
      v13 = *(_QWORD *)(v1 + 136) & 1LL | ((unsigned __int64)v11 >> 1);
      v12 = (double)(int)v13 + (double)(int)v13;
    }
    else
    {
      v12 = (double)(int)v11;
    }
    v14 = v10 / v12;
    LOBYTE(v9) = 5;
    sub_1801440B4(*(_DWORD *)v2, v1, v8, v9, (_DWORD)v27, *(int *)v2, v33, v40);
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 5u )
    {
      sub_180104A20(
        *((_QWORD *)off_18019C348 + 2),
        35LL,
        v15,
        v2,
        v40,
        v41,
        v34,
        v33,
        *(_QWORD *)&v14,
        v32,
        v29,
        lpCriticalSection);
    }
    v5 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *, __int64 *))(**(_QWORD **)(v1 + 96) + 32LL))(
           *(_QWORD *)(v1 + 96),
           &v33,
           &v32);
    if ( v5 < 0 )
    {
LABEL_23:
      if ( v31 )
        LeaveCriticalSection(lpCriticalSection);
      goto LABEL_52;
    }
    if ( (v33 & 0x8000000000000000uLL) != 0LL )
      v16 = (double)(int)(v33 & 1 | (v33 >> 1)) + (double)(int)(v33 & 1 | (v33 >> 1));
    else
      v16 = (double)(int)v33;
    v17 = *(_QWORD *)(v1 + 136);
    if ( v17 < 0 )
    {
      v19 = *(_QWORD *)(v1 + 136) & 1LL | ((unsigned __int64)v17 >> 1);
      v18 = (double)(int)v19 + (double)(int)v19;
    }
    else
    {
      v18 = (double)(int)v17;
    }
    v2[2] = v16 / v18;
    memcpy(*((void **)v2 + 4), Src, v40 * *(_QWORD *)(v1 + 448));
    try
    {
      *((_DWORD *)v2 + 3) = v40;
      *((_DWORD *)v2 + 6) = 0;
      *((_DWORD *)v2 + 1) = v41;
      v20 = v2;
      v2 = 0LL;
      v29 = 0LL;
      v35 = v20;
      sub_1801005A0((__int64 *)(v1 + 352), (__int64)&v35);
    }
    catch ( ATL::CAtlException *v38 )
    {
      v4 = &v26;
      v25 = v38;
      if ( *(_DWORD *)v38 == -1073741571 )
        o__resetstkoflw();
      LODWORD(v35) = *(_DWORD *)v25;
      v5 = (int)v35;
      if ( (int)v35 >= 0 )
      {
        v1 = (__int64)v39;
        v2 = v29;
        v3 = v36;
        goto LABEL_37;
      }
      if ( v31 )
        LeaveCriticalSection(lpCriticalSection);
      v1 = (__int64)v39;
      v2 = v29;
LABEL_52:
      if ( v5 < 0 )
      {
        if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
          && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
          && *((_BYTE *)off_18019C348 + 25) >= 2u )
        {
          sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 0x25u, (__int64)&unk_1801726D0, v5);
        }
        sub_1801004FC(v1, (__int64)v4);
      }
      if ( v2 )
        sub_18010046C(v2);
    }
LABEL_37:
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v1 + 88) + 32LL))(*(_QWORD *)(v1 + 88), v40);
    if ( v5 >= 0 )
    {
      v5 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(v1 + 88) + 40LL))(*(_QWORD *)(v1 + 88), &v42);
      if ( v5 >= 0 )
        continue;
    }
    goto LABEL_23;
  }
}
