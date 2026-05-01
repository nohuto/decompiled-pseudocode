/*
 * XREFs of CFrameApplicationPresentation::_AddTaskToQueue__lambda_a0ee7bb0dcee848556900d8415f399c8___ @ 0x180066620
 * Callers:
 *     ?SetChromeOptions@CFrameApplicationPresentation@@UEAAJUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@@Z @ 0x180066500 (-SetChromeOptions@CFrameApplicationPresentation@@UEAAJUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFrameApplicationPresentation::_AddTaskToQueue__lambda_a0ee7bb0dcee848556900d8415f399c8___(
        _DWORD *a1,
        __int128 *a2)
{
  __int64 v4; // rax
  _DWORD *v5; // r14
  unsigned int v6; // ebp
  _DWORD *v7; // rax
  _DWORD *v8; // rsi
  _DWORD *v9; // rbx
  int v10; // ebx
  __int128 v12; // [rsp+30h] [rbp-58h]
  _QWORD v13[2]; // [rsp+40h] [rbp-48h] BYREF
  __int128 v14; // [rsp+50h] [rbp-38h]
  __int64 v15; // [rsp+60h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  __int64 v17; // [rsp+90h] [rbp+8h]

  if ( a1[14] == 2 )
  {
    v10 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7FE,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL);
  }
  else
  {
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1);
    v4 = *(_QWORD *)a1;
    v5 = a1;
    v13[0] = a1;
    (*(void (__fastcall **)(_DWORD *))(v4 + 8))(a1);
    v6 = a1[12];
    v12 = *a2;
    v13[1] = a1;
    v14 = v12;
    v17 = *((_QWORD *)a2 + 2);
    v15 = v17;
    v7 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    v8 = 0LL;
    v9 = v7;
    if ( v7 )
    {
      v7[3] = 1;
      *(_QWORD *)v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      *((_QWORD *)v9 + 2) = 0LL;
      if ( v9 + 4 != (_DWORD *)v13 )
      {
        *((_QWORD *)v9 + 2) = a1;
        v5 = 0LL;
      }
      *((_QWORD *)v9 + 3) = a1;
      v8 = v9;
      *((_OWORD *)v9 + 2) = v12;
      *((_QWORD *)v9 + 6) = v17;
      *(_QWORD *)v9 = off_18048DFE0;
    }
    v10 = SHTaskPoolQueueTask(3LL, 2LL, v6);
    if ( v8 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 16LL))(v8);
    if ( v5 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 16LL))(v5);
    if ( v10 >= 0 )
      ++a1[53];
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 16LL))(a1);
  }
  return (unsigned int)v10;
}
