/*
 * XREFs of ?GetRightFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z @ 0x1400177C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProcessNode::GetRightFormat(CProcessNode *this, struct IAudioMediaType **a2)
{
  __int64 v2; // rcx

  if ( !a2 )
    return 2147500035LL;
  *a2 = (struct IAudioMediaType *)*((_QWORD *)this + 2);
  v2 = *((_QWORD *)this + 2);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return 0LL;
}
