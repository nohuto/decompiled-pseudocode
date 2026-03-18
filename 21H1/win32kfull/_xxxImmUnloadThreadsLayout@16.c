/*
 * XREFs of _xxxImmUnloadThreadsLayout@16 @ 0xE72DE
 * Callers:
 *     ?xxxFreeImeKeyboardLayouts@@YGXPAUtagWINDOWSTATION@@@Z @ 0xE7294 (-xxxFreeImeKeyboardLayouts@@YGXPAUtagWINDOWSTATION@@@Z.c)
 *     _xxxImmUnloadThreadsLayout@16 @ 0xE72DE (_xxxImmUnloadThreadsLayout@16.c)
 * Callees:
 *     _LockW32Thread@8 @ 0x3C2F8 (_LockW32Thread@8.c)
 *     _PopAndFreeW32ThreadLock@4 @ 0x3C354 (_PopAndFreeW32ThreadLock@4.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxImmUnloadThreadsLayout@16 @ 0xE72DE (_xxxImmUnloadThreadsLayout@16.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _xxxImmUnloadLayout@8 @ 0x14F941 (_xxxImmUnloadLayout@8.c)
 */

int __fastcall xxxImmUnloadThreadsLayout(int a1, int a2, int a3, int a4)
{
  PKTHREAD CurrentThread; // eax
  int v6; // edx
  int v7; // esi
  bool v8; // zf
  LONG_PTR v9; // ecx
  bool v10; // zf
  int result; // eax
  bool v12; // cl
  int *v13; // ebx
  int v14; // esi
  int v15; // eax
  int v16; // edi
  int i; // [esp+10h] [ebp-160h]
  _DWORD *v19; // [esp+18h] [ebp-158h]
  int v20; // [esp+1Ch] [ebp-154h]
  int v21; // [esp+20h] [ebp-150h]
  int *v22; // [esp+20h] [ebp-150h]
  bool v23; // [esp+27h] [ebp-149h]
  int v24; // [esp+28h] [ebp-148h] BYREF
  _BYTE v25[320]; // [esp+2Ch] [ebp-144h] BYREF

  memset(v25, 0, sizeof(v25));
  CurrentThread = KeGetCurrentThread();
  W32GetThreadWin32Thread(CurrentThread);
  v24 = a3;
  v6 = 0;
  v7 = 0;
  v21 = 0;
  if ( a2 <= 0 )
    goto LABEL_11;
  v19 = v25;
  while ( 1 )
  {
    v8 = v6 == 16;
    if ( v6 >= 16 )
      break;
    v9 = *(_DWORD *)(a1 + 4 * v7);
    if ( (*(_BYTE *)(v9 + 264) & 1) != 0 )
      goto LABEL_6;
    if ( !*(_DWORD *)(v9 + 436) )
      goto LABEL_6;
    v20 = *(_DWORD *)(v9 + 240);
    if ( !v20 )
      goto LABEL_6;
    if ( a4 != 1 )
      goto LABEL_27;
    v15 = *_gpsi & 4;
    if ( v15 )
      goto LABEL_25;
    if ( (*(_WORD *)(v20 + 22) & 0xF000) == 0xE000 )
    {
      v15 = 0;
LABEL_25:
      if ( v15 && (*(_BYTE *)(_gptiCurrent + 264) & 2) != 0 )
        goto LABEL_6;
LABEL_27:
      LockW32Thread(v9, v19 + 1);
      v6 = ++v21;
      *v19 = *(_DWORD *)(a1 + 4 * v7);
      v19 += 5;
    }
LABEL_6:
    if ( ++v7 >= a2 )
    {
      v8 = v6 == 16;
      break;
    }
  }
  if ( v8 )
    ++v7;
  if ( v7 < a2 )
    return xxxImmUnloadThreadsLayout(&v24, a4);
LABEL_11:
  v10 = a4 == 2;
  if ( a4 == 2 )
  {
    v10 = 1;
    a4 = 1;
  }
  result = v6 - 1;
  v12 = !v10;
  for ( i = v6 - 1; ; result = i )
  {
    v23 = v12;
    v13 = &v24;
    v14 = result;
    v22 = &v24;
    do
    {
      if ( v14 >= 0 )
      {
        v16 = (int)&v13[5 * v14 + 2];
        do
        {
          result = *(_DWORD *)(v16 - 4);
          if ( (*(_BYTE *)(result + 264) & 1) == 0 )
          {
            result = xxxImmUnloadLayout(*(_DWORD *)(v16 - 4), a4);
            v12 = v23;
          }
          if ( v12 )
          {
            result = PopAndFreeW32ThreadLock(v16);
            v12 = v23;
          }
          v16 -= 20;
          --v14;
        }
        while ( v14 >= 0 );
        v13 = v22;
      }
      v13 = (int *)*v13;
      v22 = v13;
      v14 = 15;
    }
    while ( v13 );
    if ( v12 )
      break;
    a4 = 2;
    v12 = 1;
  }
  return result;
}
