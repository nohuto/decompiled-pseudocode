/*
 * XREFs of ?ClearHDR10MetaData@CFlipExBuffer@@UEAAXXZ @ 0x1C0065F10
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseHDR10MetaData@CFlipExBuffer@@IEAAXXZ @ 0x1C0011B18 (-ReleaseHDR10MetaData@CFlipExBuffer@@IEAAXXZ.c)
 */

void __fastcall CFlipExBuffer::ClearHDR10MetaData(CFlipExBuffer *this)
{
  CFlipExBuffer::ReleaseHDR10MetaData(this);
}
