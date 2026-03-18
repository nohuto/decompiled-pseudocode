/*
 * XREFs of PspSiloInitializeSystemRootBuffer @ 0x14090367C
 * Callers:
 *     PspSiloInitializeUserSharedData @ 0x14090381C (PspSiloInitializeUserSharedData.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     RtlCopyUnicodeString @ 0x1402909B0 (RtlCopyUnicodeString.c)
 *     PsRemoveSiloContext @ 0x1409027B0 (PsRemoveSiloContext.c)
 */

__int64 __fastcall PspSiloInitializeSystemRootBuffer(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  const UNICODE_STRING *v5; // rdx
  PCUNICODE_STRING SourceString; // [rsp+38h] [rbp+10h] BYREF

  SourceString = 0LL;
  result = PsRemoveSiloContext(a1, (unsigned int)PsSystemRootSiloContextSlot, (__int64)&SourceString);
  if ( (int)result >= 0 )
  {
    v3 = *(_QWORD *)(a1 + 1272);
    v4 = *(_QWORD *)(v3 + 1120);
    *(_OWORD *)(v3 + 1064) = 0LL;
    *(_QWORD *)(v3 + 1072) = v4 + 30;
    v5 = SourceString;
    *(_WORD *)(v3 + 1066) = 520;
    RtlCopyUnicodeString((PUNICODE_STRING)(v3 + 1064), v5);
    HalPutDmaAdapter((PADAPTER_OBJECT)SourceString);
    return 0LL;
  }
  return result;
}
