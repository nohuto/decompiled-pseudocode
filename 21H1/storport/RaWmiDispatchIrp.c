/*
 * XREFs of RaWmiDispatchIrp @ 0x1C0073E64
 * Callers:
 *     RaDriverSystemControlIrp @ 0x1C0073DD0 (RaDriverSystemControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0009950 (RaidCompleteRequestEx.c)
 *     RaUnitReleaseRemoveLock @ 0x1C000BD50 (RaUnitReleaseRemoveLock.c)
 *     RaUnitAcquireRemoveLock @ 0x1C000BD94 (RaUnitAcquireRemoveLock.c)
 *     RaidAcquireAdapterRemoveLock @ 0x1C000C534 (RaidAcquireAdapterRemoveLock.c)
 *     RaidCompleteWmiIrp @ 0x1C0019ABC (RaidCompleteWmiIrp.c)
 *     RaidReleaseAdapterRemoveLock @ 0x1C0031718 (RaidReleaseAdapterRemoveLock.c)
 *     WPP_SF_D @ 0x1C0031E78 (WPP_SF_D.c)
 *     RaWmiIrpRegisterRequest @ 0x1C0073FBC (RaWmiIrpRegisterRequest.c)
 *     RaWmiIrpNormalRequest @ 0x1C007A960 (RaWmiIrpNormalRequest.c)
 */

__int64 __fastcall RaWmiDispatchIrp(__int64 a1, IRP *a2, __int64 a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  __int64 v4; // r15
  __int64 v5; // r14
  int *v8; // rdx
  int v9; // ebx
  int v10; // eax
  int v11; // eax
  unsigned int v12; // esi
  unsigned __int64 v13; // rax
  unsigned int v14; // r8d
  unsigned int v16; // edi
  _QWORD v17[2]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int LowPart; // [rsp+30h] [rbp-28h]
  int v19; // [rsp+34h] [rbp-24h]
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // [rsp+38h] [rbp-20h]

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = 0LL;
  v19 = 0;
  v5 = 0LL;
  if ( CurrentStackLocation->Parameters.WMI.ProviderId != a1 )
    return RaidCompleteWmiIrp(a1, a2);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_D(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0xAu,
      (__int64)&WPP_ad50ae595d343b84980c7edcc7a41d05_Traceguids,
      CurrentStackLocation->MinorFunction);
  }
  v8 = *(int **)(a1 + 64);
  v9 = *v8;
  if ( *v8 )
  {
    if ( v9 != 1 )
      goto LABEL_8;
    v4 = *(_QWORD *)(a1 + 64);
    LOBYTE(a3) = 1;
    v10 = RaUnitAcquireRemoveLock(v4, (__int64)a2, a3);
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 64);
    v10 = RaidAcquireAdapterRemoveLock(v5);
  }
  if ( v10 < 0 )
  {
    v14 = v10;
    return RaidCompleteRequestEx(a2, 0, v14);
  }
LABEL_8:
  v17[0] = CurrentStackLocation->Parameters.Create.SecurityContext;
  v17[1] = CurrentStackLocation->Parameters.QueryDirectory.FileName;
  Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  LOBYTE(v8) = CurrentStackLocation->MinorFunction;
  if ( (unsigned __int8)v8 <= 7u )
    goto LABEL_30;
  if ( (_BYTE)v8 == 8 )
  {
    v11 = RaWmiIrpRegisterRequest(a1, v17);
LABEL_11:
    a2->IoStatus.Status = v11;
    v12 = v11;
    if ( v11 >= 0 )
      v13 = LowPart;
    else
      v13 = 0LL;
    a2->IoStatus.Information = v13;
    if ( v9 )
    {
      if ( v9 == 1 )
        RaUnitReleaseRemoveLock(v4);
    }
    else
    {
      RaidReleaseAdapterRemoveLock(v5);
    }
    v14 = v12;
    return RaidCompleteRequestEx(a2, 0, v14);
  }
  if ( (_BYTE)v8 == 9 )
  {
LABEL_30:
    v11 = RaWmiIrpNormalRequest(a1, v8, v17);
    goto LABEL_11;
  }
  v16 = RaidCompleteWmiIrp(a1, a2);
  if ( v9 )
  {
    if ( v9 == 1 )
      RaUnitReleaseRemoveLock(v4);
  }
  else
  {
    RaidReleaseAdapterRemoveLock(v5);
  }
  return v16;
}
