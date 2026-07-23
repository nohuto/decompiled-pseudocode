/*
 * XREFs of MmDiscardDriverSection @ 0x140A96000
 * Callers:
 *     KeFreeInitializationCode @ 0x140A1EB5C (KeFreeInitializationCode.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140295510 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiLookupDataTableEntry @ 0x14030CDEC (MiLookupDataTableEntry.c)
 *     MmReleaseLoadLock @ 0x1406592C0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x140659320 (MmAcquireLoadLock.c)
 *     MiFreeInitializationCode @ 0x140757DAC (MiFreeInitializationCode.c)
 *     MiSnapDriverRange @ 0x140758088 (MiSnapDriverRange.c)
 */

_QWORD *__fastcall MmDiscardDriverSection(unsigned __int64 a1)
{
  _QWORD *v2; // rdi
  PVOID v3; // rbx
  _QWORD *result; // rax
  unsigned __int64 v5; // rsi
  struct _KTHREAD *Lock; // rbx
  unsigned __int64 v7; // [rsp+48h] [rbp+10h] BYREF
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0LL;
  v7 = 0LL;
  v2 = (_QWORD *)MiLookupDataTableEntry(a1, 1);
  v3 = (PVOID)v2[6];
  result = (_QWORD *)MI_IS_PHYSICAL_ADDRESS((unsigned __int64)v3);
  if ( !(_DWORD)result || v3 == PsNtosImageBase || v3 == PsHalImageBase )
  {
    result = (_QWORD *)MiSnapDriverRange((__int64)v2, 0, 0, a1, &v7, (unsigned __int64 *)&v8);
    v5 = v7;
    if ( v7 )
    {
      Lock = MmAcquireLoadLock();
      MiFreeInitializationCode(v2, v5, v8, 0);
      return MmReleaseLoadLock((__int64)Lock);
    }
  }
  return result;
}
