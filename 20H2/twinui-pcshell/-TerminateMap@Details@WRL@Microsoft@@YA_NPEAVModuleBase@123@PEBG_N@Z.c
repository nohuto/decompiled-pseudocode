/*
 * XREFs of ?TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEBG_N@Z @ 0x18013BD7C
 * Callers:
 *     ??1?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAA@XZ @ 0x180138284 (--1-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAA@XZ.c)
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180011D78 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x180014220 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall Microsoft::WRL::Details::TerminateMap(
        Microsoft::WRL::Details *this,
        RTL_SRWLOCK *a2,
        const unsigned __int16 *a3)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 i; // rbp
  RTL_SRWLOCK *v6; // rax
  void **v7; // rcx
  void *v8; // rsi
  PVOID v9; // rax
  RTL_SRWLOCK *v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = a2;
  v4 = (*(__int64 (__fastcall **)(Microsoft::WRL::Details *, RTL_SRWLOCK *, const unsigned __int16 *))(*(_QWORD *)this + 32LL))(
         this,
         a2,
         a3)
     + 8;
  for ( i = (*(__int64 (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 48LL))(this); v4 < i; v4 += 8LL )
  {
    if ( *(_QWORD *)v4 )
    {
      (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 24LL))(this);
      if ( **(_QWORD **)(*(_QWORD *)v4 + 24LL) )
      {
        v6 = (RTL_SRWLOCK *)(*(__int64 (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 56LL))(this);
        Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v11, v6);
        v7 = *(void ***)(*(_QWORD *)v4 + 24LL);
        v8 = *v7;
        if ( *v7 )
        {
          *v7 = 0LL;
          Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v11);
          v9 = DecodePointer(v8);
          (*(void (__fastcall **)(PVOID))(*(_QWORD *)v9 + 16LL))(v9);
        }
        else
        {
          Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v11);
        }
      }
    }
  }
  return (*(unsigned int (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 24LL))(this) == 0;
}
