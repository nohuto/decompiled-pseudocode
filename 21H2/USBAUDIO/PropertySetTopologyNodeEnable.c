/*
 * XREFs of PropertySetTopologyNodeEnable @ 0x1C002A980
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012E90 (_guard_dispatch_icall_nop.c)
 *     DeviceRequestPowerUp @ 0x1C00234BC (DeviceRequestPowerUp.c)
 *     QueuePropertyRequest @ 0x1C002BEA4 (QueuePropertyRequest.c)
 */

__int64 __fastcall PropertySetTopologyNodeEnable(PIRP Irp, __int64 a2, _BYTE *a3)
{
  __int64 *FilterFromIrp; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // r10d
  __int64 v10; // rcx
  __int64 v11; // rbx

  FilterFromIrp = (__int64 *)KsGetFilterFromIrp(Irp);
  v9 = -1073741811;
  if ( !FilterFromIrp )
    return (unsigned int)v9;
  v10 = FilterFromIrp[2];
  v11 = *(_QWORD *)(*FilterFromIrp + 72) + 168LL * *(unsigned int *)(a2 + 24);
  if ( *(_DWORD *)(*(_QWORD *)(v10 + 16) + 528LL) == 1 )
  {
    Irp->IoStatus.Information = 1LL;
    if ( *(_BYTE *)(v11 + 72) )
    {
      if ( *a3 == *(_BYTE *)(v11 + 73) )
      {
        return 0;
      }
      else
      {
        LOBYTE(v8) = 1;
        v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _BYTE *))(v11 + 144))(v10, v11, v8, a3);
        if ( v9 >= 0 )
          *(_BYTE *)(v11 + 73) = *a3;
      }
    }
    return (unsigned int)v9;
  }
  if ( DeviceRequestPowerUp((PIRP *)v10, v7, v8, *FilterFromIrp) < 0 )
    return 3221225635LL;
  else
    return QueuePropertyRequest(Irp);
}
