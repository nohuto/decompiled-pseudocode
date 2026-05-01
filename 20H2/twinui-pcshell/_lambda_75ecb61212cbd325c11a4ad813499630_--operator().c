/*
 * XREFs of _lambda_75ecb61212cbd325c11a4ad813499630_::operator() @ 0x18003DD18
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c375c8f4cb799a2f5bee00a6619de85c___::Run @ 0x18003DC90 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c375c8f4cb799a2f5bee00a6619de85c___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_75ecb61212cbd325c11a4ad813499630_::operator()(_QWORD *a1)
{
  char v2; // di
  char v3; // bl
  PVOID Ptr; // rdi
  void (__fastcall *v6)(PVOID, _QWORD, __int64); // rbx
  int v7; // [rsp+30h] [rbp-30h] BYREF
  __int64 v8; // [rsp+38h] [rbp-28h] BYREF
  int v9; // [rsp+40h] [rbp-20h] BYREF
  int v10; // [rsp+44h] [rbp-1Ch] BYREF
  RECT rc; // [rsp+48h] [rbp-18h] BYREF

  rc = 0LL;
  v10 = 0;
  v7 = 0;
  v2 = 0;
  v3 = 0;
  v8 = 0LL;
  if ( (**(int (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1)(*a1, &GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2, &v8) >= 0 )
  {
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v8 + 32LL))(v8, &v9);
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v8 + 48LL))(v8, &v7);
    if ( v9 == 4 )
    {
      v2 = 1;
      v3 = 0;
      (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v8 + 40LL))(v8, &v10);
    }
    else
    {
      if ( v9 != 3 || (v7 & 1) == 0 )
      {
        v3 = 0;
        goto LABEL_6;
      }
      v3 = 1;
    }
    (*(void (__fastcall **)(__int64, RECT *))(*(_QWORD *)v8 + 24LL))(v8, &rc);
  }
LABEL_6:
  if ( (v7 & 1) == 0 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1[1] + 120LL) + 32LL))(*(_QWORD *)(a1[1] + 120LL), *a1);
  if ( v2 )
  {
    (*(void (__fastcall **)(PVOID, _QWORD, RECT *, _QWORD, int))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[19].Ptr
                                                               + 24LL))(
      CApplicationManagerUtility::g_pIAMGlobals[19].Ptr,
      *(_QWORD *)(a1[1] + 128LL),
      &rc,
      0LL,
      v10);
  }
  else if ( v3 )
  {
    Ptr = CApplicationManagerUtility::g_pIAMGlobals[20].Ptr;
    v6 = *(void (__fastcall **)(PVOID, _QWORD, __int64))(*(_QWORD *)Ptr + 32LL);
    IsRectEmpty(&rc);
    v6(Ptr, *(_QWORD *)(a1[1] + 128LL), 5LL);
  }
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
}
