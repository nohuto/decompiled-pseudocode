/*
 * XREFs of ndisBindBuilderLoadSettings @ 0x1C014351C
 * Callers:
 *     ?ndisBindBuilderInitialize@@YAJXZ @ 0x1C0144E04 (-ndisBindBuilderInitialize@@YAJXZ.c)
 * Callees:
 *     ??$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@Z @ 0x1C003D5B8 (--$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEB_WAEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C01003B8 (-QueryValueString@KRegKey@@QEAAJPEB_WAEAV-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@R.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C0101A88 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?QueryValueBoolean@KRegKey@@QEAAJPEB_WPEAEW4BooleanDisposition@1@@Z @ 0x1C0108438 (-QueryValueBoolean@KRegKey@@QEAAJPEB_WPEAEW4BooleanDisposition@1@@Z.c)
 *     ?GetAtom@?$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z @ 0x1C0123AD0 (-GetAtom@-$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z.c)
 */

__int64 __fastcall ndisBindBuilderLoadSettings(void *a1)
{
  _BYTE *v1; // rbx
  unsigned int v2; // eax
  unsigned int v3; // edi
  bool v4; // al
  unsigned int ValueString; // eax
  PVOID v6; // rbx
  char *Atom; // rax
  PVOID P; // [rsp+30h] [rbp+10h] BYREF
  KRegKey v10; // [rsp+38h] [rbp+18h] BYREF

  P = a1;
  v1 = qword_1C00E4498;
  v10.m_ptr = 0LL;
  v2 = KRegKey::Open(
         &v10,
         1u,
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\Parameters",
         0LL);
  v3 = v2;
  if ( v2 == -1073741772 )
  {
    v3 = 0;
    goto LABEL_11;
  }
  if ( !v2 )
  {
    LOBYTE(P) = 0;
    v3 = KRegKey::QueryValueBoolean(
           &v10,
           (wchar_t *)L"StateSeparatedRegistryLayout",
           (unsigned __int8 *)&P,
           DefaultToFalse);
    if ( !v3 )
    {
      v1[96] = (_BYTE)P != 0;
      v3 = KRegKey::QueryValueBoolean(
             &v10,
             (wchar_t *)L"DoNotWriteBindingsToRegistry",
             (unsigned __int8 *)&P,
             DefaultToFalse);
      if ( !v3 )
      {
        v4 = (_BYTE)P != 0;
        P = 0LL;
        v1[97] = v4;
        ValueString = KRegKey::QueryValueString((__int64)&v10, L"UpperRangeReplacementToken");
        v6 = P;
        v3 = ValueString;
        if ( ValueString == -1073741772 )
        {
          *((_QWORD *)qword_1C00E4498 + 11) = 0LL;
LABEL_8:
          v3 = 0;
          goto LABEL_9;
        }
        if ( !ValueString )
        {
          Atom = Rtl::KStringAtomTableBase<1>::GetAtom((__int64)qword_1C00E4498, *((_WORD **)P + 1));
          *((_QWORD *)qword_1C00E4498 + 11) = Atom;
          if ( Atom )
            goto LABEL_8;
          v3 = -1073741670;
        }
LABEL_9:
        if ( v6 )
          ExFreePoolWithTag(v6, 0x7274534Bu);
      }
    }
  }
LABEL_11:
  if ( v10.m_ptr )
  {
    P = v10.m_ptr;
    v10.m_ptr = ZwClose;
    wistd::invoke<void (*)(NDISWATCHDOG__ *),NDISWATCHDOG__ * &>(&v10, &P);
  }
  return v3;
}
