/*
 * XREFs of ?IsMessageOnlyWindow@CInputDest@@AEBA_NXZ @ 0x1C018920C
 * Callers:
 *     ?IsIndependentInputWindow@CInputDest@@QEBA_NXZ @ 0x1C005FECC (-IsIndependentInputWindow@CInputDest@@QEBA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CInputDest::IsMessageOnlyWindow(CInputDest *this)
{
  char v1; // bl
  __int64 v2; // rcx
  int v3; // eax

  v1 = 0;
  if ( *((_DWORD *)this + 23) == 2 )
    v2 = *((_QWORD *)this + 10);
  else
    v2 = 0LL;
  if ( v2 )
  {
    if ( qword_1C0259170 )
      v3 = qword_1C0259170(v2);
    else
      v3 = 0;
    return v3 != 0;
  }
  return v1;
}
