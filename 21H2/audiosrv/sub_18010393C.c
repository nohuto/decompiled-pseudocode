/*
 * XREFs of sub_18010393C @ 0x18010393C
 * Callers:
 *     sub_1800B13BD @ 0x1800B13BD (sub_1800B13BD.c)
 *     sub_1800FA43C @ 0x1800FA43C (sub_1800FA43C.c)
 *     sub_1800FABF8 @ 0x1800FABF8 (sub_1800FABF8.c)
 *     sub_1800FBF0C @ 0x1800FBF0C (sub_1800FBF0C.c)
 *     sub_1800FF010 @ 0x1800FF010 (sub_1800FF010.c)
 *     sub_180100A10 @ 0x180100A10 (sub_180100A10.c)
 *     sub_1801024B0 @ 0x1801024B0 (sub_1801024B0.c)
 *     sub_180102594 @ 0x180102594 (sub_180102594.c)
 *     sub_18010274C @ 0x18010274C (sub_18010274C.c)
 * Callees:
 *     sub_180057764 @ 0x180057764 (sub_180057764.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB4B4 @ 0x1800BB4B4 (sub_1800BB4B4.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 *     sub_180100104 @ 0x180100104 (sub_180100104.c)
 *     sub_18010046C @ 0x18010046C (sub_18010046C.c)
 *     sub_180100568 @ 0x180100568 (sub_180100568.c)
 *     sub_1801005D8 @ 0x1801005D8 (sub_1801005D8.c)
 *     sub_180100858 @ 0x180100858 (sub_180100858.c)
 *     sub_180104244 @ 0x180104244 (sub_180104244.c)
 */

