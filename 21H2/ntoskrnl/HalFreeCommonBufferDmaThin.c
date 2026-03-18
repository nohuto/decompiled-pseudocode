/*
 * XREFs of HalFreeCommonBufferDmaThin @ 0x140515B80
 * Callers:
 *     <none>
 * Callees:
 *     MmFreeContiguousMemory @ 0x140213DA0 (MmFreeContiguousMemory.c)
 *     MiFreePagesFromMdl @ 0x140221A30 (MiFreePagesFromMdl.c)
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     HalpPopCommonBufferEntry @ 0x14051253C (HalpPopCommonBufferEntry.c)
 *     HalpDmaDereferenceDomainObject @ 0x140514E28 (HalpDmaDereferenceDomainObject.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

unsigned __int64 __fastcall HalFreeCommonBufferDmaThin(__int64 a1, unsigned int a2, __int64 a3, void *a4)
{
  __int64 *v4; // r14
  __int64 v6; // r15
  unsigned __int64 result; // rax
  _BYTE *v9; // rsi
  struct _MDL *v10; // rdi

  v4 = *(__int64 **)(a1 + 504);
  v6 = a2;
  result = HalpPopCommonBufferEntry((unsigned __int64)a4, (__int64)v4);
  v9 = (_BYTE *)result;
  if ( result )
  {
    v10 = *(struct _MDL **)(result + 32);
    if ( v10 )
      ((void (__fastcall *)(__int64, __int64, unsigned __int64))qword_140C4BDB0)(
        v4[5],
        a3,
        (unsigned __int64)(v6 + 4095) >> 12);
    if ( v9[48] )
    {
      if ( v10 )
      {
        MmUnmapLockedPages(a4, v10);
        MiFreePagesFromMdl((ULONG_PTR)v10, 0);
        ExFreePoolWithTag(v10, 0);
      }
      else
      {
        MmFreeContiguousMemory(a4);
      }
    }
    ExFreePoolWithTag(v9, 0);
    return HalpDmaDereferenceDomainObject(v4);
  }
  return result;
}
