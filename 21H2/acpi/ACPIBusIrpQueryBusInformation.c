/*
 * XREFs of ACPIBusIrpQueryBusInformation @ 0x1C00A02D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_Lqss @ 0x1C0010020 (WPP_RECORDER_SF_Lqss.c)
 */

__int64 __fastcall ACPIBusIrpQueryBusInformation(__int64 a1, IRP *a2)
{
  __int64 v4; // rbx
  __int64 Pool2; // rax
  unsigned __int64 v6; // rdi
  __int64 v8; // rcx
  void *v9; // rax
  void *v10; // rdx
  __int64 v11; // rcx

  LODWORD(v4) = 0;
  Pool2 = ExAllocatePool2(256LL, 24LL, 1299211073LL);
  v6 = Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 16) = 17LL;
    *(GUID *)Pool2 = GUID_BUS_TYPE_ACPI;
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 64);
    v9 = &unk_1C006FB8B;
    v10 = &unk_1C006FB8B;
    if ( v8 )
    {
      v4 = *(_QWORD *)(a1 + 64);
      v11 = *(_QWORD *)(v8 + 8);
      if ( (v11 & 0x200000000000LL) != 0 )
      {
        v9 = *(void **)(v4 + 608);
        if ( (v11 & 0x400000000000LL) != 0 )
          v10 = *(void **)(v4 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        5u,
        0x1Fu,
        (__int64)&WPP_e0390298aa1f3c0f48cd552b2cad3fe8_Traceguids,
        24,
        v4,
        (__int64)v9,
        (__int64)v10);
    LODWORD(v4) = -1073741670;
  }
  a2->IoStatus.Status = v4;
  a2->IoStatus.Information = v6;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v4;
}
