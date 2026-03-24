/*
 * XREFs of ?ApplyRenderState@CHWDrawListEntry@@UEBA_NPEAUIDrawListStateSink@@@Z @ 0x1800C0B60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CHWDrawListEntry::ApplyRenderState(CHWDrawListEntry *this, struct IDrawListStateSink *a2)
{
  __int64 v4; // rdx

  if ( !*(_DWORD *)(*((_QWORD *)this + 21) + 8LL) )
    return 0;
  (*(void (__fastcall **)(struct IDrawListStateSink *, _QWORD))(*(_QWORD *)a2 + 8LL))(a2, **((unsigned int **)this + 6));
  LOBYTE(v4) = *(_BYTE *)(*((_QWORD *)this + 21) + 98LL);
  (*(void (__fastcall **)(struct IDrawListStateSink *, __int64))(*(_QWORD *)a2 + 24LL))(a2, v4);
  return 1;
}
