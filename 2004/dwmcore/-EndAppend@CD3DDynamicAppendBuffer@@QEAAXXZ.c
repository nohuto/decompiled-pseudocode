/*
 * XREFs of ?EndAppend@CD3DDynamicAppendBuffer@@QEAAXXZ @ 0x1801ABCAC
 * Callers:
 *     ?Render@CDrawListEntryBatch@@UEAAJXZ @ 0x180083A10 (-Render@CDrawListEntryBatch@@UEAAJXZ.c)
 *     ?Flush@CD3DBatchExecutionContext@@QEAAXW4FlushReason@@@Z @ 0x18008434C (-Flush@CD3DBatchExecutionContext@@QEAAXW4FlushReason@@@Z.c)
 *     ?SetBlendMode@CD3DBatchExecutionContext@@EEAAXW4Enum@BlendMode@@@Z @ 0x1800BE750 (-SetBlendMode@CD3DBatchExecutionContext@@EEAAXW4Enum@BlendMode@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DDynamicAppendBuffer::EndAppend(CD3DDynamicAppendBuffer *this)
{
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)this + 600LL) + 120LL))(
    *(_QWORD *)(*(_QWORD *)this + 600LL),
    *((_QWORD *)this + 1),
    0LL);
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
}
