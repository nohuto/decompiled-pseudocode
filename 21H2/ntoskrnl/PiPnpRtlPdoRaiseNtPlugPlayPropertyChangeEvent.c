/*
 * XREFs of PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent @ 0x14074CA04
 * Callers:
 *     PnpDeviceActionWorker @ 0x140381DA0 (PnpDeviceActionWorker.c)
 *     PiQueryPowerRelations @ 0x14074C564 (PiQueryPowerRelations.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403CC998 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140746200 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 */

__int64 __fastcall PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent(ULONG_PTR MaxDataSize, int a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  _WORD *v6; // rcx
  __int64 v7; // rcx
  unsigned __int16 *v8; // rdi
  __int64 v9; // rdx
  _WORD *v10; // rcx
  __int64 v11; // rcx
  _WORD *v12; // rcx
  __int64 v13; // rcx

  if ( !MaxDataSize )
    goto LABEL_18;
  result = *(_QWORD *)(MaxDataSize + 312);
  v4 = *(_QWORD *)(result + 40);
  if ( !v4 || (*(_DWORD *)(v4 + 396) & 0x20000) != 0 )
  {
    IoAddTriageDumpDataBlock(MaxDataSize, (PVOID)*(unsigned __int16 *)(MaxDataSize + 2));
    v5 = *(_QWORD *)(MaxDataSize + 8);
    if ( v5 )
    {
      IoAddTriageDumpDataBlock(v5, (PVOID)(unsigned int)*(__int16 *)(v5 + 2));
      v6 = (_WORD *)(*(_QWORD *)(MaxDataSize + 8) + 56LL);
      if ( *v6 )
      {
        IoAddTriageDumpDataBlock((ULONG)v6, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(MaxDataSize + 8) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(MaxDataSize + 8) + 56LL));
      }
    }
    v7 = *(_QWORD *)(*(_QWORD *)(MaxDataSize + 312) + 40LL);
    if ( v7 )
    {
      v8 = (unsigned __int16 *)(v7 + 40);
      IoAddTriageDumpDataBlock(v7, (PVOID)0x310);
      if ( *v8 )
      {
        IoAddTriageDumpDataBlock((ULONG)v8, (PVOID)2);
        IoAddTriageDumpDataBlock(*((_QWORD *)v8 + 1), (PVOID)*v8);
      }
      v9 = *(_QWORD *)(MaxDataSize + 312);
      v10 = (_WORD *)(*(_QWORD *)(v9 + 40) + 56LL);
      if ( *v10 )
      {
        IoAddTriageDumpDataBlock((ULONG)v10, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(MaxDataSize + 312) + 40LL) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(MaxDataSize + 312) + 40LL) + 56LL));
        v9 = *(_QWORD *)(MaxDataSize + 312);
      }
      v11 = *(_QWORD *)(*(_QWORD *)(v9 + 40) + 16LL);
      if ( v11 )
      {
        v12 = (_WORD *)(v11 + 56);
        if ( *v12 )
        {
          IoAddTriageDumpDataBlock((ULONG)v12, (PVOID)2);
          v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(MaxDataSize + 312) + 40LL) + 16LL);
          IoAddTriageDumpDataBlock(*(_QWORD *)(v13 + 64), (PVOID)*(unsigned __int16 *)(v13 + 56));
        }
      }
    }
LABEL_18:
    KeBugCheckEx(0xCAu, 2uLL, MaxDataSize, 0LL, 0LL);
  }
  if ( v4 != -40 )
    return PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v4, *(_QWORD *)(v4 + 48), a2);
  return result;
}
