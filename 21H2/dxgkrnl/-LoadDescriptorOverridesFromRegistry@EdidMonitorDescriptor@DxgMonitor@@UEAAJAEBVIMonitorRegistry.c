/*
 * XREFs of ?LoadDescriptorOverridesFromRegistry@EdidMonitorDescriptor@DxgMonitor@@UEAAJAEBVIMonitorRegistry@2@@Z @ 0x1C020ADC0
 * Callers:
 *     <none>
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0002C48 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C001C71C (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     ?DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C001CBB4 (-DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 *     ??$invoke@P6AXPEAU_UNICODE_STRING@@@ZPEAV?$unique_struct@U_UNICODE_STRING@@$$A6AXPEAU1@@Z$1?RtlFreeUnicodeString@@YAX0@Z$$T$0A@@wil@@@wistd@@YAX$$QEAP6AXPEAU_UNICODE_STRING@@@Z$$QEAPEAV?$unique_struct@U_UNICODE_STRING@@$$A6AXPEAU1@@Z$1?RtlFreeUnicodeString@@YAX0@Z$$T$0A@@wil@@@Z @ 0x1C001FA00 (--$invoke@P6AXPEAU_UNICODE_STRING@@@ZPEAV-$unique_struct@U_UNICODE_STRING@@$$A6AXPEAU1@@Z$1-RtlF.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C0027574 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??1?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAA@XZ @ 0x1C00275E0 (--1-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescriptor@DxgMon.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?_CleanupRegistryOverridedMonitorDescriptors@EdidMonitorDescriptor@DxgMonitor@@AEAAXXZ @ 0x1C020B15C (-_CleanupRegistryOverridedMonitorDescriptors@EdidMonitorDescriptor@DxgMonitor@@AEAAXXZ.c)
 *     ?_ReadOneBlockMonitorDescriptorFromRegistry@EdidMonitorDescriptor@DxgMonitor@@CAJPEAXIAEAV?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@@Z @ 0x1C03B9944 (-_ReadOneBlockMonitorDescriptorFromRegistry@EdidMonitorDescriptor@DxgMonitor@@CAJPEAXIAEAV-$uniq.c)
 */

