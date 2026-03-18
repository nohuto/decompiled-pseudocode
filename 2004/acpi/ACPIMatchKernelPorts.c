/*
 * XREFs of ACPIMatchKernelPorts @ 0x1C0031594
 * Callers:
 *     ACPIBuildProcessDevicePhaseCrs @ 0x1C0019D50 (ACPIBuildProcessDevicePhaseCrs.c)
 * Callees:
 *     WPP_RECORDER_SF_qqss @ 0x1C001E028 (WPP_RECORDER_SF_qqss.c)
 */

char __fastcall ACPIMatchKernelPorts(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  char v3; // bl
  char v5; // r14
  __int64 v7; // r12
  void *QuadPart; // rbp
  __int64 v9; // r13
  const char *v10; // rax
  unsigned __int16 v11; // r15
  unsigned __int64 v12; // rcx
  const char *v13; // r10
  __int64 v14; // r8
  unsigned __int16 v15; // r9
  __int64 v16; // r8
  __int128 v18; // [rsp+50h] [rbp-58h] BYREF
  __int128 v19; // [rsp+60h] [rbp-48h]
  unsigned int v21; // [rsp+C0h] [rbp+18h]
  __int64 v22; // [rsp+C8h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(a2 + 32);
  v3 = 0;
  v21 = 0;
  v5 = *(_BYTE *)v2;
  v18 = 0LL;
  v22 = 32LL;
  v19 = 0LL;
  v7 = 0LL;
  QuadPart = 0LL;
  v9 = 0LL;
  if ( (int)HeadlessDispatch(16LL, 0LL, 0LL, &v18, &v22) >= 0 && (_DWORD)v18 == 1 && BYTE8(v18) )
    v7 = v19;
  LOBYTE(v10) = KdComPortInUse;
  if ( !KdComPortInUse && !KdHvComPortInUse && !v7 )
    return (char)v10;
  if ( KdComPortInUse )
    QuadPart = (void *)KdComPortInUse;
  LOBYTE(v10) = KdHvComPortInUse;
  if ( KdHvComPortInUse )
    v9 = KdHvComPortInUse;
  if ( !*(_DWORD *)(a2 + 24) )
    return (char)v10;
  while ( 1 )
  {
    if ( v5 < 0 )
    {
      v11 = *(_WORD *)(v2 + 1) + 3;
    }
    else
    {
      LOBYTE(v10) = v5 & 7;
      v11 = (v5 & 7) + 1;
      v5 &= 0x78u;
    }
    if ( v5 == 120 )
      return (char)v10;
    if ( v5 == 64 )
      break;
    if ( v5 == 72 )
    {
      v12 = *(_WORD *)(v2 + 1) & 0x3FF;
      goto LABEL_45;
    }
    switch ( (unsigned __int8)v5 )
    {
      case 0x87u:
        if ( !*(_BYTE *)(v2 + 3) )
        {
          if ( QuadPart )
            QuadPart = (void *)MmGetPhysicalAddress(QuadPart).QuadPart;
LABEL_42:
          v12 = (unsigned int)(*(_DWORD *)(v2 + 10) + *(_DWORD *)(v2 + 18));
          goto LABEL_45;
        }
        if ( *(_BYTE *)(v2 + 3) == 1 )
          goto LABEL_42;
        break;
      case 0x88u:
        if ( !*(_BYTE *)(v2 + 3) )
        {
          if ( QuadPart )
            QuadPart = (void *)MmGetPhysicalAddress(QuadPart).QuadPart;
LABEL_36:
          v12 = *(unsigned __int16 *)(v2 + 8) + (unsigned __int64)*(unsigned __int16 *)(v2 + 12);
          goto LABEL_45;
        }
        if ( *(_BYTE *)(v2 + 3) == 1 )
          goto LABEL_36;
        break;
      case 0x8Au:
        if ( !*(_BYTE *)(v2 + 3) )
        {
          if ( QuadPart )
            QuadPart = (void *)MmGetPhysicalAddress(QuadPart).QuadPart;
LABEL_30:
          v12 = *(_QWORD *)(v2 + 14) + *(_QWORD *)(v2 + 30);
          goto LABEL_45;
        }
        if ( *(_BYTE *)(v2 + 3) == 1 )
          goto LABEL_30;
        break;
    }
LABEL_51:
    v2 += v11;
    v21 += v11;
    LOBYTE(v10) = a2;
    v5 = *(_BYTE *)v2;
    if ( v21 >= *(_DWORD *)(a2 + 24) )
      return (char)v10;
  }
  v12 = *(unsigned __int16 *)(v2 + 2);
LABEL_45:
  if ( (!KdComPortInUse || (void *)v12 != QuadPart) && (!KdHvComPortInUse || v12 != v9) && (!v7 || v12 != v7) )
    goto LABEL_51;
  _InterlockedOr64((volatile signed __int64 *)(a1 + 8), 0x680003uLL);
  if ( KdComPortInUse && (void *)v12 == QuadPart || KdHvComPortInUse && v12 == v9 )
  {
    v10 = (const char *)&unk_1C00701BA;
    v13 = (const char *)&unk_1C00701BA;
    if ( a1 )
    {
      v14 = *(_QWORD *)(a1 + 8);
      v3 = a1;
      if ( (v14 & 0x200000000000LL) != 0 )
      {
        v10 = *(const char **)(a1 + 568);
        if ( (v14 & 0x400000000000LL) != 0 )
          v13 = *(const char **)(a1 + 576);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = 13;
LABEL_69:
      LOBYTE(v10) = WPP_RECORDER_SF_qqss(
                      (__int64)WPP_GLOBAL_Control->DeviceExtension,
                      4u,
                      6u,
                      v15,
                      (__int64)&WPP_e31de8e794e03abc169a9744a0587e03_Traceguids,
                      v12,
                      v3,
                      v10,
                      v13);
    }
  }
  else
  {
    v10 = (const char *)&unk_1C00701BA;
    v13 = (const char *)&unk_1C00701BA;
    if ( a1 )
    {
      v16 = *(_QWORD *)(a1 + 8);
      v3 = a1;
      if ( (v16 & 0x200000000000LL) != 0 )
      {
        v10 = *(const char **)(a1 + 568);
        if ( (v16 & 0x400000000000LL) != 0 )
          v13 = *(const char **)(a1 + 576);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = 14;
      goto LABEL_69;
    }
  }
  return (char)v10;
}
