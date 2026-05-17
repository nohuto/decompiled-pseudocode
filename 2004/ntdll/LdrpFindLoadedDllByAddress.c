/*
 * XREFs of LdrpFindLoadedDllByAddress @ 0x18006A290
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x18002FDC0 (LdrGetProcedureAddressForCaller.c)
 *     LdrFindEntryForAddress @ 0x18006A240 (LdrFindEntryForAddress.c)
 *     AVrfCallAPILookupCallback @ 0x1800D9650 (AVrfCallAPILookupCallback.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall LdrpFindLoadedDllByAddress(
        unsigned __int64 a1,
        unsigned __int64 *a2,
        _DWORD *a3,
        unsigned __int64 a4)
{
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // rax

  RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, (unsigned __int64)a2, (unsigned __int64)a3, a4);
  v7 = LdrpModuleBaseAddressIndex;
  if ( (qword_18016B470 & 1) != 0 && LdrpModuleBaseAddressIndex )
    v7 = (unsigned __int64)&LdrpModuleBaseAddressIndex ^ LdrpModuleBaseAddressIndex;
  while ( v7 )
  {
    v8 = *(_QWORD *)(v7 - 152);
    if ( a1 >= v8 )
    {
      if ( a1 < v8 + *(unsigned int *)(v7 - 136) )
      {
        v11 = v7 - 200;
        v12 = *(_QWORD *)(v7 - 200 + 152);
        if ( *(_DWORD *)(v12 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v12 - 56LL) & 0x20) == 0 )
          _InterlockedIncrement((volatile signed __int32 *)(v11 + 276));
        *a2 = v11;
        if ( a3 )
          *a3 = *(_DWORD *)(*(_QWORD *)(v11 + 152) + 56LL);
        break;
      }
      v9 = *(_QWORD *)(v7 + 8);
    }
    else
    {
      v9 = *(_QWORD *)v7;
    }
    if ( (qword_18016B470 & 1) != 0 && v9 )
      v7 ^= v9;
    else
      v7 = v9;
  }
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  return v7 == 0 ? 0xC0000135 : 0;
}
