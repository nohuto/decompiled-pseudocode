/*
 * XREFs of ?RecalculateSessionVolumes@CDuckingManager@@AEAAJPEBGPEA_J@Z @ 0x18000B3E0
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_788b487376d721320aa661d5faa65294__void_::_Do_call @ 0x18000DC80 (std--_Func_impl_no_alloc__lambda_788b487376d721320aa661d5faa65294__void_--_Do_call.c)
 *     std::_Func_impl_no_alloc__lambda_0f6faf35369883a3f4cbdf25b7153501__void_::_Do_call @ 0x18000DF10 (std--_Func_impl_no_alloc__lambda_0f6faf35369883a3f4cbdf25b7153501__void_--_Do_call.c)
 * Callees:
 *     ?ForEachDuckableSession@CDuckingManager@@AEAAJPEBG$$QEAV?$function@$$A6AJPEAUIAudioSessionInfo@@@Z@std@@@Z @ 0x18000C694 (-ForEachDuckableSession@CDuckingManager@@AEAAJPEBG$$QEAV-$function@$$A6AJPEAUIAudioSessionInfo@@.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDuckingManager::RecalculateSessionVolumes(
        CDuckingManager *this,
        const unsigned __int16 *a2,
        __int64 *a3)
{
  _QWORD *v3; // rdx
  _QWORD v5[7]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v6; // [rsp+58h] [rbp-20h]
  __int64 *v7; // [rsp+90h] [rbp+18h] BYREF

  v7 = a3;
  v5[0] = off_18003EC20;
  v5[1] = &v7;
  v6 = v5;
  CDuckingManager::ForEachDuckableSession(this, a2, v5);
  if ( v6 )
  {
    v3 = v5;
    LOBYTE(v3) = v6 != v5;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v6 + 32LL))(v6, v3);
  }
  return 0LL;
}
