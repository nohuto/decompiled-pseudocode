/*
 * XREFs of ?DestroyGlobal@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C028F0B8
 * Callers:
 *     ??1DXGKEYEDMUTEX@@QEAA@XZ @ 0x1C028E420 (--1DXGKEYEDMUTEX@@QEAA@XZ.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0006568 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?FreeHandle@DXGGLOBAL@@QEAAXI@Z @ 0x1C0018734 (-FreeHandle@DXGGLOBAL@@QEAAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall DXGKEYEDMUTEX::DestroyGlobal(DXGKEYEDMUTEX *this, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdx
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( *((_QWORD *)this + 3) )
  {
    v3 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v3 + 24) = 3656LL;
    WdLogEvent5_WdAssertion(v3);
  }
  if ( *((DXGKEYEDMUTEX **)this + 12) != (DXGKEYEDMUTEX *)((char *)this + 96) )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v4 + 24) = 3657LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( !*((_BYTE *)this + 168) )
  {
    if ( *((_DWORD *)this + 8) )
    {
      DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v11, a2);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
      DXGGLOBAL::FreeHandle(*((struct _KTHREAD ***)this + 2), *((unsigned int *)this + 8));
      *((_DWORD *)this + 8) = 0;
      if ( v11[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11, v5);
    }
  }
  operator delete[](*((void **)this + 19));
  *((_QWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 40) = 0;
  v8 = (_QWORD *)WdLogNewEntry5_WdEvent(v7, v6);
  v8[3] = this;
  v9 = *((unsigned int *)this + 8);
  v8[4] = v9;
  v8[5] = DXGPROCESS::GetCurrent(v9, v10);
  WdLogEvent5_WdEvent(v8);
}
