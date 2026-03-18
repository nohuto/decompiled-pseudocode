/*
 * XREFs of ?DestroySourceContextLists@OUTPUTDUPL_MGR@@AEAAXXZ @ 0x1C0298F58
 * Callers:
 *     ??1OUTPUTDUPL_MGR@@QEAA@XZ @ 0x1C02980F8 (--1OUTPUTDUPL_MGR@@QEAA@XZ.c)
 *     ?ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z @ 0x1C029BEF4 (-ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ??_GAUTOEXPANDALLOCATION@@QEAAPEAXI@Z @ 0x1C001A8F8 (--_GAUTOEXPANDALLOCATION@@QEAAPEAXI@Z.c)
 *     ??_GDXGFASTMUTEX@@QEAAPEAXI@Z @ 0x1C001ADC4 (--_GDXGFASTMUTEX@@QEAAPEAXI@Z.c)
 *     ??_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z @ 0x1C004980C (--_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z.c)
 */

void __fastcall OUTPUTDUPL_MGR::DestroySourceContextLists(OUTPUTDUPL_MGR *this, __int64 a2)
{
  void *v3; // rcx
  unsigned int v4; // ebp
  __int64 v5; // rsi
  __int64 v6; // rdi
  AUTOEXPANDALLOCATION *v7; // rcx
  DXGFASTMUTEX *v8; // rcx
  OUTPUTDUPL_CONTEXT **v9; // rcx
  __int64 i; // r14

  v3 = (void *)*((_QWORD *)this + 2);
  if ( v3 )
  {
    v4 = 0;
    if ( *((_DWORD *)this + 13) )
    {
      do
      {
        v5 = *((_QWORD *)this + 2);
        v6 = 32LL * v4;
        v7 = *(AUTOEXPANDALLOCATION **)(v6 + v5 + 16);
        if ( v7 )
        {
          AUTOEXPANDALLOCATION::`scalar deleting destructor'(v7);
          *(_QWORD *)(v6 + v5 + 16) = 0LL;
        }
        v8 = *(DXGFASTMUTEX **)(v6 + v5);
        if ( v8 )
        {
          DXGFASTMUTEX::`scalar deleting destructor'(v8, a2);
          *(_QWORD *)(v6 + v5) = 0LL;
        }
        v9 = *(OUTPUTDUPL_CONTEXT ***)(v6 + v5 + 8);
        if ( v9 )
        {
          for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 2); i = (unsigned int)(i + 1) )
          {
            v9 = *(OUTPUTDUPL_CONTEXT ***)(v6 + v5 + 8);
            if ( v9[i] )
            {
              OUTPUTDUPL_CONTEXT::`scalar deleting destructor'(v9[i]);
              *(_QWORD *)(*(_QWORD *)(v6 + v5 + 8) + 8 * i) = 0LL;
              v9 = *(OUTPUTDUPL_CONTEXT ***)(v6 + v5 + 8);
            }
          }
          operator delete[](v9);
          *(_QWORD *)(v6 + v5 + 8) = 0LL;
        }
        ++v4;
      }
      while ( v4 < *((_DWORD *)this + 13) );
      v3 = (void *)*((_QWORD *)this + 2);
    }
    operator delete[](v3);
    *((_QWORD *)this + 2) = 0LL;
    *((_DWORD *)this + 13) = 0;
  }
}
