/*
 * XREFs of ??1CProcessNode@@UEAA@XZ @ 0x140047DB0
 * Callers:
 *     ??1CAPOEndpointProcessNode@@UEAA@XZ @ 0x140047D5C (--1CAPOEndpointProcessNode@@UEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CProcessNode::~CProcessNode(CProcessNode *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &CProcessNode::`vftable';
  v2 = *((_QWORD *)this + 2);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *((_QWORD *)this + 1);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
}
