/*
 * XREFs of ??0CWeakResourceReference@@AEAA@PEAVCResource@@@Z @ 0x18009C4D4
 * Callers:
 *     ?Get@CWeakResourceReference@@KAJPEAVCResource@@PEAPEAV1@@Z @ 0x18009C3EC (-Get@CWeakResourceReference@@KAJPEAVCResource@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??$_Try_emplace@AEBQEBVCResource@@$$V@?$unordered_map@PEBVCResource@@PEAVCWeakResourceReference@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@4@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@std@@_N@1@AEBQEBVCResource@@@Z @ 0x180047C78 (--$_Try_emplace@AEBQEBVCResource@@$$V@-$unordered_map@PEBVCResource@@PEAVCWeakResourceReference@.c)
 */

CWeakResourceReference *__fastcall CWeakResourceReference::CWeakResourceReference(
        CWeakResourceReference *this,
        struct CResource *a2)
{
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *(_QWORD *)this = &CWeakResourceReference::`vftable';
  v5 = *((_QWORD *)this + 2);
  *((_DWORD *)this + 2) = 0;
  std::unordered_map<CResource const *,CWeakResourceReference *>::_Try_emplace<CResource const * const &,>(
    0LL,
    (__int64)v4,
    (const unsigned __int8 *)&v5);
  *(_QWORD *)(v4[0] + 24LL) = this;
  *(_DWORD *)(*((_QWORD *)this + 2) + 32LL) |= 8u;
  return this;
}