__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::LoadDescriptorOverridesFromRegistry(
        DxgMonitor::EdidMonitorDescriptor *this,
        const struct DxgMonitor::IMonitorRegistry *a2)
{
  __int64 v3; // rax
  int v4; // eax
  __int64 v5; // rdi
  NTSTATUS v6; // eax
  __int64 v7; // r9
  unsigned int v8; // r12d
  __int64 v10; // r14
  int OneBlockMonitorDescriptorFromRegistry; // eax
  void ***v12; // rbx
  __int64 v13; // rax
  void **v14; // rdx
  void **v15; // r13
  __int64 v16; // rax
  void **v17; // r13
  void **v18; // r15
  void **v19; // rcx
  int v20; // eax
  _QWORD *v21; // rbx
  void **v22; // r13
  unsigned int v23; // r14d
  __int64 v24; // rax
  bool v25; // cf
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 i; // r12
  __int64 v30; // rcx
  __int64 v31; // rax
  void **v32; // r13
  int v33; // r12d
  void **v34; // r13
  void **v35; // rax
  char *v36; // rcx
  char *v37; // rbx
  void *v38; // [rsp+30h] [rbp-39h]
  HANDLE KeyHandle; // [rsp+38h] [rbp-31h] BYREF
  void *v40; // [rsp+40h] [rbp-29h] BYREF
  __int64 v41; // [rsp+48h] [rbp-21h]
  struct _UNICODE_STRING v42; // [rsp+50h] [rbp-19h] BYREF
  __int128 v43; // [rsp+60h] [rbp-9h] BYREF
  __int64 v44; // [rsp+70h] [rbp+7h]
  int v45; // [rsp+78h] [rbp+Fh]

  KeyHandle = 0LL;
  v40 = 0LL;
  v45 = *(_DWORD *)L"E";
  v42.Buffer = (wchar_t *)&v43;
  v3 = *(_QWORD *)a2;
  v43 = *(_OWORD *)L"EDID_OVERRIDE";
  *(_QWORD *)&v42.Length = 1835034LL;
  v44 = *(_QWORD *)L"RRIDE";
  v4 = (*(__int64 (__fastcall **)(const struct DxgMonitor::IMonitorRegistry *, _QWORD, __int64, void **))(v3 + 16))(
         a2,
         0LL,
         1LL,
         &v40);
  v5 = v4;
  if ( v4 < 0 || (v6 = DxgkOpenRegistrySubkey(&KeyHandle, 0x20019u, v40, &v42), v5 = v6, v6 < 0) )
  {
    WdLogSingleEntry1(7LL, v5);
    v8 = v5;
    goto LABEL_4;
  }
  v10 = 0LL;
  v8 = -1073741801;
  if ( *((_DWORD *)this + 4) )
  {
    while ( 1 )
    {
      v38 = 0LL;
      OneBlockMonitorDescriptorFromRegistry = DxgMonitor::EdidMonitorDescriptor::_ReadOneBlockMonitorDescriptorFromRegistry(KeyHandle);
      v12 = (void ***)v38;
      LODWORD(v5) = OneBlockMonitorDescriptorFromRegistry;
      if ( OneBlockMonitorDescriptorFromRegistry == -1073741801 )
        break;
      if ( OneBlockMonitorDescriptorFromRegistry >= 0 )
      {
        if ( !v38 )
          WdLogSingleEntry0(1LL);
        v13 = *((_QWORD *)this + 3);
        v14 = *(void ***)(v13 + 8 * v10);
        *(_QWORD *)(v13 + 8 * v10) = 0LL;
        v15 = *v12;
        *v12 = v14;
        if ( v15 )
        {
          wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::~unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>(v15);
          operator delete(v15);
        }
        v16 = *((_QWORD *)this + 3);
        v17 = *(void ***)(v16 + 8 * v10);
        *(_QWORD *)(v16 + 8 * v10) = v12;
        if ( v17 )
        {
          wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::~unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>(v17);
          operator delete(v17);
        }
        ++*((_DWORD *)this + 5);
      }
      else if ( v38 )
      {
        wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::~unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>((void **)v38);
        operator delete(v12);
      }
      v10 = (unsigned int)(v10 + 1);
      if ( (unsigned int)v10 >= *((_DWORD *)this + 4) )
        goto LABEL_20;
    }
    if ( v38 )
    {
      wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::~unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>((void **)v38);
      v19 = (void **)v12;
LABEL_56:
      operator delete(v19);
    }
  }
  else
  {
LABEL_20:
    v18 = 0LL;
    while ( (unsigned int)v10 <= 0xFE )
    {
      v38 = 0LL;
      LODWORD(v10) = v10 + 1;
      v20 = DxgMonitor::EdidMonitorDescriptor::_ReadOneBlockMonitorDescriptorFromRegistry(KeyHandle);
      v21 = v38;
      LODWORD(v5) = v20;
      if ( v20 < 0 )
      {
        LODWORD(v5) = 0;
        if ( v38 )
        {
          wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::~unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>((void **)v38);
          operator delete(v21);
        }
        break;
      }
      if ( !v38 )
        WdLogSingleEntry0(1LL);
      v22 = (void **)*v21;
      *v21 = v18;
      if ( v22 )
      {
        wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::~unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>(v22);
        operator delete(v22);
      }
      v18 = (void **)v21;
    }
    v23 = v10 - 1;
    if ( v18 )
    {
      if ( v23 <= *((_DWORD *)this + 4) )
        WdLogSingleEntry0(1LL);
      v24 = 8LL * v23;
      if ( !is_mul_ok(v23, 8uLL) )
        v24 = -1LL;
      v25 = __CFADD__(v24, 8LL);
      v26 = v24 + 8;
      if ( v25 )
        v26 = -1LL;
      v27 = operator new[](v26, 0x4D677844u, 256LL, v7);
      if ( !v27
        || (v28 = v27 + 8,
            *(_QWORD *)v27 = v23,
            `vector constructor iterator'(
              (char *)(v27 + 8),
              8LL,
              v23,
              (void (__fastcall *)(char *))wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>),
            !v28) )
      {
        WdLogSingleEntry0(2LL);
        LODWORD(v5) = -1073741801;
        wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::~unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>(v18);
        v19 = v18;
        goto LABEL_56;
      }
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 4); i = (unsigned int)(i + 1) )
      {
        v30 = *((_QWORD *)this + 3);
        v31 = *(_QWORD *)(v30 + 8 * i);
        *(_QWORD *)(v30 + 8 * i) = 0LL;
        v32 = *(void ***)(v28 + 8 * i);
        *(_QWORD *)(v28 + 8 * i) = v31;
        if ( v32 )
        {
          wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::~unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>(v32);
          operator delete(v32);
        }
      }
      v33 = 1;
      while ( v18 )
      {
        v41 = v23 - v33;
        v34 = *(void ***)(v28 + 8 * v41);
        *(_QWORD *)(v28 + 8 * v41) = v18;
        if ( v34 )
        {
          wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::~unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>(v34);
          operator delete(v34);
          v18 = *(void ***)(v28 + 8 * v41);
        }
        v35 = v18;
        v18 = (void **)*v18;
        *v35 = 0LL;
        ++*((_DWORD *)this + 4);
        ++*((_DWORD *)this + 5);
        ++v33;
      }
      v36 = (char *)*((_QWORD *)this + 3);
      *((_QWORD *)this + 3) = v28;
      if ( v36 )
      {
        v37 = v36 - 8;
        `vector destructor iterator'(
          v36,
          8LL,
          *((_QWORD *)v36 - 1),
          (void (__fastcall *)(char *))wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::~unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>);
        operator delete[](v37);
      }
    }
    if ( v23 != *((_DWORD *)this + 4) )
      WdLogSingleEntry0(1LL);
    v8 = v5;
  }
LABEL_4:
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&KeyHandle);
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v40);
  if ( (int)v5 < 0 )
    DxgMonitor::EdidMonitorDescriptor::_CleanupRegistryOverridedMonitorDescriptors(this);
  return v8;
}
