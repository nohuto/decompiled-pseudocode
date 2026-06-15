/*
 * XREFs of ?GetExtendedProperties@CAPOWrapperSrv@@UEAAJPEAW4EXTENDED_APO_FLAGS@@@Z @ 0x14001A420
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAPOWrapperSrv::GetExtendedProperties(CAPOWrapperSrv *this, enum EXTENDED_APO_FLAGS *a2)
{
  void (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // r9
  __int64 v4; // rcx
  unsigned int v5; // ebx
  unsigned int v7; // eax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 8);
  v4 = 0LL;
  v8 = 0LL;
  if ( v2 && ((**v2)(v2, &GUID_69e1f79f_6eae_4517_be9f_13aa90e30014, &v8), (v4 = v8) != 0) )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, enum EXTENDED_APO_FLAGS *))(*(_QWORD *)v8 + 24LL))(v8, a2);
    v4 = v8;
    v5 = v7;
  }
  else
  {
    v5 = -2147467262;
  }
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v5;
}
