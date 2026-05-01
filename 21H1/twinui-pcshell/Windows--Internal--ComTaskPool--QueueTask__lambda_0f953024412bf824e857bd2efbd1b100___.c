/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_0f953024412bf824e857bd2efbd1b100___ @ 0x1800664A4
 * Callers:
 *     ?OnVisibilityChanged@CActionCenterExperienceManager@@AEAAXXZ @ 0x180065C14 (-OnVisibilityChanged@CActionCenterExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180038890 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_0f953024412bf824e857bd2efbd1b100___(
        __int64 a1,
        _BYTE *a2)
{
  _BYTE *v3; // rax
  _BYTE *v4; // rdi
  _BYTE *v5; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v7; // ebx

  v3 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = 0LL;
  v5 = v3;
  if ( v3 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v3);
    v4 = v5;
    v5[16] = *a2;
    *(_QWORD *)v5 = off_18046BAE8;
  }
  CurrentThreadId = GetCurrentThreadId();
  v7 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId);
  if ( v4 )
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v4 + 16LL))(v4);
  return v7;
}
