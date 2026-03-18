/*
 * XREFs of ?EndAppend@CD3DDynamicAppendBuffer@@QEAAXXZ @ 0x1801F1630
 * Callers:
 *     ?Render@CDrawListEntryBatch@@UEAAJXZ @ 0x1800B4BB0 (-Render@CDrawListEntryBatch@@UEAAJXZ.c)
 *     ?Flush@CD3DBatchExecutionContext@@QEAAXW4FlushReason@@@Z @ 0x1800B5558 (-Flush@CD3DBatchExecutionContext@@QEAAXW4FlushReason@@@Z.c)
 *     ?SetBlendMode@CD3DBatchExecutionContext@@EEAAXW4Enum@BlendMode@@@Z @ 0x1800CDEF0 (-SetBlendMode@CD3DBatchExecutionContext@@EEAAXW4Enum@BlendMode@@@Z.c)
 *     ?SetDrawMethod@CD3DBatchExecutionContext@@EEAAXW4PrimitiveDrawMethod@@@Z @ 0x1800D08B0 (-SetDrawMethod@CD3DBatchExecutionContext@@EEAAXW4PrimitiveDrawMethod@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CD3DDynamicAppendBuffer::EndAppend(CD3DDynamicAppendBuffer *this)
{
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)this + 560LL) + 120LL))(
    *(_QWORD *)(*(_QWORD *)this + 560LL),
    *((_QWORD *)this + 1),
    0LL);
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
}
