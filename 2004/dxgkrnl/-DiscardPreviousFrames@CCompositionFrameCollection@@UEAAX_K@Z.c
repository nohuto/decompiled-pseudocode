/*
 * XREFs of ?DiscardPreviousFrames@CCompositionFrameCollection@@UEAAX_K@Z @ 0x1C00162E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompositionFrameCollection::DiscardPreviousFrames(
        CCompositionFrameCollection *this,
        unsigned __int64 a2)
{
  char *v2; // rdi
  CCompositionFrameCollection *v5; // rbp
  CCompositionFrameCollection *v6; // rsi
  __int64 v7; // rax
  CCompositionFrameCollection *v8; // rbx

  v2 = (char *)this + 32;
  ExAcquirePushLockExclusiveEx((char *)this + 32, 0LL);
  v2[8] = 1;
  v5 = (CCompositionFrameCollection *)((char *)this + 16);
  v6 = (CCompositionFrameCollection *)*((_QWORD *)this + 3);
  if ( v6 != (CCompositionFrameCollection *)((char *)this + 16) )
  {
    do
    {
      if ( (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)v6 - 2) + 72LL))((__int64)v6 - 16) >= a2 )
        break;
      v7 = *(_QWORD *)v6;
      v8 = (CCompositionFrameCollection *)*((_QWORD *)v6 + 1);
      if ( *(CCompositionFrameCollection **)(*(_QWORD *)v6 + 8LL) != v6 || *(CCompositionFrameCollection **)v8 != v6 )
        __fastfail(3u);
      *(_QWORD *)v8 = v7;
      *(_QWORD *)(v7 + 8) = v8;
      (*(void (__fastcall **)(__int64))(*((_QWORD *)v6 - 2) + 8LL))((__int64)v6 - 16);
      v6 = v8;
    }
    while ( v8 != v5 );
  }
  if ( v2[8] )
    ExReleasePushLockExclusiveEx(v2, 0LL);
  else
    ExReleasePushLockSharedEx(v2, 0LL);
}
