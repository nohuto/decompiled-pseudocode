/*
 * XREFs of HalFreeCommonBufferDmarThin @ 0x140516290
 * Callers:
 *     <none>
 * Callees:
 *     MiFreePagesFromMdl @ 0x140221A30 (MiFreePagesFromMdl.c)
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     HalpPopCommonBufferEntry @ 0x14051253C (HalpPopCommonBufferEntry.c)
 *     HalpDmaDereferenceDomainObject @ 0x140514E28 (HalpDmaDereferenceDomainObject.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

unsigned __int64 __fastcall HalFreeCommonBufferDmarThin(__int64 a1, unsigned int a2, __int64 a3, void *a4)
{
  __int64 *v4; // r14
  __int64 v6; // r12
  unsigned __int64 result; // rax
  void *v9; // rbp
  struct _MDL *v10; // rsi
  char v11; // di

  v4 = *(__int64 **)(a1 + 504);
  v6 = a2;
  result = HalpPopCommonBufferEntry((unsigned __int64)a4, (__int64)v4);
  v9 = (void *)result;
  if ( result )
  {
    v10 = *(struct _MDL **)(result + 32);
    v11 = *(_BYTE *)(result + 48);
    ((void (__fastcall *)(__int64, __int64, unsigned __int64))qword_140C4BDB0)(
      v4[5],
      a3,
      (unsigned __int64)(v6 + 4095) >> 12);
    if ( v11 )
    {
      MmUnmapLockedPages(a4, v10);
      MiFreePagesFromMdl((ULONG_PTR)v10, 0);
      ExFreePoolWithTag(v10, 0);
    }
    ExFreePoolWithTag(v9, 0);
    return HalpDmaDereferenceDomainObject(v4);
  }
  return result;
}
