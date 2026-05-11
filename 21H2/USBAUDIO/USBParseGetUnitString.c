/*
 * XREFs of USBParseGetUnitString @ 0x1C002FD24
 * Callers:
 *     USBParseTerminalUnit @ 0x1C002FF90 (USBParseTerminalUnit.c)
 *     USBParseMixerUnit @ 0x1C00301E0 (USBParseMixerUnit.c)
 *     USBParseSelectorUnit @ 0x1C0030560 (USBParseSelectorUnit.c)
 *     USBParseFeatureUnit @ 0x1C0030740 (USBParseFeatureUnit.c)
 *     USBParseProcessUnit @ 0x1C0030A60 (USBParseProcessUnit.c)
 *     USBParseExtensionUnit @ 0x1C0030D70 (USBParseExtensionUnit.c)
 *     USBParseMIDIInJack @ 0x1C00310F0 (USBParseMIDIInJack.c)
 *     USBParseMIDIOutJack @ 0x1C0031210 (USBParseMIDIOutJack.c)
 *     USBParseMIDIElement @ 0x1C00313E0 (USBParseMIDIElement.c)
 * Callees:
 *     Feature_3052163386__private_IsEnabledDeviceUsage @ 0x1C000470C (Feature_3052163386__private_IsEnabledDeviceUsage.c)
 *     memmove @ 0x1C0013AC0 (memmove.c)
 *     USBHwAllocateAndBag @ 0x1C002CC2C (USBHwAllocateAndBag.c)
 *     USBHwSyncGetStringDescriptor @ 0x1C002E678 (USBHwSyncGetStringDescriptor.c)
 */

__int64 __fastcall USBParseGetUnitString(__int64 a1, unsigned __int8 *a2, _QWORD *a3)
{
  __int64 v3; // rax
  int StringDescriptor; // edi
  unsigned __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int8 *v11; // rcx
  __int64 v12; // rdx
  unsigned __int8 *v13; // rbx
  __int64 v14; // rcx
  UCHAR v16; // bl
  unsigned __int8 *PoolWithTag; // rax
  unsigned __int8 *v18; // rsi
  void *v19; // rbx
  PVOID v20; // r14
  size_t v21; // rbx
  int v22; // [rsp+20h] [rbp-38h]
  PVOID v23; // [rsp+60h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  *a3 = 0LL;
  StringDescriptor = 0;
  v8 = *(_QWORD *)(*(_QWORD *)(v3 + 72) + 40LL) + *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v3 + 72) + 40LL) + 2LL);
  if ( a2[2] != 7 )
  {
    v10 = *a2;
    v11 = a2 - 1;
    goto LABEL_16;
  }
  if ( (unsigned int)Feature_3052163386__private_IsEnabledDeviceUsage() )
  {
    v9 = *a2;
    if ( (unsigned __int8)v9 < 7u || (unsigned __int64)&a2[v9] > v8 )
      return 3221225473LL;
  }
  if ( (unsigned __int16)(*((_WORD *)a2 + 2) - 1) <= 1u )
  {
    if ( (unsigned int)Feature_3052163386__private_IsEnabledDeviceUsage() )
    {
      v12 = a2[6];
      if ( *a2 < (unsigned __int64)(v12 + 12) )
        return 3221225473LL;
    }
    else
    {
      LOBYTE(v12) = a2[6];
    }
    v13 = &a2[(unsigned __int8)v12];
    if ( !(unsigned int)Feature_3052163386__private_IsEnabledDeviceUsage() )
    {
      LOBYTE(v14) = v13[11];
LABEL_13:
      v10 = (unsigned __int8)v14;
      v11 = v13 + 12;
      goto LABEL_16;
    }
    v14 = v13[11];
    if ( (unsigned __int64)&v13[v14 + 12] < v8 )
      goto LABEL_13;
    return 3221225473LL;
  }
  v10 = *a2;
  v11 = a2 - 1;
LABEL_16:
  v16 = v11[v10];
  if ( v16 )
  {
    PoolWithTag = (unsigned __int8 *)ExAllocatePoolWithTag((POOL_TYPE)512, 0xFFuLL, 0x41627845u);
    LODWORD(v23) = 0;
    v18 = PoolWithTag;
    if ( PoolWithTag )
    {
      StringDescriptor = USBHwSyncGetStringDescriptor(a1, v16, 0x409u, PoolWithTag, v22, &v23);
      if ( StringDescriptor < 0 )
      {
        if ( StringDescriptor == -1073741823 )
          StringDescriptor = 0;
      }
      else
      {
        v19 = *(void **)(a1 + 8);
        v23 = ExAllocatePoolWithTag(PagedPool, *v18 + 2LL, 0x41627845u);
        v20 = v23;
        if ( v23 )
          StringDescriptor = USBHwAllocateAndBag(&v23, v19);
        else
          StringDescriptor = -1073741670;
        if ( StringDescriptor >= 0 )
        {
          v21 = (unsigned int)*v18 - 2;
          memmove(v20, v18 + 2, v21);
          *a3 = v20;
          *((_WORD *)v20 + (v21 >> 1)) = 0;
        }
      }
      ExFreePool(v18);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)StringDescriptor;
}
