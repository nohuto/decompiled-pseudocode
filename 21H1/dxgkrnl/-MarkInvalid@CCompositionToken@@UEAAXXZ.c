/*
 * XREFs of ?MarkInvalid@CCompositionToken@@UEAAXXZ @ 0x1C0017710
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0004704 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompositionToken::MarkInvalid(CCompositionToken *this)
{
  char *v2; // rcx

  if ( (**(unsigned __int8 (__fastcall ***)(CCompositionToken *))this)(this) )
  {
    if ( (**((unsigned __int8 (__fastcall ***)(char *))this + 5))((char *)this + 40) )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)this + 48, 0LL);
      *((_QWORD *)this + 7) = KeGetCurrentThread();
      if ( !(**((unsigned __int8 (__fastcall ***)(char *))this + 5))((char *)this + 40) )
        CPushLock::ReleaseLock((CCompositionToken *)((char *)this + 40));
    }
    *((_BYTE *)this + 64) = 0;
    (*(void (__fastcall **)(char *))(*((_QWORD *)this + 1) + 56LL))((char *)this + 8);
    v2 = (char *)this + 48;
    if ( KeGetCurrentThread() == *((struct _KTHREAD **)this + 7) )
    {
      *((_QWORD *)this + 7) = 0LL;
      ExReleasePushLockExclusiveEx(v2, 0LL);
    }
    else
    {
      ExReleasePushLockSharedEx(v2, 0LL);
    }
    KeLeaveCriticalRegion();
  }
}
