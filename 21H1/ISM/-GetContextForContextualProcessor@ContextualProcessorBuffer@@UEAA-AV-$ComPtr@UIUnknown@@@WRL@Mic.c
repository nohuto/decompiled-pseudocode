/*
 * XREFs of ?GetContextForContextualProcessor@ContextualProcessorBuffer@@UEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@PEAUIContextualProcessor@@@Z @ 0x18014C1F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall ContextualProcessorBuffer::GetContextForContextualProcessor(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *i; // rax
  __int64 v6; // rcx

  for ( i = *(_QWORD **)(a1 + 32); ; i += 20 )
  {
    if ( i == *(_QWORD **)(a1 + 40) )
    {
      *a2 = 0LL;
      return a2;
    }
    if ( *i == a3 )
      break;
  }
  v6 = i[18];
  *a2 = v6;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  return a2;
}
