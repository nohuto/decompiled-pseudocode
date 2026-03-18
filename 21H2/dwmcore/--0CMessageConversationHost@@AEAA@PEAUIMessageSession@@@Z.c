/*
 * XREFs of ??0CMessageConversationHost@@AEAA@PEAUIMessageSession@@@Z @ 0x18002F650
 * Callers:
 *     ?Create@CMessageConversationHost@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x18002F3E4 (-Create@CMessageConversationHost@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

CMessageConversationHost *__fastcall CMessageConversationHost::CMessageConversationHost(
        CMessageConversationHost *this,
        struct IMessageSession *a2)
{
  CMILRefCountImpl *v3; // rcx

  v3 = (CMessageConversationHost *)((char *)this + 8);
  *(_QWORD *)this = &CMessageConversationHost::`vftable';
  *(_DWORD *)v3 = 0;
  CMILRefCountImpl::AddReference(v3);
  *((_QWORD *)this + 2) = a2;
  (*(void (__fastcall **)(struct IMessageSession *))(*(_QWORD *)a2 + 8LL))(a2);
  return this;
}
