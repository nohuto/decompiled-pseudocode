/*
 * XREFs of PnpiBiosAddressExtendedToIoDescriptor @ 0x1C00B35FC
 * Callers:
 *     PnpBiosResourcesToNtResources @ 0x1C009CF00 (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C0002ACC (WPP_RECORDER_SF_L.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002B90 (WPP_RECORDER_SF_D.c)
 *     PnpiBiosValidateMemoryMapAttribute @ 0x1C0017180 (PnpiBiosValidateMemoryMapAttribute.c)
 *     WPP_RECORDER_SF_ @ 0x1C001D78C (WPP_RECORDER_SF_.c)
 *     ACPIInitIgnoreResourceMapDescriptor @ 0x1C005DB00 (ACPIInitIgnoreResourceMapDescriptor.c)
 *     WPP_RECORDER_SF_i @ 0x1C005E858 (WPP_RECORDER_SF_i.c)
 *     PnpiBiosAddressHandleGlobalFlags @ 0x1C009CCB8 (PnpiBiosAddressHandleGlobalFlags.c)
 *     PnpiUpdateResourceList @ 0x1C009D638 (PnpiUpdateResourceList.c)
 *     AcpiDiagTraceMemoryReserved @ 0x1C00AB2D8 (AcpiDiagTraceMemoryReserved.c)
 */

