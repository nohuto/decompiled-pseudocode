/*
 * XREFs of ?GetExtendedProperties@CAPOWrapperClient@@UEAAJPEAW4EXTENDED_APO_FLAGS@@@Z @ 0x180037FA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAPOWrapperClient::GetExtendedProperties(CAPOWrapperClient *this, enum EXTENDED_APO_FLAGS *a2)
{
  void (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // r9
  __int64 v4; // rcx
  unsigned int v5; // eax
  unsigned int v6; // ebx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 4);
  v4 = 0LL;
  v8 = 0LL;
  if ( v2 && ((**v2)(v2, &GUID_69e1f79f_6eae_4517_be9f_13aa90e30014, &v8), (v4 = v8) != 0) )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, enum EXTENDED_APO_FLAGS *))(*(_QWORD *)v8 + 24LL))(v8, a2);
    v4 = v8;
    v6 = v5;
  }
  else
  {
    v6 = -2147467263;
  }
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v6;
}
