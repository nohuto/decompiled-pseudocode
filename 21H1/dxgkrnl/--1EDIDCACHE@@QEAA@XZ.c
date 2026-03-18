/*
 * XREFs of ??1EDIDCACHE@@QEAA@XZ @ 0x1C0271D90
 * Callers:
 *     ??1DXGGLOBAL@@AEAA@XZ @ 0x1C0263C50 (--1DXGGLOBAL@@AEAA@XZ.c)
 * Callees:
 *     ??_GDXGFASTMUTEX@@QEAAPEAXI@Z @ 0x1C00114C8 (--_GDXGFASTMUTEX@@QEAAPEAXI@Z.c)
 */

void __fastcall EDIDCACHE::~EDIDCACHE(EDIDCACHE *this, __int64 a2)
{
  DXGFASTMUTEX *v3; // rcx

  v3 = (DXGFASTMUTEX *)*((_QWORD *)this + 76);
  if ( v3 )
  {
    DXGFASTMUTEX::`scalar deleting destructor'(v3, a2);
    *((_QWORD *)this + 76) = 0LL;
  }
}