int __fastcall PnpiBiosAddressExtendedToIoDescriptor(
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
  ULONGLONG v19; // r15
  unsigned __int8 v20; // cl
  ULONG_PTR v21; // r12
  ULONGLONG v22; // rax
  unsigned __int8 v23; // al
  __int64 v24; // rax
  ULONGLONG MaximumAddress; // [rsp+28h] [rbp-28h]
  ULONGLONG v26; // [rsp+40h] [rbp-10h] BYREF
  struct _IO_RESOURCE_DESCRIPTOR *v27; // [rsp+48h] [rbp-8h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+90h] [rbp+40h] BYREF
  __int64 v29; // [rsp+98h] [rbp+48h]
  unsigned int v30; // [rsp+A0h] [rbp+50h]

  v30 = a3;
  v29 = a2;
  v27 = 0LL;
  v4 = 0LL;
  v26 = 0LL;
  if ( (BugCheckParameter2[4] & 1) != 0 && BugCheckParameter2[3] == 1 && (a4 & 1) != 0 )
    return 0;
  if ( !PnpiBiosValidateMemoryMapAttribute() )
  {
    AcpiDiagTraceMemoryReserved(
      BugCheckParameter2[3],
      v6,
      BugCheckParameter2[5],
      *((_QWORD *)BugCheckParameter2 + 1),
      *((_QWORD *)BugCheckParameter2 + 2),
      *((_QWORD *)BugCheckParameter2 + 3),
      *((_QWORD *)BugCheckParameter2 + 4),
      v7);
    return 0;
  }
  if ( !v7 )
    return 0;
  v10 = (const void **)(v9 + 8LL * v8);
  result = PnpiUpdateResourceList(v10, &v27);
  if ( result < 0 )
    return result;
  if ( BugCheckParameter2[3] > 1u )
  {
    v12 = v27;
  }
  else
  {
    result = PnpiUpdateResourceList(v10, &v26);
    if ( result < 0 )
      return result;
    v4 = v26;
    *(_BYTE *)(v26 + 1) = -127;
    v12 = (struct _IO_RESOURCE_DESCRIPTOR *)(v4 - 32);
    *(_WORD *)(v4 + 4) = 24576;
  }
  v13 = *(unsigned __int16 *)(BugCheckParameter2 + 1);
  if ( v13 < 0x35 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_L(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0xDu,
        0x18u,
        (__int64)&WPP_fad942c932903a636e6a214bab40d1dd_Traceguids,
        *(unsigned __int16 *)(BugCheckParameter2 + 1));
      LOWORD(v13) = *(_WORD *)(BugCheckParameter2 + 1);
    }
    KeBugCheckEx(0xA5u, 0xFuLL, (ULONG_PTR)BugCheckParameter2, *BugCheckParameter2, (unsigned __int16)v13);
  }
  v14 = *((_QWORD *)BugCheckParameter2 + 4);
  v15 = *((_QWORD *)BugCheckParameter2 + 2);
  v16 = *((_QWORD *)BugCheckParameter2 + 1) + 1LL;
  v17 = *((_QWORD *)BugCheckParameter2 + 5);
  v18 = *((_QWORD *)BugCheckParameter2 + 3);
  BugCheckParameter4 = v17;
  v27 = (struct _IO_RESOURCE_DESCRIPTOR *)v16;
  v19 = v14 + v15;
  v26 = v18;
  if ( v14 )
  {
    ACPIInitIgnoreResourceMapDescriptor(v15, v18, v14);
    v17 = BugCheckParameter4;
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
          0x19u,
          (__int64)&WPP_fad942c932903a636e6a214bab40d1dd_Traceguids);
      v17 = v21;
      BugCheckParameter4 = v21;
    }
    if ( (v15 & *((_QWORD *)BugCheckParameter2 + 1)) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0xDu,
          0x1Au,
          (__int64)&WPP_fad942c932903a636e6a214bab40d1dd_Traceguids);
        v17 = BugCheckParameter4;
      }
      v16 = 1LL;
    }
    else
    {
      v16 = (ULONGLONG)v27;
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
        0x1Bu,
        (__int64)&WPP_fad942c932903a636e6a214bab40d1dd_Traceguids,
        v17);
      v17 = BugCheckParameter4;
    }
    if ( (AcpiOverrideAttributes & 0x80u) == 0 || v15 < 0xFFFFFFFF )
      KeBugCheckEx(0xA5u, 0x14uLL, (ULONG_PTR)BugCheckParameter2, *BugCheckParameter2, (ULONG_PTR)&BugCheckParameter4);
  }
  if ( BugCheckParameter2[3] )
  {
    if ( BugCheckParameter2[3] == 1 )
    {
      v12->u.Port.Alignment = v16;
      v12->u.Port.Length = BugCheckParameter4;
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
      v12->u.Port.Length = BugCheckParameter4;
      v12->u.Port.Alignment = *((_DWORD *)BugCheckParameter2 + 4);
      v12->u.Port.MinimumAddress.LowPart = *((_DWORD *)BugCheckParameter2 + 6);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(MaximumAddress) = BugCheckParameter2[3];
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0xDu,
        0x1Cu,
        (__int64)&WPP_fad942c932903a636e6a214bab40d1dd_Traceguids,
        MaximumAddress);
    }
  }
  else
  {
    result = RtlIoEncodeMemIoResource(v12, 3u, v17, v16, v15, v26);
    if ( result < 0 )
      return result;
    if ( (BugCheckParameter2[5] & 0x20) != 0 )
      *(_DWORD *)(v4 + 8) = 1;
    else
      *(_DWORD *)(v4 + 8) = v12->Type;
    *(_QWORD *)(v4 + 12) = v19;
    v24 = *((_QWORD *)BugCheckParameter2 + 6);
    if ( (v24 & 0xC) != 0 )
    {
      v12->Flags |= 0x20u;
      v24 = *((_QWORD *)BugCheckParameter2 + 6);
    }
    if ( (v24 & 2) != 0 )
    {
      v12->Flags |= 8u;
      v24 = *((_QWORD *)BugCheckParameter2 + 6);
    }
    if ( (v24 & 6) != 0 )
      v12->Flags |= 4u;
    if ( (BugCheckParameter2[5] & 1) == 0 )
      v12->Flags |= 1u;
  }
  result = PnpiBiosAddressHandleGlobalFlags((__int64)BugCheckParameter2, v29, v30, v12);
  if ( result >= 0 )
    return 0;
  return result;
}
