/*
 * XREFs of ?ProcessTerminated@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0114230
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01142B4 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     OutputDuplProcessTerminate @ 0x1C013C3F4 (OutputDuplProcessTerminate.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

void __fastcall OUTPUTDUPL_SESSION_MGR::ProcessTerminated(struct DXGFASTMUTEX *const *this, struct _EPROCESS *a2)
{
  __int64 v4; // rdx
  unsigned int v5; // r8d
  __int64 v6; // rdi
  unsigned int v7; // eax
  struct _EPROCESS **v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rax
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, this[1], 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
  v5 = *((_DWORD *)this + 1);
  v6 = **((_QWORD **)this + 2);
  v7 = 0;
  if ( v5 )
  {
    v8 = (struct _EPROCESS **)(v6 + 8);
    while ( a2 != *v8 )
    {
      ++v7;
      v8 += 4;
      if ( v7 >= v5 )
        goto LABEL_5;
    }
    v9 = 32LL * v7;
    if ( *(_DWORD *)(v9 + v6) )
    {
      v10 = WdLogNewEntry5_WdAssertion(v8, v4);
      *(_QWORD *)(v10 + 24) = 4356LL;
      WdLogEvent5_WdAssertion(v10);
    }
    *(_QWORD *)(v9 + v6 + 8) = 0LL;
  }
LABEL_5:
  if ( v11[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11, v4);
}
