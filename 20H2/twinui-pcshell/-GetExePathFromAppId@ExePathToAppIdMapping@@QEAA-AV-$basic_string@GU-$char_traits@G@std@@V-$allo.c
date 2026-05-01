/*
 * XREFs of ?GetExePathFromAppId@ExePathToAppIdMapping@@QEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV23@@Z @ 0x18045C8D8
 * Callers:
 *     ?GetDisplayName@Win32AppStateManager@@UEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x18045C7A0 (-GetDisplayName@Win32AppStateManager@@UEAA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800627BC (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x1800848B4 (--$_Traits_equal@U-$char_traits@G@std@@@std@@YA_NQEBG_K01@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ExePathToAppIdMapping::GetExePathFromAppId(PSRWLOCK SRWLock, __int64 a2, __int64 *a3)
{
  __int64 **Ptr; // r15
  __int64 **v7; // r11
  unsigned __int16 *v8; // r8
  __int64 v9; // rcx
  __int64 *v10; // r11
  __int64 **v11; // rax
  __int64 *i; // rax
  __int64 *j; // rcx

  AcquireSRWLockShared(SRWLock);
  Ptr = (__int64 **)SRWLock[1].Ptr;
  v7 = (__int64 **)*Ptr;
  while ( v7 != Ptr )
  {
    v8 = (unsigned __int16 *)(v7 + 8);
    if ( (unsigned __int64)v7[11] >= 8 )
      v8 = *(unsigned __int16 **)v8;
    v9 = (__int64)a3;
    if ( (unsigned __int64)a3[3] >= 8 )
      v9 = *a3;
    if ( std::_Traits_equal<std::char_traits<unsigned short>>(v9, a3[2], v8, (__int64)v7[10]) )
    {
      std::wstring::wstring(a2);
      goto LABEL_19;
    }
    v11 = (__int64 **)v10[2];
    if ( *((_BYTE *)v11 + 25) )
    {
      for ( i = (__int64 *)v10[1]; !*((_BYTE *)i + 25) && v10 == (__int64 *)i[2]; i = (__int64 *)i[1] )
        v10 = i;
      v7 = (__int64 **)i;
    }
    else
    {
      v7 = (__int64 **)v10[2];
      for ( j = *v11; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v7 = (__int64 **)j;
    }
  }
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 7LL;
  *(_WORD *)a2 = 0;
LABEL_19:
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return a2;
}
