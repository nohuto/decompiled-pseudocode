/*
 * XREFs of ??1QDC_CACHE@@QEAA@XZ @ 0x1C0295654
 * Callers:
 *     ??1DXGGLOBAL@@AEAA@XZ @ 0x1C0268200 (--1DXGGLOBAL@@AEAA@XZ.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002CC0 (--_V@YAXPEAX@Z.c)
 *     ??_GDXGFASTMUTEX@@QEAAPEAXI@Z @ 0x1C0012E24 (--_GDXGFASTMUTEX@@QEAAPEAXI@Z.c)
 */

void __fastcall QDC_CACHE::~QDC_CACHE(QDC_CACHE *this, __int64 a2)
{
  DXGFASTMUTEX *v3; // rcx
  void **v4; // rbx
  __int64 v5; // rdi

  v3 = (DXGFASTMUTEX *)*((_QWORD *)this + 1);
  if ( v3 )
  {
    DXGFASTMUTEX::`scalar deleting destructor'(v3, a2);
    *((_QWORD *)this + 1) = 0LL;
  }
  v4 = (void **)((char *)this + 32);
  v5 = 18LL;
  do
  {
    if ( *v4 )
    {
      operator delete[](*v4);
      *v4 = 0LL;
    }
    v4 += 4;
    --v5;
  }
  while ( v5 );
}
