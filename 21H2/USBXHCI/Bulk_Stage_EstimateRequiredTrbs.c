/*
 * XREFs of Bulk_Stage_EstimateRequiredTrbs @ 0x1C000F6D4
 * Callers:
 *     Bulk_PrepareStage @ 0x1C000F538 (Bulk_PrepareStage.c)
 * Callees:
 *     WPP_RECORDER_SF_DDDD @ 0x1C000B300 (WPP_RECORDER_SF_DDDD.c)
 *     TR_IsUrbUsingChainedMdl @ 0x1C000EF68 (TR_IsUrbUsingChainedMdl.c)
 *     WPP_RECORDER_SF_DDDDD @ 0x1C003FF60 (WPP_RECORDER_SF_DDDDD.c)
 *     WPP_RECORDER_SF_DDDqDDDDD @ 0x1C0045500 (WPP_RECORDER_SF_DDDqDDDDD.c)
 */

__int64 __fastcall Bulk_Stage_EstimateRequiredTrbs(__int64 *a1)
{
  unsigned int v1; // r10d
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rsi
  unsigned int v6; // r9d
  __int64 result; // rax
  __int64 v8; // rdi
  unsigned int v9; // edx
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned __int16 v12; // ax
  __int64 *v13; // r14
  unsigned int v14; // edx
  unsigned int v15; // r12d
  unsigned int v16; // r13d
  unsigned int v17; // eax
  unsigned int v18; // r15d
  unsigned int v19; // edi
  unsigned __int64 v20; // r8
  __int64 v21; // rcx
  unsigned int v22; // ebp
  unsigned __int64 v23; // rcx
  unsigned int v24; // r9d
  unsigned int v25; // r8d
  int v26; // edx
  __int64 v27; // rdx
  __int64 v28; // r8
  int v29; // [rsp+20h] [rbp-88h]
  unsigned int v30; // [rsp+B0h] [rbp+8h]
  int v31; // [rsp+B8h] [rbp+10h]
  unsigned int v32; // [rsp+C0h] [rbp+18h]

  v1 = 0;
  v3 = *a1;
  v4 = 2;
  v5 = *(_QWORD *)(v3 + 56);
  if ( *(_DWORD *)(v3 + 76) > 2u )
  {
    v8 = *((unsigned int *)a1 + 10);
    v9 = *(_DWORD *)(*(_QWORD *)(v5 + 56) + 152LL);
    v10 = v8;
    if ( v9 <= (unsigned int)v8 )
      v10 = v9;
    v32 = v10;
    *((_DWORD *)a1 + 20) = ((unsigned __int64)(v10 + 8190) >> 12) + 1;
    v11 = *(_QWORD *)(v3 + 48);
    v12 = *(_WORD *)(v11 + 2);
    if ( v12 > 0x38u && v12 <= 0x3Au )
    {
      *((_DWORD *)a1 + 21) = ((unsigned __int64)(v8 + 4095) >> 12) + 1;
LABEL_36:
      v4 = *((_DWORD *)a1 + 21) + 2;
      goto LABEL_3;
    }
    v13 = (__int64 *)a1[6];
    if ( !TR_IsUrbUsingChainedMdl(v11) )
    {
      *((_DWORD *)a1 + 21) = (v8 + 4095 + (unsigned __int64)((*((_DWORD *)v13 + 8) + *((_DWORD *)v13 + 11)) & 0xFFF)) >> 12;
      goto LABEL_36;
    }
    v30 = v1;
    v15 = v1;
    if ( !(_DWORD)v8 )
      goto LABEL_36;
    while ( 1 )
    {
      v16 = *((_DWORD *)v13 + 10);
      v17 = v8;
      LODWORD(v8) = v8 - v16;
      if ( v17 < v16 )
        LODWORD(v8) = v1;
      v31 = v8;
      if ( v17 < v16 )
        v16 = v17;
      v18 = v16;
      if ( v16 )
        break;
LABEL_35:
      v13 = (__int64 *)*v13;
      if ( !(_DWORD)v8 )
        goto LABEL_36;
    }
    v19 = v30;
    while ( 1 )
    {
      v20 = v13[4] + *((unsigned int *)v13 + 11) + (unsigned __int64)(v16 - v18);
      v21 = (*((_WORD *)v13 + 16) + (unsigned __int16)*((_DWORD *)v13 + 11) + (_WORD)v16 - (_WORD)v18) & 0xFFF;
      if ( v15 + v18 < v14 )
      {
        v15 = v18;
        v23 = ((unsigned __int64)v18 + v21 + 4095) >> 12;
        v18 = v1;
        v22 = v23;
        v19 = v23;
      }
      else
      {
        v22 = v19 + (((unsigned __int64)(v14 - v15) + v21 + 4095) >> 12);
        v19 = v1;
        v18 += v15 - v14;
        v15 = v1;
      }
      v24 = v22 + *((_DWORD *)a1 + 21);
      *((_DWORD *)a1 + 21) = v24;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        && LOWORD(WPP_GLOBAL_Control->DeviceType) != (_WORD)v1 )
      {
        WPP_RECORDER_SF_DDDqDDDDD(
          *(_QWORD *)(*(_QWORD *)(v5 + 56) + 80LL),
          *(unsigned __int8 *)(*(_QWORD *)(v5 + 48) + 135LL),
          v20,
          v24,
          v29,
          *(_BYTE *)(*(_QWORD *)(v5 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(v5 + 56) + 144LL),
          *(_DWORD *)(v5 + 64),
          v20,
          v22,
          v18,
          v19,
          v15,
          v24);
      }
      v25 = *(_DWORD *)(v5 + 196);
      if ( v22 >= v25 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v26 = *(unsigned __int8 *)(*(_QWORD *)(v5 + 48) + 135LL);
        LOBYTE(v26) = 3;
        WPP_RECORDER_SF_DDDDD(
          *(_QWORD *)(*(_QWORD *)(v5 + 56) + 80LL),
          v26,
          v25,
          30,
          (__int64)&WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids,
          *(_BYTE *)(*(_QWORD *)(v5 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(v5 + 56) + 144LL),
          *(_DWORD *)(v5 + 64),
          v22,
          *(_DWORD *)(v5 + 196));
      }
      if ( v22 > *((_DWORD *)a1 + 20) )
      {
        *((_DWORD *)a1 + 20) = v22;
        v1 = 0;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          goto LABEL_33;
        }
        WPP_RECORDER_SF_DDDD(
          *(_QWORD *)(*(_QWORD *)(v5 + 56) + 80LL),
          5u,
          0xEu,
          0x1Fu,
          (__int64)&WPP_f900c8e8530d3ebbc4303e7a1e3d0cbe_Traceguids);
      }
      v1 = 0;
LABEL_33:
      v14 = v32;
      if ( !v18 )
      {
        v30 = v19;
        LODWORD(v8) = v31;
        goto LABEL_35;
      }
    }
  }
  *((_DWORD *)a1 + 20) = 2;
LABEL_3:
  *((_DWORD *)a1 + 21) = v4;
  v6 = *((_DWORD *)a1 + 10);
  result = *(_QWORD *)(*(_QWORD *)(v5 + 40) + 336LL);
  if ( (result & 0x400000000LL) != 0 )
  {
    v27 = *(_QWORD *)(v5 + 48);
    if ( *(_DWORD *)(v27 + 40) != v1 )
    {
      v28 = *(_QWORD *)(v5 + 56);
      if ( *(char *)(v28 + 98) < 0 && *(_DWORD *)(v27 + 20) <= 1u )
      {
        result = v6 / (*(_WORD *)(v28 + 100) & 0x7FFu);
        if ( v6 % (*(_WORD *)(v28 + 100) & 0x7FFu) )
        {
          ++*((_DWORD *)a1 + 20);
          ++*((_DWORD *)a1 + 21);
        }
      }
    }
  }
  return result;
}
