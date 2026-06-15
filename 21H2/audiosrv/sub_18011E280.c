/*
 * XREFs of sub_18011E280 @ 0x18011E280
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18011E280(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  LPCOLESTR lpsz[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+30h] [rbp-28h]
  GUID iid; // [rsp+38h] [rbp-20h] BYREF

  if ( !*(_DWORD *)(a1 + 204) )
  {
    *(_DWORD *)(a1 + 200) = 0;
    v2 = *(_QWORD *)(a1 + 40);
    *(_OWORD *)lpsz = 0LL;
    v9 = 0LL;
    iid = (GUID)xmmword_18015B730;
    if ( (*(int (__fastcall **)(__int64, void *, LPCOLESTR *))(*(_QWORD *)v2 + 40LL))(v2, &unk_180172B80, lpsz) >= 0
      && LOWORD(lpsz[0]) == 31
      && IIDFromString(lpsz[1], &iid) >= 0 )
    {
      v3 = 0x11D0F70FDFF21CE6LL - *(_QWORD *)&iid.Data1;
      if ( *(_QWORD *)&iid.Data1 == 0x11D0F70FDFF21CE6LL )
        v3 = 0x963122C9A00017B9uLL - *(_QWORD *)iid.Data4;
      if ( !v3 )
        goto LABEL_17;
      v4 = 0x47C1F3DB1CCF610BLL - *(_QWORD *)&iid.Data1;
      if ( *(_QWORD *)&iid.Data1 == 0x47C1F3DB1CCF610BLL )
        v4 = 0xABE56CC79BB14C83uLL - *(_QWORD *)iid.Data4;
      if ( !v4 )
        goto LABEL_17;
      v5 = 0x458A5CD5A79D957DLL - *(_QWORD *)&iid.Data1;
      if ( *(_QWORD *)&iid.Data1 == 0x458A5CD5A79D957DLL )
        v5 = 0x3B1F9B788EAFF1B3LL - *(_QWORD *)iid.Data4;
      if ( !v5 )
        goto LABEL_17;
      v6 = 0x11D0F70FDFF21CE2LL - *(_QWORD *)&iid.Data1;
      if ( *(_QWORD *)&iid.Data1 == 0x11D0F70FDFF21CE2LL )
        v6 = 0x963122C9A00017B9uLL - *(_QWORD *)iid.Data4;
      if ( !v6 )
LABEL_17:
        *(_DWORD *)(a1 + 200) = 1;
      *(_DWORD *)(a1 + 204) = 1;
    }
    PropVariantClear((PROPVARIANT *)lpsz);
  }
  return *(unsigned int *)(a1 + 200);
}
