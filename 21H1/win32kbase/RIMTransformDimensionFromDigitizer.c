/*
 * XREFs of RIMTransformDimensionFromDigitizer @ 0x1C016DB80
 * Callers:
 *     <none>
 * Callees:
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C00A3C0C (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C00A413C (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     RIMConvertPointCoordinates @ 0x1C016CE18 (RIMConvertPointCoordinates.c)
 *     RIMTransformPointerDevicePointToPhysical @ 0x1C016DD3C (RIMTransformPointerDevicePointToPhysical.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall RIMTransformDimensionFromDigitizer(__int64 a1, int *a2, int *a3, __int64 a4)
{
  int v8; // edx
  int v9; // ecx
  int v10; // edx
  int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int128 v14; // [rsp+20h] [rbp-38h]
  __int128 v15; // [rsp+30h] [rbp-28h] BYREF
  __int128 v16; // [rsp+40h] [rbp-18h] BYREF
  char v17; // [rsp+60h] [rbp+8h] BYREF

  if ( !a1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL);
  if ( (*(_DWORD *)(a1 + 288) & 0x80u) != 0 && *(_QWORD *)(a1 + 568) )
  {
    RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
      (RIMLOCKExclusiveIfNeeded *)&v17,
      (struct _KTHREAD **)(*(_QWORD *)(a1 + 424) + 104LL));
    if ( ((*(_DWORD *)(*(_QWORD *)(a1 + 568) + 224LL) - 2) & 0xFFFFFFFD) == 0 )
    {
      if ( a2 )
      {
        v8 = a2[1] ^ *a2;
        v9 = *a2;
        a2[1] = *a2;
        *a2 = v8 ^ v9;
      }
      else
      {
        v10 = a3[1] ^ *a3;
        v11 = *a3;
        a3[1] = *a3;
        *a3 = v10 ^ v11;
      }
    }
    if ( a2 )
      RIMTransformPointerDevicePointToPhysical(*(_QWORD *)(a1 + 568), *(_QWORD *)a2, a3);
    v12 = *(_QWORD *)(a1 + 568);
    v13 = *(_QWORD *)a3;
    v14 = *(_OWORD *)(v12 + 160);
    v15 = v14;
    v16 = *(_OWORD *)(v12 + 176);
    if ( (unsigned int)RIMConvertPointCoordinates(v13, (int *)&v16, (int *)&v15, (_QWORD *)a4) )
    {
      *(_DWORD *)a4 = abs32(v14 - *(_DWORD *)a4);
      *(_DWORD *)(a4 + 4) = abs32(DWORD1(v14) - *(_DWORD *)(a4 + 4));
    }
    else
    {
      *(_DWORD *)a4 = 0;
      *(_DWORD *)(a4 + 4) = 0;
    }
    RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v17);
  }
}
