/*
 * XREFs of sub_180007E80 @ 0x180007E80
 * Callers:
 *     <none>
 * Callees:
 *     sub_180007894 @ 0x180007894 (sub_180007894.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_180007E80(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, _DWORD *a5)
{
  unsigned int v6; // edi
  __int64 v7; // r8
  void (__fastcall *v8)(_QWORD, _QWORD, __int64, _QWORD); // rax
  void (__fastcall *v9)(__int64 *, __int64 (__fastcall *)(), __int64); // rax
  __int64 v10; // rdx
  void (__fastcall *v11)(__int64, __int64, _QWORD, _QWORD); // rax

  v6 = a1;
  if ( a4 )
  {
    if ( qword_18005AC70 && (!(_DWORD)a2 || (unsigned int)(a2 - 100) <= 0x31) )
      qword_18005AC70(a1, a2, a3);
    if ( *a5 )
      sub_180007894((RTL_SRWLOCK *)&byte_18005A430, v6, a4);
    v7 = (unsigned int)a5[1];
    if ( (_DWORD)v7 )
    {
      v8 = (void (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD))qword_18005AC50;
      if ( qword_18005AC50 || (v8 = (void (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD))qword_18005ACA0) != 0LL )
        v8(v6, (unsigned int)a5[2], v7, 0LL);
    }
    if ( !a5[4] && byte_18005A430 )
    {
      AcquireSRWLockExclusive(&stru_18005A438);
      if ( !qword_18005A458 )
      {
        qword_18005A458 = 0LL;
        v9 = (void (__fastcall *)(__int64 *, __int64 (__fastcall *)(), __int64))qword_18005AC90;
        if ( qword_18005AC90
          || (v9 = (void (__fastcall *)(__int64 *, __int64 (__fastcall *)(), __int64))qword_18005AD08) != 0LL )
        {
          v9(&qword_18005A458, sub_180007FE0, -1LL);
        }
      }
      ReleaseSRWLockExclusive(&stru_18005A438);
    }
  }
  else
  {
    v10 = (unsigned int)a5[2];
    LODWORD(v10) = v10 | 0x80000000;
    if ( !a5[5] )
      v10 = (unsigned int)a5[2];
    v11 = (void (__fastcall *)(__int64, __int64, _QWORD, _QWORD))qword_18005AC50;
    if ( qword_18005AC50 || (v11 = (void (__fastcall *)(__int64, __int64, _QWORD, _QWORD))qword_18005ACA0) != 0LL )
      v11(a1, v10, 0LL, 0LL);
  }
}
