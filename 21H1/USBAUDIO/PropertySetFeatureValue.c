/*
 * XREFs of PropertySetFeatureValue @ 0x1C00285F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00133D0 (_guard_dispatch_icall_nop.c)
 *     DeviceRequestPowerUp @ 0x1C002316C (DeviceRequestPowerUp.c)
 *     QueuePropertyRequest @ 0x1C002B754 (QueuePropertyRequest.c)
 */

__int64 __fastcall PropertySetFeatureValue(PIRP Irp, __int64 a2, __int64 a3)
{
  __int64 *FilterFromIrp; // rax
  int v7; // r10d
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rdx

  FilterFromIrp = (__int64 *)KsGetFilterFromIrp(Irp);
  v7 = -1073741811;
  if ( !FilterFromIrp )
    return (unsigned int)v7;
  v8 = *(unsigned int *)(a2 + 24);
  v9 = FilterFromIrp[2];
  v10 = *(_QWORD *)(*FilterFromIrp + 72) + 168 * v8;
  if ( *(_DWORD *)(*(_QWORD *)(v9 + 16) + 528LL) == 1 )
  {
    if ( *(_DWORD *)(a2 + 32) < *(_DWORD *)(v10 + 92) )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(v10 + 136))(v9, v10, a3);
      if ( v7 >= 0 )
        Irp->IoStatus.Information = 0LL;
    }
    return (unsigned int)v7;
  }
  if ( DeviceRequestPowerUp((PIRP *)v9, v10, *FilterFromIrp, v8) < 0 )
    return 3221225635LL;
  else
    return QueuePropertyRequest(Irp);
}
