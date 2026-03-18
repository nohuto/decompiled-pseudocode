/*
 * XREFs of GetBootSystemTime @ 0x140A6DA24
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A382A8 (Phase1InitializationDiscard.c)
 * Callees:
 *     HalQueryRealTimeClock @ 0x140201830 (HalQueryRealTimeClock.c)
 *     RtlpTimeFieldsToTimeNoLeapSeconds @ 0x140201A34 (RtlpTimeFieldsToTimeNoLeapSeconds.c)
 *     RtlpTimeToTimeFields @ 0x140201C48 (RtlpTimeToTimeFields.c)
 *     RtlULongLongMult @ 0x1402C1CCC (RtlULongLongMult.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     HalSetRealTimeClock @ 0x1404B15A0 (HalSetRealTimeClock.c)
 */

char __fastcall GetBootSystemTime(__int64 a1, __int64 *a2)
{
  bool v3; // zf
  __int64 v5; // rbx
  __int64 v6; // rax
  NTSTATUS v7; // ecx
  __int64 v8; // r8
  unsigned __int64 v9; // r10
  ULONGLONG v10; // rax
  ULONGLONG v11; // r9
  __int64 v12; // rbx
  char *v13; // rbx
  unsigned int v14; // edi
  unsigned int v15; // edx
  __int64 *v16; // rcx
  __int64 *v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rcx
  signed __int32 v21[8]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v22; // [rsp+20h] [rbp-28h] BYREF
  __int16 v23[16]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v24; // [rsp+70h] [rbp+28h] BYREF
  __int64 v25; // [rsp+78h] [rbp+30h] BYREF
  ULONGLONG pullResult; // [rsp+80h] [rbp+38h] BYREF
  unsigned __int64 v27; // [rsp+88h] [rbp+40h] BYREF

  v27 = 0LL;
  pullResult = 0LL;
  v3 = (*(_BYTE *)(a1 + 2624) & 1) == 0;
  v5 = *(_QWORD *)(a1 + 2600);
  *(_OWORD *)v23 = 0LL;
  if ( v3 && !ExpRealTimeIsUniversal )
    v5 += ExpTimeZoneBias;
  v6 = ((__int64 (__fastcall *)(unsigned __int64 *))off_140C007F0)(&v27);
  v7 = RtlULongLongMult(v6 - *(_QWORD *)(a1 + 2608), 0x989680uLL, &pullResult);
  v10 = pullResult / v27;
  v11 = pullResult / v27;
  if ( v7 < 0 )
  {
    v8 = v9 / v27;
    v10 = 10000000 * (v9 / v27);
    v11 = v10 + 10000000 * (v9 % v27) / v27;
  }
  v12 = v11 + v5;
  v3 = (*(_BYTE *)(a1 + 2624) & 2) == 0;
  v24 = v12;
  if ( v3 )
  {
    if ( ExpRealTimeIsUniversal )
    {
      v16 = &v24;
    }
    else
    {
      v16 = &v22;
      v22 = v12 - ExpTimeZoneBias;
    }
    RtlpTimeToTimeFields(v16, v23, v8);
    LOBYTE(v10) = HalSetRealTimeClock(v23);
    goto LABEL_16;
  }
  if ( (qword_140C19738 & 4) != 0 )
    goto LABEL_16;
  LOBYTE(v10) = HalQueryRealTimeClock((__int64)v23);
  if ( !(_BYTE)v10 )
    goto LABEL_16;
  v25 = 0LL;
  v13 = (char *)ExLeapSecondData;
  if ( !ExLeapSecondData || !*(_BYTE *)ExLeapSecondData )
  {
    LOBYTE(v10) = RtlpTimeFieldsToTimeNoLeapSeconds(v23, &v24);
    if ( !(_BYTE)v10 )
      goto LABEL_17;
    v12 = v24;
    goto LABEL_14;
  }
  v14 = *((_DWORD *)ExLeapSecondData + 1);
  _InterlockedOr(v21, 0);
  LOBYTE(v10) = RtlpTimeFieldsToTimeNoLeapSeconds(v23, &v25);
  if ( !(_BYTE)v10 )
    goto LABEL_17;
  v15 = 0;
  if ( !v14 )
  {
    v12 = v25;
LABEL_14:
    if ( !ExpRealTimeIsUniversal )
      v12 += ExpTimeZoneBias;
    goto LABEL_16;
  }
  v17 = (__int64 *)(v13 + 8);
  v12 = v25;
  while ( 1 )
  {
    v18 = *v17;
    if ( *v17 >= 0 )
    {
      LOBYTE(v10) = v18 + 0x80;
      if ( v12 < v18 + 10000000 )
      {
        if ( v12 < v18 )
          goto LABEL_14;
        v12 = 2 * v12 - v18;
      }
      else
      {
        v12 += 10000000LL;
      }
      goto LABEL_30;
    }
    v19 = v18 & 0x7FFFFFFFFFFFFFFFLL;
    LOBYTE(v10) = v19 + 0x80;
    if ( v12 < v19 + 10000000 )
      break;
    v12 -= 10000000LL;
LABEL_30:
    ++v15;
    ++v17;
    if ( v15 >= v14 )
      goto LABEL_14;
  }
  if ( v12 < v19 )
    goto LABEL_14;
LABEL_17:
  v12 = v24;
LABEL_16:
  *a2 = v12;
  return v10;
}
