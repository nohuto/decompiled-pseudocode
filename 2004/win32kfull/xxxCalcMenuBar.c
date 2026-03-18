/*
 * XREFs of xxxCalcMenuBar @ 0x1C005E394
 * Callers:
 *     NtUserCalcMenuBar @ 0x1C005E250 (NtUserCalcMenuBar.c)
 * Callees:
 *     ThreadLockMenuNoModify @ 0x1C005E1E4 (ThreadLockMenuNoModify.c)
 *     xxxMenuBarCompute @ 0x1C005EE48 (xxxMenuBarCompute.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A75D8 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FC8C0 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 */

__int64 __fastcall xxxCalcMenuBar(__int64 a1, int a2, int a3, int a4, _DWORD *a5)
{
  __int64 ThreadWin32Thread; // rax
  unsigned int v10; // ebx
  __int64 v11; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 *v17; // [rsp+30h] [rbp-30h] BYREF
  __int64 v18; // [rsp+38h] [rbp-28h] BYREF
  __int64 v19; // [rsp+40h] [rbp-20h]
  __int128 v20; // [rsp+48h] [rbp-18h] BYREF
  __int64 v21; // [rsp+58h] [rbp-8h]

  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v17 = (__int64 *)gSmartObjNullRef;
  v10 = 0;
  v18 = *(_QWORD *)(ThreadWin32Thread + 1464);
  *(_QWORD *)(ThreadWin32Thread + 1464) = &v18;
  v21 = 0LL;
  v11 = *(_QWORD *)(a1 + 40);
  v19 = 0LL;
  v20 = 0LL;
  if ( (*(_BYTE *)(v11 + 31) & 0xC0) != 0x40 && *(_QWORD *)(a1 + 168) )
  {
    SmartObjStackRefBase<tagMENU>::operator=(&v17);
    v13 = v19;
    if ( !v19 )
      v13 = *v17;
    ThreadLockMenuNoModify(v13, &v20);
    xxxMenuBarCompute((unsigned int)&v17, a1, a4, a2, a5[2] - *a5 - a2 - a3);
    v10 = *(_DWORD *)(*v17 + 68);
    v14 = *(_QWORD *)(*((_QWORD *)&v20 + 1) + 40LL);
    *(_DWORD *)(v14 + 40) &= ~0x200u;
    ThreadUnlock1(v14, v15, v16);
  }
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(&v17);
  return v10;
}
