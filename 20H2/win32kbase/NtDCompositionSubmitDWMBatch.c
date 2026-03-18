/*
 * XREFs of NtDCompositionSubmitDWMBatch @ 0x1C005F7F0
 * Callers:
 *     <none>
 * Callees:
 *     ?SubmitDwmBatch@CDwmChannel@DirectComposition@@QEAAX_KPEBUSynchronizationObject@2@@Z @ 0x1C005F87C (-SubmitDwmBatch@CDwmChannel@DirectComposition@@QEAAX_KPEBUSynchronizationObject@2@@Z.c)
 *     ?ReferenceHandleAndLock@CDwmChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C005FFAC (-ReferenceHandleAndLock@CDwmChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     ?ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C01CDD84 (-ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 */

__int64 __fastcall NtDCompositionSubmitDWMBatch(unsigned int a1, unsigned __int64 a2, void *a3)
{
  int v5; // edi
  struct DirectComposition::SynchronizationObject *v6; // rbx
  DirectComposition::CDwmChannel *v7; // rsi
  int v9; // eax
  DirectComposition::CDwmChannel *v10; // [rsp+20h] [rbp-18h] BYREF
  struct DirectComposition::SynchronizationObject *v11; // [rsp+58h] [rbp+20h] BYREF

  v10 = 0LL;
  v5 = DirectComposition::CDwmChannel::ReferenceHandleAndLock(a1, &v10);
  if ( v5 >= 0 )
  {
    v6 = 0LL;
    v11 = 0LL;
    if ( a3 )
    {
      v9 = DirectComposition::SynchronizationObject::ResolveHandle(a3, 1u, 1, &v11);
      v6 = v11;
      v5 = v9;
    }
    v7 = v10;
    if ( v5 >= 0 )
      DirectComposition::CDwmChannel::SubmitDwmBatch(v10, a2, v6);
    if ( v6 )
      ObfDereferenceObject(v6);
    (**(void (__fastcall ***)(DirectComposition::CDwmChannel *))v7)(v7);
  }
  return (unsigned int)v5;
}
