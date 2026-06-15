/*
 * XREFs of ??1CStreamProcessNode@@UEAA@XZ @ 0x140005E38
 * Callers:
 *     ??_GCStreamProcessNode@@UEAAPEAXI@Z @ 0x14001B600 (--_GCStreamProcessNode@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001C938 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CStreamProcessNode::~CStreamProcessNode(CStreamProcessNode *this)
{
  _QWORD *v2; // rdi
  void (__fastcall ***v3)(_QWORD, __int64); // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  *(_QWORD *)this = &CStreamProcessNode::`vftable';
  v2 = (_QWORD *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    v3 = (void (__fastcall ***)(_QWORD, __int64))v2[2];
    if ( v3 )
      (**v3)(v3, 1LL);
    v2[2] = 0LL;
    v4 = v2[3];
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    if ( *v2 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 16LL))(*v2);
    operator delete(v2);
  }
  *((_QWORD *)this + 4) = 0LL;
  v5 = *((_QWORD *)this + 6);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  *(_QWORD *)this = &CProcessNode::`vftable';
  v6 = *((_QWORD *)this + 2);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = *((_QWORD *)this + 1);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
}
