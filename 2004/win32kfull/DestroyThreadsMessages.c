/*
 * XREFs of DestroyThreadsMessages @ 0x1C00B3070
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z @ 0x1C0007AFC (-RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0026844 (WPP_RECORDER_SF_qq.c)
 *     FreeQEntry @ 0x1C00B06FC (FreeQEntry.c)
 *     DelQEntry @ 0x1C00B0784 (DelQEntry.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00B328C (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C0104B30 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 */

__int64 __fastcall DestroyThreadsMessages(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v5; // edx
  struct tagMLIST *v6; // r14
  struct tagQMSG *v7; // rbx
  __int64 v8; // rbx
  struct tagQMSG *v9; // rsi
  __int64 *v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // [rsp+40h] [rbp-38h] BYREF

  result = CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(&v12, a1);
  v6 = (struct tagMLIST *)(a1 + 24);
  v7 = *(struct tagQMSG **)(a1 + 24);
  if ( v7 )
  {
    do
    {
      v9 = *(struct tagQMSG **)v7;
      if ( *((_QWORD *)v7 + 13) == a2 )
      {
        v10 = *(__int64 **)(a1 + 80);
        if ( v10 == (__int64 *)v7 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LOBYTE(v5) = 5;
            WPP_RECORDER_SF_qq(
              (_DWORD)v10,
              v5,
              18,
              18,
              (__int64)&WPP_fae14e43e2df34d42d304f3db5b27b93_Traceguids,
              a1,
              *(_QWORD *)(a1 + 80));
          }
          *(_QWORD *)(a1 + 80) = 0LL;
        }
        CleanEventMessage(v7);
        result = DelQEntry((unsigned int **)(a1 + 24), (unsigned int *)v7, 1);
      }
      v7 = v9;
    }
    while ( v9 );
  }
  v8 = *(_QWORD *)(a1 + 48);
  if ( v8 )
  {
    do
    {
      v11 = *(_QWORD *)(v8 + 8);
      if ( *(_QWORD *)(v8 + 104) == a2 )
      {
        RemoveQMsgFromDeferList(v6, (struct tagQMSG *)v8);
        CleanEventMessage((struct tagQMSG *)v8);
        result = FreeQEntry((unsigned int *)v8);
      }
      v8 = v11;
    }
    while ( v11 );
  }
  return result;
}
