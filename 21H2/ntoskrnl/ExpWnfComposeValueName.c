/*
 * XREFs of ExpWnfComposeValueName @ 0x140663680
 * Callers:
 *     ExpWnfRegisterPermanentName @ 0x140620B14 (ExpWnfRegisterPermanentName.c)
 *     ExpWnfDeletePermanentName @ 0x140621F90 (ExpWnfDeletePermanentName.c)
 *     ExpWnfLookupPermanentName @ 0x140663338 (ExpWnfLookupPermanentName.c)
 *     ExpWnfWriteStateData @ 0x14069FF60 (ExpWnfWriteStateData.c)
 *     ExpWnfPopulateStateData @ 0x1406A060C (ExpWnfPopulateStateData.c)
 *     ExpWnfDeletePermanentStateData @ 0x14095CCD4 (ExpWnfDeletePermanentStateData.c)
 * Callees:
 *     RtlInt64ToUnicodeString @ 0x140663720 (RtlInt64ToUnicodeString.c)
 */

__int64 __fastcall ExpWnfComposeValueName(__int64 a1, UNICODE_STRING *a2)
{
  __int64 v3; // rbx
  __int64 result; // rax
  unsigned int v5; // r10d
  unsigned int v6; // r8d
  __int64 v7; // r9
  wchar_t *Buffer; // rdx
  __int64 v9; // rcx

  LODWORD(v3) = 16;
  RtlInt64ToUnicodeString(a1 ^ 0x41C64E6DA3BC0074LL, 0x10u, a2);
  result = 32LL;
  v5 = a2->Length >> 1;
  v6 = 16 - v5;
  a2->Length = 32;
  if ( v5 )
  {
    v7 = v5;
    do
    {
      Buffer = a2->Buffer;
      --v7;
      v3 = (unsigned int)(v3 - 1);
      result = Buffer[v7];
      Buffer[v3] = result;
      --v5;
    }
    while ( v5 );
  }
  if ( v6 )
  {
    v9 = 2LL * v6;
    do
    {
      result = (__int64)a2->Buffer;
      v9 -= 2LL;
      *(_WORD *)(v9 + result) = 48;
      --v6;
    }
    while ( v6 );
  }
  return result;
}
