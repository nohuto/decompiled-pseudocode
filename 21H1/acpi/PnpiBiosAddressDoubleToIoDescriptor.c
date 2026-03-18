/*
 * XREFs of PnpiBiosAddressDoubleToIoDescriptor @ 0x1C009D38C
 * Callers:
 *     PnpBiosResourcesToNtResources @ 0x1C009CBE0 (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C000270C (WPP_RECORDER_SF_L.c)
 *     WPP_RECORDER_SF_D @ 0x1C00027D0 (WPP_RECORDER_SF_D.c)
 *     PnpiBiosValidateMemoryMapAttribute @ 0x1C0016F20 (PnpiBiosValidateMemoryMapAttribute.c)
 *     WPP_RECORDER_SF_ @ 0x1C001D52C (WPP_RECORDER_SF_.c)
 *     ACPIInitIgnoreResourceMapDescriptor @ 0x1C005D970 (ACPIInitIgnoreResourceMapDescriptor.c)
 *     PnpiBiosAddressHandleMemoryFlags @ 0x1C009C708 (PnpiBiosAddressHandleMemoryFlags.c)
 *     PnpiBiosAddressHandleGlobalFlags @ 0x1C009C998 (PnpiBiosAddressHandleGlobalFlags.c)
 *     PnpiUpdateResourceList @ 0x1C009D318 (PnpiUpdateResourceList.c)
 *     AcpiDiagTraceMemoryReserved @ 0x1C00AAFC0 (AcpiDiagTraceMemoryReserved.c)
 */

