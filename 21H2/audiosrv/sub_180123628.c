/*
 * XREFs of sub_180123628 @ 0x180123628
 * Callers:
 *     sub_180123190 @ 0x180123190 (sub_180123190.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall sub_180123628(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  int (__fastcall *v4)(__int64 *, void *, LPCOLESTR *); // rax
  __int64 v5; // rax
  int v6; // eax
  LPCOLESTR lpsz[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+30h] [rbp-28h]
  GUID iid; // [rsp+38h] [rbp-20h] BYREF

  v9 = 0LL;
  v3 = *a1;
  iid = (GUID)xmmword_18015B730;
  v4 = *(int (__fastcall **)(__int64 *, void *, LPCOLESTR *))(v3 + 40);
  *(_OWORD *)lpsz = 0LL;
  if ( v4(a1, &unk_180172B80, lpsz) < 0 || LOWORD(lpsz[0]) != 31 || IIDFromString(lpsz[1], &iid) < 0 )
    goto LABEL_8;
  v5 = *(_QWORD *)&iid.Data1 - 0x11D0F70FDFF21BE5LL;
  if ( *(_QWORD *)&iid.Data1 == 0x11D0F70FDFF21BE5LL )
    v5 = *(_QWORD *)iid.Data4 + 0x69CEDD365FFFE847LL;
  if ( v5 )
LABEL_8:
    v6 = 0;
  else
    v6 = 1;
  *(_DWORD *)(a2 + 20) = v6;
  PropVariantClear((PROPVARIANT *)lpsz);
  return *(_DWORD *)(a2 + 20) != 0;
}
