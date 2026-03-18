/*
 * XREFs of imp_WdfRegistryAssignMemory @ 0x1C006FFD0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00058D8 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     ?_VerifyStateSeparationRegistryPolicy@FxRegKey@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00152DC (-_VerifyStateSeparationRegistryPolicy@FxRegKey@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0015654 (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     WPP_IFR_SF_qqd @ 0x1C0030604 (WPP_IFR_SF_qqd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006CAD4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfRegistryAssignMemory(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *Key,
        _UNICODE_STRING *ValueName,
        ULONG ValueType,
        WDFMEMORY__ *Memory,
        _WDFMEMORY_OFFSET *MemoryOffsets)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  WDFMEMORY__ *_a2; // rsi
  __int64 result; // rax
  char *Data; // r14
  ULONG v12; // eax
  _WDFMEMORY_OFFSET *v13; // rdi
  ULONG DataSize; // r13d
  unsigned __int64 BufferLength; // rdx
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // rax
  NTSTATUS v18; // eax
  unsigned int v19; // edi
  unsigned __int16 v20; // r9
  ULONG_PTR retaddr; // [rsp+78h] [rbp+0h]
  IFxMemory *pMemory; // [rsp+80h] [rbp+8h] BYREF
  FxRegKey *pKey; // [rsp+90h] [rbp+18h] BYREF
  ULONG Type; // [rsp+98h] [rbp+20h]

  Type = ValueType;
  pMemory = 0LL;
  pKey = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Key, 0x1006u, (void **)&pKey);
  m_Globals = pKey->m_Globals;
  if ( !ValueName )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  _a2 = Memory;
  if ( !Memory )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateUnicodeString(m_Globals, ValueName);
    if ( (int)result >= 0 )
    {
      FxObjectHandleGetPtr(m_Globals, (unsigned __int64)_a2, 0x100Au, (void **)&pMemory);
      Data = (char *)pMemory->GetBuffer(pMemory);
      v12 = pMemory->GetBufferSize(pMemory);
      v13 = MemoryOffsets;
      DataSize = v12;
      if ( !MemoryOffsets )
        goto LABEL_14;
      BufferLength = MemoryOffsets->BufferLength;
      v16 = BufferLength + MemoryOffsets->BufferOffset;
      if ( v16 < BufferLength || v16 > pMemory->GetBufferSize(pMemory) )
      {
        v20 = 33;
      }
      else
      {
        v17 = v13->BufferLength;
        if ( !v17 )
        {
LABEL_13:
          Data += v13->BufferOffset;
LABEL_14:
          v18 = ZwSetValueKey(pKey->m_Key, ValueName, 0, Type, Data, DataSize);
          v19 = v18;
          if ( v18 < 0 )
            WPP_IFR_SF_qL(m_Globals, 2u, 2u, 0x23u, WPP_FxRegistryAPI_cpp_Traceguids, Key, v18);
          else
            FxRegKey::_VerifyStateSeparationRegistryPolicy(pKey->m_Globals, pKey->m_Key);
          return v19;
        }
        if ( v17 <= 0xFFFFFFFF )
        {
          DataSize = v13->BufferLength;
          goto LABEL_13;
        }
        v20 = 34;
      }
      v19 = -1073741675;
      WPP_IFR_SF_qqd(m_Globals, 2u, 2u, v20, WPP_FxRegistryAPI_cpp_Traceguids, Key, _a2, -1073741675);
      return v19;
    }
  }
  return result;
}
