/*
 * XREFs of ?GetAppIdFromExePath@ExePathToAppIdMapping@@QEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV23@@Z @ 0x18045CD54
 * Callers:
 *     ?UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@@Z @ 0x18045DEF4 (-UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@I.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18006869C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHAEBV12@@Z @ 0x18023817C (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHAEBV12@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ExePathToAppIdMapping::GetAppIdFromExePath(PSRWLOCK SRWLock, __int64 a2, unsigned __int16 *a3)
{
  PVOID Ptr; // rbx
  __int64 v7; // r11
  PVOID v8; // rsi
  __int64 *v9; // r11

  AcquireSRWLockShared(SRWLock);
  Ptr = SRWLock[1].Ptr;
  v7 = *((_QWORD *)Ptr + 1);
  v8 = Ptr;
  if ( !*(_BYTE *)(v7 + 25) )
  {
    do
    {
      if ( (int)std::wstring::compare((_QWORD *)(v7 + 32), a3) >= 0 )
      {
        Ptr = v9;
        v7 = *v9;
      }
      else
      {
        v7 = v9[2];
      }
    }
    while ( !*(_BYTE *)(v7 + 25) );
    v8 = SRWLock[1].Ptr;
  }
  if ( Ptr == v8 || (int)std::wstring::compare(a3, (unsigned __int16 *)Ptr + 16) < 0 )
    Ptr = v8;
  if ( Ptr == v8 )
  {
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 24) = 7LL;
    *(_WORD *)a2 = 0;
  }
  else
  {
    std::wstring::wstring(a2);
  }
  ReleaseSRWLockShared(SRWLock);
  return a2;
}
