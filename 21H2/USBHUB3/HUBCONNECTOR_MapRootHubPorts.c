/*
 * XREFs of HUBCONNECTOR_MapRootHubPorts @ 0x1C007D074
 * Callers:
 *     HUBCONNECTOR_MapHubPorts @ 0x1C007D594 (HUBCONNECTOR_MapHubPorts.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001C04 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002130 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0002204 (WPP_RECORDER_SF_DD.c)
 *     HUBCONNECTOR_RegisterPort @ 0x1C007C838 (HUBCONNECTOR_RegisterPort.c)
 */

void __fastcall HUBCONNECTOR_MapRootHubPorts(__int64 a1)
{
  unsigned __int16 v1; // dx
  unsigned __int16 v2; // r12
  _QWORD **v4; // r8
  _QWORD *i; // rax
  _QWORD *v6; // rcx
  unsigned __int16 v7; // bx
  unsigned __int16 v8; // bp
  _QWORD **v9; // rdx
  _QWORD *j; // rax
  _QWORD *v11; // rcx
  unsigned __int16 v12; // r13
  _QWORD **v13; // r14
  _QWORD *k; // rax
  __int64 v15; // rsi
  int v16; // eax
  _QWORD *n; // rax
  __int64 v18; // r15
  _QWORD *m; // rax
  __int64 v20; // rcx
  __int64 v21; // [rsp+28h] [rbp-40h]
  __int64 v22; // [rsp+30h] [rbp-38h]

  v1 = *(_WORD *)(a1 + 146);
  v2 = *(_WORD *)(a1 + 148);
  if ( v1 <= v2 )
  {
    v4 = (_QWORD **)(a1 + 2360);
    do
    {
      for ( i = *v4; ; i = (_QWORD *)*i )
      {
        v6 = i - 31;
        if ( v4 == i )
          break;
        if ( *((_WORD *)v6 + 100) == v1 )
        {
          if ( i != (_QWORD *)248 )
          {
            *((_DWORD *)v6 + 342) = 1;
            *((_DWORD *)v6 + 343) = *(_DWORD *)(a1 + 96);
            *((_DWORD *)v6 + 348) = v1;
            *((_WORD *)v6 + 694) = 0;
          }
          break;
        }
      }
      v2 = *(_WORD *)(a1 + 148);
      ++v1;
    }
    while ( v1 <= v2 );
  }
  v7 = *(_WORD *)(a1 + 152);
  v8 = *(_WORD *)(a1 + 154);
  if ( v7 <= v8 )
  {
    v9 = (_QWORD **)(a1 + 2360);
    do
    {
      for ( j = *v9; ; j = (_QWORD *)*j )
      {
        v11 = j - 31;
        if ( v9 == j )
          break;
        if ( *((_WORD *)v11 + 100) == v7 )
        {
          if ( j != (_QWORD *)248 )
          {
            *((_DWORD *)v11 + 342) = 1;
            *((_DWORD *)v11 + 343) = *(_DWORD *)(a1 + 96);
            *((_DWORD *)v11 + 348) = v7;
            *((_WORD *)v11 + 694) = 0;
          }
          break;
        }
      }
      v8 = *(_WORD *)(a1 + 154);
      ++v7;
    }
    while ( v7 <= v8 );
    v7 = *(_WORD *)(a1 + 152);
    v2 = *(_WORD *)(a1 + 148);
  }
  v12 = *(_WORD *)(a1 + 146);
  if ( v7 <= v8 )
  {
    while ( v12 <= v2 )
    {
      v13 = (_QWORD **)(a1 + 2360);
      for ( k = *(_QWORD **)(a1 + 2360); ; k = (_QWORD *)*k )
      {
        v15 = (__int64)(k - 31);
        if ( v13 == k )
          break;
        if ( *(_WORD *)(v15 + 200) == v12 )
        {
          if ( k != (_QWORD *)248 )
          {
            v16 = *(_DWORD *)(v15 + 204);
            if ( (v16 & 0x10) != 0 )
            {
              if ( v12 == v2 )
              {
                *(_WORD *)(v15 + 212) = v7;
                *(_WORD *)(v15 + 214) = v8;
                while ( 2 )
                {
                  if ( v7 <= v8 )
                  {
                    for ( m = *(_QWORD **)(a1 + 2360); ; m = (_QWORD *)*m )
                    {
                      v20 = (__int64)(m - 31);
                      if ( v13 == m )
                        goto LABEL_59;
                      if ( *(_WORD *)(v20 + 200) == v7 )
                        break;
                    }
                    if ( m == (_QWORD *)248 || (int)HUBCONNECTOR_RegisterPort(v20) >= 0 )
                    {
LABEL_59:
                      ++v7;
                      continue;
                    }
                  }
                  break;
                }
              }
              else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                WPP_RECORDER_SF_(
                  *(_QWORD *)(v15 + 1432),
                  2u,
                  6u,
                  0x18u,
                  (__int64)&WPP_e747a75ab0a43332580ac19f3a627527_Traceguids);
              }
              return;
            }
            *(_DWORD *)(v15 + 1392) = v7;
            if ( (v16 & 1) != 0 )
            {
              if ( (int)HUBCONNECTOR_RegisterPort(v15) < 0 )
                return;
              for ( n = *v13; ; n = (_QWORD *)*n )
              {
                v18 = (__int64)(n - 31);
                if ( v13 == n )
                  goto LABEL_37;
                if ( *(_WORD *)(v18 + 200) == v7 )
                  break;
              }
              if ( n == (_QWORD *)248 )
              {
LABEL_37:
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LODWORD(v21) = v12;
                  WPP_RECORDER_SF_d(
                    *(_QWORD *)(v15 + 1432),
                    2u,
                    6u,
                    0x19u,
                    (__int64)&WPP_e747a75ab0a43332580ac19f3a627527_Traceguids,
                    v21);
                }
                break;
              }
              if ( (*(_DWORD *)(v18 + 204) & 1) == 0
                && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v22) = v7;
                LODWORD(v21) = v12;
                WPP_RECORDER_SF_DD(
                  *(_QWORD *)(v15 + 1432),
                  2u,
                  6u,
                  0x1Au,
                  (__int64)&WPP_e747a75ab0a43332580ac19f3a627527_Traceguids,
                  v21,
                  v22);
              }
              if ( (int)HUBCONNECTOR_RegisterPort(v18) < 0 )
                return;
            }
          }
          break;
        }
      }
      ++v7;
      ++v12;
      if ( v7 > v8 )
        return;
    }
  }
}
