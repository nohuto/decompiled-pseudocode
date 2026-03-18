/*
 * XREFs of DestroyBaseWindow @ 0x1C013D580
 * Callers:
 *     <none>
 * Callees:
 *     HMDestroyObject @ 0x1C0017040 (HMDestroyObject.c)
 *     CleanupInputDelegation @ 0x1C003B860 (CleanupInputDelegation.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     ?DeleteMinWindowProperties@@YAXPEAUtagBWND@@@Z @ 0x1C013D468 (-DeleteMinWindowProperties@@YAXPEAUtagBWND@@@Z.c)
 *     ?UnreferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C019D070 (-UnreferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     HandleBaseWindowDestruction @ 0x1C01AB8D0 (HandleBaseWindowDestruction.c)
 */

__int64 __fastcall DestroyBaseWindow(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD **v5; // rsi
  _QWORD *v6; // rdi
  _QWORD *v7; // rax
  __int64 v8; // rcx

  if ( a1[18] )
    CleanupInputDelegation(a1);
  if ( qword_1C02539D8 )
    qword_1C02539D8(a1);
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
