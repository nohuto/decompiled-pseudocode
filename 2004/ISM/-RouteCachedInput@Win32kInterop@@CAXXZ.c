/*
 * XREFs of ?RouteCachedInput@Win32kInterop@@CAXXZ @ 0x1800B2640
 * Callers:
 *     ?MakeRoutingDecisionsForAllFrames@Win32kInterop@@AEAAJAEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@PEAUInputInfo@@PEAUIInputTarget@@@Z @ 0x1800B0A14 (-MakeRoutingDecisionsForAllFrames@Win32kInterop@@AEAAJAEAV-$unordered_set@KU-$hash@K@std@@U-$equ.c)
 *     ?UpdateGestureTargetingDecisions@Win32kInterop@@SAXIIPEAI@Z @ 0x1800B28D4 (-UpdateGestureTargetingDecisions@Win32kInterop@@SAXIIPEAI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000B0D0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C6C0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?RoutePointerFrame@Win32kInterop@@CAXPEAUInputInfo@@PEAX@Z @ 0x1800B276C (-RoutePointerFrame@Win32kInterop@@CAXPEAUInputInfo@@PEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
void Win32kInterop::RouteCachedInput(void)
{
  __int64 v0; // rax
  _QWORD *v1; // rdi
  __int64 v2; // rbx
  const struct std::nothrow_t *v3; // rdx
  int (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rsi
  void *v5; // rdx
  int (__fastcall *v6)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v0 = Win32kInterop::s_inputInfoCachedQueue;
  if ( (_QWORD)Win32kInterop::s_inputInfoCachedQueue )
    v0 = *(_QWORD *)Win32kInterop::s_inputInfoCachedQueue;
  v1 = *(_QWORD **)(*(_QWORD *)(v0 + 8) + 8 * (qword_180208BC8 & (*(_QWORD *)(v0 + 16) - 1LL)));
  v2 = *(_QWORD *)(*((_QWORD *)&Win32kInterop::s_inputInfoCachedQueue + 1)
                 + 8 * (qword_180208BC8 & (qword_180208BC0 - 1)));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(v2 + 8));
  if ( *(_QWORD *)v2 )
    operator delete(*(void **)v2, v3);
  if ( --qword_180208BD0 )
    ++qword_180208BC8;
  else
    qword_180208BC8 = 0LL;
  v7 = 0LL;
  v4 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))v1[1];
  if ( v4 )
  {
    v6 = **v4;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v7);
    if ( v6(v4, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, &v7) < 0 )
    {
      Win32kInterop::RoutePointerFrame((struct InputInfo *)*v1, 0LL);
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v1[1] + 24LL))(v1[1], *v1);
      goto LABEL_14;
    }
    v5 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 56LL))(v7);
  }
  else
  {
    v5 = 0LL;
  }
  Win32kInterop::RoutePointerFrame((struct InputInfo *)*v1, v5);
LABEL_14:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v7);
}
