/*
 * XREFs of NtCreateKeyTransacted_Stub @ 0x14097F450
 * Callers:
 *     _RegRtlCreateKeyTransacted @ 0x1406E60D4 (_RegRtlCreateKeyTransacted.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
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

  if ( byte_140CFA000 )
  {
    v8 = (NTSTATUS (__stdcall *)(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES, ULONG, PUNICODE_STRING, ULONG, HANDLE, PULONG))qword_140CFA008;
  }
  else
  {
    v8 = ZwCreateKeyTransacted;
    byte_140CFA000 = 1;
    qword_140CFA008 = (__int64)ZwCreateKeyTransacted;
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