int __fastcall PnpiBiosAddressDoubleToIoDescriptor(
        unsigned __int8 *BugCheckParameter2,
        __int64 a2,
        unsigned int a3,
        char a4)
{
  __int64 v4; // rsi
  unsigned __int8 v6; // dl
  int v7; // edx
  int v8; // ecx
  unsigned int v9; // r8d
  __int64 v10; // r10
  int result; // eax
  const void **v12; // rdi
  struct _IO_RESOURCE_DESCRIPTOR *v13; // rdi
  unsigned int v14; // eax
  __int64 v15; // rax
  __int64 v16; // r15
  __int64 v17; // rdx
  int v18; // r12d
  unsigned int v19; // r14d
  unsigned __int8 v20; // al
  unsigned int v21; // r12d
  unsigned int v22; // eax
  unsigned int v23; // eax
  unsigned __int8 v24; // al
  int v25; // r8d
  char v26; // al
  int v27; // ecx
  int v28; // [rsp+40h] [rbp-48h]
  struct _IO_RESOURCE_DESCRIPTOR *v29; // [rsp+48h] [rbp-40h] BYREF
  __int64 v30; // [rsp+90h] [rbp+8h] BYREF
  __int64 v31; // [rsp+98h] [rbp+10h]
  unsigned int v32; // [rsp+A0h] [rbp+18h]

  v32 = a3;
  v31 = a2;
  v4 = 0LL;
  v29 = 0LL;
  v6 = BugCheckParameter2[4];
  v30 = 0LL;
  if ( (v6 & 1) != 0 && BugCheckParameter2[3] == 1 && (a4 & 1) != 0 )
    return 0;
  if ( !PnpiBiosValidateMemoryMapAttribute() )
  {
    v25 = *(_DWORD *)(BugCheckParameter2 + 14);
    v26 = v8;
    v27 = *(_DWORD *)(BugCheckParameter2 + 18);
    LOBYTE(v27) = BugCheckParameter2[3];
    LOBYTE(v25) = BugCheckParameter2[5];
    AcpiDiagTraceMemoryReserved(
      v27,
      v7,
      v25,
      *(_DWORD *)(BugCheckParameter2 + 6),
      *(_DWORD *)(BugCheckParameter2 + 10),
      *(_DWORD *)(BugCheckParameter2 + 14),
      *(_DWORD *)(BugCheckParameter2 + 18),
      v26);
    return 0;
  }
  if ( !v8 )
    return 0;
  v12 = (const void **)(v10 + 8LL * v9);
  result = PnpiUpdateResourceList(v12, &v29);
  if ( result >= 0 )
  {
    if ( BugCheckParameter2[3] > 1u )
    {
      v13 = v29;
    }
    else
    {
      result = PnpiUpdateResourceList(v12, &v30);
      if ( result < 0 )
        return result;
      v4 = v30;
      *(_BYTE *)(v30 + 1) = -127;
      v13 = (struct _IO_RESOURCE_DESCRIPTOR *)(v4 - 32);
      *(_WORD *)(v4 + 4) = 24576;
      *(_DWORD *)(v4 + 16) = 0;
    }
    v14 = *(unsigned __int16 *)(BugCheckParameter2 + 1);
    if ( v14 < 0x17 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_L(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0xDu,
          0xFu,
          (__int64)&WPP_fad942c932903a636e6a214bab40d1dd_Traceguids,
          *(unsigned __int16 *)(BugCheckParameter2 + 1));
        LOWORD(v14) = *(_WORD *)(BugCheckParameter2 + 1);
      }
      KeBugCheckEx(0xA5u, 0xFuLL, (ULONG_PTR)BugCheckParameter2, *BugCheckParameter2, (unsigned __int16)v14);
    }
    v15 = *(unsigned int *)(BugCheckParameter2 + 18);
    v16 = *(unsigned int *)(BugCheckParameter2 + 10);
    v17 = *(unsigned int *)(BugCheckParameter2 + 14);
    v18 = *(_DWORD *)(BugCheckParameter2 + 6) + 1;
    v19 = *(_DWORD *)(BugCheckParameter2 + 22);
    LODWORD(v29) = v18;
    v28 = v16 + v15;
    LODWORD(v30) = v17;
    if ( (_DWORD)v15 )
    {
      ACPIInitIgnoreResourceMapDescriptor(v16, v17, v15);
      LODWORD(v17) = v30;
    }
    v20 = BugCheckParameter2[4];
    if ( (v20 & 4) != 0 && (v20 & 8) != 0 )
    {
      v21 = v17 - v16 + 1;
      if ( v21 != v19 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0xDu,
            0x10u,
            (__int64)&WPP_fad942c932903a636e6a214bab40d1dd_Traceguids);
        v19 = v21;
      }
      if ( ((unsigned int)v16 & *(_DWORD *)(BugCheckParameter2 + 6)) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0xDu,
            0x11u,
            (__int64)&WPP_fad942c932903a636e6a214bab40d1dd_Traceguids);
        v18 = 1;
      }
      else
      {
        v18 = (int)v29;
      }
    }
    if ( BugCheckParameter2[3] )
    {
      if ( BugCheckParameter2[3] == 1 )
      {
        v23 = v30;
        v13->u.Port.Alignment = v18;
        v13->u.Port.Length = v19;
        v13->u.Port.MinimumAddress.LowPart = v16;
        v13->u.Port.MaximumAddress.QuadPart = v23;
        v13->u.Port.MinimumAddress.HighPart = 0;
        v13->Type = 1;
        v24 = BugCheckParameter2[5];
        if ( (v24 & 0x20) != 0 )
        {
          *(_WORD *)(v4 + 4) |= 1u;
          v24 = BugCheckParameter2[5];
        }
        *(_DWORD *)(v4 + 8) = (v24 & 0x10 | 8u) >> 3;
        *(_DWORD *)(v4 + 12) = v28;
        if ( (BugCheckParameter2[4] & 2) == 0 )
          v13->Flags |= 0x20u;
        v13->u.Port.Alignment = 1;
      }
      else if ( BugCheckParameter2[3] == 2 )
      {
        v13->Type = 6;
        v13->u.Port.Length = v19;
        v13->u.Port.Alignment = *(_DWORD *)(BugCheckParameter2 + 10);
        v13->u.Port.MinimumAddress.LowPart = *(_DWORD *)(BugCheckParameter2 + 14);
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0xDu,
          0x12u,
          (__int64)&WPP_fad942c932903a636e6a214bab40d1dd_Traceguids,
          BugCheckParameter2[3]);
      }
    }
    else
    {
      v22 = v30;
      v13->u.Port.Alignment = v18;
      v13->u.Port.Length = v19;
      v13->u.Port.MinimumAddress.LowPart = v16;
      v13->u.Port.MaximumAddress.LowPart = v22;
      v13->u.Port.MaximumAddress.HighPart = 0;
      v13->u.Port.MinimumAddress.HighPart = 0;
      v13->Type = 3;
      *(_DWORD *)(v4 + 8) = (~BugCheckParameter2[5] & 0x20 | 0x10u) >> 4;
      *(_DWORD *)(v4 + 12) = v28;
      PnpiBiosAddressHandleMemoryFlags((__int64)BugCheckParameter2, (__int64)v13);
      v13->u.Port.Alignment = 1;
    }
    result = PnpiBiosAddressHandleGlobalFlags((__int64)BugCheckParameter2, v31, v32, v13);
    if ( result >= 0 )
      return 0;
  }
  return result;
}
