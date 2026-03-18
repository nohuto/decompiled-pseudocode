/*
 * XREFs of PspSiloInitializeSystemRootBuffer @ 0x14090286C
 * Callers:
 *     PspSiloInitializeUserSharedData @ 0x140902A0C (PspSiloInitializeUserSharedData.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x140254130 (RtlCopyUnicodeString.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     PsRemoveSiloContext @ 0x140901950 (PsRemoveSiloContext.c)
 */

__int64 __fastcall PspSiloInitializeSystemRootBuffer(__int64 a1)
{
  __int64 result; // rax
  UNICODE_STRING *v3; // rax
  wchar_t *Buffer; // rdx
  const UNICODE_STRING *v5; // rdx
  PCUNICODE_STRING SourceString; // [rsp+38h] [rbp+10h] BYREF

  SourceString = 0LL;
  result = PsRemoveSiloContext(a1, (unsigned int)PsSystemRootSiloContextSlot, (__int64)&SourceString);
  if ( (int)result >= 0 )
  {
    v3 = *(UNICODE_STRING **)(a1 + 1272);
    Buffer = v3[69].Buffer;
    v3[66] = 0LL;
    v3[66].Buffer = Buffer + 15;
    v5 = SourceString;
    v3[66].MaximumLength = 520;
    RtlCopyUnicodeString(v3 + 66, v5);
    HalPutDmaAdapter((PADAPTER_OBJECT)SourceString);
    return 0LL;
  }
  return result;
}
