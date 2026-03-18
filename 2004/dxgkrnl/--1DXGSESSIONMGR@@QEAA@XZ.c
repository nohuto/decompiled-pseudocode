/*
 * XREFs of ??1DXGSESSIONMGR@@QEAA@XZ @ 0x1C029E064
 * Callers:
 *     ??1DXGGLOBAL@@AEAA@XZ @ 0x1C0267F50 (--1DXGGLOBAL@@AEAA@XZ.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C000653C (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ??_GDXGSESSIONDATA@@QEAAPEAXI@Z @ 0x1C00190E4 (--_GDXGSESSIONDATA@@QEAAPEAXI@Z.c)
 *     ??1CSERIALIZEDWORKQUEUE@@QEAA@XZ @ 0x1C0045544 (--1CSERIALIZEDWORKQUEUE@@QEAA@XZ.c)
 */

void __fastcall DXGSESSIONMGR::~DXGSESSIONMGR(DXGSESSIONMGR *this, __int64 a2)
{
  __int64 i; // rdi
  DXGSESSIONDATA *v4; // rcx
  char *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 18); i = (unsigned int)(i + 1) )
  {
    v4 = *(DXGSESSIONDATA **)(*((_QWORD *)this + 5) + 8 * i);
    if ( v4 )
    {
      DXGSESSIONDATA::`scalar deleting destructor'(v4);
      *(_QWORD *)(*((_QWORD *)this + 5) + 8 * i) = 0LL;
    }
  }
  v5 = (char *)*((_QWORD *)this + 5);
  if ( v5 != (char *)this + 48 )
  {
    operator delete[](v5);
    *((_QWORD *)this + 5) = 0LL;
  }
  if ( *((DXGSESSIONMGR **)this + 40) != (DXGSESSIONMGR *)((char *)this + 320) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5, a2);
    *(_QWORD *)(v6 + 24) = 4772LL;
    WdLogEvent5_WdAssertion(v6);
  }
  ExDeletePagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 192));
  CSERIALIZEDWORKQUEUE::~CSERIALIZEDWORKQUEUE((DXGSESSIONMGR *)((char *)this + 376), v7);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGSESSIONMGR *)((char *)this + 80), v8);
  DXGFASTMUTEX::~DXGFASTMUTEX(this, v9);
}
