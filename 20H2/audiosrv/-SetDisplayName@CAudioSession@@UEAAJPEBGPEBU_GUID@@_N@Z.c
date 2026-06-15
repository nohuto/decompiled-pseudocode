/*
 * XREFs of ?SetDisplayName@CAudioSession@@UEAAJPEBGPEBU_GUID@@_N@Z @ 0x1800CA960
 * Callers:
 *     <none>
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18002BB40 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x18002E410 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJ$$QEAVCList.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005EA28 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ?Compare@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBAHPEBG@Z @ 0x1800C6830 (-Compare@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBAHPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSession::SetDisplayName(
        unsigned __int16 **this,
        const unsigned __int16 *a2,
        const struct _GUID *a3,
        char a4)
{
  const struct _GUID *v5; // r13
  CAudioSession *v7; // rdi
  int v8; // esi
  struct _RTL_CRITICAL_SECTION *v9; // r15
  struct _RTL_CRITICAL_SECTION *v10; // r14
  __int64 v11; // rax
  int *v13; // rbx
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+20h] [rbp-78h]
  ATL::CAtlException *v15; // [rsp+38h] [rbp-60h] BYREF
  void (__fastcall **v16[11])(_QWORD, __int64 *); // [rsp+40h] [rbp-58h] BYREF

  v5 = a3;
  v7 = (CAudioSession *)this;
  v8 = 0;
  if ( a4 )
    *((_BYTE *)this + 301) = 1;
  if ( (unsigned int)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Compare(
                       this + 40,
                       (__int64)a2)
    && (a4 || !*((_BYTE *)v7 + 301)) )
  {
    v9 = (struct _RTL_CRITICAL_SECTION *)((char *)v7 + 352);
    v10 = (struct _RTL_CRITICAL_SECTION *)((char *)v7 + 352);
    v14 = (struct _RTL_CRITICAL_SECTION *)((char *)v7 + 352);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v7 + 352));
    v8 = 0;
    if ( a2 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( a2[v11] );
    }
    else
    {
      LODWORD(v11) = 0;
    }
    try
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)v7 + 40, a2, v11);
    }
    catch ( ATL::CAtlException *v15 )
    {
      v13 = (int *)v15;
      if ( *(_DWORD *)v15 == -1073741571 )
        _o__resetstkoflw();
      v7 = (CAudioSession *)this;
      v5 = a3;
      v8 = *v13;
      v10 = v14;
      v9 = v14;
    }
    if ( v9 )
      LeaveCriticalSection(v10);
    if ( v8 < 0 )
    {
      AudSrvTraceLoggingErrorHelper("CAudioSession::SetDisplayName", 260, v8);
    }
    else
    {
      (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v7 + 8LL))(v7);
      v16[0] = (void (__fastcall **)(_QWORD, __int64 *))&CAudioSessionDisplayNameChanged::`vftable';
      v16[1] = (void (__fastcall **)(_QWORD, __int64 *))v7;
      v16[2] = *((void (__fastcall ***)(_QWORD, __int64 *))v7 + 40);
      v16[3] = (void (__fastcall **)(_QWORD, __int64 *))v5;
      CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)v7 + 496), v16);
      (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  return (unsigned int)v8;
}
