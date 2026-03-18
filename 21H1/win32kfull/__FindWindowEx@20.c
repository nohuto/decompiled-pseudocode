/*
 * XREFs of __FindWindowEx@20 @ 0x2D034
 * Callers:
 *     _NtUserFindWindowEx@20 @ 0x2C716 (_NtUserFindWindowEx@20.c)
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _FreeHwndList@4 @ 0x2D2D0 (_FreeHwndList@4.c)
 *     _BuildHwndList@12 @ 0x2D340 (_BuildHwndList@12.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?RtlStringCchCopyW@@YGJPAGIPBG@Z @ 0x48774 (-RtlStringCchCopyW@@YGJPAGIPBG@Z.c)
 *     _GetThreadDesktopWindow@4 @ 0x9E52A (_GetThreadDesktopWindow@4.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

unsigned int __fastcall _FindWindowEx(struct _KTHREAD *a1, int a2, unsigned __int16 *a3, wchar_t *Str1, int a5)
{
  int v5; // ebx
  int ThreadDesktopWindow; // esi
  unsigned __int16 Atom; // ax
  int v8; // eax
  int v9; // eax
  _DWORD *v10; // esi
  unsigned __int16 **i; // ebx
  int *ThreadWin32Thread; // eax
  _DWORD *v13; // edx
  const wchar_t *v14; // eax
  PKTHREAD v15; // eax
  int v16; // eax
  int v17; // eax
  unsigned int v19; // [esp+0h] [ebp-58h]
  const unsigned __int16 *v20; // [esp+4h] [ebp-54h]
  _BYTE v21[8]; // [esp+10h] [ebp-48h] BYREF
  _DWORD *v22; // [esp+20h] [ebp-38h]
  int v23; // [esp+24h] [ebp-34h]
  PKTHREAD CurrentThread; // [esp+28h] [ebp-30h]
  int v25; // [esp+2Ch] [ebp-2Ch]
  _DWORD *v26; // [esp+30h] [ebp-28h]
  int v27; // [esp+34h] [ebp-24h]
  unsigned __int16 **v28; // [esp+38h] [ebp-20h]
  int v29; // [esp+3Ch] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+40h] [ebp-18h]
  unsigned __int16 *v31; // [esp+60h] [ebp+8h]

  v5 = a2;
  v25 = a2;
  ThreadDesktopWindow = (int)a1;
  CurrentThread = a1;
  v28 = 0;
  v29 = 0;
  v27 = 0;
  if ( a3 )
  {
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v21);
    ms_exc.registration.TryLevel = 0;
    Atom = (unsigned __int16)a3;
    if ( ((unsigned int)a3 & 0xFFFF0000) != 0 )
    {
      if ( RtlStringCchCopyW(a3, v19, v20) < 0 )
      {
        v29 = 0;
        goto LABEL_6;
      }
      Atom = UserFindAtom(&gawchAtomScratch);
    }
    v29 = Atom;
LABEL_6:
    ms_exc.registration.TryLevel = -2;
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v21);
    if ( !(_WORD)v29 )
      return 0;
  }
  if ( !ThreadDesktopWindow )
  {
    ThreadDesktopWindow = GetThreadDesktopWindow(0);
    if ( !v5 )
      v27 = 1;
  }
  while ( 1 )
  {
    if ( v5 )
    {
      if ( *(_DWORD *)(v5 + 56) != ThreadDesktopWindow )
        return 0;
      v8 = *(_DWORD *)(v5 + 48);
    }
    else
    {
      v8 = *(_DWORD *)(ThreadDesktopWindow + 60);
    }
    v9 = BuildHwndList(v8, 2, 0);
    v25 = v9;
    if ( !v9 )
      return 0;
    v10 = 0;
    ms_exc.registration.TryLevel = 1;
    for ( i = (unsigned __int16 **)(v9 + 16); ; ++i )
    {
      v28 = i;
      v31 = *i;
      if ( *i == (unsigned __int16 *)1 )
        break;
      v10 = 0;
      v22 = 0;
      CurrentThread = KeGetCurrentThread();
      v23 = 0;
      if ( !IsThreadCrossSessionAttached() )
      {
        ThreadWin32Thread = (int *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v23 = *ThreadWin32Thread;
      }
      if ( (unsigned int)(unsigned __int16)v31 < *(_DWORD *)(_gpsi + 4) )
      {
        CurrentThread = (PKTHREAD)(_gSharedInfo[1] + (unsigned __int16)v31 * _gSharedInfo[2]);
        v13 = (_DWORD *)HMPkheFromPhe(CurrentThread);
        if ( (HIWORD(v31) == *((_WORD *)CurrentThread + 7) || !HIWORD(v31) || HIWORD(v31) == 0xFFFF)
          && (*((_BYTE *)CurrentThread + 13) & 1) == 0
          && *((_BYTE *)CurrentThread + 12) == 1 )
        {
          v10 = (_DWORD *)*v13;
          v22 = (_DWORD *)*v13;
        }
      }
      v26 = v10;
      if ( v10
        && (!a5 || (a5 != 1 || (*(_BYTE *)(v10[2] + 264) & 2) != 0) && (a5 != 2 || (*(_BYTE *)(v10[2] + 264) & 2) == 0)) )
      {
        if ( !(_WORD)v29 || (_WORD)v29 == *(_WORD *)(*(_DWORD *)(v10[19] + 4) + 2) )
        {
          if ( !Str1 )
            break;
          v14 = (const wchar_t *)(*(_DWORD *)(v10[5] + 116) ? v10[25] : _szNull);
          if ( !__wcsicmp(Str1, v14) )
            break;
        }
        v10 = 0;
        v26 = 0;
      }
    }
    ms_exc.registration.TryLevel = -2;
    FreeHwndList(v25);
    if ( v10 || !v27 )
      return *i != (unsigned __int16 *)1 ? (unsigned int)v10 : 0;
    v27 = 0;
    ThreadDesktopWindow = 0;
    v15 = KeGetCurrentThread();
    v16 = W32GetThreadWin32Thread(v15);
    if ( v16 )
    {
      v17 = *(_DWORD *)(v16 + 248);
      if ( v17 )
        ThreadDesktopWindow = *(_DWORD *)(v17 + 52);
    }
    v5 = 0;
  }
}
