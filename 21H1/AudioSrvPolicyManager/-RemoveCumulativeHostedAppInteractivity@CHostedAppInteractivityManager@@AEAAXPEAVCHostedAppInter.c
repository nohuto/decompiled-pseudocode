/*
 * XREFs of ?RemoveCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAXPEAVCHostedAppInteractivity@@@Z @ 0x1800279B0
 * Callers:
 *     ?AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z @ 0x18002773C (-AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@QEAAXXZ @ 0x180027E84 (-RemoveAll@-$CAtlList@PEAVCHostedAppInteractivity@@V-$CElementTraits@PEAVCHostedAppInteractivity.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003F658 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall CHostedAppInteractivityManager::RemoveCumulativeHostedAppInteractivity(
        CHostedAppInteractivityManager *this,
        LPVOID *a2)
{
  __int64 v3; // rcx
  bool v4; // zf

  v3 = qword_1800561D8;
  if ( qword_1800561D8 )
  {
    while ( *(LPVOID **)(v3 + 16) != a2 )
    {
      v3 = *(_QWORD *)v3;
      if ( !v3 )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    v3 = 0LL;
  }
  if ( v3 )
  {
    if ( v3 == qword_1800561D8 )
      qword_1800561D8 = *(_QWORD *)v3;
    else
      **(_QWORD **)(v3 + 8) = *(_QWORD *)v3;
    if ( v3 == (_QWORD)xmmword_1800561E0 )
      *(_QWORD *)&xmmword_1800561E0 = *(_QWORD *)(v3 + 8);
    else
      *(_QWORD *)(*(_QWORD *)v3 + 8LL) = *(_QWORD *)(v3 + 8);
    *(_QWORD *)v3 = *((_QWORD *)&xmmword_1800561F0 + 1);
    v4 = (*((_QWORD *)&xmmword_1800561E0 + 1))-- == 1LL;
    *((_QWORD *)&xmmword_1800561F0 + 1) = v3;
    if ( v4 )
      ATL::CAtlList<CHostedAppInteractivity *,ATL::CElementTraits<CHostedAppInteractivity *>>::RemoveAll(&qword_1800561D8);
    if ( a2 )
    {
      if ( *a2 )
      {
        CoTaskMemFree(*a2);
        *a2 = 0LL;
      }
      operator delete(a2, (const struct std::nothrow_t *)0x18);
    }
  }
}
