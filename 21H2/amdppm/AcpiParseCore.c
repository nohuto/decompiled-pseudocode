/*
 * XREFs of AcpiParseCore @ 0x1C00289E4
 * Callers:
 *     AcpiEval_CPC @ 0x1C0025E7C (AcpiEval_CPC.c)
 *     AcpiEval_CSD @ 0x1C0026580 (AcpiEval_CSD.c)
 *     AcpiEval_CST @ 0x1C0026898 (AcpiEval_CST.c)
 *     AcpiEval_PCCP @ 0x1C0026DB0 (AcpiEval_PCCP.c)
 *     AcpiEval_PCT_PTC @ 0x1C0026FB8 (AcpiEval_PCT_PTC.c)
 *     AcpiEval_PSD_TSD @ 0x1C0027430 (AcpiEval_PSD_TSD.c)
 *     AcpiEval_PSS @ 0x1C0027794 (AcpiEval_PSS.c)
 *     AcpiEval_TSS @ 0x1C0027CBC (AcpiEval_TSS.c)
 *     AcpiEval_XPSS @ 0x1C0027FCC (AcpiEval_XPSS.c)
 *     AcpiParseLpiObject @ 0x1C0028C8C (AcpiParseLpiObject.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FAC (WPP_RECORDER_SF_.c)
 *     GetObjectTypeName @ 0x1C00079AC (GetObjectTypeName.c)
 *     WPP_RECORDER_SF_sd @ 0x1C0008410 (WPP_RECORDER_SF_sd.c)
 *     WPP_RECORDER_SF_ss @ 0x1C000869C (WPP_RECORDER_SF_ss.c)
 *     WPP_RECORDER_SF_sss @ 0x1C0008828 (WPP_RECORDER_SF_sss.c)
 *     _guard_dispatch_icall_nop @ 0x1C000EC50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AcpiParseCore(
        unsigned __int8 *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        const char *a7,
        char a8)
{
  __int64 v8; // r13
  __int64 v9; // r12
  unsigned int v10; // r15d
  unsigned __int16 *v11; // rbx
  unsigned __int8 *v12; // rsi
  unsigned int v13; // r14d
  unsigned __int64 v14; // rax
  unsigned __int16 v15; // r9
  unsigned __int8 *v16; // rbp
  int v17; // edi
  __int64 v18; // r9
  __int64 v19; // rax
  unsigned int v20; // r8d
  unsigned __int8 *v21; // rdx
  const char *ObjectTypeName; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdi
  unsigned __int16 v26; // r9
  unsigned __int16 v27; // r9
  int v29; // [rsp+20h] [rbp-48h]
  unsigned __int64 i; // [rsp+70h] [rbp+8h]

  v8 = (unsigned int)a2;
  v9 = 0LL;
  v10 = 0;
  v11 = (unsigned __int16 *)a3;
  v12 = a1;
  v13 = a1[24 * (unsigned int)(a2 - 1)] + 1;
  v14 = a3 + a4;
  for ( i = v14; ; v14 = i )
  {
    if ( (unsigned __int64)v11 >= v14 )
    {
      if ( v10 == v13 )
        return 0;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1072431093;
      v27 = 69;
      goto LABEL_44;
    }
    if ( v10 >= v13 )
    {
      if ( (a8 & 1) != 0 )
        return 261;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1072431093;
      v27 = 63;
LABEL_44:
      WPP_RECORDER_SF_sd((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, a3, v27, v29, a7);
      return (unsigned int)-1072431093;
    }
    v15 = *v11;
    while ( 1 )
    {
      if ( (unsigned int)v9 >= (unsigned int)v8 )
        goto LABEL_16;
      v16 = &v12[24 * v9];
      if ( *v16 == v10 && *((_WORD *)v16 + 1) == v15 )
        break;
      v9 = (unsigned int)(v9 + 1);
    }
    if ( !v16 )
    {
LABEL_16:
      v20 = 0;
      if ( !(_DWORD)v8 )
        return (unsigned int)-1072431096;
      v21 = v12;
      do
      {
        if ( *v21 == v10 )
          break;
        ++v20;
        v21 += 24;
      }
      while ( v20 < (unsigned int)v8 );
      if ( v20 >= (unsigned int)v8 )
        return (unsigned int)-1072431096;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        ObjectTypeName = GetObjectTypeName(v15);
        WPP_RECORDER_SF_sss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          (__int64)ObjectTypeName,
          v23,
          v24,
          v29,
          a7,
          *(const char **)&v12[24 * v23 + 8],
          ObjectTypeName);
      }
      v25 = v8;
      while ( 2 )
      {
        if ( *v12 != v10 )
          goto LABEL_35;
        if ( *((_WORD *)v12 + 1) )
        {
          if ( *((_WORD *)v12 + 1) != 1 )
          {
            if ( *((_WORD *)v12 + 1) == 2 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v26 = 67;
              break;
            }
LABEL_35:
            v12 += 24;
            if ( !--v25 )
              return (unsigned int)-1072431096;
            continue;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_35;
          v26 = 66;
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_35;
          v26 = 65;
        }
        break;
      }
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        v26,
        (__int64)&WPP_0a302e3fd2f833bdae43f30252de1cf8_Traceguids);
      goto LABEL_35;
    }
    v17 = (*((__int64 (__fastcall **)(unsigned __int16 *, __int64, _QWORD))v16 + 2))(
            v11,
            a5 + *((unsigned __int16 *)v16 + 2),
            a6 - (unsigned int)*((unsigned __int16 *)v16 + 2));
    if ( v17 < 0 )
      break;
    v19 = v11[1];
    ++v10;
    if ( (unsigned __int16)v19 < 4u )
      v19 = 4LL;
    v11 = (unsigned __int16 *)((char *)v11 + v19 + 4);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ss((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, a3, v18, v29, a7, *((const char **)v16 + 1));
  return (unsigned int)v17;
}
