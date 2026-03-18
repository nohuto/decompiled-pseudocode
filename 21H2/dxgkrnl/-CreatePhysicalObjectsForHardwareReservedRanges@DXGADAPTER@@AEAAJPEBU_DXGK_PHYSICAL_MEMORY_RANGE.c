/*
 * XREFs of ?CreatePhysicalObjectsForHardwareReservedRanges@DXGADAPTER@@AEAAJPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@I@Z @ 0x1C0219344
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01FECEC (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?SysMmCreatePhysicalObjectForExistingPhysicalMemory@@YAJPEAUSYSMM_ADAPTER@@T_LARGE_INTEGER@@_KQEAXW4SYSMM_PHYSICAL_OBJECT_OWNER@@PEAPEAUSYSMM_PHYSICAL_OBJECT@@PEAPEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x1C002A3D8 (-SysMmCreatePhysicalObjectForExistingPhysicalMemory@@YAJPEAUSYSMM_ADAPTER@@T_LARGE_INTEGER@@_KQE.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?ValidateHardwareReservedRanges@DXGADAPTER@@AEAAJPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@I@Z @ 0x1C0219424 (-ValidateHardwareReservedRanges@DXGADAPTER@@AEAAJPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@I@Z.c)
 *     ?DestroyPhysicalObjectsForHardwareReservedRanges@DXGADAPTER@@AEAAXXZ @ 0x1C02BAB6C (-DestroyPhysicalObjectsForHardwareReservedRanges@DXGADAPTER@@AEAAXXZ.c)
 */

__int64 __fastcall DXGADAPTER::CreatePhysicalObjectsForHardwareReservedRanges(
        struct SYSMM_ADAPTER **this,
        const struct _DXGK_PHYSICAL_MEMORY_RANGE *a2,
        unsigned int a3)
{
  unsigned __int64 v3; // rbx
  const struct _DXGK_PHYSICAL_MEMORY_RANGE *v4; // r14
  int v6; // ebp
  __int64 v7; // r9
  struct SYSMM_ADAPTER *v8; // r15
  __int64 v9; // rsi
  __int64 v11; // [rsp+88h] [rbp+20h] BYREF

  v3 = a3;
  v4 = a2;
  v6 = DXGADAPTER::ValidateHardwareReservedRanges((DXGADAPTER *)this, a2, a3);
  if ( v6 < 0 )
  {
LABEL_13:
    DXGADAPTER::DestroyPhysicalObjectsForHardwareReservedRanges((DXGADAPTER *)this);
    return (unsigned int)v6;
  }
  if ( (unsigned int)v3 > 1 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v3 < 8 )
      goto LABEL_12;
    this[563] = (struct SYSMM_ADAPTER *)ExAllocatePool2(256LL, 8 * v3, 1265072196LL, v7);
  }
  else
  {
    this[563] = (struct SYSMM_ADAPTER *)(this + 564);
    if ( (_DWORD)v3 )
      memset(this + 564, 0, 8LL * (unsigned int)v3);
  }
  v8 = this[563];
  *((_DWORD *)this + 1130) = v3;
  if ( !v8 )
  {
LABEL_12:
    WdLogSingleEntry1(6LL, 10945LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate physical object array for hardware reserve ranges",
      10945LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v6;
  }
  v9 = 0LL;
  if ( (_DWORD)v3 )
  {
    while ( 1 )
    {
      v6 = SysMmCreatePhysicalObjectForExistingPhysicalMemory(
             this[28],
             v4->BaseAddress.QuadPart,
             v4->NumberOfBytes.QuadPart,
             (__int64)this,
             4,
             (struct SYSMM_PHYSICAL_OBJECT **)v8 + v9,
             &v11);
      if ( v6 < 0 )
        break;
      v9 = (unsigned int)(v9 + 1);
      ++v4;
      if ( (unsigned int)v9 >= (unsigned int)v3 )
        return (unsigned int)v6;
    }
    goto LABEL_13;
  }
  return (unsigned int)v6;
}
