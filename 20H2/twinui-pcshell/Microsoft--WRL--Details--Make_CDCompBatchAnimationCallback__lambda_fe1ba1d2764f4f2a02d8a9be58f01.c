/*
 * XREFs of Microsoft::WRL::Details::Make_CDCompBatchAnimationCallback__lambda_fe1ba1d2764f4f2a02d8a9be58f012f2_____lambda_fe1ba1d2764f4f2a02d8a9be58f012f2__&_ @ 0x18040BC68
 * Callers:
 *     ?CancelPlacement@WindowArrangementView@@UEAAJXZ @ 0x18040CEC0 (-CancelPlacement@WindowArrangementView@@UEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIDCompBatchAnimationCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x1803AFE10 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIDCompBatchAnimationCallback@@@WRL@Mi.c)
 *     _lambda_fe1ba1d2764f4f2a02d8a9be58f012f2_::_lambda_fe1ba1d2764f4f2a02d8a9be58f012f2_ @ 0x18040C300 (_lambda_fe1ba1d2764f4f2a02d8a9be58f012f2_--_lambda_fe1ba1d2764f4f2a02d8a9be58f012f2_.c)
 */

IApplicationViewChangeListener **__fastcall Microsoft::WRL::Details::Make_CDCompBatchAnimationCallback__lambda_fe1ba1d2764f4f2a02d8a9be58f012f2_____lambda_fe1ba1d2764f4f2a02d8a9be58f012f2____(
        IApplicationViewChangeListener **a1,
        __int64 a2)
{
  IApplicationViewChangeListener *v4; // rax
  IApplicationViewChangeListener *v5; // rbx

  *a1 = 0LL;
  v4 = (IApplicationViewChangeListener *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IDCompBatchAnimationCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IDCompBatchAnimationCallback>(v4);
    *(_QWORD *)v5 = off_180496678;
    lambda_fe1ba1d2764f4f2a02d8a9be58f012f2_::_lambda_fe1ba1d2764f4f2a02d8a9be58f012f2_((char *)v5 + 16, a2);
    *((_DWORD *)v5 + 6) = 0;
    *((_DWORD *)v5 + 7) = 0;
    *((_QWORD *)v5 + 4) = 0LL;
    *((_DWORD *)v5 + 10) = 0;
    if ( *a1 )
      (*(void (__fastcall **)(IApplicationViewChangeListener *))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v5;
  }
  return a1;
}
