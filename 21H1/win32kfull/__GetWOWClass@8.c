/*
 * XREFs of __GetWOWClass@8 @ 0x15463B
 * Callers:
 *     _NtUserGetWOWClass@8 @ 0x164B4A (_NtUserGetWOWClass@8.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _GetClassPtr@12 @ 0x4741E (_GetClassPtr@12.c)
 *     ?RtlStringCchCopyW@@YGJPAGIPBG@Z @ 0x48774 (-RtlStringCchCopyW@@YGJPAGIPBG@Z.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 */

_DWORD *__fastcall _GetWOWClass(int a1, unsigned __int16 *a2)
{
  int Atom; // esi
  PKTHREAD CurrentThread; // eax
  _DWORD *i; // ecx
  int v6; // eax
  unsigned int v8; // [esp+0h] [ebp-240h]
  const unsigned __int16 *v9; // [esp+4h] [ebp-23Ch]
  int ThreadWin32Thread; // [esp+18h] [ebp-228h]
  int ClassPtr; // [esp+1Ch] [ebp-224h]
  char v13[516]; // [esp+24h] [ebp-21Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+228h] [ebp-18h]

  Atom = 0;
  ClassPtr = 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  ms_exc.registration.TryLevel = 0;
  if ( RtlStringCchCopyW(256, v13, a2, v8, v9) >= 0 )
    Atom = (unsigned __int16)UserFindAtom(v13);
  ms_exc.registration.TryLevel = -2;
  if ( (_WORD)Atom )
    ClassPtr = GetClassPtr(Atom, *(_DWORD *)(ThreadWin32Thread + 232), a1);
  if ( !ClassPtr )
  {
LABEL_11:
    UserSetLastError((struct _NT_TIB *)0x583);
    return 0;
  }
  i = *(_DWORD **)ClassPtr;
  v6 = *(_DWORD *)(ThreadWin32Thread + 248);
  if ( v6 != *(_DWORD *)(*(_DWORD *)ClassPtr + 20) )
  {
    for ( i = (_DWORD *)i[9]; i; i = (_DWORD *)*i )
    {
      if ( v6 == i[5] )
        return i;
    }
    goto LABEL_11;
  }
  return i;
}
