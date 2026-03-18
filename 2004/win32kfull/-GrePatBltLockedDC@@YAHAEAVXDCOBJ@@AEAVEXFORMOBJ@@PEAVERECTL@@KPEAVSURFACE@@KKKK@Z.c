/*
 * XREFs of ?GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z @ 0x1C00871B4
 * Callers:
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C007AD40 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     NtGdiPatBlt @ 0x1C0084BB0 (NtGdiPatBlt.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C0086DC0 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 * Callees:
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C0075490 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?prgnRao@DC@@QEBAPEAVREGION@@XZ @ 0x1C0075AB4 (-prgnRao@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C008A108 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GrePatBltLockedDC(
        __int64 a1,
        struct EXFORMOBJ *a2,
        struct ERECTL *a3,
        int a4,
        struct SURFACE *a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9)
{
  int v9; // ebp
  DC **v11; // r11
  unsigned int v12; // r12d
  int v13; // eax
  DC *v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 v18; // rbx
  __int64 v19; // r8
  __int64 v20; // rdi
  __int64 v21; // r10
  int v22; // r9d
  int v23; // ebx
  int v24; // r8d
  int v25; // ecx
  DC *v26; // r10
  unsigned int *v27; // rcx
  char *v28; // r13
  unsigned int v29; // ebx
  unsigned int v30; // edi
  unsigned int v31; // esi
  unsigned int v32; // ebp
  __int64 v33; // r9
  __int64 v34; // rcx
  int v37; // eax
  char *v38; // rdi
  DC *v39; // r10
  struct REGION *v40; // rax
  int v41; // eax
  ULONG v42; // ecx
  __int64 v43; // [rsp+20h] [rbp-88h]
  __int128 v44[4]; // [rsp+60h] [rbp-48h] BYREF
  XDCOBJ *v45; // [rsp+B0h] [rbp+8h]
  char *v46; // [rsp+B8h] [rbp+10h]

  v45 = (XDCOBJ *)a1;
  v9 = a4;
  v46 = 0LL;
  v11 = (DC **)a1;
  v12 = 1;
  if ( (*((_DWORD *)a5 + 29) & 8) != 0 || *((_QWORD *)a5 + 28) )
  {
    a1 = 512LL;
    if ( (*((_WORD *)a5 + 51) & 0x200) != 0 )
      goto LABEL_44;
  }
  v13 = *((_DWORD *)a5 + 28);
  if ( (v13 & 0x800) != 0 )
  {
    v37 = UserSurfaceAccessCheck(*((_QWORD *)a5 + 81));
  }
  else
  {
    if ( (v13 & 0x10000000) == 0 )
      goto LABEL_5;
    v37 = UserScreenAccessCheck(a1, a2);
  }
  if ( v37 )
  {
    v11 = (DC **)v45;
LABEL_5:
    v14 = *v11;
    if ( (*((_DWORD *)*v11 + 9) & 0x10000) != 0 )
    {
      v42 = 87;
      goto LABEL_45;
    }
    v15 = *(int *)a3;
    v16 = *((_DWORD *)v14 + 10) & 1LL;
    v17 = *((int *)v14 + 2 * v16 + 254);
    if ( (unsigned __int64)(v17 + v15 + 0x80000000LL) <= 0xFFFFFFFF )
    {
      v18 = *((int *)a3 + 2);
      if ( (unsigned __int64)(v17 + v18 + 0x80000000LL) <= 0xFFFFFFFF )
      {
        v19 = *((int *)v14 + 2 * v16 + 255);
        v20 = *((int *)a3 + 1);
        if ( (unsigned __int64)(v19 + v20 + 0x80000000LL) <= 0xFFFFFFFF )
        {
          v21 = *((int *)a3 + 3);
          if ( (unsigned __int64)(v19 + v21 + 0x80000000LL) <= 0xFFFFFFFF )
          {
            v22 = v15 + v17;
            *(_DWORD *)a3 = v22;
            v23 = *((_DWORD *)v14 + 2 * v16 + 254) + v18;
            *((_DWORD *)a3 + 2) = v23;
            v24 = v20 + *((_DWORD *)v14 + 2 * v16 + 255);
            *((_DWORD *)a3 + 1) = v24;
            v25 = v21 + *((_DWORD *)v14 + 2 * v16 + 255);
            *((_DWORD *)a3 + 3) = v25;
            if ( v22 < v23 && v24 < v25 )
            {
              v26 = *v11;
              if ( v22 >= *((_DWORD *)*v11 + 250)
                && v23 <= *((_DWORD *)v26 + 252)
                && v24 >= *((_DWORD *)v26 + 251)
                && v25 <= *((_DWORD *)v26 + 253) )
              {
                goto LABEL_16;
              }
              v38 = (char *)v26 + 1752;
              v46 = (char *)v26 + 1752;
              if ( DC::prgnRao(*v11) )
                v40 = DC::prgnRao(v39);
              else
                v40 = DC::prgnVisSnap(v39);
              XCLIPOBJ::vSetup((XCLIPOBJ *)v38, v40, a3, 2);
              *(_OWORD *)a3 = *(_OWORD *)(v38 + 4);
              if ( *(_DWORD *)a3 != *((_DWORD *)a3 + 2) && *((_DWORD *)a3 + 1) != *((_DWORD *)a3 + 3) )
              {
                v11 = (DC **)v45;
                v26 = *(DC **)v45;
LABEL_16:
                if ( (((unsigned __int8)v9 ^ (unsigned __int8)(16 * v9)) & 0xF0) != 0 )
                {
                  v27 = (unsigned int *)*((_QWORD *)v26 + 122);
                  v28 = (char *)v26 + 1184;
                  v16 = v27[38];
                  if ( (v16 & 1) != 0
                    || (*((_DWORD *)v26 + 79) & 1) != 0
                    || (v41 = *((_DWORD *)v26 + 326), (v41 & 1) != 0) && *((_DWORD *)v26 + 308) != a6
                    || (v41 & 2) != 0 && *((_DWORD *)v26 + 309) != a7 )
                  {
                    v29 = v27[46];
                    v30 = v27[44];
                    v31 = v27[47];
                    v32 = v27[45];
                    v27[38] = v16 & 0xFFFFFFFE;
                    *((_DWORD *)*v11 + 79) &= ~1u;
                    v43 = *((_QWORD *)a5 + 16);
                    v33 = *((_QWORD *)*v11 + 11);
                    *(_DWORD *)(*((_QWORD *)*v11 + 122) + 184LL) = a6;
                    *(_DWORD *)(*((_QWORD *)*v11 + 122) + 176LL) = a7;
                    *(_DWORD *)(*((_QWORD *)*v11 + 122) + 188LL) = a8;
                    *(_DWORD *)(*((_QWORD *)*v11 + 122) + 180LL) = a9;
                    EBRUSHOBJ::vInitBrush((char *)v26 + 1184, *v11, *((_QWORD *)*v11 + 17), v33, v43, a5, 1);
                    v11 = (DC **)v45;
                    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v45 + 976LL) + 184LL) = v29;
                    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v45 + 976LL) + 176LL) = v30;
                    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v45 + 976LL) + 188LL) = v31;
                    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v45 + 976LL) + 180LL) = v32;
                    v26 = *(DC **)v45;
                    v9 = a4;
                  }
                }
                else
                {
                  v28 = 0LL;
                }
                if ( (*((_DWORD *)v26 + 9) & 0xE0) != 0 && (!v28 || (*((_DWORD *)v28 + 30) & 0x100) == 0) )
                {
                  v44[0] = *(_OWORD *)a3;
                  XDCOBJ::vAccumulateTight((XDCOBJ *)v11, (struct ECLIPOBJ *)v16, (struct ERECTL *)v44);
                }
                ++*((_DWORD *)a5 + 23);
                v34 = *(_QWORD *)v45 + 1176LL;
                if ( (*((_DWORD *)a5 + 28) & 1) != 0 )
                  return (unsigned int)(*(__int64 (__fastcall **)(char *, _QWORD, _QWORD, char *, _QWORD, struct ERECTL *, _QWORD, _QWORD, char *, __int64, int))(*((_QWORD *)a5 + 6) + 2832LL))(
                                         (char *)a5 + 24,
                                         0LL,
                                         0LL,
                                         v46,
                                         0LL,
                                         a3,
                                         0LL,
                                         0LL,
                                         v28,
                                         v34,
                                         v9);
                else
                  return (unsigned int)((__int64 (__fastcall *)(char *, _QWORD, _QWORD, char *, _QWORD, struct ERECTL *, _QWORD, _QWORD, char *, __int64, int))EngBitBlt)(
                                         (char *)a5 + 24,
                                         0LL,
                                         0LL,
                                         v46,
                                         0LL,
                                         a3,
                                         0LL,
                                         0LL,
                                         v28,
                                         v34,
                                         v9);
              }
            }
          }
        }
      }
    }
    return v12;
  }
LABEL_44:
  v42 = 5;
LABEL_45:
  EngSetLastError(v42);
  return 0LL;
}
