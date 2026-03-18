/*
 * XREFs of xxxImmActivateAndUnloadThreadsLayout @ 0x1C01E3A50
 * Callers:
 *     xxxImmActivateAndUnloadThreadsLayout @ 0x1C01E3A50 (xxxImmActivateAndUnloadThreadsLayout.c)
 *     EditionImmActivateAndUnloadThreadsLayout @ 0x1C0209960 (EditionImmActivateAndUnloadThreadsLayout.c)
 * Callees:
 *     LockW32Thread @ 0x1C00343CC (LockW32Thread.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00B3C70 (PopAndFreeW32ThreadLock.c)
 *     xxxImmActivateLayout @ 0x1C012B148 (xxxImmActivateLayout.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memset @ 0x1C015C000 (memset.c)
 *     xxxImmActivateAndUnloadThreadsLayout @ 0x1C01E3A50 (xxxImmActivateAndUnloadThreadsLayout.c)
 *     xxxImmUnloadLayout @ 0x1C01E4100 (xxxImmUnloadLayout.c)
 */

__int64 __fastcall xxxImmActivateAndUnloadThreadsLayout(__int64 a1, int a2, __int64 a3, __int64 a4, unsigned int a5)
{
  int v8; // edi
  int v9; // edx
  int v10; // r14d
  __int64 v11; // rcx
  char v12; // bl
  __int64 v13; // rcx
  PRKPROCESS *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rbx
  int v18; // edi
  __int64 result; // rax
  int v20; // ebx
  __int64 *v21; // r14
  __int64 v22; // r12
  __int64 *v23; // r15
  int v24; // edx
  __int64 v25; // rcx
  __int64 *v26; // rbx
  int v27; // edi
  __int64 *v28; // r14
  int v29; // [rsp+34h] [rbp-344h]
  int v30; // [rsp+38h] [rbp-340h]
  __int64 ThreadWin32Thread; // [rsp+58h] [rbp-320h]
  _QWORD v34[4]; // [rsp+80h] [rbp-2F8h] BYREF
  __int64 v35; // [rsp+A0h] [rbp-2D8h] BYREF
  _QWORD v36[81]; // [rsp+A8h] [rbp-2D0h] BYREF

  memset(v36, 0, 0x280uLL);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v35 = a3;
  v8 = 0;
  v9 = 0;
  v29 = 0;
  while ( v8 < a2 )
  {
    v10 = 0;
    v11 = *(_QWORD *)(a1 + 8LL * v8);
    if ( (*(_DWORD *)(v11 + 480) & 1) != 0 )
    {
      v10 = -65536;
    }
    else if ( *(_QWORD *)(v11 + 432) != a4 )
    {
      if ( *(_QWORD *)(v11 + 776) )
      {
        v10 = 1;
      }
      else
      {
        v12 = 0;
        v34[0] = v11 + 432;
        v34[1] = a4;
        HMAssignmentLock(v34);
        v13 = *(_QWORD *)(a1 + 8LL * v8);
        if ( *(_QWORD *)(v13 + 472) != *(_QWORD *)(ThreadWin32Thread + 472) )
        {
          v14 = *(PRKPROCESS **)(v13 + 416);
          if ( v14 != *(PRKPROCESS **)(ThreadWin32Thread + 416) )
          {
            KeAttachProcess(*v14);
            v12 = 1;
          }
        }
        *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8LL * v8) + 472LL) + 152LL) = *(_WORD *)(a4 + 72);
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8LL * v8) + 472LL) + 144LL) = *(_QWORD *)(a4 + 40);
        if ( v12 )
          KeDetachProcess();
        v9 = v29;
      }
    }
    v15 = *(_QWORD *)(a1 + 8LL * v8);
    if ( *(_QWORD *)(v15 + 776) )
    {
      v16 = *(_QWORD *)(v15 + 432);
      if ( v16 )
      {
        if ( (a5 != 1 || (*(_WORD *)(v16 + 42) & 0xF000) == 0xE000 || (*gpsi & 4) != 0) && v10 != -65536 )
          v10 |= 2u;
      }
    }
    if ( ((v10 + 0x10000) & 0xFFFEFFFF) != 0 )
    {
      v17 = 5LL * v9;
      LockW32Thread(*(_QWORD *)(a1 + 8LL * v8), &v36[5 * v9 + 1]);
      v36[v17] = *(_QWORD *)(a1 + 8LL * v8);
      LODWORD(v36[v17 + 4]) = v10;
      v9 = v29 + 1;
      v29 = v9;
      if ( v9 == 16 )
      {
        v18 = v8 + 1;
        if ( v18 < a2 )
          return xxxImmActivateAndUnloadThreadsLayout((int)a1 + 8 * v18, a2 - v18, (unsigned int)&v35, a4, a5);
        break;
      }
    }
    ++v8;
  }
  v30 = v9 - 1;
  v20 = v9 - 1;
  v21 = &v35;
  result = v9 - 1;
  v22 = result;
  while ( v21 )
  {
    v23 = &v21[5 * result + 5];
    while ( v20 >= 0 )
    {
      v24 = *(_DWORD *)v23;
      if ( (*(_DWORD *)v23 & 1) != 0 )
      {
        v25 = *(v23 - 4);
        if ( (*(_DWORD *)(v25 + 480) & 1) == 0 )
        {
          xxxImmActivateLayout(v25, a4);
          v24 = *(_DWORD *)v23;
        }
      }
      if ( (v24 & 3) == 1 )
        PopAndFreeW32ThreadLock((__int64)&v21[4 * v20 + 2 + v20]);
      --v20;
      v23 -= 5;
    }
    v20 = 15;
    result = 15LL;
    v21 = (__int64 *)*v21;
  }
  v26 = &v35;
  v27 = v30;
  while ( v26 )
  {
    v28 = &v26[4 * v22 + 1 + v22];
    while ( v27 >= 0 )
    {
      result = *((unsigned int *)v28 + 8);
      if ( (result & 2) != 0 )
      {
        if ( (*(_DWORD *)(*v28 + 480) & 1) == 0 )
          xxxImmUnloadLayout(*v28, a5);
        result = PopAndFreeW32ThreadLock((__int64)&v26[4 * v27 + 2 + v27]);
      }
      --v27;
      v28 -= 5;
    }
    v27 = 15;
    v22 = 15LL;
    v26 = (__int64 *)*v26;
  }
  return result;
}
