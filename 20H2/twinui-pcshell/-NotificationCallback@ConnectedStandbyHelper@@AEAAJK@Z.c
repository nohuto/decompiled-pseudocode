/*
 * XREFs of ?NotificationCallback@ConnectedStandbyHelper@@AEAAJK@Z @ 0x1802C86E8
 * Callers:
 *     wistd::__function::__func__lambda_025d670431b0b6098eb2d1c47c9e9598__void___cdecl(unsigned_char_const_&)_::operator() @ 0x1802C82C0 (wistd--__function--__func__lambda_025d670431b0b6098eb2d1c47c9e9598__void___cdecl(unsigned_char_c.c)
 * Callees:
 *     ?_Incref_nz@_Ref_count_base@std@@QEAA_NXZ @ 0x18004D060 (-_Incref_nz@_Ref_count_base@std@@QEAA_NXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18004D370 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x18008DA74 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_aac2d0092d420201fb1007c618052d9b___::CTaskWrapper__lambda_aac2d0092d420201fb1007c618052d9b_____lambda_aac2d0092d420201fb1007c618052d9b___ @ 0x1802C7D2C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_aac2d0092d420201fb1007c618052d9b___--CTaskW.c)
 */

__int64 __fastcall ConnectedStandbyHelper::NotificationCallback(ConnectedStandbyHelper *this)
{
  std::_Ref_count_base *v1; // rcx
  __int64 *v2; // r8
  int v3; // r9d
  __int64 v4; // rax
  volatile signed __int32 *v5; // rbx
  std::_Ref_count_base *v6; // rsi
  unsigned int v7; // ebp
  void *v8; // rax
  __int64 v9; // rdi
  void **pExceptionObject; // [rsp+30h] [rbp-48h] BYREF
  __int128 v12; // [rsp+38h] [rbp-40h]
  _QWORD v13[2]; // [rsp+48h] [rbp-30h] BYREF
  std::_Ref_count_base *v14; // [rsp+58h] [rbp-20h]
  int v15; // [rsp+60h] [rbp-18h]

  v1 = (std::_Ref_count_base *)*((_QWORD *)this + 1);
  if ( !v1 || !std::_Ref_count_base::_Incref_nz(v1) )
  {
    v12 = 0LL;
    pExceptionObject = &std::bad_weak_ptr::`vftable';
    throw (std::bad_weak_ptr *)&pExceptionObject;
  }
  v4 = *v2;
  v5 = (volatile signed __int32 *)v2[1];
  v13[0] = v2;
  if ( v5 )
    _InterlockedIncrement(v5 + 2);
  v13[1] = v4;
  v6 = (std::_Ref_count_base *)v5;
  v14 = (std::_Ref_count_base *)v5;
  v15 = v3;
  v7 = *((_DWORD *)v2 + 4);
  v8 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = 0LL;
  if ( v8 )
  {
    v9 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_aac2d0092d420201fb1007c618052d9b___::CTaskWrapper__lambda_aac2d0092d420201fb1007c618052d9b_____lambda_aac2d0092d420201fb1007c618052d9b___(
           (__int64)v8,
           (__int64)v13);
    v6 = v14;
  }
  SHTaskPoolQueueTask(3LL, 2LL, v7);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  if ( v5 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v5);
  return 0LL;
}
