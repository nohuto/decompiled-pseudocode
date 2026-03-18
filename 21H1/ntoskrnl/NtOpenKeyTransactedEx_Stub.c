/*
 * XREFs of NtOpenKeyTransactedEx_Stub @ 0x14097835C
 * Callers:
 *     _RegRtlOpenKeyTransacted @ 0x140617E68 (_RegRtlOpenKeyTransacted.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtOpenKeyTransactedEx_Stub(__int64 a1)
{
  NTSTATUS (__stdcall *v1)(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES, ULONG, HANDLE); // rax

  if ( byte_140CFA080 )
  {
    v1 = (NTSTATUS (__stdcall *)(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES, ULONG, HANDLE))qword_140CFA078;
  }
  else
  {
    v1 = ZwOpenKeyTransactedEx;
    byte_140CFA080 = 1;
    qword_140CFA078 = (__int64)ZwOpenKeyTransactedEx;
  }
  if ( v1 )
    return ((__int64 (__fastcall *)(__int64))v1)(a1);
  else
    return 3221225594LL;
}