// Hidden C++ exception states: #wind=8 #try_helpers=1
__int64 __fastcall sub_18010393C(__int64 a1)
{
  __int64 v1; // r14
  HRESULT v2; // edi
  _UNKNOWN **v3; // rcx
  int v4; // r9d
  double v6; // xmm3_8
  double v7; // xmm4_8
  double v8; // xmm3_8
  unsigned int v9; // r13d
  double v10; // xmm4_8
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  int v13; // r8d
  double v14; // xmm3_8
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // r15
  _QWORD *v20; // rbx
  int v21; // eax
  _QWORD *v22; // rax
  _QWORD *v23; // r15
  _QWORD *v24; // rbx
  HRESULT *v25; // rbx
  __int64 v26; // [rsp+30h] [rbp-98h] BYREF
  unsigned __int64 v27; // [rsp+38h] [rbp-90h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-88h] BYREF
  char v29; // [rsp+48h] [rbp-80h]
  unsigned __int64 v30; // [rsp+50h] [rbp-78h]
  LPCRITICAL_SECTION v31; // [rsp+58h] [rbp-70h] BYREF
  char v32; // [rsp+60h] [rbp-68h]
  _QWORD *v33; // [rsp+68h] [rbp-60h] BYREF
  _QWORD *v34; // [rsp+70h] [rbp-58h]
  HRESULT *v35; // [rsp+78h] [rbp-50h] BYREF
  __int64 v36; // [rsp+D0h] [rbp+8h] BYREF
  _QWORD *v37; // [rsp+D8h] [rbp+10h] BYREF
  LPVOID ppv; // [rsp+E0h] [rbp+18h] BYREF
  __int64 v39; // [rsp+E8h] [rbp+20h]

  v36 = a1;
  v1 = a1;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 16);
  v29 = 0;
  sub_180057764((__int64)&lpCriticalSection);
  v2 = 0;
  v3 = (_UNKNOWN **)off_18019C348;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 0x37u, (__int64)&unk_1801726D0, v1);
    v3 = (_UNKNOWN **)off_18019C348;
  }
  v4 = *(_DWORD *)(v1 + 56);
  if ( ((v4 - 2) & 0xFFFFFFFD) != 0 )
  {
    if ( v3 != &off_18019C348 && (*((_DWORD *)v3 + 7) & 0x800000) != 0 && *((_BYTE *)v3 + 25) >= 4u )
      sub_1800BB4E0((__int64)v3[2], 0x3Cu, (__int64)&unk_1801726D0, v4);
LABEL_97:
    if ( v29 )
      LeaveCriticalSection(lpCriticalSection);
    return (unsigned int)v2;
  }
  if ( *(_BYTE *)(v1 + 61) && sub_180100858(v1, (BYTE *)&v37) && ((unsigned __int8)v37 & 0xFD) == 0 )
  {
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800BB4B4(*((_QWORD *)off_18019C348 + 2), 0x38u, (__int64)&unk_1801726D0);
    }
  }
  else
  {
    ppv = 0LL;
    v26 = 0LL;
    v39 = 0LL;
    LODWORD(v37) = 0;
    v2 = CoCreateInstance(&rclsid, 0LL, 0x17u, &stru_18015B0C0, &ppv);
    if ( v2 < 0 )
      goto LABEL_39;
    sub_180100104(&v27, (void (__fastcall ***)(_QWORD, const IID *, _QWORD *))ppv);
    if ( v27 )
      (*(void (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)v27 + 88LL))(v27, 1LL);
    v2 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64 *))(*(_QWORD *)ppv + 40LL))(
           ppv,
           *(_QWORD *)(v1 + 176),
           &v26);
    if ( v27 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v27 + 16LL))(v27);
    if ( v2 < 0
      || (v2 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v26 + 24LL))(v26, &unk_180172608, 1LL),
          v2 < 0)
      || (v2 = (*(__int64 (__fastcall **)(__int64, _QWORD **))(*(_QWORD *)v39 + 120LL))(v39, &v37), v2 < 0)
      || !(_DWORD)v37 )
    {
LABEL_39:
      if ( v39 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
      if ( v26 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
      if ( ppv )
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
      *(_DWORD *)(v1 + 464) = GetTickCount();
      v6 = (double)((int)*(_QWORD *)(v1 + 440) / 10000);
      v7 = v6 * ((double)*(int *)(*(_QWORD *)(v1 + 104) + 4LL) / 1000.0);
      v8 = v6 * ((double)*(int *)(*(_QWORD *)(v1 + 208) + 4LL) / 1000.0);
      v9 = *(_DWORD *)(v1 + 128);
      v10 = v7 / (double)(int)v9;
      v11 = 0LL;
      if ( v10 >= 9.223372036854776e18 )
      {
        v10 = v10 - 9.223372036854776e18;
        if ( v10 < 9.223372036854776e18 )
          v11 = 0x8000000000000000uLL;
      }
      v12 = v11 + (unsigned int)(int)v10;
      v27 = v12;
      v13 = *(_DWORD *)(v1 + 248);
      v14 = v8 / (double)v13;
      v15 = 0LL;
      if ( v14 >= 9.223372036854776e18 )
      {
        v14 = v14 - 9.223372036854776e18;
        if ( v14 < 9.223372036854776e18 )
          v15 = 0x8000000000000000uLL;
      }
      v16 = v15 + (unsigned int)(int)v14;
      v30 = v16;
      if ( v9 <= v13 )
        v9 = v13;
      LODWORD(v26) = v9;
      if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
        && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
        && *((_BYTE *)off_18019C348 + 25) >= 4u )
      {
        sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 0x3Au, (__int64)&unk_1801726D0, v16 + v12 + 1);
      }
      v31 = (LPCRITICAL_SECTION)(v1 + 400);
      v32 = 0;
      sub_180057764((__int64)&v31);
      LODWORD(v37) = 0;
      v17 = 0LL;
      while ( 1 )
      {
        LODWORD(ppv) = v17;
        if ( v17 >= v16 + v27 + 1 )
          break;
        v18 = sub_18006A18C(0x28uLL);
        v19 = v18;
        if ( v18 )
          v18[4] = 0LL;
        else
          v19 = 0LL;
        v20 = v19;
        if ( v19 )
        {
          v21 = (int)v37;
          *(_DWORD *)v19 = (_DWORD)v37;
          LODWORD(v37) = v21 + 1;
          LODWORD(v39) = v21 + 1;
          *((_DWORD *)v19 + 2) = v9;
          *((_DWORD *)v19 + 3) = v9;
          *((_DWORD *)v19 + 1) = 0;
          *((_DWORD *)v19 + 6) = 0;
          sub_1801005D8(v19 + 4, v9 * *(_QWORD *)(v1 + 448));
          if ( v19[4] )
          {
            try
            {
              v2 = 0;
              v20 = 0LL;
              v34 = 0LL;
              v33 = v19;
              sub_180100568((__int64 *)(v1 + 304), (__int64)&v33);
            }
            catch ( ATL::CAtlException *v35 )
            {
              v25 = v35;
              if ( *v35 == -1073741571 )
                o__resetstkoflw();
              v1 = v36;
              v2 = *v25;
              LODWORD(v37) = v39;
              v20 = v34;
              v9 = v26;
            }
          }
          else
          {
            v2 = -2147024882;
            sub_18010046C(v19);
          }
        }
        else
        {
          v2 = -2147024882;
        }
        if ( v20 )
          sub_18010046C(v20);
        v17 = (unsigned int)((_DWORD)ppv + 1);
        v16 = v30;
      }
      if ( v2 >= 0 )
      {
        v22 = sub_18006A18C(0x28uLL);
        v23 = v22;
        if ( v22 )
          v22[4] = 0LL;
        else
          v23 = 0LL;
        v24 = v23;
        if ( v23 )
        {
          *(_DWORD *)v23 = (_DWORD)v37;
          *((_DWORD *)v23 + 2) = v9;
          *((_DWORD *)v23 + 3) = v9;
          *((_DWORD *)v23 + 6) = 0;
          sub_1801005D8(v23 + 4, v9 * *(_QWORD *)(v1 + 448));
          *((_DWORD *)v23 + 1) = 2;
          v23[2] = 0LL;
          if ( v23[4] )
          {
            v2 = 0;
            v24 = 0LL;
            ppv = 0LL;
            v37 = v23;
            sub_180100568((__int64 *)(v1 + 352), (__int64)&v37);
          }
          else
          {
            v2 = -2147024882;
            sub_18010046C(v23);
          }
        }
        else
        {
          v2 = -2147024882;
        }
        if ( v24 )
          sub_18010046C(v24);
      }
      if ( v32 )
        LeaveCriticalSection(v31);
      if ( v2 >= 0 )
      {
        v2 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(v1 + 184) + 48LL))(
               *(_QWORD *)(v1 + 184),
               &v36);
        if ( v2 < 0 )
          goto LABEL_94;
        v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD **))(**(_QWORD **)(v1 + 192) + 24LL))(
               *(_QWORD *)(v1 + 192),
               (unsigned int)(*(_DWORD *)(v1 + 248) - v36),
               &v37);
        if ( v2 < 0 )
          goto LABEL_94;
        v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(v1 + 192) + 32LL))(
               *(_QWORD *)(v1 + 192),
               (unsigned int)(*(_DWORD *)(v1 + 248) - v36),
               2LL);
        if ( v2 < 0 )
          goto LABEL_94;
        if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
          && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
          && *((_BYTE *)off_18019C348 + 25) >= 4u )
        {
          sub_1800BB4B4(*((_QWORD *)off_18019C348 + 2), 0x3Bu, (__int64)&unk_1801726D0);
        }
        *(_DWORD *)(v1 + 56) = 3;
        v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v1 + 80) + 80LL))(*(_QWORD *)(v1 + 80));
        if ( v2 < 0
          || (v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v1 + 184) + 80LL))(*(_QWORD *)(v1 + 184)), v2 < 0) )
        {
LABEL_94:
          if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
            && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
            && *((_BYTE *)off_18019C348 + 25) >= 2u )
          {
            sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 0x3Du, (__int64)&unk_1801726D0, v2);
          }
          sub_180104244(v1);
        }
      }
      goto LABEL_97;
    }
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800BB4B4(*((_QWORD *)off_18019C348 + 2), 0x39u, (__int64)&unk_1801726D0);
    }
    if ( v39 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
    if ( v26 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    if ( ppv )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  }
  if ( v29 )
    LeaveCriticalSection(lpCriticalSection);
  return 1LL;
}
