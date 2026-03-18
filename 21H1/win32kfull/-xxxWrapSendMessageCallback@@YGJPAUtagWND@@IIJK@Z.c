/*
 * XREFs of ?xxxWrapSendMessageCallback@@YGJPAUtagWND@@IIJK@Z @ 0xA1692
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendMessageCallback@36 @ 0x46062 (_xxxSendMessageCallback@36.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

size_t __stdcall xxxWrapSendMessageCallback(struct tagWND *a1, unsigned int a2, struct tagWND *a3, size_t a4, int *a5)
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  size_t v7; // edi
  int v9; // [esp+10h] [ebp-30h] BYREF
  struct tagWND *v10; // [esp+14h] [ebp-2Ch]
  int v11; // [esp+18h] [ebp-28h]
  int v12; // [esp+1Ch] [ebp-24h]
  int v13; // [esp+20h] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+28h] [ebp-18h]

  v12 = 0;
  v13 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  if ( (a2 & 0xFFFE0000) != 0 )
  {
    UserSetLastError((struct _NT_TIB *)0x57);
    return 0;
  }
  else
  {
    ms_exc.registration.TryLevel = 0;
    if ( ((unsigned __int8)a5 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned int)a5 >= _MmUserProbeAddress )
      *(_BYTE *)_MmUserProbeAddress = 0;
    *(_BYTE *)a5 = *(_BYTE *)a5;
    *((_BYTE *)a5 + 4) = *((_BYTE *)a5 + 4);
    v12 = *a5;
    v13 = a5[1];
    ms_exc.registration.TryLevel = -2;
    if ( a1 != (struct tagWND *)-1 )
    {
      CurrentThread = KeGetCurrentThread();
      ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
      v9 = *(_DWORD *)(ThreadWin32Thread + 228);
      *(_DWORD *)(ThreadWin32Thread + 228) = &v9;
      v10 = a1;
      HMLockObject(a1);
    }
    v7 = xxxSendMessageCallback((int)a1, a2, a3, a4, (void (__stdcall *)(int, unsigned int, int, int))v12, v13, 1, 0, 1);
    if ( a1 != (struct tagWND *)-1 )
      ThreadUnlock1();
    return v7;
  }
}
