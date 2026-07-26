/*
 * XREFs of ndisLoadNamedFilterAltitudes @ 0x1C0124F14
 * Callers:
 *     ndisEnsureBindingInfoLoaded @ 0x1C0124A2C (ndisEnsureBindingInfoLoaded.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     ??$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@Z @ 0x1C003D5B8 (--$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C0101A88 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     KRegKey::QueryValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033530b9c5ed1c6f____0 @ 0x1C01235D8 (KRegKey--QueryValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a07_ea_1C01235D8.c)
 *     ?GetAtom@?$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z @ 0x1C0123AD0 (-GetAtom@-$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z.c)
 *     ?append@?$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_NAEBQEAU_KStringAtom@2@@Z @ 0x1C0123F78 (-append@-$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_NAEBQEAU_KStringAtom@2@@Z.c)
 */

__int64 ndisLoadNamedFilterAltitudes()
{
  unsigned int v0; // eax
  unsigned int ValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033530b9c5ed1c6f____0; // ebx
  const _UNICODE_STRING *v2; // rbx
  KRegKey v4; // [rsp+30h] [rbp-D0h] BYREF
  void *Atom; // [rsp+38h] [rbp-C8h] BYREF
  wchar_t Dst[256]; // [rsp+40h] [rbp-C0h] BYREF

  v4.m_ptr = 0LL;
  wcscpy_s(Dst, 0x100uLL, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\Parameters");
  v0 = KRegKey::Open(&v4, 1u, Dst, 0LL);
  ValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033530b9c5ed1c6f____0 = v0;
  if ( v0 == -1073741772 )
  {
LABEL_8:
    ValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033530b9c5ed1c6f____0 = 0;
  }
  else if ( !v0 )
  {
    ValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033530b9c5ed1c6f____0 = KRegKey::QueryValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033530b9c5ed1c6f____0(&v4.m_ptr);
    if ( !ValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033530b9c5ed1c6f____0 )
    {
      v2 = (const _UNICODE_STRING *)&off_1C00C9310;
      while ( 1 )
      {
        Atom = Rtl::KStringAtomTableBase<1>::GetAtom((__int64)qword_1C00E4498, *(_WORD **)&v2->Length);
        if ( !Atom || !Rtl::KArray<Rtl::_KStringAtom *,1>::append((__int64)qword_1C00E4498 + 72, &Atom) )
          break;
        v2 = (const _UNICODE_STRING *)((char *)v2 + 8);
        if ( v2 == &DriverServiceName )
          goto LABEL_8;
      }
      ValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033530b9c5ed1c6f____0 = -1073741670;
    }
  }
  if ( v4.m_ptr )
  {
    Atom = v4.m_ptr;
    v4.m_ptr = ZwClose;
    wistd::invoke<void (*)(NDISWATCHDOG__ *),NDISWATCHDOG__ * &>(&v4, &Atom);
  }
  return ValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033530b9c5ed1c6f____0;
}
