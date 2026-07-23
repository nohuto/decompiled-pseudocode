/*
 * XREFs of NtDisplayString @ 0x14094ECB0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140411040 (memmove.c)
 *     BgkDisplayStringEx @ 0x1404FDC04 (BgkDisplayStringEx.c)
 *     SeSinglePrivilegeCheck @ 0x14063B9A0 (SeSinglePrivilegeCheck.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtDisplayString(PUNICODE_STRING String)
{
  KPROCESSOR_MODE PreviousMode; // di
  __int64 v4; // rax
  _WORD *v5; // rsi
  unsigned __int64 v6; // rax
  _WORD *PoolWithTag; // rax
  _WORD *v8; // rdi
  wchar_t *Buffer; // rax
  __int64 MaximumLength; // rcx
  _WORD *v11; // rax
  char v12; // bl
  int P; // [rsp+40h] [rbp+8h]

  if ( !String )
    return -1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
    return -1073741727;
  if ( PreviousMode )
  {
    v4 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)String < 0x7FFFFFFF0000LL )
      v4 = (__int64)String;
    P = *(_DWORD *)v4;
    v5 = *(_WORD **)(v4 + 8);
    if ( !v5 || !HIWORD(*(_DWORD *)v4) )
      return 0;
    v6 = (unsigned __int64)v5 + HIWORD(P);
    if ( v6 > 0x7FFFFFFF0000LL || v6 < (unsigned __int64)v5 )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( !*v5 )
      return 0;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, HIWORD(P) + 2LL, 0x67727453u);
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, v5, HIWORD(P));
      v8[(unsigned __int64)HIWORD(P) >> 1] = 0;
      goto LABEL_24;
    }
    return -1073741801;
  }
  Buffer = String->Buffer;
  if ( !Buffer )
    return 0;
  MaximumLength = String->MaximumLength;
  if ( !(_WORD)MaximumLength || !*Buffer )
    return 0;
  v11 = ExAllocatePoolWithTag(NonPagedPoolNx, MaximumLength + 2, 0x67727453u);
  v8 = v11;
  if ( !v11 )
    return -1073741801;
  memmove(v11, String->Buffer, String->MaximumLength);
  v8[(unsigned __int64)String->MaximumLength >> 1] = 0;
LABEL_24:
  v12 = BgkDisplayStringEx(v8);
  ExFreePoolWithTag(v8, 0);
  if ( !v12 )
    return -1073741823;
  return 0;
}
