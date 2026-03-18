/*
 * XREFs of ?Confirm@CCompositionFrame@@UEAAXXZ @ 0x1C00157D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompositionFrame::Confirm(CCompositionFrame *this)
{
  char *v1; // rsi
  char *i; // rbx
  char *v4; // rdi
  char *v5; // rax
  __int64 v6; // rcx
  char *v7; // rbx

  v1 = (char *)this + 144;
  *((_DWORD *)this + 22) = 1;
  for ( i = (char *)*((_QWORD *)this + 18); i != v1; i = *(char **)i )
    (*(void (__fastcall **)(_QWORD *))(*((_QWORD *)i - 1) + 40LL))((_QWORD *)i - 1);
  v4 = (char *)this + 160;
  while ( 1 )
  {
    v5 = *(char **)v4;
    if ( *(char **)(*(_QWORD *)v4 + 8LL) != v4 || (v6 = *(_QWORD *)v5, *(char **)(*(_QWORD *)v5 + 8LL) != v5) )
      __fastfail(3u);
    *(_QWORD *)v4 = v6;
    *(_QWORD *)(v6 + 8) = v4;
    if ( v5 == v4 )
      break;
    v7 = v5 - 48;
    (*(void (__fastcall **)(char *))(*((_QWORD *)v5 - 1) + 56LL))(v5 - 8);
    ObfDereferenceObject(v7);
  }
}
