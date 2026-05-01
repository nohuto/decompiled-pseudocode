/*
 * XREFs of ?SetSite@CWRLObjectWithSite@@UEAAJPEAUIUnknown@@@Z @ 0x18015C320
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180010000 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 */

__int64 __fastcall CWRLObjectWithSite::SetSite(CWRLObjectWithSite *this, struct IUnknown *a2)
{
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 2, (__int64)a2);
  return 0LL;
}
