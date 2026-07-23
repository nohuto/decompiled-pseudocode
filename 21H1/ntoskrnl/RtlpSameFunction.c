/*
 * XREFs of RtlpSameFunction @ 0x140580A50
 * Callers:
 *     RtlpxVirtualUnwind @ 0x14032D9F0 (RtlpxVirtualUnwind.c)
 *     sub_140A19EE4 @ 0x140A19EE4 (sub_140A19EE4.c)
 * Callees:
 *     RtlpLookupFunctionEntryForStackWalks @ 0x14032D7E0 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlLookupFunctionEntry @ 0x14032E660 (RtlLookupFunctionEntry.c)
 *     RtlpLookupPrimaryFunctionEntry @ 0x1403CB5D0 (RtlpLookupPrimaryFunctionEntry.c)
 */

_BYTE *__fastcall RtlpSameFunction(_BYTE *a1, __int64 a2, unsigned __int64 a3)
{
  _BYTE *v4; // rdi
  PRUNTIME_FUNCTION v5; // rax
  unsigned __int64 v6; // rdx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]
  unsigned __int64 ImageBase; // [rsp+60h] [rbp+18h] BYREF

  ImageBase = 0LL;
  v4 = RtlpLookupPrimaryFunctionEntry(a1, a2, a3);
  if ( a3 > 0x7FFFFFFEFFFFLL )
  {
    v5 = RtlLookupFunctionEntry(a3, &ImageBase, 0LL);
    v6 = ImageBase;
  }
  else
  {
    v8 = 0LL;
    v9 = 0LL;
    v5 = (PRUNTIME_FUNCTION)RtlpLookupFunctionEntryForStackWalks(a3, (__int64)&v8);
    if ( !v5 )
      return 0LL;
    v6 = *((_QWORD *)&v8 + 1);
  }
  if ( v5 && *(_DWORD *)v4 == *(_DWORD *)RtlpLookupPrimaryFunctionEntry(v5, v6, a3) )
    return v4;
  return 0LL;
}
