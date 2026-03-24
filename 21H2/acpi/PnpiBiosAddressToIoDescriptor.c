/*
 * XREFs of PnpiBiosAddressToIoDescriptor @ 0x1C00A26F8
 * Callers:
 *     PnpBiosResourcesToNtResources @ 0x1C009CF00 (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C0002ACC (WPP_RECORDER_SF_L.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002B90 (WPP_RECORDER_SF_D.c)
 *     PnpiBiosValidateMemoryMapAttribute @ 0x1C0017180 (PnpiBiosValidateMemoryMapAttribute.c)
 *     WPP_RECORDER_SF_ @ 0x1C001D78C (WPP_RECORDER_SF_.c)
 *     ACPIInitIgnoreResourceMapDescriptor @ 0x1C005DB00 (ACPIInitIgnoreResourceMapDescriptor.c)
 *     PnpiBiosAddressHandleMemoryFlags @ 0x1C009CA28 (PnpiBiosAddressHandleMemoryFlags.c)
 *     PnpiBiosAddressHandleGlobalFlags @ 0x1C009CCB8 (PnpiBiosAddressHandleGlobalFlags.c)
 *     PnpiUpdateResourceList @ 0x1C009D638 (PnpiUpdateResourceList.c)
 *     AcpiDiagTraceMemoryReserved @ 0x1C00AB2D8 (AcpiDiagTraceMemoryReserved.c)
 */

