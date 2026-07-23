/*
 * XREFs of _RtlpInitializeAllowedAce@24 @ 0x4B336734
 * Callers:
 *     _RtlCreateAndSetSD@20 @ 0x4B335C50 (_RtlCreateAndSetSD@20.c)
 * Callees:
 *     _RtlCopySid@12 @ 0x4B2D6820 (_RtlCopySid@12.c)
 */

NTSTATUS __fastcall RtlpInitializeAllowedAce(int a1, __int16 a2, char a3, char a4, int a5, unsigned __int8 *SourceSid)
{
  *(_WORD *)(a1 + 2) = a2;
  *(_BYTE *)(a1 + 1) = a4 | a3;
  *(_DWORD *)(a1 + 4) = a5;
  *(_BYTE *)a1 = 0;
  return RtlCopySid(4 * SourceSid[1] + 8, (PSID)(a1 + 8), SourceSid);
}
