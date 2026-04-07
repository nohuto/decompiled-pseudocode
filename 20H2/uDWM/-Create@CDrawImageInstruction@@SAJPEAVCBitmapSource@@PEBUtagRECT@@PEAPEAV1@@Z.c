/*
 * XREFs of ?Create@CDrawImageInstruction@@SAJPEAVCBitmapSource@@PEBUtagRECT@@PEAPEAV1@@Z @ 0x18003CC98
 * Callers:
 *     ?ValidateResources@CText@@AEAAJXZ @ 0x180016924 (-ValidateResources@CText@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017394 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawImageInstruction::Create(
        struct CBitmapSource *a1,
        const struct tagRECT *a2,
        struct CDrawImageInstruction **a3)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  unsigned int v8; // ebx
  CBaseObject *v9; // rcx
  __int64 v10; // rax

  v6 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         40LL);
  v7 = v6;
  v8 = 0;
  if ( v6 )
  {
    *(_DWORD *)(v6 + 8) = 1;
    *(_QWORD *)v6 = &CDrawImageInstruction::`vftable';
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    v9 = *(CBaseObject **)(v7 + 32);
    if ( v9 )
    {
      CBaseObject::Release(v9);
      *(_QWORD *)(v7 + 32) = 0LL;
    }
    if ( a1 )
    {
      *(_QWORD *)(v7 + 32) = *((_QWORD *)a1 + 2);
      v10 = *((_QWORD *)a1 + 2);
      if ( v10 )
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    }
    if ( a2 )
      *(struct tagRECT *)(v7 + 16) = *a2;
    else
      *(_OWORD *)(v7 + 16) = 0LL;
    *a3 = (struct CDrawImageInstruction *)v7;
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x30u);
  }
  return v8;
}
