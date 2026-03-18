/*
 * XREFs of xxxCalcMenuBar @ 0x1C00FB304
 * Callers:
 *     NtUserCalcMenuBar @ 0x1C00FB1C0 (NtUserCalcMenuBar.c)
 * Callees:
 *     xxxMenuBarCompute @ 0x1C003812C (xxxMenuBarCompute.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00B2D8C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00F7AF4 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ThreadLockMenuNoModify @ 0x1C00FB424 (ThreadLockMenuNoModify.c)
 */

__int64 __fastcall xxxCalcMenuBar(__int64 a1, unsigned int a2, int a3, unsigned int a4, _DWORD *a5)
{
  __int64 ThreadWin32Thread; // rax
  unsigned int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // rdx
  _DWORD *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 **v18; // [rsp+30h] [rbp-30h] BYREF
  __int64 v19; // [rsp+38h] [rbp-28h] BYREF
  _DWORD *v20; // [rsp+40h] [rbp-20h]
  __int128 v21; // [rsp+48h] [rbp-18h] BYREF
  __int64 v22; // [rsp+58h] [rbp-8h]

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v18 = (__int64 **)gSmartObjNullRef;
  v10 = 0;
  v19 = *(_QWORD *)(ThreadWin32Thread + 1472);
  *(_QWORD *)(ThreadWin32Thread + 1472) = &v19;
  v22 = 0LL;
  v11 = *(_QWORD *)(a1 + 40);
  v20 = 0LL;
  v21 = 0LL;
  if ( (*(_BYTE *)(v11 + 31) & 0xC0) != 0x40 )
  {
    v12 = *(_QWORD *)(a1 + 168);
    if ( v12 )
    {
      SmartObjStackRefBase<tagMENU>::operator=(&v18, v12);
      v14 = v20;
      if ( !v20 )
        v14 = *v18;
      ThreadLockMenuNoModify(v14, &v21);
      xxxMenuBarCompute(&v18, a1, a4, a2, a5[2] - *a5 - a2 - a3);
      v10 = *((_DWORD *)*v18 + 17);
      v15 = *(_QWORD *)(*((_QWORD *)&v21 + 1) + 40LL);
      *(_DWORD *)(v15 + 40) &= ~0x200u;
      ThreadUnlock1(v15, v16, v17);
    }
  }
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(&v18);
  return v10;
}
