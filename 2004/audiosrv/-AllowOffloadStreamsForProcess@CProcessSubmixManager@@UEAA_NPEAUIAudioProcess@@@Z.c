/*
 * XREFs of ?AllowOffloadStreamsForProcess@CProcessSubmixManager@@UEAA_NPEAUIAudioProcess@@@Z @ 0x180071C20
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800239A0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x1800239C0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CProcessSubmixManager::AllowOffloadStreamsForProcess(
        CProcessSubmixManager *this,
        struct IAudioProcess *a2)
{
  __int64 *v4; // rbx
  char v5; // bp
  __int64 v6; // rdi
  const WCHAR *v7; // rdi
  const WCHAR *v8; // rax
  __int64 v9; // rdi
  bool v10; // zf
  __int64 v11; // rdi
  __int64 v12; // rdi
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+50h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::CriticalSection::Lock((struct _RTL_CRITICAL_SECTION *)((char *)this + 16), &v14);
  v4 = (__int64 *)*((_QWORD *)this + 7);
  v5 = 0;
  while ( v4 != *((__int64 **)this + 8) )
  {
    v6 = *v4;
    if ( *(_DWORD *)(*v4 + 12) == 1 )
    {
      if ( *(_DWORD *)(v6 + 16) != (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 48LL))(a2)
        || !*(_DWORD *)(*v4 + 8) )
      {
        goto LABEL_19;
      }
      v12 = *v4;
      v10 = *(_DWORD *)(v12 + 8) == (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 40LL))(a2);
      goto LABEL_18;
    }
    if ( *(_DWORD *)(*v4 + 12) != 2 )
    {
      if ( *(_DWORD *)(*v4 + 12) == 3 )
      {
        if ( *(_DWORD *)(v6 + 16) != (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 48LL))(a2) )
          goto LABEL_19;
        v11 = *v4;
        if ( *(_DWORD *)(v11 + 8) == (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 40LL))(a2) )
          goto LABEL_19;
        v10 = (*(unsigned __int8 (__fastcall **)(struct IAudioProcess *, _QWORD))(*(_QWORD *)a2 + 384LL))(
                a2,
                *(unsigned int *)(*v4 + 8)) == 0;
      }
      else
      {
        if ( *(_DWORD *)(*v4 + 12) != 4 )
          goto LABEL_19;
        v7 = *(const WCHAR **)v6;
        v8 = (const WCHAR *)(*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 72LL))(a2);
        if ( CompareStringOrdinal(v7, -1, v8, -1, 1) != 2 )
          goto LABEL_19;
        v9 = *v4;
        v10 = *(_DWORD *)(v9 + 16) == (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 48LL))(a2);
      }
LABEL_18:
      if ( v10 )
        goto LABEL_21;
      goto LABEL_19;
    }
    if ( *(_DWORD *)(v6 + 16) == (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 48LL))(a2)
      && (*(unsigned __int8 (__fastcall **)(struct IAudioProcess *, _QWORD))(*(_QWORD *)a2 + 384LL))(
           a2,
           *(unsigned int *)(*v4 + 8)) )
    {
      goto LABEL_21;
    }
LABEL_19:
    ++v4;
  }
  v5 = 1;
LABEL_21:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v14);
  return v5;
}
