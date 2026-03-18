/*
 * XREFs of ?DestroySourceContextLists@OUTPUTDUPL_MGR@@AEAAXXZ @ 0x1C0320394
 * Callers:
 *     ??1OUTPUTDUPL_MGR@@QEAA@XZ @ 0x1C031F118 (--1OUTPUTDUPL_MGR@@QEAA@XZ.c)
 *     ?ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z @ 0x1C03237D0 (-ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z.c)
 * Callees:
 *     ??_GAUTOEXPANDALLOCATION@@QEAAPEAXI@Z @ 0x1C000272C (--_GAUTOEXPANDALLOCATION@@QEAAPEAXI@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C0027574 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z @ 0x1C0055A48 (--_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z.c)
 */

void __fastcall OUTPUTDUPL_MGR::DestroySourceContextLists(OUTPUTDUPL_MGR *this)
{
  char *v2; // rcx
  __int64 v3; // rbp
  __int64 v4; // rsi
  AUTOEXPANDALLOCATION *v5; // rcx
  OUTPUTDUPL_CONTEXT **v6; // rcx
  __int64 i; // r14
  char *v8; // rbx

  v2 = (char *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    v3 = 0LL;
    if ( *((_DWORD *)this + 19) )
    {
      do
      {
        v4 = *((_QWORD *)this + 2);
        v5 = *(AUTOEXPANDALLOCATION **)(v4 + 72 * v3 + 56);
        if ( v5 )
        {
          AUTOEXPANDALLOCATION::`scalar deleting destructor'(v5);
          *(_QWORD *)(v4 + 72 * v3 + 56) = 0LL;
        }
        v6 = *(OUTPUTDUPL_CONTEXT ***)(v4 + 72 * v3 + 48);
        if ( v6 )
        {
          for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 2); i = (unsigned int)(i + 1) )
          {
            v6 = *(OUTPUTDUPL_CONTEXT ***)(v4 + 72 * v3 + 48);
            if ( v6[i] )
            {
              OUTPUTDUPL_CONTEXT::`scalar deleting destructor'(v6[i]);
              *(_QWORD *)(*(_QWORD *)(v4 + 72 * v3 + 48) + 8 * i) = 0LL;
              v6 = *(OUTPUTDUPL_CONTEXT ***)(v4 + 72 * v3 + 48);
            }
          }
          operator delete[](v6);
          *(_QWORD *)(v4 + 72 * v3 + 48) = 0LL;
        }
        v3 = (unsigned int)(v3 + 1);
      }
      while ( (unsigned int)v3 < *((_DWORD *)this + 19) );
      v2 = (char *)*((_QWORD *)this + 2);
    }
    if ( v2 )
    {
      v8 = v2 - 8;
      `vector destructor iterator'(
        v2,
        72LL,
        *((_QWORD *)v2 - 1),
        (void (__fastcall *)(char *))_OUTPUTDUPL_CONTEXTLIST::~_OUTPUTDUPL_CONTEXTLIST);
      operator delete[](v8);
    }
    *((_QWORD *)this + 2) = 0LL;
    *((_DWORD *)this + 19) = 0;
  }
}
