/*
 * XREFs of ?SetIconPath@CAudioSession@@UEAAJPEBGPEBU_GUID@@@Z @ 0x1800CB7A0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18002C1C0 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x18002EA90 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJ$$QEAVCList.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F1C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?Compare@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBAHPEBG@Z @ 0x1800C74C0 (-Compare@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBAHPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSession::SetIconPath(
        unsigned __int16 **this,
        const unsigned __int16 *a2,
        const struct _GUID *a3)
{
  const struct _GUID *v3; // r13
  unsigned __int16 **v5; // rsi
  int v6; // edi
  unsigned __int16 **v7; // r15
  struct _RTL_CRITICAL_SECTION *v8; // r14
  __int64 v9; // rax
  int *v11; // rbx
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+20h] [rbp-78h]
  ATL::CAtlException *v13; // [rsp+30h] [rbp-68h] BYREF
  void (__fastcall **v14[12])(_QWORD, __int64 *); // [rsp+38h] [rbp-60h] BYREF

  v3 = a3;
  v5 = this;
  v6 = 0;
  if ( (unsigned int)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Compare(
                       this + 41,
                       (__int64)a2) )
  {
    v7 = v5 + 44;
    v8 = (struct _RTL_CRITICAL_SECTION *)(v5 + 44);
    v12 = (struct _RTL_CRITICAL_SECTION *)(v5 + 44);
    EnterCriticalSection((LPCRITICAL_SECTION)(v5 + 44));
    if ( a2 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( a2[v9] );
    }
    else
    {
      LODWORD(v9) = 0;
    }
    try
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)v5 + 41, a2, v9);
    }
    catch ( ATL::CAtlException *v13 )
    {
      v11 = (int *)v13;
      if ( *(_DWORD *)v13 == -1073741571 )
        _o__resetstkoflw();
      v5 = this;
      v3 = a3;
      v6 = *v11;
      v8 = v12;
      v7 = (unsigned __int16 **)v12;
    }
    if ( v7 )
      LeaveCriticalSection(v8);
    if ( v6 < 0 )
    {
      AudSrvTraceLoggingErrorHelper("CAudioSession::SetIconPath", 384, v6);
    }
    else
    {
      (*((void (__fastcall **)(unsigned __int16 **))*v5 + 1))(v5);
      v14[0] = (void (__fastcall **)(_QWORD, __int64 *))&CAudioSessionIconPathChanged::`vftable';
      v14[1] = (void (__fastcall **)(_QWORD, __int64 *))v5;
      v14[2] = (void (__fastcall **)(_QWORD, __int64 *))v5[41];
      v14[3] = (void (__fastcall **)(_QWORD, __int64 *))v3;
      CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)(v5 + 62), v14);
      (*((void (__fastcall **)(unsigned __int16 **))*v5 + 2))(v5);
    }
  }
  return (unsigned int)v6;
}
