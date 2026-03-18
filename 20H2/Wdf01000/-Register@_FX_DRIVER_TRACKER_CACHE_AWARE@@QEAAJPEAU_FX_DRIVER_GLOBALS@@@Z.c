/*
 * XREFs of ?Register@_FX_DRIVER_TRACKER_CACHE_AWARE@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C008F9A4
 * Callers:
 *     FxRegisterBugCheckCallback @ 0x1C008FEFC (FxRegisterBugCheckCallback.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     WdmlibProcgrpInitialize @ 0x1C00C5F58 (WdmlibProcgrpInitialize.c)
 */

__int64 __fastcall _FX_DRIVER_TRACKER_CACHE_AWARE::Register(
        _FX_DRIVER_TRACKER_CACHE_AWARE *this,
        _FX_DRIVER_GLOBALS *__formal)
{
  unsigned int v2; // ebx
  __int64 (__fastcall *SystemRoutineAddress)(__int64); // rax
  unsigned int m_Number; // eax
  __int64 (__fastcall *v6)(__int64, __int64); // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  char *v9; // rax
  __int64 (__fastcall *v10)(__int64, __int64); // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // ebp
  POOL_TYPE v14; // ecx
  unsigned __int64 PoolWithTag; // rax
  void *v16; // rcx
  unsigned int v17; // r9d
  __int64 v18; // rsi
  PVOID v19; // rax
  unsigned int v20; // edx
  __int64 v21; // rcx
  _UNICODE_STRING funcName; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  funcName = 0LL;
  if ( this->m_PoolToFree )
    return v2;
  WdmlibProcgrpInitialize();
  RtlInitUnicodeString(&funcName, L"KeQueryMaximumProcessorCountEx");
  SystemRoutineAddress = (__int64 (__fastcall *)(__int64))MmGetSystemRoutineAddress(&funcName);
  if ( SystemRoutineAddress )
  {
    m_Number = SystemRoutineAddress(0xFFFFLL);
  }
  else
  {
    RtlInitUnicodeString(&funcName, L"KeQueryMaximumProcessorCount");
    v6 = (__int64 (__fastcall *)(__int64, __int64))MmGetSystemRoutineAddress(&funcName);
    if ( v6 )
    {
      m_Number = v6(v8, v7);
    }
    else
    {
      if ( (HIDWORD(WPP_GLOBAL_WDF_Control.Dpc.SystemArgument1) != 5
         || !LODWORD(WPP_GLOBAL_WDF_Control.Dpc.SystemArgument2))
        && *(void **)((char *)&WPP_GLOBAL_WDF_Control.Dpc.SystemArgument1 + 4) != (void *)6 )
      {
        return (unsigned int)-1073741637;
      }
      v9 = *(char **)&KeNumberProcessors;
      m_Number = *v9;
    }
  }
  this->m_Number = m_Number;
  if ( m_Number > 0x100 )
    return (unsigned int)-1073741637;
  if ( m_Number <= 1 )
  {
    v13 = 8;
    goto LABEL_15;
  }
  RtlInitUnicodeString(&funcName, L"KeGetRecommendedSharedDataAlignment");
  v10 = (__int64 (__fastcall *)(__int64, __int64))MmGetSystemRoutineAddress(&funcName);
  if ( !v10 )
    return (unsigned int)-1073741637;
  v13 = v10(v12, v11);
  m_Number = this->m_Number;
LABEL_15:
  v14 = ExDefaultNonPagedPoolType;
  this->m_EntrySize = v13;
  PoolWithTag = (unsigned __int64)ExAllocatePoolWithTag(v14, v13 * m_Number, 0x72447846u);
  v16 = (void *)PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  v17 = this->m_Number;
  if ( v17 > 1 )
  {
    v18 = v13 - 1;
    if ( (v18 & PoolWithTag) != 0 )
    {
      ExFreePoolWithTag((PVOID)PoolWithTag, 0);
      v19 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v13 * (this->m_Number + 1), 0x72447846u);
      v16 = v19;
      if ( !v19 )
        return (unsigned int)-1073741670;
      v17 = this->m_Number;
      PoolWithTag = ~v18 & ((unsigned __int64)v19 + v18);
    }
  }
  this->m_PoolToFree = v16;
  v20 = 0;
  this->m_DriverUsage = (_FX_DRIVER_TRACKER_CACHE_AWARE::_FX_DRIVER_TRACKER_ENTRY *)PoolWithTag;
  if ( v17 )
  {
    do
    {
      v21 = v20 * this->m_EntrySize;
      ++v20;
      *(_FX_DRIVER_GLOBALS *volatile *)((char *)&this->m_DriverUsage->FxDriverGlobals + v21) = 0LL;
    }
    while ( v20 < this->m_Number );
  }
  return v2;
}
