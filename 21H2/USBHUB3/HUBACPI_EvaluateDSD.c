/*
 * XREFs of HUBACPI_EvaluateDSD @ 0x1C0084CF0
 * Callers:
 *     HUBACPI_GetAcpiPortAttributes @ 0x1C00854D0 (HUBACPI_GetAcpiPortAttributes.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001C04 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002130 (WPP_RECORDER_SF_.c)
 *     RtlUnicodeStringPrintf @ 0x1C000BFF4 (RtlUnicodeStringPrintf.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 *     HUBACPI_EvalAcpiMethodEx @ 0x1C00848B4 (HUBACPI_EvalAcpiMethodEx.c)
 */

__int64 __fastcall HUBACPI_EvaluateDSD(
        __int64 a1,
        unsigned __int16 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  int v7; // eax
  NTSTATUS v8; // r14d
  __int64 v9; // rax
  __int64 v10; // r13
  unsigned int v11; // r15d
  __int64 v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // rax
  _WORD *v15; // rdi
  _WORD *v16; // rax
  unsigned __int64 v17; // r12
  __int64 v18; // rax
  const char *v19; // rdi
  __int64 v20; // rax
  unsigned __int16 v21; // r9
  unsigned int v22; // r8d
  unsigned __int16 v23; // si
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  __int128 v26; // [rsp+40h] [rbp-40h] BYREF
  __int128 v27; // [rsp+50h] [rbp-30h]
  __int128 v28; // [rsp+60h] [rbp-20h]
  __int64 v29; // [rsp+70h] [rbp-10h]

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v26 = 0LL;
  LODWORD(v29) = 0;
  v27 = 0LL;
  v28 = 0LL;
  v7 = HUBACPI_EvalAcpiMethodEx(a1, a2, 1146307679, a5);
  v8 = v7;
  if ( v7 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2520),
        2u,
        3u,
        0x1Cu,
        (__int64)&WPP_c5068035c0c03895c2d054ff6dfe9623_Traceguids,
        v7,
        *(_QWORD *)&DestinationString.Length);
    goto LABEL_45;
  }
  v8 = -1073741823;
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
         WdfDriverGlobals,
         a5,
         0LL);
  v10 = v9;
  if ( !*(_DWORD *)(v9 + 8) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2520), 2u, 6u, 0x1Du, (__int64)&WPP_c5068035c0c03895c2d054ff6dfe9623_Traceguids);
    goto LABEL_45;
  }
  v11 = 0;
  v12 = v9 + 12;
  v13 = 4LL;
  while ( 1 )
  {
    if ( (v11 & 1) == 0
      && *(_DWORD *)v12 == 1048578
      && RtlCompareMemory((const void *)(v12 + 4), &ACPI_DEVICE_PROPERTIES_DSD_GUID, 0x10uLL) == 16 )
    {
      v14 = *(unsigned __int16 *)(v12 + 2);
      if ( (unsigned __int16)v14 < 4u )
        v14 = 4LL;
      v15 = (_WORD *)(v12 + v14 + 4);
      v16 = v15;
      v17 = (unsigned __int64)v15 + (unsigned __int16)v15[1];
      if ( *v15 == 3 )
        break;
    }
    v18 = *(unsigned __int16 *)(v12 + 2);
    if ( (unsigned __int16)v18 < 4u )
      v18 = 4LL;
    ++v11;
    v12 += v18 + 4;
    if ( v11 >= *(_DWORD *)(v10 + 8) )
      goto LABEL_45;
  }
  v19 = (const char *)(v15 + 2);
  if ( (unsigned __int64)(v16 + 6) >= v17 )
    goto LABEL_45;
  while ( 1 )
  {
    v20 = *((unsigned __int16 *)v19 + 1);
    if ( *(_WORD *)v19 != 3 || (unsigned __int16)v20 < 0x10u || *((_WORD *)v19 + 2) != 1 || *((_WORD *)v19 + 3) != 20 )
    {
      if ( (unsigned __int16)v20 < 4u )
        v20 = 4LL;
      goto LABEL_28;
    }
    if ( !strncmp(v19 + 8, "usb4-host-interface", 0x13uLL) )
      break;
    v20 = *((unsigned __int16 *)v19 + 1);
    if ( (unsigned __int16)v20 < 4u )
      v20 = 4LL;
LABEL_28:
    v19 += v20 + 4;
    if ( (unsigned __int64)(v19 + 8) >= v17 )
      goto LABEL_45;
  }
  if ( *((_WORD *)v19 + 3) >= 4u )
    v13 = *((unsigned __int16 *)v19 + 3);
  if ( (unsigned __int64)&v19[v13 + 16] > v17 )
  {
    v8 = -1072431099;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v21 = 30;
      goto LABEL_35;
    }
LABEL_45:
    if ( DestinationString.Buffer )
      ExFreePoolWithTag(DestinationString.Buffer, 0x70334855u);
    return (unsigned int)v8;
  }
  if ( *(_WORD *)&v19[v13 + 8] != 1 )
  {
    v8 = -1072431096;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_45;
    v21 = 31;
LABEL_35:
    v22 = 6;
    goto LABEL_36;
  }
  v23 = 2 * *(_WORD *)&v19[v13 + 10];
  DestinationString.Buffer = (wchar_t *)ExAllocatePool2(256LL, v23, 1882409045LL);
  if ( DestinationString.Buffer )
  {
    DestinationString.MaximumLength = v23;
    v8 = RtlUnicodeStringPrintf(&DestinationString, L"%S", &v19[v13 + 12]);
    if ( v8 >= 0 )
    {
      v29 = 0LL;
      *(_QWORD *)&v27 = 0LL;
      *((_QWORD *)&v27 + 1) = 0x100000001LL;
      v28 = 0LL;
      *(_QWORD *)&v28 = *(_QWORD *)(a1 + 16);
      v26 = 0LL;
      LODWORD(v26) = 56;
      v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, struct _UNICODE_STRING *, __int128 *, __int64))(WdfFunctions_01015 + 2464))(
             WdfDriverGlobals,
             &DestinationString,
             &v26,
             a6);
    }
    goto LABEL_45;
  }
  v8 = -1073741670;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v21 = 32;
    v22 = 3;
LABEL_36:
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2520), 2u, v22, v21, (__int64)&WPP_c5068035c0c03895c2d054ff6dfe9623_Traceguids);
    goto LABEL_45;
  }
  return (unsigned int)v8;
}
