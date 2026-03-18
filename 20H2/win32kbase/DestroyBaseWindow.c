/*
 * XREFs of DestroyBaseWindow @ 0x1C013B230
 * Callers:
 *     <none>
 * Callees:
 *     HMDestroyObject @ 0x1C0021390 (HMDestroyObject.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     CleanupInputDelegation @ 0x1C009B050 (CleanupInputDelegation.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     ?DeleteMinWindowProperties@@YAXPEAUtagBWND@@@Z @ 0x1C013B118 (-DeleteMinWindowProperties@@YAXPEAUtagBWND@@@Z.c)
 *     ?UnreferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C019AB70 (-UnreferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     HandleBaseWindowDestruction @ 0x1C01A9550 (HandleBaseWindowDestruction.c)
 */

__int64 __fastcall DestroyBaseWindow(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD **v5; // rsi
  _QWORD *v6; // rdi
  _QWORD *v7; // rax
  __int64 v8; // rcx

  if ( a1[18] )
    CleanupInputDelegation(a1, a2, a3, a4);
  if ( qword_1C02519D8 )
    qword_1C02519D8(a1);
  DeleteMinWindowProperties((struct tagBWND *)a1, a2, a3, a4);
  v5 = (_QWORD **)(a1 + 24);
  while ( 1 )
  {
    v6 = *v5;
    if ( *v5 == v5 )
      break;
    if ( (_QWORD **)v6[1] != v5 || (v7 = (_QWORD *)*v6, *(_QWORD **)(*v6 + 8LL) != v6) )
      __fastfail(3u);
    *v5 = v7;
    v7[1] = v5;
    CTouchProcessor::UnreferenceMsgDataExternal(gpTouchProcessor, v6[2], 7LL, v6);
    Win32FreePool((__int64)v6);
  }
  v8 = *((_QWORD *)a1 + 15);
  if ( v8 )
  {
    Win32FreePool(v8);
    *((_QWORD *)a1 + 15) = 0LL;
  }
  HandleBaseWindowDestruction(a1);
  return HMDestroyObject(a1);
}
