/*
 * XREFs of _xxxImmActivateAndUnloadThreadsLayout@20 @ 0x14F3AC
 * Callers:
 *     _xxxImmActivateAndUnloadThreadsLayout@20 @ 0x14F3AC (_xxxImmActivateAndUnloadThreadsLayout@20.c)
 *     _EditionImmActivateAndUnloadThreadsLayout@20 @ 0x16F254 (_EditionImmActivateAndUnloadThreadsLayout@20.c)
 * Callees:
 *     _LockW32Thread@8 @ 0x3C2F8 (_LockW32Thread@8.c)
 *     _PopAndFreeW32ThreadLock@4 @ 0x3C354 (_PopAndFreeW32ThreadLock@4.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxImmActivateLayout@8 @ 0xEC868 (_xxxImmActivateLayout@8.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _xxxImmActivateAndUnloadThreadsLayout@20 @ 0x14F3AC (_xxxImmActivateAndUnloadThreadsLayout@20.c)
 *     _xxxImmUnloadLayout@8 @ 0x14F941 (_xxxImmUnloadLayout@8.c)
 */

char __fastcall xxxImmActivateAndUnloadThreadsLayout(int a1, int *a2, int a3, int a4, int a5)
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v7; // edi
  int v8; // ebx
  int v9; // esi
  int v10; // eax
  int v11; // ecx
  PRKPROCESS *v12; // eax
  int v13; // edx
  LONG_PTR v14; // ecx
  int v15; // esi
  int v16; // ebx
  int *v17; // ecx
  int v18; // esi
  int *v19; // edi
  int v20; // ecx
  int *v21; // ebx
  int v22; // esi
  int *v23; // edi
  int v25; // [esp+14h] [ebp-180h]
  int v26; // [esp+20h] [ebp-174h]
  int v27; // [esp+24h] [ebp-170h]
  int *v28; // [esp+28h] [ebp-16Ch]
  int v29; // [esp+2Ch] [ebp-168h]
  char v30; // [esp+33h] [ebp-161h]
  int v31; // [esp+34h] [ebp-160h] BYREF
  _DWORD v32[81]; // [esp+38h] [ebp-15Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+17Ch] [ebp-18h]

  v28 = a2;
  v27 = a1;
  v29 = a4;
  memset(v32, 0, 0x140u);
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v25 = ThreadWin32Thread;
  v31 = a3;
  v7 = 0;
  v26 = 0;
  while ( v7 < (int)v28 )
  {
    v8 = 0;
    v9 = v27;
    v10 = *(_DWORD *)(v27 + 4 * v7);
    if ( (*(_BYTE *)(v10 + 264) & 1) != 0 )
    {
      v8 = -65536;
    }
    else if ( *(_DWORD *)(v10 + 240) != v29 )
    {
      if ( *(_DWORD *)(v10 + 436) )
      {
        v8 = 1;
      }
      else
      {
        v30 = 0;
        HMAssignmentLock(v10 + 240, v29);
        v11 = *(_DWORD *)(v27 + 4 * v7);
        if ( *(_DWORD *)(v11 + 260) != *(_DWORD *)(v25 + 260) )
        {
          v12 = *(PRKPROCESS **)(v11 + 232);
          if ( v12 != *(PRKPROCESS **)(v25 + 232) )
          {
            KeAttachProcess(*v12);
            v30 = 1;
          }
        }
        ms_exc.registration.TryLevel = 0;
        v13 = v29;
        *(_WORD *)(*(_DWORD *)(*(_DWORD *)(v27 + 4 * v7) + 260) + 104) = *(_WORD *)(v29 + 40);
        *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v9 + 4 * v7) + 260) + 100) = *(_DWORD *)(v13 + 20);
        ms_exc.registration.TryLevel = -2;
        if ( v30 )
          KeDetachProcess();
      }
    }
    LOBYTE(ThreadWin32Thread) = v27;
    v14 = *(_DWORD *)(v27 + 4 * v7);
    if ( *(_DWORD *)(v14 + 436) )
    {
      ThreadWin32Thread = *(_DWORD *)(v14 + 240);
      if ( ThreadWin32Thread )
      {
        if ( a5 != 1
          || (LOWORD(ThreadWin32Thread) = *(_WORD *)(ThreadWin32Thread + 22) & 0xF000, (_WORD)ThreadWin32Thread == 0xE000)
          || (LOBYTE(ThreadWin32Thread) = _gpsi, (*_gpsi & 4) != 0) )
        {
          if ( v8 != -65536 )
            v8 |= 2u;
        }
      }
    }
    if ( v8 )
    {
      if ( v8 != -65536 )
      {
        v15 = 5 * v26;
        LockW32Thread(v14, &v32[5 * v26 + 1]);
        v32[v15] = *(_DWORD *)(v27 + 4 * v7);
        v32[v15 + 4] = v8;
        ThreadWin32Thread = v26 + 1;
        v26 = ThreadWin32Thread;
        if ( ThreadWin32Thread == 16 )
        {
          ++v7;
          break;
        }
      }
    }
    ++v7;
  }
  if ( v7 >= (int)v28 )
  {
    v16 = v26 - 1;
    v17 = &v31;
    v28 = &v31;
    v18 = v29;
    do
    {
      if ( v16 >= 0 )
      {
        v19 = &v17[5 * v16 + 5];
        do
        {
          ThreadWin32Thread = *v19;
          if ( (*v19 & 1) != 0 )
          {
            v20 = *(v19 - 4);
            if ( (*(_BYTE *)(v20 + 264) & 1) == 0 )
            {
              xxxImmActivateLayout(v20, v18);
              ThreadWin32Thread = *v19;
            }
          }
          LOBYTE(ThreadWin32Thread) = ThreadWin32Thread & 3;
          if ( (_BYTE)ThreadWin32Thread == 1 )
            LOBYTE(ThreadWin32Thread) = PopAndFreeW32ThreadLock((int)(v19 - 3));
          v19 -= 5;
          --v16;
        }
        while ( v16 >= 0 );
        v17 = v28;
      }
      v16 = 15;
      v17 = (int *)*v17;
      v28 = v17;
    }
    while ( v17 );
    v21 = &v31;
    v22 = v26 - 1;
    do
    {
      if ( v22 >= 0 )
      {
        LOBYTE(ThreadWin32Thread) = 20 * v22;
        v23 = &v21[5 * v22 + 1];
        do
        {
          if ( (v23[4] & 2) != 0 )
          {
            if ( (*(_BYTE *)(*v23 + 264) & 1) == 0 )
              xxxImmUnloadLayout(*v23, a5);
            LOBYTE(ThreadWin32Thread) = PopAndFreeW32ThreadLock((int)(v23 + 1));
          }
          v23 -= 5;
          --v22;
        }
        while ( v22 >= 0 );
      }
      v22 = 15;
      v21 = (int *)*v21;
    }
    while ( v21 );
  }
  else
  {
    LOBYTE(ThreadWin32Thread) = xxxImmActivateAndUnloadThreadsLayout(&v31, v29, a5);
  }
  return ThreadWin32Thread;
}
