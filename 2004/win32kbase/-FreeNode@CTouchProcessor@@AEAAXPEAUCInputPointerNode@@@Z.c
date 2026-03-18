/*
 * XREFs of ?FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C018E64C
 * Callers:
 *     ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C018952C (-CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     ?FreeMsgData@CTouchProcessor@@AEAAX_K@Z @ 0x1C018E528 (-FreeMsgData@CTouchProcessor@@AEAAX_K@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C01998E4 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00746C4 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::FreeNode(struct _KTHREAD **this, struct CInputPointerNode *a2, __int64 a3, __int64 a4)
{
  struct CInputPointerNode *v5; // rax
  struct CInputPointerNode **v6; // rcx
  char *v7; // rax
  __int64 v8; // rdx
  char **v9; // rcx

  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  if ( *((struct CInputPointerNode **)a2 + 30) != (struct CInputPointerNode *)((char *)a2 + 240) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  if ( *((struct CInputPointerNode **)a2 + 28) != (struct CInputPointerNode *)((char *)a2 + 224) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  v5 = *(struct CInputPointerNode **)a2;
  if ( *(struct CInputPointerNode **)(*(_QWORD *)a2 + 8LL) != a2 )
    goto LABEL_16;
  v6 = (struct CInputPointerNode **)*((_QWORD *)a2 + 1);
  if ( *v6 != a2 )
    goto LABEL_16;
  *v6 = v5;
  *((_QWORD *)v5 + 1) = v6;
  v7 = (char *)a2 + 16;
  *((_QWORD *)a2 + 1) = a2;
  *(_QWORD *)a2 = a2;
  v8 = *((_QWORD *)a2 + 2);
  if ( (struct CInputPointerNode *)v8 == (struct CInputPointerNode *)((char *)a2 + 16) )
    goto LABEL_13;
  if ( *(char **)(v8 + 8) != v7 || (v9 = (char **)*((_QWORD *)a2 + 3), *v9 != v7) )
LABEL_16:
    __fastfail(3u);
  *v9 = (char *)v8;
  *(_QWORD *)(v8 + 8) = v9;
LABEL_13:
  if ( *((_DWORD *)a2 + 16) )
    CInputDest::SetEmpty((struct CInputPointerNode *)((char *)a2 + 64));
  Win32FreePool((__int64)a2);
}
