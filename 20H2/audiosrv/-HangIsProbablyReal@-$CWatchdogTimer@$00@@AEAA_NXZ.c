/*
 * XREFs of ?HangIsProbablyReal@?$CWatchdogTimer@$00@@AEAA_NXZ @ 0x1800BBD30
 * Callers:
 *     ?OnTimer@?$CWatchdogTimer@$00@@AEAAXXZ @ 0x1800BC0AC (-OnTimer@-$CWatchdogTimer@$00@@AEAAXXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180052318 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     _tlgKeywordOn @ 0x1800B6E6C (_tlgKeywordOn.c)
 *     ?IsVirtualMachine@?$CWatchdogTimer@$00@@AEAA_NXZ @ 0x1800BC014 (-IsVirtualMachine@-$CWatchdogTimer@$00@@AEAA_NXZ.c)
 *     ?ProcessHasBeenRunningLongEnough@?$CWatchdogTimer@$00@@AEAAJPEA_N@Z @ 0x1800BC2F4 (-ProcessHasBeenRunningLongEnough@-$CWatchdogTimer@$00@@AEAAJPEA_N@Z.c)
 */

char __fastcall CWatchdogTimer<1>::HangIsProbablyReal(__int64 a1)
{
  _DWORD *v2; // rcx
  __int64 v3; // rcx
  char *v4; // rax
  unsigned __int8 *v5; // rdx
  _DWORD *v6; // rcx
  __int64 v7; // rcx
  _BYTE v9[4]; // [rsp+30h] [rbp-78h] BYREF
  int v10; // [rsp+34h] [rbp-74h] BYREF
  char v11; // [rsp+38h] [rbp-70h] BYREF
  _BYTE v12[32]; // [rsp+58h] [rbp-50h] BYREF
  char v13; // [rsp+78h] [rbp-30h] BYREF

  if ( IsDebuggerPresent() )
  {
    v2 = *(_DWORD **)(a1 + 8);
    if ( *v2 <= 5u || !tlgKeywordOn((__int64)v2, 1LL) )
      return 0;
    v4 = &v11;
    v5 = (unsigned __int8 *)&unk_1801661FF;
    goto LABEL_15;
  }
  if ( (unsigned __int8)CWatchdogTimer<1>::IsVirtualMachine() )
  {
    v10 = 17;
    RtlGetDeviceFamilyInfoEnum(0LL, &v10, 0LL);
    v6 = *(_DWORD **)(a1 + 8);
    if ( v10 != 6 )
    {
      if ( *v6 <= 5u || !tlgKeywordOn((__int64)v6, 1LL) )
        return 0;
      v4 = &v13;
      v5 = (unsigned __int8 *)&unk_1801661B0;
LABEL_15:
      tlgWriteTransfer_EtwEventWriteTransfer(v3, v5, 0LL, 0LL, 2, (__int64)v4);
      return 0;
    }
    if ( *v6 > 5u && tlgKeywordOn((__int64)v6, 1LL) )
      tlgWriteTransfer_EtwEventWriteTransfer(v7, byte_1801661D4, 0LL, 0LL, 2, (__int64)v12);
  }
  v9[0] = 0;
  if ( (int)CWatchdogTimer<1>::ProcessHasBeenRunningLongEnough(a1, v9) < 0 )
    return 0;
  if ( !v9[0] )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 48));
    return 0;
  }
  return 1;
}
