/*
 * XREFs of sub_180007CC4 @ 0x180007CC4
 * Callers:
 *     sub_180007308 @ 0x180007308 (sub_180007308.c)
 *     sub_18000F52C @ 0x18000F52C (sub_18000F52C.c)
 *     sub_18003ADD8 @ 0x18003ADD8 (sub_18003ADD8.c)
 *     sub_18003AF70 @ 0x18003AF70 (sub_18003AF70.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 sub_180007CC4()
{
  unsigned int v0; // ebx
  void (__fastcall *v1)(__int64 *, void (__fastcall *)(__int64), char *); // rax

  v0 = dword_18005A44C;
  if ( !dword_18005A44C )
  {
    if ( byte_18005A430 )
    {
      AcquireSRWLockExclusive(&stru_18005A438);
      if ( qword_18005A450 )
      {
        v0 = dword_18005A44C;
LABEL_5:
        ReleaseSRWLockExclusive(&stru_18005A438);
        return v0;
      }
      qword_18005A450 = 0LL;
      v1 = (void (__fastcall *)(__int64 *, void (__fastcall *)(__int64), char *))qword_18005AC90;
      if ( qword_18005AC90
        || (v1 = (void (__fastcall *)(__int64 *, void (__fastcall *)(__int64), char *))qword_18005AD08) != 0LL )
      {
        v1(&qword_18005A450, sub_180007A70, &byte_18005A430);
      }
      if ( qword_18005A450 )
      {
        v0 = 1;
        dword_18005A44C = 1;
        goto LABEL_5;
      }
      ReleaseSRWLockExclusive(&stru_18005A438);
    }
    return 0;
  }
  return v0;
}
