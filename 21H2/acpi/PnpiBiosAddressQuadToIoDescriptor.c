/*
 * XREFs of PnpiBiosAddressQuadToIoDescriptor @ 0x1C00B3A44
 * Callers:
 *     PnpBiosResourcesToNtResources @ 0x1C009CF00 (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C0002ACC (WPP_RECORDER_SF_L.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002B90 (WPP_RECORDER_SF_D.c)
 *     PnpiBiosValidateMemoryMapAttribute @ 0x1C0017180 (PnpiBiosValidateMemoryMapAttribute.c)
 *     WPP_RECORDER_SF_ @ 0x1C001D78C (WPP_RECORDER_SF_.c)
 *     ACPIInitIgnoreResourceMapDescriptor @ 0x1C005DB00 (ACPIInitIgnoreResourceMapDescriptor.c)
 *     WPP_RECORDER_SF_i @ 0x1C005E858 (WPP_RECORDER_SF_i.c)
 *     PnpiBiosAddressHandleMemoryFlags @ 0x1C009CA28 (PnpiBiosAddressHandleMemoryFlags.c)
 *     PnpiBiosAddressHandleGlobalFlags @ 0x1C009CCB8 (PnpiBiosAddressHandleGlobalFlags.c)
 *     PnpiUpdateResourceList @ 0x1C009D638 (PnpiUpdateResourceList.c)
 *     AcpiDiagTraceMemoryReserved @ 0x1C00AB2D8 (AcpiDiagTraceMemoryReserved.c)
 */

