/*
 * XREFs of ??_GCPickerHostContext@@QEAAPEAXI@Z @ 0x1800218C8
 * Callers:
 *     ?OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBG_KKW4HOSTED_APP_CHANGED@@PEAPEAX@Z @ 0x180021710 (-OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBG_KKW4HOSTED_APP_CHANGED@@PEAPEAX@Z.c)
 *     ?HHOSTEDAPPMANAGERCONTEXTRundown@@YAXPEAX@Z @ 0x180023F40 (-HHOSTEDAPPMANAGERCONTEXTRundown@@YAXPEAX@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000A174 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@QEAAXXZ @ 0x180022584 (-RemoveAll@-$CAtlList@PEAVCHostedAppInteractivity@@V-$CElementTraits@PEAVCHostedAppInteractivity.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180039D98 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
CPickerHostContext *__fastcall CPickerHostContext::`scalar deleting destructor'(CPickerHostContext *this)
{
  __int64 *v2; // rcx
  LPVOID *v3; // rdi
  __int64 v4; // rax

  while ( *((_QWORD *)this + 2) )
  {
    v2 = *(__int64 **)this;
    if ( !*(_QWORD *)this )
      ATL::AtlThrowImpl(-2147467259);
    v3 = (LPVOID *)v2[2];
    v4 = *v2;
    *(_QWORD *)this = *v2;
    if ( v4 )
      *(_QWORD *)(v4 + 8) = 0LL;
    else
      *((_QWORD *)this + 1) = 0LL;
    *v2 = *((_QWORD *)this + 4);
    *((_QWORD *)this + 4) = v2;
    if ( (*((_QWORD *)this + 2))-- == 1LL )
      ATL::CAtlList<CHostedAppInteractivity *,ATL::CElementTraits<CHostedAppInteractivity *>>::RemoveAll(this);
    if ( v3 )
    {
      if ( *v3 )
      {
        CoTaskMemFree(*v3);
        *v3 = 0LL;
      }
      operator delete(v3, (const struct std::nothrow_t *)0x18);
    }
  }
  ATL::CAtlList<CHostedAppInteractivity *,ATL::CElementTraits<CHostedAppInteractivity *>>::RemoveAll(this);
  operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
