/*
 * XREFs of Command_ControllerResetPostReset @ 0x1C002D62C
 * Callers:
 *     Controller_InternalReset @ 0x1C0031AF8 (Controller_InternalReset.c)
 * Callees:
 *     DynamicLock_Release @ 0x1C0006998 (DynamicLock_Release.c)
 *     DynamicLock_Acquire @ 0x1C0006DD0 (DynamicLock_Acquire.c)
 *     Command_Initialize @ 0x1C00136C8 (Command_Initialize.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qL @ 0x1C002E990 (WPP_RECORDER_SF_qL.c)
 *     Etw_CommandCompleteError @ 0x1C0047548 (Etw_CommandCompleteError.c)
 */

char __fastcall Command_ControllerResetPostReset(__int64 a1, int a2, int a3, int a4)
{
  __int64 v5; // rcx
  __int64 ****v6; // rcx
  __int64 ***v7; // rax
  __int64 **v8; // rdx
  _QWORD *v9; // rdx
  __int64 ****v10; // rcx
  __int64 ***v11; // rax
  __int64 **v12; // rdx
  _QWORD *v13; // rdx
  __int64 v14; // rcx
  int v15; // edx
  int v16; // r8d
  int v17; // r9d
  int v18; // edx
  __int64 *v19; // rbx
  __int64 *v20; // rax
  __int64 **v21; // rcx
  __int64 *v23; // [rsp+40h] [rbp-10h] BYREF
  __int64 **v24; // [rsp+48h] [rbp-8h]

  v5 = *(_QWORD *)(a1 + 112);
  v24 = &v23;
  v23 = (__int64 *)&v23;
  DynamicLock_Acquire(v5, a2, a3, a4);
  v6 = (__int64 ****)(a1 + 80);
  while ( 1 )
  {
    v7 = *v6;
    if ( *v6 == (__int64 ***)v6 )
      break;
    if ( v7[1] != (__int64 **)v6
      || (v8 = *v7, (*v7)[1] != (__int64 *)v7)
      || (*v6 = (__int64 ***)v8, v8[1] = (__int64 *)v6, v9 = v24, *v24 != (__int64 *)&v23) )
    {
LABEL_20:
      __fastfail(3u);
    }
    v7[1] = v24;
    *v7 = &v23;
    *v9 = v7;
    v24 = (__int64 **)v7;
  }
  v10 = (__int64 ****)(a1 + 96);
  while ( 1 )
  {
    v11 = *v10;
    if ( *v10 == (__int64 ***)v10 )
      break;
    if ( v11[1] != (__int64 **)v10 )
      goto LABEL_20;
    v12 = *v11;
    if ( (*v11)[1] != (__int64 *)v11 )
      goto LABEL_20;
    *v10 = (__int64 ***)v12;
    v12[1] = (__int64 *)v10;
    v13 = v24;
    if ( *v24 != (__int64 *)&v23 )
      goto LABEL_20;
    v11[1] = v24;
    *v11 = &v23;
    *v13 = v11;
    v24 = (__int64 **)v11;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01023 + 2560))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 24),
    0LL);
  v14 = *(_QWORD *)(a1 + 112);
  *(_DWORD *)(a1 + 36) = 4;
  DynamicLock_Release(v14, v15, v16, v17);
  while ( 1 )
  {
    v19 = v23;
    if ( v23 == (__int64 *)&v23 )
      return Command_Initialize(a1);
    if ( (__int64 **)v23[1] != &v23 )
      goto LABEL_20;
    v20 = (__int64 *)*v23;
    if ( *(__int64 **)(*v23 + 8) != v23 )
      goto LABEL_20;
    v21 = &v23;
    v23 = (__int64 *)*v23;
    v20[1] = (__int64)&v23;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v18) = 4;
      WPP_RECORDER_SF_qL(
        *(_QWORD *)(a1 + 16),
        v18,
        7,
        59,
        (__int64)&WPP_36fa723b951d376375e8eba1d8934b4f_Traceguids,
        (char)v19,
        (unsigned __int8)HIBYTE(*((_WORD *)v19 + 18)) >> 2);
    }
    Etw_CommandCompleteError(v21, a1, v19, 3LL);
    ((void (__fastcall *)(__int64 *, __int64))v19[5])(v19, 3LL);
  }
}
