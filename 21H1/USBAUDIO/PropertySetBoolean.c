/*
 * XREFs of PropertySetBoolean @ 0x1C00287A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF__guid_dd @ 0x1C000320C (WPP_RECORDER_SF__guid_dd.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C0003304 (WPP_RECORDER_SF_dddd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00133D0 (_guard_dispatch_icall_nop.c)
 *     DeviceRequestPowerUp @ 0x1C002316C (DeviceRequestPowerUp.c)
 *     QueuePropertyRequest @ 0x1C002B754 (QueuePropertyRequest.c)
 */

__int64 __fastcall PropertySetBoolean(PIRP Irp, __int64 a2, unsigned __int8 *a3)
{
  PKSFILTER FilterFromIrp; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int8 v9; // di
  int v10; // ebx
  _QWORD *p_Descriptor; // r15
  _UNKNOWN **v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rbp
  __int64 v15; // r15
  __int64 v16; // rdi
  __int64 v17; // r12
  int v19; // [rsp+20h] [rbp-58h]
  __int64 v20; // [rsp+28h] [rbp-50h]
  unsigned int v21; // [rsp+88h] [rbp+10h] BYREF

  v21 = 0;
  FilterFromIrp = KsGetFilterFromIrp(Irp);
  v9 = *a3;
  v10 = -1073741811;
  p_Descriptor = &FilterFromIrp->Descriptor;
  v12 = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF__guid_dd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)&WPP_RECORDER_INITIALIZED,
      v7,
      0xBu,
      v19,
      a2);
    v12 = &WPP_RECORDER_INITIALIZED;
  }
  if ( v9 <= 1u && p_Descriptor )
  {
    v13 = *p_Descriptor;
    v14 = *(unsigned int *)(a2 + 32);
    v15 = p_Descriptor[2];
    v16 = *(_QWORD *)(v13 + 72) + 168LL * *(unsigned int *)(a2 + 24);
    v17 = *(_QWORD *)(v16 + 128);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dddd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (__int64)&WPP_RECORDER_INITIALIZED,
        v7,
        0xCu,
        v19);
    if ( *(_DWORD *)(*(_QWORD *)(v15 + 16) + 528LL) == 1 )
    {
      if ( (unsigned int)v14 < *(_DWORD *)(v16 + 92) )
      {
        v10 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int8 *, _QWORD, int, unsigned int *))(v16 + 136))(
                v15,
                v16,
                a3,
                (unsigned int)v14,
                1,
                &v21);
        if ( v10 >= 0 )
        {
          *(_BYTE *)(v17 + 16 * v14 + 12) = *a3;
          Irp->IoStatus.Information = v21;
LABEL_14:
          if ( v10 >= 0 )
            return (unsigned int)v10;
        }
      }
    }
    else
    {
      if ( DeviceRequestPowerUp((PIRP *)v15, (__int64)v12, v7, v8) >= 0 )
      {
        v10 = QueuePropertyRequest(Irp);
        goto LABEL_14;
      }
      v10 = -1073741661;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v20) = v10;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)v12,
      0xAu,
      0xDu,
      (__int64)&WPP_06d71a5b906232def5af5bab196a5a62_Traceguids,
      v20);
  }
  return (unsigned int)v10;
}
