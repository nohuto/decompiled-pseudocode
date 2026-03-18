/*
 * XREFs of ?DxgkQueryCurrentSessionData@@YAPEAVDXGSESSIONDATA@@XZ @ 0x1C01175EC
 * Callers:
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C011739C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000CE00 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000CEC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C000D034 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 */

struct DXGSESSIONDATA *__fastcall DxgkQueryCurrentSessionData(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 CurrentProcessSessionId; // rsi
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  DXGFASTMUTEX *v15; // [rsp+20h] [rbp-18h] BYREF
  char v16; // [rsp+28h] [rbp-10h]

  if ( (PEPROCESS)PsGetCurrentProcess(a1, a2) == PsInitialSystemProcess )
    return 0LL;
  v3 = 0LL;
  v5 = *((_QWORD *)DXGGLOBAL::GetGlobal((__int64)PsInitialSystemProcess, v2) + 88);
  if ( v5 )
  {
    v16 = 0;
    CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId(v4);
    v15 = (DXGFASTMUTEX *)(v5 + 80);
    if ( v5 == -80 )
    {
      v12 = WdLogNewEntry5_WdAssertion(0LL, v6);
      *(_QWORD *)(v12 + 24) = 760LL;
      WdLogEvent5_WdAssertion(v12);
    }
    CurrentThread = KeGetCurrentThread();
    if ( *((struct _KTHREAD **)v15 + 2) == CurrentThread )
    {
      v13 = WdLogNewEntry5_WdAssertion(CurrentThread, v6);
      *(_QWORD *)(v13 + 24) = 767LL;
      WdLogEvent5_WdAssertion(v13);
    }
    if ( v16 )
    {
      v14 = WdLogNewEntry5_WdCriticalError(CurrentThread, v6);
      *(_QWORD *)(v14 + 40) = &v15;
      *(_QWORD *)(v14 + 24) = 275LL;
      *(_QWORD *)(v14 + 32) = 4LL;
      *(_OWORD *)(v14 + 48) = 0LL;
      WdLogEvent5_WdCriticalError(v14);
    }
    DXGFASTMUTEX::Acquire(v15);
    v16 = 1;
    if ( (unsigned int)CurrentProcessSessionId >= *(_DWORD *)(v5 + 72) )
    {
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v15, v9);
    }
    else
    {
      v10 = *(_QWORD *)(*(_QWORD *)(v5 + 40) + 8 * CurrentProcessSessionId);
      v16 = 0;
      DXGFASTMUTEX::Release((struct _KTHREAD **)v15, v9);
      return (struct DXGSESSIONDATA *)v10;
    }
  }
  return (struct DXGSESSIONDATA *)v3;
}
