/*
 * XREFs of ?EndAppend@CD3DDynamicAppendBuffer@@QEAAXXZ @ 0x1801A9DAC
 * Callers:
 *     ?Render@CDrawListEntryBatch@@UEAAJXZ @ 0x180071390 (-Render@CDrawListEntryBatch@@UEAAJXZ.c)
 *     ?Flush@CD3DBatchExecutionContext@@QEAAXW4FlushReason@@@Z @ 0x180071CCC (-Flush@CD3DBatchExecutionContext@@QEAAXW4FlushReason@@@Z.c)
 *     ?SetBlendMode@CD3DBatchExecutionContext@@EEAAXW4Enum@BlendMode@@@Z @ 0x1800BE410 (-SetBlendMode@CD3DBatchExecutionContext@@EEAAXW4Enum@BlendMode@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
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
