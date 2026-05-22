/*
 * XREFs of ?_Tidy@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@AEAAXXZ @ 0x180009660
 * Callers:
 *     ??_GContextualProcessorBuffer@@MEAAPEAXI@Z @ 0x18000AE80 (--_GContextualProcessorBuffer@@MEAAPEAXI@Z.c)
 *     ??1?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@QEAA@XZ @ 0x18014B320 (--1-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContextualProc.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C660 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x180068368 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

void __fastcall std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Tidy(__int64 a1)
{
  _QWORD *v2; // rbp
  _QWORD *v3; // r14
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  void *v6; // rcx
  const struct std::nothrow_t *v7; // rdx
  _QWORD **v8; // rcx
  _QWORD *v9; // rcx
  _QWORD *v10; // rdi
  void *v11; // rcx
  const struct std::nothrow_t *v12; // rdx
  _QWORD **v13; // rcx
  _QWORD *v14; // rcx
  _QWORD *v15; // rdi
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // [rsp+50h] [rbp+8h] BYREF
  void *v19; // [rsp+58h] [rbp+10h] BYREF

  v2 = *(_QWORD **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(_QWORD **)(a1 + 8);
    if ( v2 != v3 )
    {
      v4 = v2 + 15;
      do
      {
        v5 = v4[3];
        if ( v5 )
        {
          v4[3] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
        }
        v6 = (void *)*(v4 - 2);
        if ( v6 )
        {
          v7 = (const struct std::nothrow_t *)((*v4 - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF8uLL);
          v18 = (unsigned __int64)v7;
          v19 = v6;
          if ( (unsigned __int64)v7 >= 0x1000 )
          {
            std::_Adjust_manually_vector_aligned(&v19, &v18);
            v7 = (const struct std::nothrow_t *)v18;
            v6 = v19;
          }
          operator delete(v6, v7);
          *(v4 - 2) = 0LL;
          *(v4 - 1) = 0LL;
          *v4 = 0LL;
        }
        v8 = (_QWORD **)*(v4 - 4);
        *v8[1] = 0LL;
        v9 = *v8;
        if ( v9 )
        {
          do
          {
            v10 = (_QWORD *)*v9;
            operator delete(v9, (const struct std::nothrow_t *)0x18);
            v9 = v10;
          }
          while ( v10 );
        }
        operator delete((void *)*(v4 - 4), (const struct std::nothrow_t *)0x18);
        v11 = (void *)*(v4 - 11);
        if ( v11 )
        {
          v12 = (const struct std::nothrow_t *)((*(v4 - 9) - (_QWORD)v11) & 0xFFFFFFFFFFFFFFF8uLL);
          v18 = (unsigned __int64)v12;
          v19 = v11;
          if ( (unsigned __int64)v12 >= 0x1000 )
          {
            std::_Adjust_manually_vector_aligned(&v19, &v18);
            v12 = (const struct std::nothrow_t *)v18;
            v11 = v19;
          }
          operator delete(v11, v12);
          *(v4 - 11) = 0LL;
          *(v4 - 10) = 0LL;
          *(v4 - 9) = 0LL;
        }
        v13 = (_QWORD **)*(v4 - 13);
        *v13[1] = 0LL;
        v14 = *v13;
        if ( v14 )
        {
          do
          {
            v15 = (_QWORD *)*v14;
            operator delete(v14, (const struct std::nothrow_t *)0x18);
            v14 = v15;
          }
          while ( v15 );
        }
        operator delete((void *)*(v4 - 13), (const struct std::nothrow_t *)0x18);
        v16 = *(v4 - 15);
        if ( v16 )
        {
          *(v4 - 15) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        }
        v4 += 20;
      }
      while ( v4 - 15 != v3 );
    }
    v17 = 160 * ((*(_QWORD *)(a1 + 16) - (_QWORD)v2) / 160LL);
    v18 = v17;
    v19 = v2;
    if ( v17 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v19, &v18);
      v17 = v18;
      v2 = v19;
    }
    operator delete(v2, (const struct std::nothrow_t *)v17);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
