/*
 * XREFs of _NtUserSetWindowPos@28 @ 0x30082
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateHWNDIA@@YGHPAUHWND__@@PAPAUtagWND@@@Z @ 0x30032 (-ValidateHWNDIA@@YGHPAUHWND__@@PAPAUtagWND@@@Z.c)
 *     ?ConstrainIntToPositive2xShortRange@@YGHH@Z @ 0x302E8 (-ConstrainIntToPositive2xShortRange@@YGHH@Z.c)
 *     _xxxSetWindowPos@28 @ 0x32F7A (_xxxSetWindowPos@28.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 *     ?TransformSWPCoords@@YGXPAUtagWND@@PAH111I@Z @ 0x15F6FC (-TransformSWPCoords@@YGXPAUtagWND@@PAH111I@Z.c)
 */

int __stdcall NtUserSetWindowPos(int a1, void *a2, int a3, int a4, int a5, int a6, int *a7)
{
  int v7; // ebx
  int v8; // eax
  int v9; // edi
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // eax
  int v14; // esi
  int *ThreadWin32Thread; // eax
  int v16; // esi
  int *v17; // eax
  unsigned int v18; // esi
  int v19; // esi
  int v20; // eax
  int *v22; // [esp+0h] [ebp-2Ch]
  int v23; // [esp+0h] [ebp-2Ch]
  unsigned int v24; // [esp+4h] [ebp-28h]
  int v25; // [esp+Ch] [ebp-20h] BYREF
  unsigned int v26; // [esp+10h] [ebp-1Ch]
  int v27; // [esp+14h] [ebp-18h]
  int v28; // [esp+18h] [ebp-14h] BYREF
  int v29; // [esp+1Ch] [ebp-10h]
  int v30; // [esp+20h] [ebp-Ch]
  int v31; // [esp+24h] [ebp-8h]
  unsigned int v32; // [esp+28h] [ebp-4h] BYREF
  unsigned int v33; // [esp+34h] [ebp+8h]
  PKTHREAD CurrentThread; // [esp+38h] [ebp+Ch]
  PKTHREAD v35; // [esp+38h] [ebp+Ch]

  v25 = 0;
  v7 = 0;
  v26 = 0;
  v32 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  EnterCrit(0, 1);
  v8 = ValidateHwnd(a1);
  v9 = v8;
  if ( v8 )
  {
    v10 = *(_WORD *)(*(_DWORD *)(v8 + 20) + 30) & 0x3FFF;
    if ( v10 != 669 && v10 != 671 )
    {
      v31 = _gptiCurrent;
      v28 = *(_DWORD *)(_gptiCurrent + 228);
      *(_DWORD *)(_gptiCurrent + 228) = &v28;
      v29 = v8;
      HMLockObject(v8);
      if ( ((unsigned int)a7 & 0xFFFC9800) != 0 )
      {
        v11 = 1004;
      }
      else
      {
        if ( !ValidateHWNDIA(a2, (int *)&v32) )
          goto LABEL_47;
        if ( *(char *)(*(_DWORD *)(v9 + 20) + 12) >= 0 )
        {
          if ( ((unsigned __int8)a7 & 2) == 0 )
          {
            v12 = a3;
            v13 = 0x7FFF;
            if ( a3 <= 0x7FFF )
            {
              if ( a3 < -32768 )
                v12 = -32768;
            }
            else
            {
              v12 = 0x7FFF;
            }
            a3 = v12;
            if ( a4 <= 0x7FFF )
            {
              v13 = -32768;
              if ( a4 >= -32768 )
                v13 = a4;
            }
            a4 = v13;
          }
          if ( ((unsigned __int8)a7 & 1) == 0 )
          {
            a5 = ConstrainIntToPositive2xShortRange((int)v22);
            a6 = ConstrainIntToPositive2xShortRange(v23);
          }
          if ( v32 <= 1 || v32 > 0xFFFFFFFD )
            v33 = 0;
          else
            v33 = v32;
          CurrentThread = KeGetCurrentThread();
          v14 = 0;
          if ( !IsThreadCrossSessionAttached() )
          {
            ThreadWin32Thread = (int *)PsGetThreadWin32Thread(CurrentThread);
            if ( ThreadWin32Thread )
              v14 = *ThreadWin32Thread;
          }
          if ( (*(_BYTE *)(*(_DWORD *)(v14 + 260) + 148) & 1) == 0 )
          {
            v35 = KeGetCurrentThread();
            v16 = 0;
            if ( !IsThreadCrossSessionAttached() )
            {
              v17 = (int *)PsGetThreadWin32Thread(v35);
              if ( v17 )
                v16 = *v17;
            }
            if ( (*(_BYTE *)(*(_DWORD *)(v16 + 260) + 148) & 0x20) == 0 )
            {
              v18 = *(_DWORD *)(*(_DWORD *)(v9 + 20) + 184);
              if ( (((v18 >> 8) ^ (W32GetCurrentThreadDpiAwarenessContext() >> 8)) & 0x1FF) != 0
                || ((*(_DWORD *)(*(_DWORD *)(v9 + 20) + 184) & 0xF) != 2
                 || (*(_DWORD *)(*(_DWORD *)(v9 + 20) + 184) & 0x20000000) == 0
                  ? (v19 = 0)
                  : (v19 = 1),
                    (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 2
                 || (W32GetCurrentThreadDpiAwarenessContext() & 0x20000000) == 0
                  ? (v20 = 0)
                  : (v20 = 1),
                    v19 != v20) )
              {
                TransformSWPCoords((struct tagWND *)&a4, &a5, &a6, a7, v22, v24);
              }
            }
          }
          v25 = *(_DWORD *)(v31 + 228);
          *(_DWORD *)(v31 + 228) = &v25;
          v26 = v33;
          if ( v33 )
            HMLockObject(v33);
          v7 = xxxSetWindowPos(v9, v32, a3, a4, a5, a6, a7);
          ThreadUnlock1();
          goto LABEL_47;
        }
        v11 = 87;
      }
      UserSetLastError(v11);
LABEL_47:
      ThreadUnlock1();
    }
  }
  UserSessionSwitchLeaveCrit();
  return v7;
}
