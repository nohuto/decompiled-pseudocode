/*
 * XREFs of MmDiscardDriverSection @ 0x140A92E70
 * Callers:
 *     KeFreeInitializationCode @ 0x140A1BB5C (KeFreeInitializationCode.c)
 * Callees:
 *     MiLookupDataTableEntry @ 0x1402E776C (MiLookupDataTableEntry.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14031CBD0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MmReleaseLoadLock @ 0x1406D1110 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406D1170 (MmAcquireLoadLock.c)
 *     MiFreeInitializationCode @ 0x14075EC6C (MiFreeInitializationCode.c)
 *     MiSnapDriverRange @ 0x14075EF48 (MiSnapDriverRange.c)
 */

_QWORD *__fastcall MmDiscardDriverSection(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  _QWORD *result; // rax
  unsigned __int64 v8; // rsi
  struct _KTHREAD *Lock; // rbx
  unsigned __int64 v10; // [rsp+48h] [rbp+10h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = 0LL;
  v10 = 0LL;
  v5 = MiLookupDataTableEntry(a1, 1LL, a3, a4);
  v6 = *(_QWORD *)(v5 + 48);
  result = (_QWORD *)MI_IS_PHYSICAL_ADDRESS(v6);
  if ( !(_DWORD)result || v6 == PsNtosImageBase || v6 == PsHalImageBase )
  {
    result = (_QWORD *)MiSnapDriverRange(v5, 0, 0, a1, &v10, (unsigned __int64 *)&v11);
    v8 = v10;
    if ( v10 )
    {
      Lock = MmAcquireLoadLock();
      MiFreeInitializationCode(v5, v8, v11, 0);
      return MmReleaseLoadLock((__int64)Lock);
    }
  }
  return result;
}
