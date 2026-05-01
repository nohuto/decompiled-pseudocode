/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_f436f471d7a54d3b33991578e83bb777__&_ @ 0x1801740B4
 * Callers:
 *     ?_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameManager@@@Z @ 0x1800447EC (-_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameMana.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180038DB0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_f436f471d7a54d3b33991578e83bb777____(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  _OWORD *v6; // rax
  _OWORD *v7; // rdi
  _OWORD *v8; // rbx
  unsigned int v9; // ebx

  v6 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  v8 = v6;
  if ( v6 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v6);
    v7 = v8;
    v8[1] = *(_OWORD *)a4;
    v8[2] = *(_OWORD *)(a4 + 16);
    *((_QWORD *)v8 + 6) = *(_QWORD *)(a4 + 32);
    *(_QWORD *)v8 = off_18049CAC8;
  }
  v9 = SHTaskPoolQueueTask(3LL, 64LL, a3);
  if ( v7 )
    (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v7 + 16LL))(v7);
  return v9;
}
