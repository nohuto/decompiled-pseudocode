/*
 * XREFs of _GetKeyNameText @ 0x1C0056410
 * Callers:
 *     <none>
 * Callees:
 *     wcsncpycch @ 0x1C00564F8 (wcsncpycch.c)
 *     InternalMapVirtualKeyEx @ 0x1C006F8A0 (InternalMapVirtualKeyEx.c)
 *     W32GetThreadWin32Thread @ 0x1C0085450 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 */

__int64 __fastcall GetKeyNameText(unsigned int a1, _WORD *a2, int a3)
{
  unsigned int v4; // ebx
  unsigned __int64 v5; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rax
  _QWORD *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 result; // rax
  char v12; // cl
  unsigned int v13; // eax
  int v14; // eax
  _WORD **v15; // rcx
  _WORD *v16; // rdx

  v4 = a1;
  v5 = (unsigned __int64)a1 >> 16;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( a3 < 1 )
    return 0LL;
  if ( (v4 & 0x2000000) != 0 )
  {
    v12 = v5;
    if ( (_BYTE)v5 == 54 )
      v12 = 42;
    LOBYTE(v5) = v12;
    if ( (v4 & 0x1000000) != 0 && (v12 == 29 || v12 == 56) )
      v4 &= ~0x1000000u;
    v4 &= ~0x2000000u;
  }
  v7 = *(_QWORD *)(ThreadWin32Thread + 432);
  if ( !v7 )
    return 0LL;
  v8 = *(_QWORD **)(*(_QWORD *)(v7 + 48) + 32LL);
  if ( (v4 & 0x1000000) != 0 )
    v9 = v8[4];
  else
    v9 = v8[3];
  if ( v9 )
  {
    while ( *(_BYTE *)v9 )
    {
      if ( (_BYTE)v5 == *(_BYTE *)v9 )
      {
        v10 = *(_QWORD *)(v9 + 8);
        if ( v10 )
        {
          result = (unsigned int)wcsncpycch(a2, v10, (unsigned int)a3) - 1;
          a2[(int)result] = 0;
          return result;
        }
      }
      v9 += 16LL;
    }
  }
  v13 = InternalMapVirtualKeyEx((unsigned __int8)v5, 1LL, v8);
  if ( !v13 )
    return 0LL;
  v14 = InternalMapVirtualKeyEx(v13, 2LL, v8);
  if ( !v14 )
    return 0LL;
  if ( v14 < 0 )
  {
    v15 = (_WORD **)v8[5];
    if ( v15 )
    {
      while ( 1 )
      {
        v16 = *v15;
        if ( !*v15 )
          break;
        if ( *v16 == (_WORD)v14 )
        {
          result = (unsigned int)wcsncpycch(a2, v16 + 1, (unsigned int)a3) - 1;
          a2[(int)result] = 0;
          return result;
        }
        ++v15;
      }
    }
  }
  *a2 = v14;
  if ( a3 >= 2 )
    a2[1] = 0;
  return 1LL;
}
