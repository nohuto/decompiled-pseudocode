/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_014daf4e80f8d9d33103ca7fb469f571___ @ 0x180308F6C
 * Callers:
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x18030C0F0 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180038890 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 Windows::Internal::ComTaskPool::QueueTask__lambda_014daf4e80f8d9d33103ca7fb469f571___()
{
  _QWORD *v0; // rax
  _QWORD *v1; // rdi
  _QWORD *v2; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v4; // ebx

  v0 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v1 = 0LL;
  v2 = v0;
  if ( v0 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v0);
    v1 = v2;
    *v2 = off_18046F630;
  }
  CurrentThreadId = GetCurrentThreadId();
  v4 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId);
  if ( v1 )
    (*(void (__fastcall **)(_QWORD *))(*v1 + 16LL))(v1);
  return v4;
}
