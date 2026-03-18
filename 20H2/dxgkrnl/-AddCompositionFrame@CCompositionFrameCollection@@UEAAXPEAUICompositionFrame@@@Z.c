/*
 * XREFs of ?AddCompositionFrame@CCompositionFrameCollection@@UEAAXPEAUICompositionFrame@@@Z @ 0x1C0014DC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompositionFrameCollection::AddCompositionFrame(
        CCompositionFrameCollection *this,
        struct ICompositionFrame *a2)
{
  char *v2; // rsi
  char *v5; // rdi
  _QWORD *v6; // rbx
  __int64 v7; // rax

  v2 = (char *)this + 32;
  ExAcquirePushLockExclusiveEx((char *)this + 32, 0LL);
  v2[8] = 1;
  (**(void (__fastcall ***)(struct ICompositionFrame *))a2)(a2);
  v5 = (char *)this + 16;
  v6 = (_QWORD *)((char *)a2 + 16);
  v7 = *(_QWORD *)v5;
  if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 )
    __fastfail(3u);
  *v6 = v7;
  v6[1] = v5;
  *(_QWORD *)(v7 + 8) = v6;
  *(_QWORD *)v5 = v6;
  if ( v2[8] )
    ExReleasePushLockExclusiveEx(v2, 0LL);
  else
    ExReleasePushLockSharedEx(v2, 0LL);
}
