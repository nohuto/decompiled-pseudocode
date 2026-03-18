/*
 * XREFs of ?SortMonitorSetIdAndAppendHash@DpiPersistence@@YAJPEAU_UNICODE_STRING@@@Z @ 0x1C01D6A40
 * Callers:
 *     ?AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C01D698C (-AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ??_GCCD_SET_STRING_ID@@QEAAPEAXI@Z @ 0x1C00130EC (--_GCCD_SET_STRING_ID@@QEAAPEAXI@Z.c)
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C0019BFC (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ @ 0x1C01AD7EC (-GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ.c)
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z @ 0x1C01AD930 (--0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z.c)
 *     ?_CcdCreateKeyFromSetIdStr@CCD_SET_STRING_ID@@SAJPEAU_UNICODE_STRING@@AEBU_STRING@@@Z @ 0x1C01AECD8 (-_CcdCreateKeyFromSetIdStr@CCD_SET_STRING_ID@@SAJPEAU_UNICODE_STRING@@AEBU_STRING@@@Z.c)
 */

__int64 __fastcall DpiPersistence::SortMonitorSetIdAndAppendHash(
        struct _UNICODE_STRING *this,
        struct _UNICODE_STRING *a2,
        __int64 a3,
        __int64 a4)
{
  CCD_SET_STRING_ID *v5; // rax
  CCD_SET_STRING_ID *v6; // rbx
  const struct _STRING *ConnectedSetStr; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // eax
  __int64 v11; // rdi
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-18h] BYREF

  DestinationString = 0LL;
  v5 = (CCD_SET_STRING_ID *)operator new[](0x38uLL, 0x63644356u, 256LL, a4);
  if ( v5 )
    v6 = CCD_SET_STRING_ID::CCD_SET_STRING_ID(v5, this);
  else
    v6 = 0LL;
  ConnectedSetStr = CCD_SET_STRING_ID::GetConnectedSetStr(v6);
  v10 = CCD_SET_STRING_ID::_CcdCreateKeyFromSetIdStr(&DestinationString, ConnectedSetStr, v8, v9);
  v11 = v10;
  if ( v10 < 0 )
  {
    WdLogSingleEntry1(2LL, v10);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"_CcdCreateKeyFromSetIdStr failed: (Status = 0x%I64x)",
      v11,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    memset(this->Buffer, 0, this->MaximumLength);
    this->Length = 0;
    RtlUnicodeStringCopy(this, &DestinationString);
    operator delete[](DestinationString.Buffer);
    DestinationString = 0LL;
    if ( v6 )
      CCD_SET_STRING_ID::`scalar deleting destructor'(v6);
  }
  return (unsigned int)v11;
}
