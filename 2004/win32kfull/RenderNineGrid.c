/*
 * XREFs of RenderNineGrid @ 0x1C00E4910
 * Callers:
 *     xxEngNineGrid @ 0x1C00E4408 (xxEngNineGrid.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     RenderNineGridInternal @ 0x1C00E4BF0 (RenderNineGridInternal.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C010681C (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RenderNineGrid(
        struct _SURFOBJ *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int *a5,
        __int64 a6,
        int *a7,
        __int64 a8,
        _DWORD *a9,
        _QWORD *a10,
        int a11)
{
  __int64 v13; // rcx
  BOOL v14; // edx
  int v15; // r9d
  int v16; // r10d
  USHORT iType; // ax
  int v19; // ecx
  int v20; // r8d
  __int64 (__fastcall *v21)(struct _SURFOBJ *, __int64, __int64, __int64, int *, __int64 *, int *); // rax
  __int64 (__fastcall *v22)(struct _SURFOBJ *, __int64, __int64, __int64, int *, __int64 *, _DWORD, _DWORD); // rax
  __int64 (__fastcall *v23)(struct _SURFOBJ *, __int64, __int64, __int64, int *, POINTL *); // rax
  int v26; // [rsp+A8h] [rbp-80h] BYREF
  __int64 v27; // [rsp+B0h] [rbp-78h]
  __int64 v28; // [rsp+B8h] [rbp-70h]
  __int64 v29; // [rsp+C0h] [rbp-68h]
  __int64 v30; // [rsp+C8h] [rbp-60h] BYREF
  int v31; // [rsp+D0h] [rbp-58h]
  int v32; // [rsp+D4h] [rbp-54h]
  _DWORD v33[2]; // [rsp+D8h] [rbp-50h] BYREF
  int v34; // [rsp+E0h] [rbp-48h]
  int v35; // [rsp+E4h] [rbp-44h]

  v30 = a2;
  v13 = a8;
  v14 = a11 && (*a9 & 0x10) != 0;
  v15 = *a5;
  v33[0] = *a5;
  v33[1] = a5[1];
  v16 = a5[2];
  v34 = v16;
  v35 = a5[3];
  if ( v14 )
  {
    v19 = a7[2];
    v20 = *a7;
    v34 = v19 + *a7 - v15;
    v33[0] = v19 + v20 - v16;
    v13 = a8;
  }
  RenderNineGridInternal(a3, v30, (unsigned int)v33, (_DWORD)a7, v13, (__int64)a9, (_DWORD)a10, v14);
  v30 = 0LL;
  v31 = a5[2] - *a5;
  v32 = a5[3] - a5[1];
  if ( (*a9 & 4) != 0 )
  {
    v26 = 33488896;
    v29 = a10[6];
    v28 = a10[5];
    v27 = a10[4];
    if ( a1->iType == 1
      && (unsigned int)bAllowShareAccess(a1)
      && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
      && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
       || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
      && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x10000) != 0 )
    {
      v21 = *(__int64 (__fastcall **)(struct _SURFOBJ *, __int64, __int64, __int64, int *, __int64 *, int *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 120LL);
      return v21(a1, a3, a4, a6, a5, &v30, &v26);
    }
    else if ( a1->iType == 1
           && (unsigned int)bAllowShareAccess(a1)
           && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
           && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
           && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
            || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
           || ((__int64)a1[1].hsurf & 0x10000) == 0 )
    {
      return ((__int64 (__fastcall *)(struct _SURFOBJ *, __int64, __int64, __int64, int *, __int64 *, int *))EngAlphaBlend)(
               a1,
               a3,
               a4,
               a6,
               a5,
               &v30,
               &v26);
    }
    else
    {
      return (*((__int64 (__fastcall **)(struct _SURFOBJ *, __int64, __int64, __int64, int *, __int64 *, int *))a1->hdev
              + 170))(
               a1,
               a3,
               a4,
               a6,
               a5,
               &v30,
               &v26);
    }
  }
  else
  {
    iType = a1->iType;
    if ( (*a9 & 8) != 0 )
    {
      if ( iType == 1
        && (unsigned int)bAllowShareAccess(a1)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
        && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x8000) != 0 )
      {
        v22 = *(__int64 (__fastcall **)(struct _SURFOBJ *, __int64, __int64, __int64, int *, __int64 *, _DWORD, _DWORD))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 112LL);
        return v22(a1, a3, a4, a6, a5, &v30, a9[5], 0);
      }
      else if ( a1->iType == 1
             && (unsigned int)bAllowShareAccess(a1)
             && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
             && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
             && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
              || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
             || ((__int64)a1[1].hsurf & 0x8000) == 0 )
      {
        return ((__int64 (__fastcall *)(struct _SURFOBJ *, __int64, __int64, __int64, int *, __int64 *, _DWORD, _DWORD))EngTransparentBlt)(
                 a1,
                 a3,
                 a4,
                 a6,
                 a5,
                 &v30,
                 a9[5],
                 0);
      }
      else
      {
        return (*((__int64 (__fastcall **)(struct _SURFOBJ *, __int64, __int64, __int64, int *, __int64 *, _DWORD, _DWORD))a1->hdev
                + 169))(
                 a1,
                 a3,
                 a4,
                 a6,
                 a5,
                 &v30,
                 a9[5],
                 0);
      }
    }
    else if ( iType == 1
           && (unsigned int)bAllowShareAccess(a1)
           && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
           && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
           && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
            || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
           && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x400) != 0 )
    {
      v23 = *(__int64 (__fastcall **)(struct _SURFOBJ *, __int64, __int64, __int64, int *, POINTL *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 80LL);
      return v23(a1, a3, a4, a6, a5, &gptlZero);
    }
    else if ( a1->iType == 1
           && (unsigned int)bAllowShareAccess(a1)
           && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
           && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
           && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
            || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
           || ((__int64)a1[1].hsurf & 0x400) == 0 )
    {
      return ((__int64 (__fastcall *)(struct _SURFOBJ *, __int64, __int64, __int64, int *, POINTL *))EngCopyBits)(
               a1,
               a3,
               a4,
               a6,
               a5,
               &gptlZero);
    }
    else
    {
      return (*((__int64 (__fastcall **)(struct _SURFOBJ *, __int64, __int64, __int64, int *, POINTL *))a1->hdev + 165))(
               a1,
               a3,
               a4,
               a6,
               a5,
               &gptlZero);
    }
  }
}
