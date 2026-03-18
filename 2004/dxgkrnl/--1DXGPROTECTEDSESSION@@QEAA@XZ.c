/*
 * XREFs of ??1DXGPROTECTEDSESSION@@QEAA@XZ @ 0x1C0047E38
 * Callers:
 *     ??_GDXGPROTECTEDSESSION@@QEAAPEAXI@Z @ 0x1C0047F6C (--_GDXGPROTECTEDSESSION@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C000653C (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C0113088 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 */

void __fastcall DXGPROTECTEDSESSION::~DXGPROTECTEDSESSION(struct DXGSYNCOBJECT **this, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  struct DXGSYNCOBJECT *v7; // rdi
  DXGGLOBAL *Global; // rax
  struct DXGSYNCOBJECT *v9; // rcx
  struct DXGSYNCOBJECT *v10; // rcx

  if ( *((_DWORD *)this + 18) )
  {
    v3 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v3 + 24) = 44LL;
    WdLogEvent5_WdAssertion(v3);
  }
  if ( this[18] )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v4 + 24) = 45LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( *((_DWORD *)this + 6) != 3 )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v5 + 24) = 46LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( *((_BYTE *)this + 136) )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v6 + 24) = 47LL;
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = this[14];
  if ( v7 )
  {
    Global = DXGGLOBAL::GetGlobal((__int64)this, a2);
    DXGGLOBAL::DestroySyncObject(Global, v7, 0);
    this[14] = 0LL;
  }
  v9 = this[10];
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0);
    this[10] = 0LL;
  }
  v10 = this[12];
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0);
    this[12] = 0LL;
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGFASTMUTEX *)(this + 4), a2);
  this[2] = 0LL;
}
