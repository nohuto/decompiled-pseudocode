/*
 * XREFs of ?bFill@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@Z2@Z @ 0x1C013B528
 * Callers:
 *     ?bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z @ 0x1C013AAB0 (-bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C0071268 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C0077C50 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     PALLOCMEM2 @ 0x1C00D8F8C (PALLOCMEM2.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall bFill(
        struct EPATHOBJ *a1,
        struct _RECTL *a2,
        char a3,
        void (*a4)(struct _RECTL *, unsigned int, void *),
        void *a5)
{
  __int64 v8; // rcx
  __int64 v9; // rax
  char *v10; // r14
  int v11; // eax
  unsigned int v12; // r15d
  __int128 *v13; // r9
  unsigned int v14; // edi
  unsigned int v15; // esi
  __int128 *v16; // r8
  __int128 *v17; // rdi
  int v18; // ecx
  unsigned int v20; // esi
  unsigned int i; // r14d
  unsigned int v22; // eax
  __int64 v23; // r15
  __int64 v24; // rcx
  unsigned int v25; // esi
  unsigned int j; // r14d
  unsigned int v27; // eax
  __int64 v28; // r15
  int v29; // eax
  int v30; // edx
  int v31; // ecx
  unsigned int v32; // [rsp+20h] [rbp-648h]
  int *v33; // [rsp+28h] [rbp-640h]
  int v34; // [rsp+48h] [rbp-620h]
  __int128 v35; // [rsp+68h] [rbp-600h] BYREF
  __int128 v36; // [rsp+78h] [rbp-5F0h]
  __int128 v37; // [rsp+88h] [rbp-5E0h]
  int v38; // [rsp+98h] [rbp-5D0h]
  _OWORD *v39; // [rsp+A0h] [rbp-5C8h]
  __int128 v40; // [rsp+A8h] [rbp-5C0h]
  _OWORD v41[3]; // [rsp+B8h] [rbp-5B0h] BYREF
  int v42[4]; // [rsp+E8h] [rbp-580h] BYREF
  int v43[4]; // [rsp+F8h] [rbp-570h] BYREF
  __int128 v44; // [rsp+108h] [rbp-560h] BYREF
  _BYTE v45[320]; // [rsp+120h] [rbp-548h] BYREF
  char v46; // [rsp+260h] [rbp-408h] BYREF

  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  memset(v41, 0, sizeof(v41));
  if ( (a3 & 1) != 0 )
  {
    v8 = *((_QWORD *)a1 + 6);
    if ( v8 )
    {
      if ( a2 )
      {
        v20 = 0;
        for ( i = 0; ; ++i )
        {
          v22 = *((_DWORD *)a1 + 14);
          if ( i >= v22 )
            break;
          v23 = *((_QWORD *)a1 + 6);
          v42[0] = *(_DWORD *)(v23 + 16LL * i);
          v42[1] = *(_DWORD *)(v23 + 16LL * i + 4);
          v42[2] = *(_DWORD *)(v23 + 16LL * i + 8);
          v42[3] = *(_DWORD *)(v23 + 16LL * i + 12);
          if ( a2->left >= *(_DWORD *)(v23 + 16LL * i)
            || a2->top >= *(_DWORD *)(v23 + 16LL * i + 4)
            || a2->right <= *(_DWORD *)(v23 + 16LL * i + 8)
            || a2->bottom <= *(_DWORD *)(v23 + 16LL * i + 12) )
          {
            ERECTL::operator*=(v42, &a2->left);
            if ( v20 )
            {
              ((void (__fastcall *)(__int64, _QWORD, void *))a4)(v23 + 16LL * (i - v20), v20, a5);
              v20 = 0;
            }
            if ( !ERECTL::bEmpty((ERECTL *)v42) )
              ((void (__fastcall *)(int *, __int64, void *))a4)(v42, 1LL, a5);
          }
          else
          {
            ++v20;
          }
        }
        if ( v20 )
          ((void (__fastcall *)(__int64, _QWORD, void *))a4)(*((_QWORD *)a1 + 6) + 16LL * (v22 - v20), v20, a5);
      }
      else
      {
        ((void (__fastcall *)(__int64, _QWORD, void *))a4)(v8, *((unsigned int *)a1 + 14), a5);
      }
      return 1LL;
    }
  }
  if ( (a3 & 1) == 0 && (a3 & 2) != 0 )
  {
    v24 = *((_QWORD *)a1 + 8);
    if ( v24 )
    {
      if ( a2 )
      {
        v25 = 0;
        for ( j = 0; ; ++j )
        {
          v27 = *((_DWORD *)a1 + 15);
          if ( j >= v27 )
            break;
          v28 = *((_QWORD *)a1 + 8);
          if ( a2->left >= *(_DWORD *)(v28 + 16LL * j)
            || a2->top >= *(_DWORD *)(v28 + 16LL * j + 4)
            || a2->right <= *(_DWORD *)(v28 + 16LL * j + 8)
            || a2->bottom <= *(_DWORD *)(v28 + 16LL * j + 12) )
          {
            v43[0] = *(_DWORD *)(v28 + 16LL * j);
            v43[1] = *(_DWORD *)(v28 + 16LL * j + 4);
            v43[2] = *(_DWORD *)(v28 + 16LL * j + 8);
            v43[3] = *(_DWORD *)(v28 + 16LL * j + 12);
            ERECTL::operator*=(v43, &a2->left);
            if ( v25 )
            {
              ((void (__fastcall *)(__int64, _QWORD, void *))a4)(v28 + 16LL * (j - v25), v25, a5);
              v25 = 0;
            }
            if ( !ERECTL::bEmpty((ERECTL *)v43) )
              ((void (__fastcall *)(int *, __int64, void *))a4)(v43, 1LL, a5);
          }
          else
          {
            ++v25;
          }
        }
        if ( v25 )
          ((void (__fastcall *)(__int64, _QWORD, void *))a4)(*((_QWORD *)a1 + 8) + 16LL * (v27 - v25), v25, a5);
      }
      else
      {
        ((void (__fastcall *)(__int64, _QWORD, void *))a4)(v24, *((unsigned int *)a1 + 15), a5);
      }
      return 1LL;
    }
  }
  v9 = *((unsigned int *)a1 + 1);
  if ( (unsigned int)v9 <= 0x14 )
  {
    v10 = &v46;
    v11 = 0;
  }
  else
  {
    if ( (unsigned __int64)(48 * v9) > 0xFFFFFFFF )
      return 0LL;
    v38 = 48 * v9;
    v10 = (char *)PALLOCMEM2(48 * v9, 1734632775LL, 0);
    if ( !v10 )
      return 0LL;
    v11 = 1;
  }
  v34 = v11;
  v33 = (int *)v45;
  v12 = 0;
  v40 = 0LL;
  v44 = 0LL;
  if ( a2 )
  {
    v40 = (__int128)*a2;
    DWORD1(v44) = 16 * a2->top;
    HIDWORD(v44) = 16 * a2->bottom;
    v13 = &v44;
  }
  else
  {
    v13 = 0LL;
  }
  v39 = v41;
  v14 = bConstructGET(a1, v41, v10, v13);
  v32 = v14;
  if ( v14 )
  {
    v15 = 0x80000000;
    v16 = &v35;
    *(_QWORD *)&v35 = &v35;
    LODWORD(v36) = 0;
    HIDWORD(v35) = 0x7FFFFFFF;
LABEL_12:
    if ( v16 != &v35 )
    {
      vAdvanceAETEdges(&v35);
      v16 = (__int128 *)v35;
      if ( (__int128 *)v35 != &v35 )
      {
        if ( *(__int128 **)v35 != &v35 )
        {
          vXSortAETEdges(&v35);
          v16 = (__int128 *)v35;
        }
        goto LABEL_16;
      }
    }
    if ( *(_OWORD **)&v41[0] != v39 )
    {
      v15 = *(_DWORD *)(*(_QWORD *)&v41[0] + 16LL);
LABEL_16:
      if ( *(_DWORD *)(*(_QWORD *)&v41[0] + 16LL) == v15 )
      {
        vMoveNewEdges(v41, &v35, v15);
        v16 = (__int128 *)v35;
      }
      v17 = v16;
      while ( 1 )
      {
        v18 = *((_DWORD *)v17 + 3);
        if ( (a3 & 2) != 0 )
        {
          v29 = *((_DWORD *)v17 + 10);
          do
          {
            v17 = *(__int128 **)v17;
            v29 += *((_DWORD *)v17 + 10);
          }
          while ( v29 );
        }
        else
        {
          v17 = *(__int128 **)v17;
        }
        if ( v18 >= *((_DWORD *)v17 + 3) )
          goto LABEL_27;
        if ( a2 )
        {
          v30 = v40;
          if ( v18 >= (int)v40 )
            v30 = v18;
          *v33 = v30;
          v31 = DWORD2(v40);
          if ( *((_DWORD *)v17 + 3) <= SDWORD2(v40) )
            v31 = *((_DWORD *)v17 + 3);
          v33[2] = v31;
          v33[1] = v15;
          v33[3] = v15 + 1;
          if ( v30 >= v31 )
            goto LABEL_25;
        }
        else
        {
          *v33 = v18;
          v33[2] = *((_DWORD *)v17 + 3);
          v33[1] = v15;
          v33[3] = v15 + 1;
        }
        ++v12;
        v33 += 4;
LABEL_25:
        if ( v12 == 20 )
        {
          ((void (__fastcall *)(_BYTE *, __int64, void *))a4)(v45, 20LL, a5);
          v33 = (int *)v45;
          v12 = 0;
          v16 = (__int128 *)v35;
        }
LABEL_27:
        v17 = *(__int128 **)v17;
        if ( v17 == &v35 )
        {
          ++v15;
          goto LABEL_12;
        }
      }
    }
    if ( v12 )
      ((void (__fastcall *)(_BYTE *, _QWORD, void *))a4)(v45, v12, a5);
    v14 = v32;
  }
  if ( v34 )
    Win32FreePool(v10);
  return v14;
}
