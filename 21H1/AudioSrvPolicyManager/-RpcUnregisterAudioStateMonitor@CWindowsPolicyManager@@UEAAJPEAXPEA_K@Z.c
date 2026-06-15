/*
 * XREFs of ?RpcUnregisterAudioStateMonitor@CWindowsPolicyManager@@UEAAJPEAXPEA_K@Z @ 0x18000D010
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003F90 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z @ 0x18000B300 (-RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z.c)
 *     ?Lock@CWindowsPolicyManager@@UEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x18000BDB0 (-Lock@CWindowsPolicyManager@@UEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowsPolicyManager::RpcUnregisterAudioStateMonitor(
        CWindowsPolicyManager *this,
        void *a2,
        unsigned __int64 *a3)
{
  int Process; // eax
  struct IAudioProcess *v7; // rbx
  unsigned int v8; // edi
  __int64 v9; // rdx
  LPCRITICAL_SECTION lpCriticalSection[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IAudioProcess *v13; // [rsp+58h] [rbp+20h] BYREF

  CWindowsPolicyManager::Lock((__int64)this, lpCriticalSection);
  v13 = 0LL;
  Process = CWindowsPolicyManager::RpcGetProcess(this, a2, &v13);
  v7 = v13;
  v8 = Process;
  if ( Process < 0 )
  {
    v9 = 793LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
      (const char *)(unsigned int)Process);
    goto LABEL_7;
  }
  Process = (*(__int64 (__fastcall **)(struct IAudioProcess *, unsigned __int64 *))(*(_QWORD *)v13 + 416LL))(v13, a3);
  v8 = Process;
  if ( Process < 0 )
  {
    v9 = 794LL;
    goto LABEL_5;
  }
  v8 = 0;
LABEL_7:
  if ( v7 )
    (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v7 + 16LL))(v7);
  if ( lpCriticalSection[0] )
    LeaveCriticalSection(lpCriticalSection[0]);
  return v8;
}
