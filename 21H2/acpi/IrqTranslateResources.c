/*
 * XREFs of IrqTranslateResources @ 0x1C009A040
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dDDq @ 0x1C00237A0 (WPP_RECORDER_SF_dDDq.c)
 *     IrqLibReleaseArbiterLock @ 0x1C002385C (IrqLibReleaseArbiterLock.c)
 *     IrqLibAcquireArbiterLock @ 0x1C0023884 (IrqLibAcquireArbiterLock.c)
 *     ProcessorGetDeviceIdtAssignment @ 0x1C009A1D0 (ProcessorGetDeviceIdtAssignment.c)
 *     IrqArbGsivFromIrq @ 0x1C009A2C0 (IrqArbGsivFromIrq.c)
 *     IrqTranslatepQueryDeviceIrql @ 0x1C009B9F8 (IrqTranslatepQueryDeviceIrql.c)
 */

__int64 __fastcall IrqTranslateResources(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, __int64 a6, _OWORD *a7)
{
  _OWORD *v7; // rbx
  int DeviceIdtAssignment; // edi
  __int64 v9; // r15
  unsigned int v12; // eax
  PRTL_RANGE v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  int v18; // edx
  int v19; // [rsp+20h] [rbp-51h]
  __int128 v20; // [rsp+50h] [rbp-21h] BYREF
  __int128 v21; // [rsp+60h] [rbp-11h]
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+70h] [rbp-1h] BYREF
  PRTL_RANGE Range; // [rsp+C0h] [rbp+4Fh] BYREF

  v7 = a7;
  Range = 0LL;
  DeviceIdtAssignment = 0;
  v9 = a6;
  v20 = 0LL;
  v21 = 0LL;
  memset(&Iterator, 0, sizeof(Iterator));
  *a7 = *(_OWORD *)a2;
  *((_DWORD *)v7 + 4) = *(_DWORD *)(a2 + 16);
  if ( v9 == a1 )
    return 0LL;
  IrqLibAcquireArbiterLock(0);
  if ( a3 )
  {
    if ( a3 == 1 )
      DeviceIdtAssignment = -1073741637;
  }
  else
  {
    v12 = IrqArbGsivFromIrq(*(unsigned int *)(a2 + 8));
    DeviceIdtAssignment = ProcessorGetDeviceIdtAssignment(0LL, v12, 0LL, &v20);
    if ( DeviceIdtAssignment >= 0 )
    {
      v18 = DWORD1(v21);
      *((_WORD *)v7 + 3) = WORD4(v20);
      *(_QWORD *)((char *)v7 + 12) = v20;
      *((_DWORD *)v7 + 2) = v18;
      DeviceIdtAssignment = 288;
      *((_WORD *)v7 + 2) = (unsigned __int8)IrqTranslatepQueryDeviceIrql(*(unsigned int *)(a2 + 8));
    }
    else
    {
      RtlGetFirstRange(RangeList, &Iterator, &Range);
      v13 = Range;
      if ( !Range )
        goto LABEL_9;
      do
      {
        if ( v13->Owner == (PVOID)v9 )
          LOBYTE(a3) = 1;
        RtlGetNextRange(&Iterator, &Range, 1u);
        v13 = Range;
      }
      while ( Range );
      if ( !(_BYTE)a3 )
      {
LABEL_9:
        DeviceIdtAssignment = 0;
        *v7 = *(_OWORD *)a2;
        *((_DWORD *)v7 + 4) = *(_DWORD *)(a2 + 16);
      }
    }
  }
  IrqLibReleaseArbiterLock();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dDDq((__int64)WPP_GLOBAL_Control->DeviceExtension, v14, v15, v16, v19);
  return (unsigned int)DeviceIdtAssignment;
}
