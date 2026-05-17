/*
 * XREFs of _TppCleanupGroupMemberDestroy@4 @ 0x4B2B250C
 * Callers:
 *     _TppTimerpFree@4 @ 0x4B2B1F30 (_TppTimerpFree@4.c)
 *     _TppFreeWait@4 @ 0x4B2B24C0 (_TppFreeWait@4.c)
 *     _TppWorkInitialize@24 @ 0x4B2B492B (_TppWorkInitialize@24.c)
 *     _TpAllocIoCompletion@20 @ 0x4B2E6E50 (_TpAllocIoCompletion@20.c)
 *     _TppIopFree@4 @ 0x4B2E71A0 (_TppIopFree@4.c)
 *     _TpSimpleTryPost@12 @ 0x4B2E7210 (_TpSimpleTryPost@12.c)
 *     _TppAlpcpFree@4 @ 0x4B2E99B0 (_TppAlpcpFree@4.c)
 *     _TppAllocAlpcCompletion@24 @ 0x4B2E9A8F (_TppAllocAlpcCompletion@24.c)
 *     _TppWorkpFree@4 @ 0x4B2EC540 (_TppWorkpFree@4.c)
 *     _TppSimplepFree@4 @ 0x4B2ECE40 (_TppSimplepFree@4.c)
 *     _TpAllocJobNotification@20 @ 0x4B383550 (_TpAllocJobNotification@20.c)
 *     _TppJobpFree@4 @ 0x4B383990 (_TppJobpFree@4.c)
 * Callees:
 *     _TppPoolpFree@4 @ 0x4B2AB6C5 (_TppPoolpFree@4.c)
 *     _TppCleanupGroupMemberDestroy@4 @ 0x4B2B250C (_TppCleanupGroupMemberDestroy@4.c)
 *     _RtlReleaseActivationContext@4 @ 0x4B2B2660 (_RtlReleaseActivationContext@4.c)
 *     _TppPoolpDereferenceGlobalPool@8 @ 0x4B2B26D2 (_TppPoolpDereferenceGlobalPool@8.c)
 *     _TppCallbackEpilog@4 @ 0x4B2B6183 (_TppCallbackEpilog@4.c)
 *     _TppCallbackCheckThreadBeforeCallback@4 @ 0x4B2B6D20 (_TppCallbackCheckThreadBeforeCallback@4.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _TppCleanupGroupRemoveMember@4 @ 0x4B2EC7E9 (_TppCleanupGroupRemoveMember@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     __SEH_prolog4_GS @ 0x4B307B20 (__SEH_prolog4_GS.c)
 */

int __thiscall TppCleanupGroupMemberDestroy(_DWORD *this)
{
  int v2; // eax
  _DWORD *v3; // eax
  int v4; // edx
  _DWORD *v5; // ecx
  volatile signed __int32 *v6; // ecx
  void *v7; // edx
  int *v8; // ecx
  void (__thiscall *v9)(_DWORD, _DWORD *, int); // edi
  int v10; // esi
  volatile signed __int32 *v11; // ecx
  int result; // eax
  _DWORD *v13; // eax
  int v14; // edx
  _DWORD *v15; // ecx
  _DWORD v16[39]; // [esp+14h] [ebp-B4h] BYREF
  CPPEH_RECORD ms_exc; // [esp+B0h] [ebp-18h]

  if ( this[2] )
  {
    TppCleanupGroupRemoveMember();
    v11 = (volatile signed __int32 *)this[2];
    if ( !_InterlockedExchangeAdd(v11, 0xFFFFFFFF) )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag, v11);
  }
  if ( this[14] != -1 )
    RtlReleaseActivationContext(this[14]);
  v2 = this[23];
  if ( !v2 )
  {
    RtlAcquireSRWLockExclusive(&TppCleanupGroupMemberpNoPoolListLock);
    ms_exc.registration.TryLevel = 1;
    v13 = this + 24;
    v14 = this[24];
    v15 = (_DWORD *)this[25];
    if ( *(_DWORD **)(v14 + 4) == this + 24 && (_DWORD *)*v15 == v13 )
    {
      *v15 = v14;
      *(_DWORD *)(v14 + 4) = v15;
      this[25] = this + 24;
      *v13 = v13;
      ms_exc.registration.TryLevel = -2;
      result = RtlReleaseSRWLockExclusive(&TppCleanupGroupMemberpNoPoolListLock);
      goto LABEL_10;
    }
LABEL_19:
    __fastfail(3u);
  }
  RtlAcquireSRWLockExclusive(v2 + 44);
  ms_exc.registration.TryLevel = 0;
  v3 = this + 24;
  v4 = this[24];
  v5 = (_DWORD *)this[25];
  if ( *(_DWORD **)(v4 + 4) != this + 24 || (_DWORD *)*v5 != v3 )
    goto LABEL_19;
  *v5 = v4;
  *(_DWORD *)(v4 + 4) = v5;
  this[25] = this + 24;
  *v3 = v3;
  ms_exc.registration.TryLevel = -2;
  result = RtlReleaseSRWLockExclusive(this[23] + 44);
  v6 = (volatile signed __int32 *)this[23];
  if ( v6 == (volatile signed __int32 *)TppPoolpGlobalPool )
  {
    v7 = &TppPoolpGlobalPoolLock;
    v8 = &TppPoolpGlobalPool;
LABEL_9:
    result = TppPoolpDereferenceGlobalPool(v8, v7);
    goto LABEL_10;
  }
  if ( v6 == (volatile signed __int32 *)TppPoolpSerializedPool )
  {
    v7 = &TppPoolpSerializedPoolLock;
    v8 = &TppPoolpSerializedPool;
    goto LABEL_9;
  }
  if ( !_InterlockedDecrement(v6) )
    result = TppPoolpFree((int)v6);
LABEL_10:
  v9 = (void (__thiscall *)(_DWORD, _DWORD *, int))this[4];
  if ( v9 )
  {
    memset(v16, 0, 0x98u);
    v16[12] = v9;
    v10 = this[13];
    v16[13] = v10;
    TppCallbackCheckThreadBeforeCallback(v16);
    v9(v9, v16, v10);
    return TppCallbackEpilog(v16);
  }
  return result;
}
