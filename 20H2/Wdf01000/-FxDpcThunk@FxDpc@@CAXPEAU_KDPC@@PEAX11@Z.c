/*
 * XREFs of ?FxDpcThunk@FxDpc@@CAXPEAU_KDPC@@PEAX11@Z @ 0x1C00193B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     FX_TRACK_DRIVER @ 0x1C0004734 (FX_TRACK_DRIVER.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxDpc::FxDpcThunk(_KDPC *Dpc, FxObject *DeferredContext, void *SystemArgument1, void *SystemArgument2)
{
  void (__fastcall **v5)(unsigned __int64); // rdi
  void (__fastcall *v6)(FxObject *, __int64, __int64, __int64, char); // rax
  _SINGLE_LIST_ENTRY *Next; // rcx
  unsigned __int64 v8; // rax
  unsigned __int64 ObjectHandleUnchecked; // rax
  __int64 v10; // rdx
  char v11; // [rsp+20h] [rbp-18h]
  char v12; // [rsp+48h] [rbp+10h] BYREF

  FX_TRACK_DRIVER(DeferredContext->m_Globals);
  v5 = (void (__fastcall **)(unsigned __int64))&DeferredContext[2];
  if ( DeferredContext[2].__vftable )
  {
    v6 = *(void (__fastcall **)(FxObject *, __int64, __int64, __int64, char))(unk_1C00A9FA0 + 8LL);
    if ( v6 )
    {
      v11 = 2;
      v6(DeferredContext + 2, 8LL, 2164260864LL, 3938LL, v11);
    }
    Next = DeferredContext[1].m_DisposeSingleEntry.Next;
    if ( Next )
    {
      v12 = 0;
      ((void (__fastcall *)(_SINGLE_LIST_ENTRY *, char *))Next->Next[2].Next)(Next, &v12);
      ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(DeferredContext);
      (*v5)(ObjectHandleUnchecked);
      LOBYTE(v10) = v12;
      ((void (__fastcall *)(_SINGLE_LIST_ENTRY *, __int64))DeferredContext[1].m_DisposeSingleEntry.Next->Next[3].Next)(
        DeferredContext[1].m_DisposeSingleEntry.Next,
        v10);
    }
    else
    {
      v8 = FxObject::GetObjectHandleUnchecked(DeferredContext);
      (*v5)(v8);
    }
  }
}
