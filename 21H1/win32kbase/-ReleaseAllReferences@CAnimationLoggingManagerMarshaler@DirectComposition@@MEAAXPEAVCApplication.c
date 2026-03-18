/*
 * XREFs of ?ReleaseAllReferences@CAnimationLoggingManagerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00C1060
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     ?SetCount@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C00BFBBC (-SetCount@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     ?ReleaseCompositorComment@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAAXXZ @ 0x1C00C0B08 (-ReleaseCompositorComment@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAAXXZ.c)
 *     memmove @ 0x1C00D2F00 (memmove.c)
 */

void __fastcall DirectComposition::CAnimationLoggingManagerMarshaler::ReleaseAllReferences(
        DirectComposition::CAnimationLoggingManagerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        __int64 a3)
{
  unsigned __int64 v4; // rdi
  DirectComposition::CDCompDynamicArrayBase *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  size_t v8; // r8
  __int64 Src; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 28) )
  {
    v4 = 0LL;
    v5 = (DirectComposition::CAnimationLoggingManagerMarshaler *)((char *)this + 200);
    do
    {
      v6 = v4 * *((_QWORD *)v5 + 4);
      v7 = *(_QWORD *)(v6 + *(_QWORD *)v5);
      if ( v7 )
      {
        Win32FreePool(v7, v6, a3);
        v8 = *((_QWORD *)v5 + 4);
        Src = 0LL;
        memmove((void *)(*(_QWORD *)v5 + v4 * v8), &Src, v8);
      }
      ++v4;
    }
    while ( v4 < *((_QWORD *)this + 28) );
    *((_DWORD *)this + 60) = 0;
    DirectComposition::CDCompDynamicArrayBase::SetCount(v5, 0LL, 0x6D6C4344u);
  }
  DirectComposition::CAnimationLoggingManagerMarshaler::ReleaseCompositorComment(this, (__int64)a2, a3);
}
