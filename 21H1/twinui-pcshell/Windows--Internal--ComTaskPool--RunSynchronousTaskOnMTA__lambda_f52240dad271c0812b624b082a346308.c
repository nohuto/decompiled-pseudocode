/*
 * XREFs of Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f52240dad271c0812b624b082a346308___ @ 0x1802B4170
 * Callers:
 *     ?OnWindowWatcherStopped@WindowManagerBridge@@AEAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1802B64E0 (-OnWindowWatcherStopped@WindowManagerBridge@@AEAAJPEAUIWindowWatcher@WindowManagement@Applicatio.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180038890 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f52240dad271c0812b624b082a346308___(
        unsigned int a1,
        unsigned int a2,
        _QWORD *a3)
{
  unsigned int v5; // esi
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  _QWORD *v8; // rbx
  int v9; // ebx
  APTTYPEQUALIFIER v11[10]; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v12; // [rsp+60h] [rbp+8h] BYREF
  int v13; // [rsp+78h] [rbp+20h] BYREF

  v12 = a1;
  if ( CoGetApartmentType((APTTYPE *)&v13, v11) < 0 || !v13 || v13 == 3 )
    v5 = 0;
  else
    v5 = 4;
  v12 = 0;
  v6 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  v8 = v6;
  if ( v6 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v6);
    v7 = v8;
    v8[2] = *a3;
    *v8 = off_18048F990;
    v8[3] = &v12;
  }
  v9 = SHTaskPoolQueueTask(v5, 32LL, a2);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  if ( v9 >= 0 )
    return v12;
  return (unsigned int)v9;
}
