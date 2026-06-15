/*
 * XREFs of sub_180037000 @ 0x180037000
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180037000(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4, _BYTE *a5, __int64 a6)
{
  __int64 v6; // rdi

  v6 = a6;
  *(_QWORD *)a6 = 0LL;
  if ( a2 != GetCurrentProcessId()
    && (!lpCriticalSection || a2 != LODWORD(lpCriticalSection[2].OwningThread))
    && qword_18019E618
    && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)qword_18019E618 + 176LL))(qword_18019E618) )
  {
    a6 = 0LL;
    if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)qword_18019E618 + 40LL))(
           qword_18019E618,
           a2,
           &a6) >= 0 )
    {
      if ( !a6 )
        return 0LL;
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)a6 + 40LL))(a6, a3, a4, v6);
      if ( a5 )
        *a5 = 1;
    }
    if ( a6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a6 + 16LL))(a6);
  }
  return 0LL;
}
