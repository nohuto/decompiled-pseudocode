/*
 * XREFs of ?SHCreateDUIThreadRef@@YAJPEAJPEAPEAUIUnknown@@@Z @ 0x1801F2F4C
 * Callers:
 *     ?OnImmersiveShellThreadStart@CImmersiveShellCreationBehavior@@UEAAJXZ @ 0x1801F25C0 (-OnImmersiveShellThreadStart@CImmersiveShellCreationBehavior@@UEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall SHCreateDUIThreadRef(struct IUnknownVtbl *a1, struct IUnknown **a2)
{
  struct IUnknown *v4; // rbx
  DWORD CurrentThreadId; // eax

  v4 = (struct IUnknown *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    CurrentThreadId = GetCurrentThreadId();
    v4[3].lpVtbl = 0LL;
    LODWORD(v4[2].lpVtbl) = CurrentThreadId;
    v4[1].lpVtbl = a1;
    LODWORD(a1->QueryInterface) = 1;
    LOWORD(v4[5].lpVtbl) = 0;
    v4->lpVtbl = (struct IUnknownVtbl *)&CDuiRefThread::`vftable'{for `CRefThread'};
    v4[4].lpVtbl = (struct IUnknownVtbl *)&CDuiRefThread::`vftable'{for `IDuiThreadRef'};
  }
  else
  {
    v4 = 0LL;
  }
  *a2 = v4;
  return v4 == 0LL ? 0x8007000E : 0;
}
