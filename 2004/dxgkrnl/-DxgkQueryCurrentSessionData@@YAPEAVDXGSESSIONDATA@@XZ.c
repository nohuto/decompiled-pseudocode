/*
 * XREFs of ?DxgkQueryCurrentSessionData@@YAPEAVDXGSESSIONDATA@@XZ @ 0x1C013093C
 * Callers:
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C01306EC (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00029C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002B94 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C20 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

struct DXGSESSIONDATA *__fastcall DxgkQueryCurrentSessionData(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 CurrentProcessSessionId; // rsi
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  DXGFASTMUTEX *v16; // [rsp+20h] [rbp-18h] BYREF
  char v17; // [rsp+28h] [rbp-10h]

  if ( (PEPROCESS)PsGetCurrentProcess(a1, a2) == PsInitialSystemProcess )
    return 0LL;
  v3 = 0LL;
  v6 = *((_QWORD *)DXGGLOBAL::GetGlobal((__int64)PsInitialSystemProcess, v2) + 102);
  if ( v6 )
  {
    v17 = 0;
    CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId(v5, v4);
    v16 = (DXGFASTMUTEX *)(v6 + 80);
    if ( v6 == -80 )
    {
      v13 = WdLogNewEntry5_WdAssertion(0LL, v7);
      *(_QWORD *)(v13 + 24) = 762LL;
      WdLogEvent5_WdAssertion(v13);
    }
    CurrentThread = KeGetCurrentThread();
    if ( *((struct _KTHREAD **)v16 + 2) == CurrentThread )
    {
      v14 = WdLogNewEntry5_WdAssertion(CurrentThread, v7);
      *(_QWORD *)(v14 + 24) = 769LL;
      WdLogEvent5_WdAssertion(v14);
    }
    if ( v17 )
    {
      v15 = WdLogNewEntry5_WdCriticalError(CurrentThread, v7);
      *(_QWORD *)(v15 + 40) = &v16;
      *(_QWORD *)(v15 + 24) = 275LL;
      *(_QWORD *)(v15 + 32) = 4LL;
      *(_OWORD *)(v15 + 48) = 0LL;
      WdLogEvent5_WdCriticalError(v15);
    }
    DXGFASTMUTEX::Acquire(v16);
    v17 = 1;
    if ( (unsigned int)CurrentProcessSessionId >= *(_DWORD *)(v6 + 72) )
    {
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v16);
    }
    else
    {
      v11 = *(_QWORD *)(*(_QWORD *)(v6 + 40) + 8 * CurrentProcessSessionId);
      v17 = 0;
      DXGFASTMUTEX::Release((struct _KTHREAD **)v16, v10);
      return (struct DXGSESSIONDATA *)v11;
    }
  }
  return (struct DXGSESSIONDATA *)v3;
}
