/*
 * XREFs of NtCreateKeyTransacted_Stub @ 0x14097CD50
 * Callers:
 *     _RegRtlCreateKeyTransacted @ 0x14063336C (_RegRtlCreateKeyTransacted.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtCreateKeyTransacted_Stub(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  NTSTATUS (__stdcall *v8)(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES, ULONG, PUNICODE_STRING, ULONG, HANDLE, PULONG); // rax

  if ( byte_140CFA508 )
  {
    v8 = (NTSTATUS (__stdcall *)(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES, ULONG, PUNICODE_STRING, ULONG, HANDLE, PULONG))qword_140CFA500;
  }
  else
  {
    v8 = ZwCreateKeyTransacted;
    byte_140CFA508 = 1;
    qword_140CFA500 = (__int64)ZwCreateKeyTransacted;
  }
  if ( v8 )
    return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, _QWORD, int, __int64, __int64))v8)(
             a1,
             a2,
             a3,
             0LL,
             0LL,
             a6,
             a7,
             a8);
  else
    return 3221225594LL;
}
