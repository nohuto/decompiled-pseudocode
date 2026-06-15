/*
 * XREFs of ?GetLeftFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z @ 0x140017F90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProcessNode::GetLeftFormat(CProcessNode *this, struct IAudioMediaType **a2)
{
  __int64 v2; // rcx

  if ( !a2 )
    return 2147500035LL;
  *a2 = (struct IAudioMediaType *)*((_QWORD *)this + 1);
  v2 = *((_QWORD *)this + 1);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return 0LL;
}
