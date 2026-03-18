/*
 * XREFs of ?IsAnalogExclusive@CFlipToken@@UEBA_NXZ @ 0x1C00177F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0004704 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CFlipToken::IsAnalogExclusive(CFlipToken *this)
{
  __int64 v1; // rdi
  char v2; // bl
  __int64 v3; // rcx
  char v4; // si

  v1 = *((_QWORD *)this + 4);
  v2 = 0;
  if ( (**(unsigned __int8 (__fastcall ***)(__int64))(v1 + 48))(v1 + 48) )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v1 + 56, 0LL);
    if ( (**(unsigned __int8 (__fastcall ***)(__int64))(v1 + 48))(v1 + 48) )
    {
      v3 = v1 + 56;
      v4 = *(_BYTE *)(v1 + 128);
      if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v1 + 64) )
      {
        *(_QWORD *)(v1 + 64) = 0LL;
        ExReleasePushLockExclusiveEx(v3, 0LL);
      }
      else
      {
        ExReleasePushLockSharedEx(v3, 0LL);
      }
      KeLeaveCriticalRegion();
      if ( v4 )
        return 1;
    }
    else
    {
      CPushLock::ReleaseLock((CPushLock *)(v1 + 48));
    }
  }
  return v2;
}
