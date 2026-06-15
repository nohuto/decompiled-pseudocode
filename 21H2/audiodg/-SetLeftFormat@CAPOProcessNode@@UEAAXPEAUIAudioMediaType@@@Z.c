/*
 * XREFs of ?SetLeftFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x1400167D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAPOProcessNode::SetLeftFormat(CAPOProcessNode *this, struct IAudioMediaType *a2)
{
  __int64 v4; // rcx
  struct IAudioMediaType *v5; // rcx

  v4 = *((_QWORD *)this + 1);
  if ( v4 )
  {
    *((_QWORD *)this + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = (struct IAudioMediaType *)*((_QWORD *)this + 1);
  if ( v5 != a2 )
  {
    if ( a2 )
    {
      ((void (__fastcall *)(struct IAudioMediaType *))a2->lpVtbl->AddRef)(a2);
      v5 = (struct IAudioMediaType *)*((_QWORD *)this + 1);
    }
    if ( v5 )
      ((void (__fastcall *)(struct IAudioMediaType *))v5->lpVtbl->Release)(v5);
    *((_QWORD *)this + 1) = a2;
  }
}
