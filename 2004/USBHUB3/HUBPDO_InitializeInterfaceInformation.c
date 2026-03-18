/*
 * XREFs of HUBPDO_InitializeInterfaceInformation @ 0x1C00156D4
 * Callers:
 *     HUBPDO_ValidateSelectInterfaceUrb @ 0x1C0015930 (HUBPDO_ValidateSelectInterfaceUrb.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B50 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0002028 (WPP_RECORDER_SF_dD.c)
 */

__int64 __fastcall HUBPDO_InitializeInterfaceInformation(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  char v3; // bp
  char v4; // r15
  unsigned __int8 *v5; // r8
  unsigned int v8; // r14d
  unsigned __int8 *v9; // rdx
  int v10; // r11d
  unsigned int v11; // edi
  __int64 v12; // r9
  __int64 v13; // rax
  unsigned __int64 v14; // r10
  unsigned __int8 *v15; // rax
  unsigned __int8 *v16; // r9
  __int64 v17; // rcx
  unsigned __int8 *v18; // rsi
  unsigned __int8 v19; // r8
  unsigned __int8 *v20; // rcx
  __int64 v21; // rcx
  __int64 result; // rax
  char *v23; // rdi
  __int64 v24; // r15
  int v25; // edx
  __int64 v26; // [rsp+28h] [rbp-40h]

  v3 = *((_BYTE *)a2 + 3);
  v4 = *((_BYTE *)a2 + 2);
  v5 = (unsigned __int8 *)(a3 + 32);
  LOWORD(v8) = 0;
  v9 = 0LL;
  v10 = 0;
  v11 = 0;
  v12 = *v5;
  if ( (unsigned __int8)v12 < 9u )
    goto LABEL_40;
  if ( v5[1] != 2 )
    goto LABEL_40;
  v13 = *((unsigned __int16 *)v5 + 1);
  if ( (unsigned int)v13 < 9 )
    goto LABEL_40;
  v14 = (unsigned __int64)&v5[v13];
  v15 = &v5[v12];
  v16 = &v5[v12 + 2];
  if ( (unsigned __int64)v16 > v14 )
    goto LABEL_40;
  do
  {
    v17 = *v15;
    v18 = &v15[v17];
    if ( (unsigned __int64)&v15[v17] > v14 || !(_BYTE)v17 )
      break;
    v19 = v15[1];
    if ( v19 == 4 )
    {
      if ( (unsigned __int8)v17 >= 9u )
      {
        if ( *v16 == v4 )
        {
          ++v10;
          if ( v9 )
            goto LABEL_23;
          if ( v15[3] == v3 )
            v9 = v15;
        }
        else if ( v10 )
        {
          break;
        }
      }
    }
    else if ( v19 == 5 && v9 )
    {
      if ( (unsigned __int8)v17 < 7u )
      {
        v9 = 0LL;
        break;
      }
      ++v11;
    }
    v16 = v18 + 2;
    v15 += v17;
  }
  while ( (unsigned __int64)(v18 + 2) <= v14 );
  if ( !v9 )
    goto LABEL_40;
LABEL_23:
  v20 = 0LL;
  if ( v9[4] <= v11 )
    v20 = v9;
  if ( v20 )
  {
    v21 = v20[4];
    v8 = 24 * (v21 + 1);
    if ( *a2 >= v8 )
    {
      *((_DWORD *)a2 + 1) = 0;
      result = 0LL;
      *((_QWORD *)a2 + 1) = 0LL;
      *((_DWORD *)a2 + 4) = v21;
      if ( (_DWORD)v21 )
      {
        v23 = (char *)a2 + 27;
        v24 = v21;
        do
        {
          v25 = *(_DWORD *)(v23 + 17);
          *(_WORD *)(v23 - 1) = 0;
          *(_DWORD *)(v23 + 1) = 0;
          *(_QWORD *)(v23 + 5) = 0LL;
          if ( (v25 & 0xFFFFFEC0) != 0 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v26) = v25;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1432LL),
                3u,
                5u,
                0x23u,
                (__int64)&WPP_9f8e321b0e16315429714d1dd54efe91_Traceguids,
                v26);
              v25 = *(_DWORD *)(v23 + 17);
            }
            result = 3221245952LL;
          }
          if ( (v25 & 1) == 0 )
            *(_WORD *)(v23 - 3) = 0;
          v23 += 24;
          --v24;
        }
        while ( v24 );
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dD(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1432LL),
          3u,
          5u,
          0x22u,
          (__int64)&WPP_9f8e321b0e16315429714d1dd54efe91_Traceguids,
          *a2,
          24 * (v21 + 1));
      result = 3221237760LL;
    }
  }
  else
  {
LABEL_40:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1432LL),
        2u,
        5u,
        0x21u,
        (__int64)&WPP_9f8e321b0e16315429714d1dd54efe91_Traceguids);
    result = 3221241856LL;
  }
  *a2 = v8;
  return result;
}
