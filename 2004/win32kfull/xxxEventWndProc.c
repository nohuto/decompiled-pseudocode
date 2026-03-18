/*
 * XREFs of xxxEventWndProc @ 0x1C0030FD0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C003109C (HMValidateHandleNoRip.c)
 *     xxxDefWindowProc @ 0x1C00AF770 (xxxDefWindowProc.c)
 *     ??9?$RedirectedFieldfnid@G@tagWND@@QEBAEAEBG@Z @ 0x1C00BBE5C (--9-$RedirectedFieldfnid@G@tagWND@@QEBAEAEBG@Z.c)
 *     xxxChangeMonitorFlags @ 0x1C011DFD0 (xxxChangeMonitorFlags.c)
 *     ClientEventCallback @ 0x1C0229288 (ClientEventCallback.c)
 */

__int64 __fastcall xxxEventWndProc(__int64 a1, int a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  __int64 v10; // rcx
  __int16 v11; // dx
  __int16 v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = 0;
  if ( (unsigned __int8)tagWND::RedirectedFieldfnid<unsigned short>::operator!=(a1 + 87, &v13) )
    return 0LL;
  v9 = *(_QWORD **)(a1 + 280);
  if ( v9 && *(_DWORD *)(*(_QWORD *)(a1 + 40) + 252LL) >= 8u )
  {
    LOBYTE(v8) = 9;
    v10 = HMValidateHandleNoRip(*v9, v8);
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
  {
    if ( a2 == 2 )
    {
      xxxChangeMonitorFlags(v10, 0LL);
      return 0LL;
    }
    if ( a2 == 60 )
    {
      v11 = *(_WORD *)(a4 + 4);
      if ( (*(_DWORD *)(v10 + 40) & *(_DWORD *)a4) != 0 )
      {
        if ( !v11 )
          return 0LL;
      }
      else if ( v11 )
      {
        return 0LL;
      }
      ClientEventCallback(*(_QWORD *)(v10 + 56), a4);
      return 0LL;
    }
  }
  return xxxDefWindowProc(a1, a2, a3, a4);
}
