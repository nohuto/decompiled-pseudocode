/*
 * XREFs of ??1CKstBase@@QEAA@XZ @ 0x180276F2C
 * Callers:
 *     ??1CKst@@QEAA@XZ @ 0x180276EB4 (--1CKst@@QEAA@XZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x18002D294 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800F6630 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?Stop@CKstBase@@QEAAXXZ @ 0x180276F78 (-Stop@CKstBase@@QEAAXXZ.c)
 */

void __fastcall CKstBase::~CKstBase(void **this)
{
  void *v2; // rdx
  wil::details *v3; // rcx
  void *v4; // rdx
  wil::details *v5; // rcx

  *this = &CKstBase::`vftable';
  CKstBase::Stop((CKstBase *)this);
  v3 = (wil::details *)this[4];
  if ( v3 )
    wil::details::CloseHandle(v3, v2);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(this + 2);
  v5 = (wil::details *)this[1];
  if ( v5 )
    wil::details::CloseHandle(v5, v4);
}
