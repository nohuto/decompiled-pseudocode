/*
 * XREFs of imp_WdfRegistryQueryValue @ 0x1C000A4D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0003F34 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C000A094 (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     __security_check_cookie @ 0x1C001A350 (__security_check_cookie.c)
 *     memmove @ 0x1C001CB80 (memmove.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002DD0C (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_dd @ 0x1C002DEC8 (WPP_IFR_SF_dd.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C00588FC (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0058968 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfRegistryQueryValue(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Key,
        _UNICODE_STRING *ValueName,
        unsigned int ValueLength,
        void *Value,
        unsigned int *ValueLengthQueried,
        unsigned int *ValueType)
{
  __int64 v10; // rdx
  FxRegKey *v11; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  __int64 result; // rax
  ULONG Tag; // r8d
  void *m_Key; // r14
  __int128 *PoolWithTag; // rsi
  ULONG Length; // eax
  NTSTATUS v18; // eax
  unsigned int _a2; // ebx
  unsigned __int8 v20; // dl
  unsigned int v21; // eax
  unsigned __int8 CurrentIrql; // al
  ULONG ResultLength; // [rsp+44h] [rbp-74h] BYREF
  FxRegKey *pKey; // [rsp+48h] [rbp-70h] BYREF
  __int128 v26; // [rsp+50h] [rbp-68h] BYREF
  void *retaddr; // [rsp+B8h] [rbp+0h]

  pKey = 0LL;
  if ( !Key )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1006uLL);
  LOWORD(v10) = 0;
  v11 = (FxRegKey *)(~Key & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Key & 1) != 0 )
  {
    v10 = LOWORD(v11->__vftable);
    v11 = (FxRegKey *)((char *)v11 - v10);
  }
  if ( v11->m_Type == 4102 )
  {
    pKey = v11;
  }
  else
  {
    FxObjectHandleGetPtrQI(v11, (void **)&pKey, (void *)Key, 0x1006u, v10);
    v11 = pKey;
  }
  m_Globals = v11->m_Globals;
  if ( !ValueName )
    FxVerifierNullBugCheck(v11->m_Globals, retaddr);
  if ( m_Globals->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      FxVerifierDbgBreakPoint(m_Globals);
      return 3221225488LL;
    }
  }
  result = FxValidateUnicodeString(v11->m_Globals, ValueName);
  if ( (int)result >= 0 )
  {
    Tag = m_Globals->Tag;
    v26 = 0LL;
    m_Key = pKey->m_Key;
    if ( Value )
    {
      ResultLength = ValueLength + 12;
      PoolWithTag = (__int128 *)ExAllocatePoolWithTag(PagedPool, ValueLength + 12, Tag);
      if ( !PoolWithTag )
      {
        _a2 = -1073741670;
        v20 = 2;
LABEL_18:
        WPP_IFR_SF_qL(m_Globals, v20, 2u, 0xEu, WPP_FxRegistryAPI_cpp_Traceguids, (const void *)Key, _a2);
        return _a2;
      }
      Length = ResultLength;
    }
    else
    {
      Length = 12;
      PoolWithTag = &v26;
      ResultLength = 12;
    }
    v18 = ZwQueryValueKey(m_Key, ValueName, KeyValuePartialInformation, PoolWithTag, Length, &ResultLength);
    _a2 = v18;
    if ( v18 >= 0 )
    {
      if ( Value )
      {
        v21 = *((_DWORD *)PoolWithTag + 2);
        if ( ValueLength >= v21 )
          memmove(Value, (char *)PoolWithTag + 12, v21);
      }
    }
    else if ( v18 != -2147483643 )
    {
      goto LABEL_14;
    }
    if ( ValueLengthQueried )
      *ValueLengthQueried = *((_DWORD *)PoolWithTag + 2);
    if ( ValueType )
      *ValueType = *((_DWORD *)PoolWithTag + 1);
LABEL_14:
    if ( PoolWithTag != &v26 )
      ExFreePoolWithTag(PoolWithTag, 0);
    if ( (_a2 & 0x80000000) == 0 )
      return _a2;
    v20 = 2;
    if ( _a2 == -2147483643 && !Value && !ValueLength )
    {
      v20 = 5;
      if ( !m_Globals->FxVerboseOn )
        return _a2;
    }
    goto LABEL_18;
  }
  return result;
}
