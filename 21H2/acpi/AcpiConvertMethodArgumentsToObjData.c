/*
 * XREFs of AcpiConvertMethodArgumentsToObjData @ 0x1C005B8FC
 * Callers:
 *     AcpiConvertPackageArgumentToPackageObj @ 0x1C005BD3C (AcpiConvertPackageArgumentToPackageObj.c)
 *     AcpiNativeMethodEvalRequestHandler @ 0x1C005C220 (AcpiNativeMethodEvalRequestHandler.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0007340 (WPP_RECORDER_SF_qD.c)
 *     memmove @ 0x1C002FDC0 (memmove.c)
 *     WPP_RECORDER_SF_DD @ 0x1C004B644 (WPP_RECORDER_SF_DD.c)
 *     AcpiCleanupObjDataArguments @ 0x1C005B868 (AcpiCleanupObjDataArguments.c)
 *     AcpiConvertPackageArgumentToPackageObj @ 0x1C005BD3C (AcpiConvertPackageArgumentToPackageObj.c)
 *     WPP_RECORDER_SF_DDPP @ 0x1C005CC04 (WPP_RECORDER_SF_DDPP.c)
 */

__int64 __fastcall AcpiConvertMethodArgumentsToObjData(
        unsigned __int16 *a1,
        unsigned __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v9; // r12
  unsigned int v10; // r14d
  __int64 i; // rsi
  __int64 v12; // rdx
  unsigned __int16 v13; // ax
  __int64 Pool2; // rax
  size_t v15; // r8
  void *v16; // rcx
  __int64 v17; // rax

  v4 = 0;
  v9 = 0LL;
  v10 = 0;
  if ( !a3 )
    return v4;
  for ( i = a4 + 2; ; i += 40LL )
  {
    v12 = a1[1];
    if ( v12 + v9 > a2 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDPP(WPP_GLOBAL_Control->DeviceExtension, v12, 2, 4);
LABEL_27:
      v4 = -1073741788;
      goto LABEL_28;
    }
    v13 = *a1;
    if ( !*a1 )
    {
      if ( (unsigned int)v12 > 8 )
        goto LABEL_27;
      *(_WORD *)i = 1;
      v16 = (void *)(i + 14);
      *(_DWORD *)(i + 22) = a1[1];
      *(_QWORD *)(i + 14) = 0LL;
      v15 = a1[1];
      goto LABEL_16;
    }
    if ( v13 <= 2u )
      break;
    if ( v13 > 4u )
      goto LABEL_11;
    *(_WORD *)i = 4;
    v4 = AcpiConvertPackageArgumentToPackageObj(a1, i + 22, i + 30);
    if ( (v4 & 0x80000000) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qD(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0x15u,
          0x19u,
          (__int64)&WPP_6b96f8ebb13c3b7665ec42abfcbc7cd5_Traceguids,
          a1,
          a1[1]);
      goto LABEL_28;
    }
    v4 = 0;
LABEL_17:
    v17 = a1[1];
    v9 += v17;
    if ( (unsigned __int16)v17 < 4u )
      v17 = 4LL;
    ++v10;
    a1 = (unsigned __int16 *)((char *)a1 + v17 + 4);
    if ( v10 >= a3 )
      return v4;
  }
  if ( v13 == 1 )
    *(_WORD *)i = 2;
  else
LABEL_11:
    *(_WORD *)i = 3;
  *(_DWORD *)(i + 22) = a1[1];
  Pool2 = ExAllocatePool2(64LL, a1[1], 1315988289LL);
  *(_QWORD *)(i + 30) = Pool2;
  if ( Pool2 )
  {
    v15 = *(unsigned int *)(i + 22);
    v16 = (void *)Pool2;
LABEL_16:
    memmove(v16, a1 + 2, v15);
    goto LABEL_17;
  }
  v4 = -1073741670;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DD(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x15u,
      0x1Au,
      (__int64)&WPP_6b96f8ebb13c3b7665ec42abfcbc7cd5_Traceguids,
      a1[1],
      -1073741670);
LABEL_28:
  AcpiCleanupObjDataArguments(a4, a3);
  return v4;
}
