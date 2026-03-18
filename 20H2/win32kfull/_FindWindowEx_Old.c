/*
 * XREFs of _FindWindowEx_Old @ 0x1C015C828
 * Callers:
 *     NtUserFindWindowEx @ 0x1C00AFBD0 (NtUserFindWindowEx.c)
 * Callees:
 *     FreeHwndList @ 0x1C0049620 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C00496B0 (BuildHwndList.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0094684 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1C00B3898 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     GetThreadDesktopWindow @ 0x1C00FBC68 (GetThreadDesktopWindow.c)
 */

_QWORD *__fastcall FindWindowEx_Old(__int64 ThreadDesktopWindow, __int64 a2, char *a3, wchar_t *a4, int a5)
{
  __int16 Atom; // si
  int v9; // r12d
  struct tagWND *v10; // rcx
  struct tagBWL *v11; // rax
  struct tagBWL *v12; // r15
  _QWORD *v13; // rdi
  unsigned __int64 *i; // r14
  _QWORD *v15; // rax
  const wchar_t *v16; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v18; // rax
  __int16 v20; // [rsp+20h] [rbp-68h]
  struct tagBWL *v21; // [rsp+A0h] [rbp+18h] BYREF
  wchar_t *Str1; // [rsp+A8h] [rbp+20h]

  Str1 = a4;
  Atom = 0;
  v20 = 0;
  v9 = 0;
  if ( !a3
    || ((UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v21), ((unsigned __int64)a3 & 0xFFFFFFFFFFFF0000uLL) == 0)
      ? (Atom = (__int16)a3, v20 = (__int16)a3)
      : (int)RtlStringCchCopyW((char *)gawchAtomScratch, 256LL, a3) < 0
      ? (Atom = 0, v20 = 0)
      : (Atom = UserFindAtom(gawchAtomScratch), v20 = Atom),
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v21),
        Atom) )
  {
    if ( !ThreadDesktopWindow )
    {
      ThreadDesktopWindow = GetThreadDesktopWindow(0LL);
      if ( !a2 )
        v9 = 1;
    }
    while ( 1 )
    {
      a5 = v9;
      if ( a2 )
      {
        if ( *(_QWORD *)(a2 + 104) != ThreadDesktopWindow )
          return 0LL;
        v10 = *(struct tagWND **)(a2 + 88);
      }
      else
      {
        v10 = *(struct tagWND **)(ThreadDesktopWindow + 112);
      }
      v11 = BuildHwndList(v10, 2, 0LL);
      v12 = v11;
      v21 = v11;
      if ( !v11 )
        break;
      v13 = 0LL;
      for ( i = (unsigned __int64 *)((char *)v11 + 32); *i != 1; ++i )
      {
        v15 = (_QWORD *)HMValidateHandleNoSecure(*i, 1);
        v13 = v15;
        if ( v15 )
        {
          if ( !Atom || Atom == *(_WORD *)(*(_QWORD *)(v15[17] + 8LL) + 2LL) )
          {
            if ( !Str1 )
              break;
            v16 = *(_DWORD *)(v15[5] + 184LL) ? (const wchar_t *)v15[23] : szNull;
            if ( !_wcsicmp(Str1, v16) )
              break;
          }
          v13 = 0LL;
        }
      }
      FreeHwndList(v12);
      if ( v13 || !v9 )
      {
        if ( *i == 1 )
          return 0LL;
        return v13;
      }
      v9 = 0;
      ThreadDesktopWindow = 0LL;
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      if ( ThreadWin32Thread )
      {
        v18 = *(_QWORD *)(ThreadWin32Thread + 456);
        if ( v18 )
          ThreadDesktopWindow = *(_QWORD *)(v18 + 104);
      }
      a2 = 0LL;
      Atom = v20;
    }
  }
  return 0LL;
}
