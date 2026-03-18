/*
 * XREFs of ??1OUTPUTDUPL_SESSION_MGR@@QEAA@XZ @ 0x1C014F418
 * Callers:
 *     ??_GOUTPUTDUPL_SESSION_MGR@@QEAAPEAXI@Z @ 0x1C00190C0 (--_GOUTPUTDUPL_SESSION_MGR@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??_GDXGFASTMUTEX@@QEAAPEAXI@Z @ 0x1C00114C8 (--_GDXGFASTMUTEX@@QEAAPEAXI@Z.c)
 *     ??_GAUTOEXPANDALLOCATION@@QEAAPEAXI@Z @ 0x1C00190F4 (--_GAUTOEXPANDALLOCATION@@QEAAPEAXI@Z.c)
 *     ?DestroyOutputDuplManager@@YAJPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C02949F8 (-DestroyOutputDuplManager@@YAJPEAVOUTPUTDUPL_MGR@@@Z.c)
 */

void __fastcall OUTPUTDUPL_SESSION_MGR::~OUTPUTDUPL_SESSION_MGR(OUTPUTDUPL_SESSION_MGR *this, __int64 a2)
{
  struct OUTPUTDUPL_MGR *v3; // rcx
  AUTOEXPANDALLOCATION *v4; // rcx
  DXGFASTMUTEX *v5; // rcx
  DXGFASTMUTEX *v6; // rcx

  v3 = (struct OUTPUTDUPL_MGR *)*((_QWORD *)this + 5);
  if ( v3 )
  {
    DestroyOutputDuplManager(v3);
    *((_QWORD *)this + 5) = 0LL;
  }
  v4 = (AUTOEXPANDALLOCATION *)*((_QWORD *)this + 2);
  if ( v4 )
  {
    AUTOEXPANDALLOCATION::`scalar deleting destructor'(v4);
    *((_QWORD *)this + 2) = 0LL;
    *((_DWORD *)this + 1) = 0;
  }
  v5 = (DXGFASTMUTEX *)*((_QWORD *)this + 4);
  if ( v5 )
  {
    DXGFASTMUTEX::`scalar deleting destructor'(v5, a2);
    *((_QWORD *)this + 4) = 0LL;
  }
  v6 = (DXGFASTMUTEX *)*((_QWORD *)this + 1);
  if ( v6 )
  {
    DXGFASTMUTEX::`scalar deleting destructor'(v6, a2);
    *((_QWORD *)this + 1) = 0LL;
  }
}
