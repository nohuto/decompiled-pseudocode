/*
 * XREFs of Command_FailAllCommands @ 0x1C002ED80
 * Callers:
 *     Controller_InitiateRecovery @ 0x1C0032C80 (Controller_InitiateRecovery.c)
 *     Controller_InternalReset @ 0x1C0032FD8 (Controller_InternalReset.c)
 * Callees:
 *     DynamicLock_Release @ 0x1C0006D40 (DynamicLock_Release.c)
 *     DynamicLock_Acquire @ 0x1C0007340 (DynamicLock_Acquire.c)
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qL @ 0x1C002FE70 (WPP_RECORDER_SF_qL.c)
 *     Etw_CommandCompleteError @ 0x1C0048A48 (Etw_CommandCompleteError.c)
 */

__int64 **__fastcall Command_FailAllCommands(__int64 a1, int a2, int a3, int a4)
{
  __int64 v5; // rcx
  int v6; // r8d
  int v7; // r9d
  __int64 **v8; // rax
  __int64 v9; // rdx
  __int64 *v10; // rcx
  __int64 v11; // rdx
  __int64 *v12; // rcx
  __int64 v13; // rcx
  int v14; // edx
  __int64 *v15; // rbx
  __int64 **result; // rax
  __int64 *v17; // rax
  __int64 **v18; // rcx
  __int64 *v19; // [rsp+40h] [rbp-10h] BYREF
  __int64 **v20; // [rsp+48h] [rbp-8h]

  v5 = *(_QWORD *)(a1 + 112);
  v20 = &v19;
  v19 = (__int64 *)&v19;
  DynamicLock_Acquire(v5, a2, a3, a4);
  v8 = v20;
  v9 = a1 + 80;
  *(_DWORD *)(a1 + 36) = 5;
  v10 = *(__int64 **)(a1 + 80);
  if ( v10 != (__int64 *)(a1 + 80) )
  {
    *v8 = v10;
    *(_QWORD *)(*(_QWORD *)v9 + 8LL) = v20;
    **(_QWORD **)(a1 + 88) = &v19;
    v8 = *(__int64 ***)(a1 + 88);
    v20 = v8;
    *(_QWORD *)(a1 + 88) = a1 + 80;
    *(_QWORD *)v9 = v9;
  }
  v11 = a1 + 96;
  v12 = *(__int64 **)(a1 + 96);
  if ( v12 != (__int64 *)(a1 + 96) )
  {
    *v8 = v12;
    *(_QWORD *)(*(_QWORD *)v11 + 8LL) = v20;
    **(_QWORD **)(a1 + 104) = &v19;
    v20 = *(__int64 ***)(a1 + 104);
    *(_QWORD *)(a1 + 104) = a1 + 96;
    *(_QWORD *)v11 = v11;
  }
  v13 = *(_QWORD *)(a1 + 112);
  *(_BYTE *)(a1 + 128) = 1;
  DynamicLock_Release(v13, v11, v6, v7);
  while ( 1 )
  {
    v15 = v19;
    result = &v19;
    if ( v19 == (__int64 *)&v19 )
      break;
    if ( (__int64 **)v19[1] != &v19 || (v17 = (__int64 *)*v19, *(__int64 **)(*v19 + 8) != v19) )
      __fastfail(3u);
    v18 = &v19;
    v19 = (__int64 *)*v19;
    v17[1] = (__int64)&v19;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = 4;
      WPP_RECORDER_SF_qL(
        *(_QWORD *)(a1 + 16),
        v14,
        7,
        60,
        (__int64)&WPP_72168dd6ef593f221f3405957586a4e9_Traceguids,
        (char)v15,
        (unsigned __int8)HIBYTE(*((_WORD *)v15 + 18)) >> 2);
    }
    Etw_CommandCompleteError(v18, a1, v15, 3LL);
    ((void (__fastcall *)(__int64 *, __int64))v15[5])(v15, 3LL);
  }
  return result;
}
