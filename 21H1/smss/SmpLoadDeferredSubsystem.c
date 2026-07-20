/*
 * XREFs of SmpLoadDeferredSubsystem @ 0x1400145B0
 * Callers:
 *     <none>
 * Callees:
 *     SmpGetMuSessionIdFromClientContext @ 0x140003B94 (SmpGetMuSessionIdFromClientContext.c)
 *     SmpExecuteCommand @ 0x140004558 (SmpExecuteCommand.c)
 */

__int64 __fastcall SmpLoadDeferredSubsystem(__int64 a1, _BYTE *a2)
{
  unsigned int MuSessionIdFromClientContext; // esi
  __int64 *v5; // rdi
  __int64 i; // rbx
  __int64 v7; // r8
  UNICODE_STRING String1; // [rsp+30h] [rbp-18h] BYREF
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  String1.Length = *(_WORD *)(a1 + 48);
  String1.MaximumLength = String1.Length;
  String1.Buffer = (PWSTR)(a1 + 52);
  MuSessionIdFromClientContext = SmpGetMuSessionIdFromClientContext((__int64)a2, &v9);
  if ( !v9 )
    return 3221225473LL;
  v5 = &SmpSubSystemsRequired;
  if ( (*a2 & 8) == 0 )
    v5 = &SmpSubSystemsToDefer;
  for ( i = *v5; ; i = *(_QWORD *)i )
  {
    if ( (__int64 *)i == v5 )
      return 3221225524LL;
    if ( RtlEqualUnicodeString(&String1, (PCUNICODE_STRING)(i + 16), 1u) )
      break;
  }
  return SmpExecuteCommand(i + 32, MuSessionIdFromClientContext, v7, 72, 0LL);
}
