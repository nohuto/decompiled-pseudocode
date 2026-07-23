/*
 * XREFs of RtlpFreeHandleForAtom @ 0x180059CE0
 * Callers:
 *     RtlpFreeAllAtom @ 0x180059D80 (RtlpFreeAllAtom.c)
 *     RtlEmptyAtomTable @ 0x18008ADF0 (RtlEmptyAtomTable.c)
 * Callees:
 *     RtlIsValidIndexHandle @ 0x1800599C0 (RtlIsValidIndexHandle.c)
 *     memset @ 0x1800A4740 (memset.c)
 */

char __fastcall RtlpFreeHandleForAtom(__int64 a1, __int64 a2)
{
  _RTL_HANDLE_TABLE_ENTRY *v3; // rax
  PRTL_HANDLE_TABLE_ENTRY v4; // rbx
  PRTL_HANDLE_TABLE_ENTRY Handle; // [rsp+30h] [rbp+8h] BYREF

  LOBYTE(v3) = RtlIsValidIndexHandle((PRTL_HANDLE_TABLE)(a1 + 16), *(unsigned __int16 *)(a2 + 8), &Handle);
  if ( (_BYTE)v3 )
  {
    v4 = Handle;
    memset(Handle, 0, *(unsigned int *)(a1 + 20));
    v3 = *(_RTL_HANDLE_TABLE_ENTRY **)(a1 + 32);
    v4->NextFree = v3;
    *(_QWORD *)(a1 + 32) = v4;
  }
  return (char)v3;
}
