/*
 * XREFs of ?ApplyDuckingGainStages@CDuckingManager@@AEAAJPEAUIDuckingController@@PEBG@Z @ 0x18000C1F4
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_0f6faf35369883a3f4cbdf25b7153501__void_::_Do_call @ 0x18000DF10 (std--_Func_impl_no_alloc__lambda_0f6faf35369883a3f4cbdf25b7153501__void_--_Do_call.c)
 * Callees:
 *     ?ForEachDuckableSession@CDuckingManager@@AEAAJPEBG$$QEAV?$function@$$A6AJPEAUIAudioSessionInfo@@@Z@std@@@Z @ 0x18000C694 (-ForEachDuckableSession@CDuckingManager@@AEAAJPEBG$$QEAV-$function@$$A6AJPEAUIAudioSessionInfo@@.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDuckingManager::ApplyDuckingGainStages(
        CDuckingManager *this,
        struct IDuckingController *a2,
        const unsigned __int16 *a3)
{
  __int64 (__fastcall ***v3)(); // rdx
  __int128 v5; // [rsp+20h] [rbp-60h]
  __int64 (__fastcall **v6)(); // [rsp+30h] [rbp-50h] BYREF
  __int128 v7; // [rsp+38h] [rbp-48h]
  __int64 (__fastcall ***v8)(); // [rsp+68h] [rbp-18h]
  struct IDuckingController *v9; // [rsp+98h] [rbp+18h] BYREF

  v9 = a2;
  *(_QWORD *)&v5 = this;
  *((_QWORD *)&v5 + 1) = &v9;
  v6 = off_18003EB78;
  v8 = &v6;
  v7 = v5;
  CDuckingManager::ForEachDuckableSession(this, a3, &v6);
  if ( v8 )
  {
    v3 = &v6;
    LOBYTE(v3) = v8 != &v6;
    ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v8)[4])(v8, v3);
  }
  return 0LL;
}
