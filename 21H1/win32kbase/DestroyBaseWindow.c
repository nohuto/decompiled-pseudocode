/*
 * XREFs of DestroyBaseWindow @ 0x1C01438D0
 * Callers:
 *     <none>
 * Callees:
 *     CleanupInputDelegation @ 0x1C002A9E0 (CleanupInputDelegation.c)
 *     HMDestroyObject @ 0x1C005ADB0 (HMDestroyObject.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     ?DeleteMinWindowProperties@@YAXPEAUtagBWND@@@Z @ 0x1C01437B8 (-DeleteMinWindowProperties@@YAXPEAUtagBWND@@@Z.c)
 *     ?UnreferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01A2DD0 (-UnreferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     HandleBaseWindowDestruction @ 0x1C01B1630 (HandleBaseWindowDestruction.c)
 */

__int64 __fastcall DestroyBaseWindow(_DWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  _QWORD **v6; // rsi
  _QWORD *v7; // rdi
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx

  if ( a1[18] )
    CleanupInputDelegation(a1);
  if ( qword_1C0259998 )
    qword_1C0259998(a1);
  DeleteMinWindowProperties((struct tagBWND *)a1, a2, a3);
  v6 = (_QWORD **)(a1 + 24);
  while ( 1 )
  {
    v7 = *v6;
    if ( *v6 == v6 )
      break;
    if ( (_QWORD **)v7[1] != v6 || (v8 = (_QWORD *)*v7, *(_QWORD **)(*v7 + 8LL) != v7) )
      __fastfail(3u);
    *v6 = v8;
    v8[1] = v6;
    CTouchProcessor::UnreferenceMsgDataExternal(gpTouchProcessor, v7[2], 7LL, v7);
    Win32FreePool((__int64)v7, v9, v10);
  }
  v11 = *((_QWORD *)a1 + 15);
  if ( v11 )
  {
    Win32FreePool(v11, v4, v5);
    *((_QWORD *)a1 + 15) = 0LL;
  }
  HandleBaseWindowDestruction(a1);
  return HMDestroyObject(a1);
}
