/*
 * XREFs of xxxPSMGetTextExtent @ 0x1C0261844
 * Callers:
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C0063530 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C01214B4 (xxxDrawMenuBarUnderlines.c)
 *     xxxRealDrawMenuItem @ 0x1C024E90C (xxxRealDrawMenuItem.c)
 * Callees:
 *     GreGetTextExtentW @ 0x1C000C3CC (GreGetTextExtentW.c)
 *     PushW32ThreadLock @ 0x1C001DE60 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001DEF0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     CALL_LPK @ 0x1C014B814 (CALL_LPK.c)
 *     xxxClientGetTextExtentPointW @ 0x1C014BB78 (xxxClientGetTextExtentPointW.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     GetPrefixCount @ 0x1C025FEE4 (GetPrefixCount.c)
 */

__int64 __fastcall xxxPSMGetTextExtent(HDC a1, __int16 *a2, unsigned int a3, __int64 a4)
{
  __int64 ThreadWin32Thread; // r15
  __int64 result; // rax
  __int16 *v10; // rbx
  unsigned int v11; // r8d
  __int128 v12; // [rsp+30h] [rbp-268h] BYREF
  __int64 v13; // [rsp+40h] [rbp-258h]
  _BYTE v14[512]; // [rsp+50h] [rbp-248h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v13 = 0LL;
  v12 = 0LL;
  if ( a3 < 0xFF )
  {
    v10 = (__int16 *)v14;
  }
  else
  {
    result = Win32AllocPool(2LL * (int)(a3 + 1), 1953657685LL);
    v10 = (__int16 *)result;
    if ( !result )
    {
      *(_DWORD *)(a4 + 4) = 0;
      *(_DWORD *)a4 = 0;
      return result;
    }
    PushW32ThreadLock(result, &v12, (__int64)Win32FreePool);
  }
  if ( (unsigned int)GetPrefixCount(a2, a3, (__int64)v10, a3) >> 16 )
    a2 = v10;
  if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
    xxxClientGetTextExtentPointW(a1, (PCWSTR)a2, v11, (_QWORD *)a4);
  else
    GreGetTextExtentW(a1, (unsigned __int16 *)a2, v11, (struct tagSIZE *)a4, 1u);
  if ( v10 != (__int16 *)v14 )
    PopAndFreeAlwaysW32ThreadLock((__int64)&v12);
  return 1LL;
}
