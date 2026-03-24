/*
 * XREFs of ??1ADAPTER_DISPLAY@@QEAA@XZ @ 0x1C0210328
 * Callers:
 *     ??_GADAPTER_DISPLAY@@QEAAPEAXI@Z @ 0x1C0037010 (--_GADAPTER_DISPLAY@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002CC0 (--_V@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C00066E0 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0019134 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C001C958 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?RemoveIndirectOutputDuplMgr@DXGGLOBAL@@QEAAJPEAVOUTPUTDUPL_MGR_INDIRECT@@@Z @ 0x1C026B274 (-RemoveIndirectOutputDuplMgr@DXGGLOBAL@@QEAAJPEAVOUTPUTDUPL_MGR_INDIRECT@@@Z.c)
 *     ?DestroyOutputDuplManager@@YAJPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C02993C8 (-DestroyOutputDuplManager@@YAJPEAVOUTPUTDUPL_MGR@@@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::~ADAPTER_DISPLAY(ADAPTER_DISPLAY *this, __int64 a2)
{
  struct OUTPUTDUPL_MGR *v3; // rcx
  struct OUTPUTDUPL_MGR_INDIRECT *v4; // rbx
  DXGGLOBAL *Global; // rax
  char *v6; // rcx
  char *v7; // rbx
  struct _KEVENT *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax

  v3 = (struct OUTPUTDUPL_MGR *)*((_QWORD *)this + 13);
  if ( v3 )
  {
    if ( *((_BYTE *)v3 + 72) )
    {
      v4 = (struct OUTPUTDUPL_MGR *)((char *)v3 - 24);
      Global = DXGGLOBAL::GetGlobal((__int64)v3, a2);
      DXGGLOBAL::RemoveIndirectOutputDuplMgr(Global, v4);
      v3 = (struct OUTPUTDUPL_MGR *)*((_QWORD *)this + 13);
    }
    DestroyOutputDuplManager(v3);
    *((_QWORD *)this + 13) = 0LL;
  }
  v6 = (char *)*((_QWORD *)this + 14);
  if ( v6 )
  {
    v7 = v6 - 8;
    `vector destructor iterator'(
      v6,
      3968LL,
      *((_QWORD *)v6 - 1),
      (void (__fastcall *)(char *))DISPLAY_SOURCE::~DISPLAY_SOURCE);
    operator delete[](v7);
    *((_QWORD *)this + 14) = 0LL;
  }
  v8 = (struct _KEVENT *)*((_QWORD *)this + 71);
  if ( v8 )
  {
    KeSetEvent(v8, 0, 0);
    ObfDereferenceObject(*((PVOID *)this + 71));
    *((_QWORD *)this + 71) = 0LL;
  }
  if ( *((ADAPTER_DISPLAY **)this + 77) != (ADAPTER_DISPLAY *)((char *)this + 616) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8, a2);
    *(_QWORD *)(v9 + 24) = 953LL;
    WdLogEvent5_WdAssertion(v9);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_DISPLAY *)((char *)this + 576), a2);
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_DISPLAY *)((char *)this + 528), v10);
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_DISPLAY *)((char *)this + 464), v11);
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_DISPLAY *)((char *)this + 408), v12);
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_DISPLAY *)((char *)this + 328), v13);
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_DISPLAY *)((char *)this + 256), v14);
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER **)this + 27, 0LL);
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_DISPLAY *)((char *)this + 176), v15);
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_DISPLAY *)((char *)this + 136), v16);
  if ( *((ADAPTER_DISPLAY **)this + 8) != (ADAPTER_DISPLAY *)((char *)this + 64) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v18, v17);
    *(_QWORD *)(v19 + 24) = 953LL;
    WdLogEvent5_WdAssertion(v19);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((ADAPTER_DISPLAY *)((char *)this + 24), v17);
  *((_QWORD *)this + 2) = 0LL;
}
