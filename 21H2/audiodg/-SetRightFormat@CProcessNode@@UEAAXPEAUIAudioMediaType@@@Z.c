/*
 * XREFs of ?SetRightFormat@CProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x140017370
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CProcessNode::SetRightFormat(CProcessNode *this, struct IAudioMediaType *a2)
{
  __int64 v3; // rcx
  __int64 v5; // rcx
  struct IAudioMediaType *v6; // rcx
  struct IAudioMediaType *v7; // rcx

  v3 = *((_QWORD *)this + 1);
  if ( v3 )
  {
    *((_QWORD *)this + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v5 = *((_QWORD *)this + 2);
  if ( v5 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = (struct IAudioMediaType *)*((_QWORD *)this + 1);
  if ( v6 != a2 )
  {
    if ( a2 )
    {
      ((void (__fastcall *)(struct IAudioMediaType *))a2->lpVtbl->AddRef)(a2);
      v6 = (struct IAudioMediaType *)*((_QWORD *)this + 1);
    }
    if ( v6 )
      ((void (__fastcall *)(struct IAudioMediaType *))v6->lpVtbl->Release)(v6);
    *((_QWORD *)this + 1) = a2;
  }
  v7 = (struct IAudioMediaType *)*((_QWORD *)this + 2);
  if ( v7 != a2 )
  {
    if ( a2 )
    {
      ((void (__fastcall *)(struct IAudioMediaType *))a2->lpVtbl->AddRef)(a2);
      v7 = (struct IAudioMediaType *)*((_QWORD *)this + 2);
    }
    if ( v7 )
      ((void (__fastcall *)(struct IAudioMediaType *))v7->lpVtbl->Release)(v7);
    *((_QWORD *)this + 2) = a2;
  }
}