int __fastcall PnpiBiosAddressQuadToIoDescriptor(
        unsigned __int8 *BugCheckParameter2,
        __int64 a2,
        unsigned int a3,
        char a4)
{
  ULONGLONG v4; // rsi
  char v6; // dl
  __int64 v7; // rcx
  unsigned int v8; // r8d
  __int64 v9; // r10
  const void **v10; // rdi
  int result; // eax
  struct _IO_RESOURCE_DESCRIPTOR *v12; // rdi
  unsigned int v13; // eax
  __int64 v14; // rax
  ULONGLONG v15; // r13
  ULONGLONG v16; // r12
  ULONG_PTR v17; // r8
  ULONGLONG v18; // rdx
  ULONGLONG v19; // r14
  unsigned __int8 v20; // cl
  ULONG_PTR v21; // r12
  ULONGLONG v22; // rax
  unsigned __int8 v23; // al
  int v24; // eax
  ULONGLONG MaximumAddress; // [rsp+28h] [rbp-28h]
  ULONGLONG v26; // [rsp+40h] [rbp-10h] BYREF
  ULONGLONG Alignment; // [rsp+48h] [rbp-8h] BYREF
  ULONG_PTR Length; // [rsp+90h] [rbp+40h] BYREF
  __int64 v29; // [rsp+98h] [rbp+48h]
  unsigned int v30; // [rsp+A0h] [rbp+50h]

  v30 = a3;
  v29 = a2;
  v26 = 0LL;
  v4 = 0LL;
  Alignment = 0LL;
  if ( (BugCheckParameter2[4] & 1) != 0 && BugCheckParameter2[3] == 1 && (a4 & 1) != 0 )
    return 0;
  if ( !PnpiBiosValidateMemoryMapAttribute() )
  {
    AcpiDiagTraceMemoryReserved(
      BugCheckParameter2[3],
      v6,
      BugCheckParameter2[5],
      *(_QWORD *)(BugCheckParameter2 + 6),
      *(_QWORD *)(BugCheckParameter2 + 14),
      *(_QWORD *)(BugCheckParameter2 + 22),
      *(_QWORD *)(BugCheckParameter2 + 30),
      v7);
    return 0;
  }
  if ( !v7 )
    return 0;
  v10 = (const void **)(v9 + 8LL * v8);
  result = PnpiUpdateResourceList(v10, &v26);
  if ( result < 0 )
    return result;
  if ( BugCheckParameter2[3] > 1u )
  {
    v12 = (struct _IO_RESOURCE_DESCRIPTOR *)v26;
  }
  else
  {
    result = PnpiUpdateResourceList(v10, &Alignment);
    if ( result < 0 )
      return result;
    v4 = Alignment;
    *(_BYTE *)(Alignment + 1) = -127;
    v12 = (struct _IO_RESOURCE_DESCRIPTOR *)(v4 - 32);
    *(_WORD *)(v4 + 4) = 24576;
  }
  v13 = *(unsigned __int16 *)(BugCheckParameter2 + 1);
  if ( v13 < 0x2B )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_L(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0xDu,
        0x13u,
        (__int64)&WPP_fad942c932903a636e6a214bab40d1dd_Traceguids,
        *(unsigned __int16 *)(BugCheckParameter2 + 1));
      LOWORD(v13) = *(_WORD *)(BugCheckParameter2 + 1);
    }
    KeBugCheckEx(0xA5u, 0xFuLL, (ULONG_PTR)BugCheckParameter2, *BugCheckParameter2, (unsigned __int16)v13);
  }
  v14 = *(_QWORD *)(BugCheckParameter2 + 30);
  v15 = *(_QWORD *)(BugCheckParameter2 + 14);
  v16 = *(_QWORD *)(BugCheckParameter2 + 6) + 1LL;
  v17 = *(_QWORD *)(BugCheckParameter2 + 38);
  v18 = *(_QWORD *)(BugCheckParameter2 + 22);
  Length = v17;
  Alignment = v16;
  v19 = v14 + v15;
  v26 = v18;
  if ( v14 )
  {
    ACPIInitIgnoreResourceMapDescriptor(v15, v18, v14);
    v17 = Length;
    v18 = v26;
  }
  v20 = BugCheckParameter2[4];
  if ( (v20 & 4) != 0 && (v20 & 8) != 0 )
  {
    v21 = v18 - v15 + 1;
    if ( v21 != v17 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0xDu,
          0x14u,
          (__int64)&WPP_fad942c932903a636e6a214bab40d1dd_Traceguids);
      v17 = v21;
      Length = v21;
    }
    if ( (v15 & *(_QWORD *)(BugCheckParameter2 + 6)) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0xDu,
          0x15u,
          (__int64)&WPP_fad942c932903a636e6a214bab40d1dd_Traceguids);
        v17 = Length;
      }
      Alignment = 1LL;
    }
  }
  if ( v17 > 0xFFFFFFFF && BugCheckParameter2[3] )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_i(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v18,
        0xDu,
        0x16u,
        (__int64)&WPP_fad942c932903a636e6a214bab40d1dd_Traceguids,
        v17);
      v17 = Length;
    }
    if ( (AcpiOverrideAttributes & 0x80u) == 0 || v15 < 0xFFFFFFFF )
      KeBugCheckEx(0xA5u, 0x14uLL, (ULONG_PTR)BugCheckParameter2, *BugCheckParameter2, (ULONG_PTR)&Length);
  }
  if ( BugCheckParameter2[3] )
  {
    if ( BugCheckParameter2[3] == 1 )
    {
      v12->u.Port.Alignment = Alignment;
      v12->u.Port.Length = Length;
      v22 = v26;
      v12->u.Port.MinimumAddress.QuadPart = v15;
      v12->u.Port.MaximumAddress.QuadPart = v22;
      v12->Type = 1;
      v23 = BugCheckParameter2[5];
      if ( (v23 & 0x20) != 0 )
      {
        *(_WORD *)(v4 + 4) |= 1u;
        v23 = BugCheckParameter2[5];
      }
      *(_DWORD *)(v4 + 8) = (v23 & 0x10 | 8u) >> 3;
      *(_QWORD *)(v4 + 12) = v19;
      if ( (BugCheckParameter2[4] & 2) == 0 )
        v12->Flags |= 0x20u;
      v12->u.Port.Alignment = 1;
    }
    else if ( BugCheckParameter2[3] == 2 )
    {
      v12->Type = 6;
      v12->u.Port.Length = Length;
      v12->u.Port.Alignment = *(_DWORD *)(BugCheckParameter2 + 14);
      v12->u.Port.MinimumAddress.LowPart = *(_DWORD *)(BugCheckParameter2 + 22);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(MaximumAddress) = BugCheckParameter2[3];
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0xDu,
        0x17u,
        (__int64)&WPP_fad942c932903a636e6a214bab40d1dd_Traceguids,
        MaximumAddress);
    }
  }
  else
  {
    result = RtlIoEncodeMemIoResource(v12, 3u, v17, Alignment, v15, v26);
    if ( result < 0 )
      return result;
    v24 = (BugCheckParameter2[5] & 0x20) != 0 ? 1 : v12->Type;
    *(_DWORD *)(v4 + 8) = v24;
    *(_QWORD *)(v4 + 12) = v19;
    PnpiBiosAddressHandleMemoryFlags((__int64)BugCheckParameter2, (__int64)v12);
  }
  result = PnpiBiosAddressHandleGlobalFlags((__int64)BugCheckParameter2, v29, v30, v12);
  if ( result >= 0 )
    return 0;
  return result;
}