int __fastcall PnpiBiosAddressToIoDescriptor(unsigned __int8 *BugCheckParameter2, __int64 a2, unsigned int a3, char a4)
{
  unsigned __int8 v4; // dl
  __int64 v6; // rsi
  int v7; // edx
  __int16 v8; // cx
  unsigned int v9; // r8d
  __int64 v10; // r10
  const void **v11; // rdi
  int result; // eax
  struct _IO_RESOURCE_DESCRIPTOR *v13; // rdi
  unsigned __int16 v14; // ax
  __int64 v15; // rax
  __int64 v16; // r13
  unsigned int v17; // r12d
  int v18; // r15d
  __int64 v19; // rcx
  unsigned __int8 v20; // al
  int v21; // r15d
  int v22; // r8d
  char v23; // al
  int v24; // ecx
  unsigned int v25; // eax
  unsigned __int8 v26; // al
  unsigned int v27; // eax
  unsigned __int16 v28; // [rsp+40h] [rbp-48h]
  struct _IO_RESOURCE_DESCRIPTOR *v29; // [rsp+48h] [rbp-40h] BYREF
  __int64 v30; // [rsp+90h] [rbp+8h] BYREF
  __int64 v31; // [rsp+98h] [rbp+10h]
  unsigned int v32; // [rsp+A0h] [rbp+18h]

  v32 = a3;
  v31 = a2;
  v4 = BugCheckParameter2[4];
  v6 = 0LL;
  v30 = 0LL;
  v29 = 0LL;
  if ( (v4 & 1) != 0 && BugCheckParameter2[3] == 1 && (a4 & 1) != 0 )
    return 0;
  if ( !PnpiBiosValidateMemoryMapAttribute() )
  {
    v22 = *((unsigned __int16 *)BugCheckParameter2 + 5);
    v23 = v8;
    v24 = *((unsigned __int16 *)BugCheckParameter2 + 6);
    LOBYTE(v24) = BugCheckParameter2[3];
    LOBYTE(v22) = BugCheckParameter2[5];
    AcpiDiagTraceMemoryReserved(
      v24,
      v7,
      v22,
      *((unsigned __int16 *)BugCheckParameter2 + 3),
      *((_WORD *)BugCheckParameter2 + 4),
      *((_WORD *)BugCheckParameter2 + 5),
      *((_WORD *)BugCheckParameter2 + 6),
      v23);
    return 0;
  }
  if ( !v8 )
    return 0;
  v11 = (const void **)(v10 + 8LL * v9);
  result = PnpiUpdateResourceList(v11, &v29);
  if ( result < 0 )
    return result;
  if ( BugCheckParameter2[3] <= 1u )
  {
    result = PnpiUpdateResourceList(v11, &v30);
    if ( result < 0 )
      return result;
    v6 = v30;
    *(_BYTE *)(v30 + 1) = -127;
    v13 = (struct _IO_RESOURCE_DESCRIPTOR *)(v6 - 32);
    *(_WORD *)(v6 + 4) = 24576;
    *(_DWORD *)(v6 + 16) = 0;
  }
  else
  {
    v13 = v29;
  }
  v14 = *(_WORD *)(BugCheckParameter2 + 1);
  if ( v14 < 0xDu )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_L(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0xDu,
        0xBu,
        (__int64)&WPP_fad942c932903a636e6a214bab40d1dd_Traceguids,
        *(unsigned __int16 *)(BugCheckParameter2 + 1));
      v14 = *(_WORD *)(BugCheckParameter2 + 1);
    }
    KeBugCheckEx(0xA5u, 0xFuLL, (ULONG_PTR)BugCheckParameter2, *BugCheckParameter2, v14);
  }
  v15 = *((unsigned __int16 *)BugCheckParameter2 + 6);
  v16 = *((unsigned __int16 *)BugCheckParameter2 + 4);
  v17 = *((unsigned __int16 *)BugCheckParameter2 + 7);
  v18 = *((unsigned __int16 *)BugCheckParameter2 + 3) + 1;
  LODWORD(v29) = v18;
  v28 = v15 + v16;
  v19 = *((unsigned __int16 *)BugCheckParameter2 + 5);
  LOWORD(v30) = *((_WORD *)BugCheckParameter2 + 5);
  if ( (_WORD)v15 )
  {
    ACPIInitIgnoreResourceMapDescriptor(v16, v19, v15);
    LOWORD(v19) = v30;
  }
  v20 = BugCheckParameter2[4];
  if ( (v20 & 4) != 0 && (v20 & 8) != 0 )
  {
    v21 = (unsigned __int16)v19 - (_DWORD)v16 + 1;
    if ( v21 != v17 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0xDu,
          0xCu,
          (__int64)&WPP_fad942c932903a636e6a214bab40d1dd_Traceguids);
      v17 = v21;
    }
    if ( ((unsigned __int16)v16 & *((_WORD *)BugCheckParameter2 + 3)) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0xDu,
          0xDu,
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
      v25 = (unsigned __int16)v30;
      v13->u.Port.Alignment = v18;
      v13->u.Port.Length = v17;
      v13->u.Port.MinimumAddress.LowPart = v16;
      v13->u.Port.MaximumAddress.QuadPart = v25;
      v13->u.Port.MinimumAddress.HighPart = 0;
      v13->Type = 1;
      v26 = BugCheckParameter2[5];
      if ( (v26 & 0x20) != 0 )
      {
        *(_WORD *)(v6 + 4) |= 1u;
        v26 = BugCheckParameter2[5];
      }
      *(_DWORD *)(v6 + 8) = (v26 & 0x10 | 8u) >> 3;
      *(_DWORD *)(v6 + 12) = v28;
      if ( (BugCheckParameter2[4] & 2) == 0 )
        v13->Flags |= 0x20u;
      v13->u.Port.Alignment = 1;
    }
    else if ( BugCheckParameter2[3] == 2 )
    {
      v13->Type = 6;
      v13->u.Port.Alignment = *((unsigned __int16 *)BugCheckParameter2 + 4);
      v13->u.Port.MinimumAddress.LowPart = *((unsigned __int16 *)BugCheckParameter2 + 5);
      v13->u.Port.Length = v17;
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0xDu,
        0xEu,
        (__int64)&WPP_fad942c932903a636e6a214bab40d1dd_Traceguids,
        BugCheckParameter2[3]);
    }
  }
  else
  {
    v27 = (unsigned __int16)v30;
    v13->u.Port.Alignment = v18;
    v13->u.Port.Length = v17;
    v13->u.Port.MinimumAddress.LowPart = v16;
    v13->u.Port.MaximumAddress.LowPart = v27;
    v13->u.Port.MaximumAddress.HighPart = 0;
    v13->u.Port.MinimumAddress.HighPart = 0;
    v13->Type = 3;
    *(_DWORD *)(v6 + 8) = (~BugCheckParameter2[5] & 0x20 | 0x10u) >> 4;
    *(_DWORD *)(v6 + 12) = v28;
    PnpiBiosAddressHandleMemoryFlags((__int64)BugCheckParameter2, (__int64)v13);
    v13->u.Port.Alignment = 1;
  }
  result = PnpiBiosAddressHandleGlobalFlags((__int64)BugCheckParameter2, v31, v32, v13);
  if ( result >= 0 )
    return 0;
  return result;
}
