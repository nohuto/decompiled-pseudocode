/*
 * XREFs of NtOpenKeyTransactedEx_Stub @ 0x14097CBEC
 * Callers:
 *     _RegRtlOpenKeyTransacted @ 0x1406426FC (_RegRtlOpenKeyTransacted.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtOpenKeyTransactedEx_Stub(__int64 a1)
{
  NTSTATUS (__stdcall *v1)(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES, ULONG, HANDLE); // rax

  if ( byte_140CFA4B8 )
  {
    v1 = (NTSTATUS (__stdcall *)(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES, ULONG, HANDLE))qword_140CFA4C0;
  }
  else
  {
    v1 = ZwOpenKeyTransactedEx;
    byte_140CFA4B8 = 1;
    qword_140CFA4C0 = (__int64)ZwOpenKeyTransactedEx;
  }
  if ( v1 )
    return ((__int64 (__fastcall *)(__int64))v1)(a1);
  else
    return 3221225594LL;
}
