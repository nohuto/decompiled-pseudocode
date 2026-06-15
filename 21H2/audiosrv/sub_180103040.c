/*
 * XREFs of sub_180103040 @ 0x180103040
 * Callers:
 *     sub_18010063C @ 0x18010063C (sub_18010063C.c)
 * Callees:
 *     sub_180057764 @ 0x180057764 (sub_180057764.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB4B4 @ 0x1800BB4B4 (sub_1800BB4B4.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 *     sub_1800CB468 @ 0x1800CB468 (sub_1800CB468.c)
 *     sub_1801004FC @ 0x1801004FC (sub_1801004FC.c)
 *     sub_1801005A0 @ 0x1801005A0 (sub_1801005A0.c)
 *     sub_180100830 @ 0x180100830 (sub_180100830.c)
 *     sub_180101A90 @ 0x180101A90 (sub_180101A90.c)
 *     sub_180103778 @ 0x180103778 (sub_180103778.c)
 *     sub_180104814 @ 0x180104814 (sub_180104814.c)
 *     sub_180104A20 @ 0x180104A20 (sub_180104A20.c)
 *     sub_180144008 @ 0x180144008 (sub_180144008.c)
 *     sub_1801440B4 @ 0x1801440B4 (sub_1801440B4.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_180103040(struct _RTL_CRITICAL_SECTION *a1)
{
  __int64 v1; // r14
  __int64 *v2; // rdx
  int v3; // r15d
  int v4; // r8d
  int v5; // r9d
  int v6; // ecx
  int v7; // ecx
  unsigned int v8; // r13d
  double *v9; // rbx
  int v10; // r8d
  int v11; // r9d
  double v12; // xmm6_8
  __int64 v13; // rcx
  double v14; // xmm0_8
  __int64 v15; // rax
  double v16; // xmm6_8
  double v17; // xmm7_8
  double v18; // xmm0_8
  __int64 v19; // rcx
  double v20; // xmm1_8
  __int64 v21; // rax
  __int64 v22; // r8
  unsigned int v23; // edi
  __int64 v24; // rax
  int v25; // edi
  _QWORD *v26; // rax
  ATL::CAtlException *v27; // rbx
  __int64 v28; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v29; // [rsp+20h] [rbp-C8h]
  __int64 v30; // [rsp+28h] [rbp-C0h]
  __int64 v31; // [rsp+50h] [rbp-98h] BYREF
  __int64 v32; // [rsp+58h] [rbp-90h] BYREF
  void *v33; // [rsp+60h] [rbp-88h] BYREF
  __int64 v34; // [rsp+68h] [rbp-80h] BYREF
  _BYTE v35[8]; // [rsp+70h] [rbp-78h] BYREF
  ATL::CAtlException *v36; // [rsp+78h] [rbp-70h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+80h] [rbp-68h] BYREF
  char v38; // [rsp+88h] [rbp-60h]
  int v40; // [rsp+F8h] [rbp+10h] BYREF
  __int64 v41; // [rsp+100h] [rbp+18h] BYREF
  unsigned __int64 v42; // [rsp+108h] [rbp+20h] BYREF

  v1 = (__int64)a1;
  lpCriticalSection = a1 + 10;
  v38 = 0;
  sub_180057764((__int64)&lpCriticalSection);
  v3 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(v1 + 184) + 48LL))(*(_QWORD *)(v1 + 184), &v40);
  if ( v3 < 0 )
    goto LABEL_2;
  if ( *(_QWORD *)(v1 + 368) )
    goto LABEL_14;
  v3 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *, __int64 *))(**(_QWORD **)(v1 + 200) + 32LL))(
         *(_QWORD *)(v1 + 200),
         &v42,
         &v41);
  if ( v3 < 0 )
  {
LABEL_2:
    if ( v38 )
      LeaveCriticalSection(lpCriticalSection);
  }
  else
  {
    v6 = (int)off_18019C348;
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 2u )
    {
      sub_1800BB4B4(*((_QWORD *)off_18019C348 + 2), 0x26u, (__int64)&unk_1801726D0);
    }
    LOBYTE(v5) = 13;
    sub_180144008(v6, v1, v4, v5, v42, v41);
    if ( (byte_18019F981 & 1) != 0 )
      sub_180104814(v7, (unsigned int)&unk_18016D480, v1, v42, v41);
    ShipAssert(90113LL, 0LL);
LABEL_14:
    while ( *(_QWORD *)(v1 + 368) )
    {
      v8 = *(_DWORD *)(v1 + 248) - v40;
      if ( !v8 )
      {
        if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
          && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
          && *((_BYTE *)off_18019C348 + 25) >= 5u )
        {
          v25 = *(_DWORD *)(*(_QWORD *)sub_180100830((_QWORD *)(v1 + 352)) + 12LL);
          v26 = (_QWORD *)sub_180100830((_QWORD *)(v1 + 352));
          LODWORD(v30) = 0;
          LODWORD(v29) = v25;
          sub_1800CB468(*((_QWORD *)off_18019C348 + 2), 0x28u, (__int64)&unk_1801726D0, *v26, v29, v30);
        }
        break;
      }
      v9 = *(double **)sub_180100830((_QWORD *)(v1 + 352));
      v3 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *, __int64 *))(**(_QWORD **)(v1 + 200) + 32LL))(
             *(_QWORD *)(v1 + 200),
             &v42,
             &v32);
      if ( v3 < 0 )
        break;
      if ( (v42 & 0x8000000000000000uLL) != 0LL )
        v12 = (double)(int)(v42 & 1 | (v42 >> 1)) + (double)(int)(v42 & 1 | (v42 >> 1));
      else
        v12 = (double)(int)v42;
      v13 = *(_QWORD *)(v1 + 256);
      if ( v13 < 0 )
      {
        v15 = *(_QWORD *)(v1 + 256) & 1LL | ((unsigned __int64)v13 >> 1);
        v14 = (double)(int)v15 + (double)(int)v15;
      }
      else
      {
        v14 = (double)(int)v13;
      }
      v16 = v12 / v14;
      v17 = (double)*(int *)(*(_QWORD *)(v1 + 104) + 4LL) * v16;
      if ( *(double *)(v1 + 472) == 0.0 )
      {
        v3 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, _BYTE *))(**(_QWORD **)(v1 + 96) + 32LL))(
               *(_QWORD *)(v1 + 96),
               &v31,
               v35);
        if ( v3 < 0 )
          break;
        if ( v31 < 0 )
          v18 = (double)(int)(v31 & 1 | ((unsigned __int64)v31 >> 1))
              + (double)(int)(v31 & 1 | ((unsigned __int64)v31 >> 1));
        else
          v18 = (double)(int)v31;
        v19 = *(_QWORD *)(v1 + 136);
        if ( v19 < 0 )
        {
          v21 = *(_QWORD *)(v1 + 136) & 1LL | ((unsigned __int64)v19 >> 1);
          v20 = (double)(int)v21 + (double)(int)v21;
        }
        else
        {
          v20 = (double)(int)v19;
        }
        *(double *)(v1 + 472) = v18 / v20 - v9[2];
      }
      LOBYTE(v11) = 6;
      sub_1801440B4((int)v17, v1, v10, v11, v29, *(int *)v9, (unsigned int)(int)v17, v8);
      if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
        && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
        && *((_BYTE *)off_18019C348 + 25) >= 5u )
      {
        sub_180104A20(
          *((_QWORD *)off_18019C348 + 2),
          39LL,
          v22,
          v9,
          *((_DWORD *)v9 + 3),
          *((_DWORD *)v9 + 1),
          v40,
          v42,
          *(_QWORD *)&v16,
          v32,
          v31,
          v32);
      }
      if ( fabs((double)(int)GetTickCount() - (double)*(int *)(v1 + 464)) > 30000.0 )
      {
        *(_DWORD *)(v1 + 464) = GetTickCount();
        sub_180101A90(v1, v9[2], v16);
      }
      v23 = *((_DWORD *)v9 + 3) - *((_DWORD *)v9 + 6);
      if ( v23 >= v8 )
        v23 = v8;
      v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, void **))(**(_QWORD **)(v1 + 192) + 24LL))(
             *(_QWORD *)(v1 + 192),
             v23,
             &v33);
      if ( v3 >= 0 )
      {
        memcpy(
          v33,
          (const void *)(*((_QWORD *)v9 + 4) + *(_QWORD *)(v1 + 448) * *((unsigned int *)v9 + 6)),
          *(_QWORD *)(v1 + 448) * v23);
        v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v1 + 192) + 32LL))(
               *(_QWORD *)(v1 + 192),
               v23,
               *((_DWORD *)v9 + 1) & 2);
        if ( v3 >= 0 )
        {
          *((_DWORD *)v9 + 6) += v23;
          if ( *((_DWORD *)v9 + 6) == *((_DWORD *)v9 + 3) )
          {
            v41 = 0LL;
            v24 = sub_180103778(v1 + 352);
            v3 = 0;
            try
            {
              v41 = 0LL;
              v34 = v24;
              sub_1801005A0((__int64 *)(v1 + 304), (__int64)&v34);
            }
            catch ( ATL::CAtlException *v36 )
            {
              v2 = &v28;
              v27 = v36;
              if ( *(_DWORD *)v36 == -1073741571 )
                o__resetstkoflw();
              LODWORD(v41) = *(_DWORD *)v27;
              v1 = (__int64)a1;
              v3 = v41;
            }
          }
          if ( v3 >= 0 )
          {
            v3 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(v1 + 184) + 48LL))(
                   *(_QWORD *)(v1 + 184),
                   &v40);
            if ( v3 >= 0 )
              continue;
          }
        }
      }
      break;
    }
    if ( v38 )
      LeaveCriticalSection(lpCriticalSection);
  }
  if ( v3 < 0 )
  {
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 2u )
    {
      sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 0x29u, (__int64)&unk_1801726D0, v3);
    }
    sub_1801004FC(v1, (__int64)v2);
  }
}
