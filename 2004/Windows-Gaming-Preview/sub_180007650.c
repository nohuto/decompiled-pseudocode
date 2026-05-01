/*
 * XREFs of sub_180007650 @ 0x180007650
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800067C4 @ 0x1800067C4 (sub_1800067C4.c)
 *     sub_180006F98 @ 0x180006F98 (sub_180006F98.c)
 *     sub_180007048 @ 0x180007048 (sub_180007048.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_180007650(unsigned int a1, __int64 a2)
{
  int v4; // eax

  if ( byte_18005A038 )
  {
    if ( qword_18005ADA0 )
      qword_18005ADA0(a1, 0LL, a2, 1LL, 0LL, 0LL, 0, 1LL);
    if ( sub_180006F98((RTL_SRWLOCK *)&byte_18005A038) && sub_1800067C4(qword_18005A050, a1, a2) && !byte_18005AC18 )
    {
      v4 = (int)qword_18005ABE0;
      if ( qword_18005ABE0 )
        v4 = (unsigned __int8)qword_18005ABE0();
      if ( !v4 )
      {
        AcquireSRWLockExclusive(&SRWLock);
        sub_180007048(&byte_18005A038);
        ReleaseSRWLockExclusive(&SRWLock);
      }
    }
  }
}
