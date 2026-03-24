/*
 * XREFs of ?GetNumContacts@CInteractionRoot@@UEBAIW4InputType@@@Z @ 0x1801C6310
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CInteractionRoot::GetNumContacts(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v4)(__int64, __int64, _QWORD); // rbx
  __int64 v5; // rax

  v2 = a1[173];
  v4 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v2 + 56LL);
  v5 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 104LL))(a1);
  return v4(v2, v5, a2);
}
