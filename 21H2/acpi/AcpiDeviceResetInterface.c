/*
 * XREFs of AcpiDeviceResetInterface @ 0x1C002CBD0
 * Callers:
 *     ACPIBusIrpQueryInterface @ 0x1C0005A80 (ACPIBusIrpQueryInterface.c)
 * Callees:
 *     ACPIInitReferenceDeviceExtension @ 0x1C00056D8 (ACPIInitReferenceDeviceExtension.c)
 *     memmove @ 0x1C002FDC0 (memmove.c)
 */

__int64 __fastcall AcpiDeviceResetInterface(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _QWORD *v4; // r13
  unsigned __int16 v5; // bp
  unsigned __int16 v6; // cx
  char v7; // r15
  _WORD *v8; // rsi
  bool v9; // cf
  KIRQL v10; // al
  unsigned int v11; // edi
  KIRQL v12; // r9
  __int64 v13; // rax
  char v14; // bl
  __int64 result; // rax
  __int64 v16; // r8
  _QWORD **v17; // r8
  _QWORD *i; // rdx
  __int64 Pool2; // r14
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // edx
  __int64 v23; // [rsp+20h] [rbp-48h]
  char v24; // [rsp+70h] [rbp+8h]

  v2 = *(_QWORD *)(a2 + 184);
  v4 = *(_QWORD **)(a1 + 64);
  v5 = *(_WORD *)(v2 + 18);
  v6 = *(_WORD *)(v2 + 16);
  v7 = 1;
  v8 = *(_WORD **)(v2 + 24);
  if ( v5 <= 1u )
  {
    v9 = v6 < 0x38u;
  }
  else if ( v5 == 2 )
  {
    v9 = v6 < 0x40u;
  }
  else
  {
    if ( v5 != 3 )
    {
      v11 = -1073741637;
      goto LABEL_13;
    }
    v9 = v6 < 0x50u;
  }
  if ( v9 )
  {
    v11 = -1073741789;
    goto LABEL_13;
  }
  v10 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v11 = 0;
  v23 = v4[62];
  v12 = v10;
  if ( v4[56] )
  {
    v14 = 1;
    v24 = 1;
LABEL_8:
    v7 = 0;
    goto LABEL_9;
  }
  v13 = v4[55];
  v14 = 0;
  v24 = 0;
  if ( !v13 )
    goto LABEL_8;
  v16 = *(_QWORD *)(v13 + 8);
  if ( (*(_DWORD *)(v16 + 16) & 0x220LL) != 0 )
    goto LABEL_8;
  v17 = (_QWORD **)(v16 + 48);
  for ( i = *v17; i != v17; i = (_QWORD *)*i )
  {
    if ( (*(_DWORD *)(*(i - 1) + 1000LL) & 0x800LL) == 0 )
      goto LABEL_8;
  }
LABEL_9:
  KeReleaseSpinLock(&AcpiPowerLock, v12);
  if ( !v23 && !v14 && !v7 || (Pool2 = ExAllocatePool2(64LL, (unsigned __int16)*v8 + 88LL, 1366319937LL)) == 0 )
  {
    v11 = *(_DWORD *)(a2 + 48);
    goto LABEL_13;
  }
  ACPIInitReferenceDeviceExtension((__int64)v4);
  *(_QWORD *)(Pool2 + 8) = v4;
  *(_DWORD *)Pool2 = 1;
  if ( *v8 )
  {
    memmove((void *)(Pool2 + 88), v8, (unsigned __int16)*v8);
    *(_QWORD *)(Pool2 + 80) = Pool2 + 88;
  }
  *(_BYTE *)(Pool2 + 16) = v24;
  *(_BYTE *)(Pool2 + 17) = v23 != 0;
  if ( v24 )
  {
    v20 = v4[56];
LABEL_32:
    *(_QWORD *)(Pool2 + 72) = *(_QWORD *)(v20 + 8);
    goto LABEL_33;
  }
  if ( v7 )
  {
    v20 = v4[55];
    goto LABEL_32;
  }
LABEL_33:
  *(_QWORD *)(Pool2 + 64) = Pool2;
  *(_QWORD *)(Pool2 + 56) = AcpiDeviceResetCompleteResetWorker;
  *(_QWORD *)(Pool2 + 40) = 0LL;
  if ( v5 > 1u )
  {
    *(_OWORD *)v8 = DeviceResetInterface;
    *((_OWORD *)v8 + 1) = *(_OWORD *)&off_1C006F170;
    *((_OWORD *)v8 + 2) = *(_OWORD *)&off_1C006F180;
    *((_OWORD *)v8 + 3) = *(_OWORD *)&qword_1C006F190;
    if ( v5 == 2 )
      *(_DWORD *)v8 = 131136;
    else
      *((_OWORD *)v8 + 4) = *(_OWORD *)&off_1C006F1A0;
  }
  else
  {
    *(_OWORD *)v8 = DeviceResetInterface;
    *((_OWORD *)v8 + 1) = *(_OWORD *)&off_1C006F170;
    *((_OWORD *)v8 + 2) = *(_OWORD *)&off_1C006F180;
    *((_QWORD *)v8 + 6) = 0LL;
    *(_DWORD *)v8 = 65592;
  }
  *((_QWORD *)v8 + 1) = Pool2;
  v21 = *(_QWORD *)(Pool2 + 80);
  if ( v21 && *(_QWORD *)(v21 + 32) )
    *((_DWORD *)v8 + 10) = *(_DWORD *)(v21 + 40);
  v22 = (v23 != 0) | 2;
  if ( !*(_QWORD *)(Pool2 + 72) )
    v22 = v23 != 0;
  *((_DWORD *)v8 + 10) = v22;
LABEL_13:
  result = v11;
  *(_DWORD *)(a2 + 48) = v11;
  return result;
}
