/*
 * XREFs of RootHub_ForceU0AndWait @ 0x1C003DEC8
 * Callers:
 *     RootHub_UcxEvtSetPortFeature @ 0x1C0013360 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_ForceU3 @ 0x1C003E26C (RootHub_ForceU3.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0005520 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ @ 0x1C000A0B8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C000F118 (WPP_RECORDER_SF_d.c)
 *     RootHub_ReleaseReadModifyWriteLock @ 0x1C0011EE0 (RootHub_ReleaseReadModifyWriteLock.c)
 *     XilRegister_ReadUlong @ 0x1C0013DA0 (XilRegister_ReadUlong.c)
 *     RootHub_AcquireReadModifyWriteLock @ 0x1C0013DD0 (RootHub_AcquireReadModifyWriteLock.c)
 *     XilRegister_WriteUlong @ 0x1C0013F1C (XilRegister_WriteUlong.c)
 */

__int64 __fastcall RootHub_ForceU0AndWait(_QWORD *a1, int a2, __int64 a3, int a4)
{
  __int64 v4; // rax
  unsigned int v6; // ecx
  unsigned int v7; // edi
  __int64 v8; // rsi
  int v9; // r8d
  unsigned int *v10; // r13
  __int64 v11; // rax
  int Ulong; // eax
  int v13; // edx
  int v14; // esi
  int v15; // esi
  int v16; // r9d
  int v17; // edx
  int v18; // eax
  int v19; // edx
  int v20; // ebx
  unsigned int v21; // ebx
  char v22; // al
  int v23; // edx
  int v24; // eax
  int v25; // ebx
  __m128i *v26; // rcx
  int v27; // esi
  __int64 v28; // rbx
  int v29; // r8d
  int v30; // r9d
  int v31; // esi
  char i; // r13
  unsigned int v33; // eax
  int v34; // edx
  unsigned int v35; // ebx
  int v36; // edx
  unsigned int *v38; // [rsp+80h] [rbp+8h]
  unsigned int v39; // [rsp+88h] [rbp+10h]
  __int64 v40; // [rsp+90h] [rbp+18h]

  v4 = a1[1];
  v6 = a2 - 1;
  v7 = 0;
  v8 = *(_QWORD *)(v4 + 88);
  v9 = a2 - 1;
  v38 = (unsigned int *)(16LL * (unsigned int)(a2 - 1) + a1[5]);
  v40 = v8;
  v39 = a2 - 1;
  v10 = v38 + 1;
  v11 = a1[6] + 112LL * (unsigned int)(a2 - 1);
  if ( *(_BYTE *)(v11 + 13) == 2 )
  {
    if ( !*(_BYTE *)(v11 + 23) )
      return v7;
    RootHub_AcquireReadModifyWriteLock((__int64)a1, v6, v9, a4);
    Ulong = XilRegister_ReadUlong(v8, v10);
    v14 = Ulong;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72LL),
        v13,
        11,
        241,
        (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
        Ulong);
    }
    v15 = v14 & 0xFFFEFFFF;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v16 = 242;
LABEL_24:
      LOBYTE(v13) = 4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72LL),
        v13,
        11,
        v16,
        (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
        v15);
    }
  }
  else
  {
    RootHub_AcquireReadModifyWriteLock((__int64)a1, v6, v9, a4);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v17) = 4;
      WPP_RECORDER_SF_(
        *(_QWORD *)(a1[1] + 72LL),
        v17,
        11,
        243,
        (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids);
    }
    v18 = XilRegister_ReadUlong(v8, v10);
    v20 = v18;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v19) = 4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72LL),
        v19,
        11,
        244,
        (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
        v18);
    }
    v21 = v20 & 0xFFFF0000;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v19) = 4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72LL),
        v19,
        11,
        245,
        (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
        v21);
    }
    XilRegister_WriteUlong(v8, v10, v21);
    v22 = XilRegister_ReadUlong(v8, v10);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v23) = 4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72LL),
        v23,
        11,
        246,
        (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
        v22);
    }
    v10 = v38;
    v24 = XilRegister_ReadUlong(v8, v38);
    v25 = v24;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72LL),
        v13,
        11,
        247,
        (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
        v24);
    }
    v26 = (__m128i *)a1[1];
    if ( (_mm_srli_si128(v26[21], 8).m128i_u8[0] & 0x40) != 0 )
    {
      if ( (v25 & 0x400000) != 0 )
      {
        ++v26[31].m128i_i32[1];
        v26[29].m128i_i8[8] = 1;
      }
      v27 = 239124992;
    }
    else
    {
      v27 = 234930688;
    }
    v15 = v25 & v27 | 0x10000;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v16 = 248;
      goto LABEL_24;
    }
  }
  v28 = v40;
  XilRegister_WriteUlong(v40, v10, v15);
  RootHub_ReleaseReadModifyWriteLock((__int64)a1, v39, v29, v30);
  v31 = 6400;
  for ( i = 0; ; i += 10 )
  {
    v33 = XilRegister_ReadUlong(v28, v38);
    v35 = v33;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v34) = 4;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(a1[1] + 72LL),
        v34,
        11,
        249,
        (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
        i,
        v33);
    }
    if ( v35 == -1 )
      return (unsigned int)-1073741823;
    v36 = (v35 >> 5) & 0xF;
    if ( !v36 )
      return v7;
    if ( ((v36 - 5) & 0xFFFFFFFA) == 0 && v36 != 9 || (v35 & 0x20203) != 0x203 || v36 == 4 )
      return (unsigned int)-1073741823;
    if ( ((v36 - 9) & 0xFFFFFFFD) == 0 )
      break;
    if ( (v35 & 0x10) != 0 || !v31 )
      return (unsigned int)-1073741823;
    --v31;
    KeStallExecutionProcessor(0xAu);
    v28 = v40;
  }
  v7 = -1073741823;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v36) = 2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 72LL),
      v36,
      11,
      250,
      (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
      (v35 >> 5) & 0xF);
  }
  return v7;
}
