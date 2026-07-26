/*
 * XREFs of ?ndisOidPrePMProtocolOffloadList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0091CB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqqL @ 0x1C000E1D0 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000E2D0 (WPP_RECORDER_SF_qqq.c)
 */

char __fastcall ndisOidPrePMProtocolOffloadList(struct _NDIS_REQ_TRACKER *a1, _QWORD *a2)
{
  __int64 v2; // r13
  char v3; // bl
  __int64 v4; // r15
  unsigned int v5; // ebp
  __int64 v6; // rsi
  int v7; // r14d
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // ecx
  _QWORD *i; // rax
  __int64 j; // r8
  _OWORD *v15; // rax
  _OWORD *v16; // rcx
  __int64 v17; // r9
  __int128 v18; // xmm1

  v2 = *(_QWORD *)a1;
  v3 = 0;
  v4 = *((_QWORD *)a1 + 3);
  v5 = 0;
  v6 = *((_QWORD *)a1 + 4);
  v7 = 0;
  v9 = v4;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x69u,
      (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
      v2,
      v4,
      v6);
    v9 = *((_QWORD *)a1 + 3);
  }
  if ( v9
    && (v10 = *(_QWORD *)(v9 + 24), *(_BYTE *)(v10 + 56) <= 6u)
    && (*(_BYTE *)(v10 + 56) != 6 || *(_BYTE *)(v10 + 57) < 0x14u)
    || (a2 = (_QWORD *)*((_QWORD *)a1 + 1)) != 0LL
    && (*(_DWORD *)(v6 + 88) & 0x4000) == 0
    && (v11 = a2[2], *(_BYTE *)(v11 + 100) <= 6u)
    && (*(_BYTE *)(v11 + 100) != 6 || *(_BYTE *)(v11 + 101) < 0x14u)
    || (v12 = *(_DWORD *)(v6 + 4), (v12 & 0xFFFFFFFD) != 0) )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
LABEL_33:
    v3 = 1;
    goto LABEL_34;
  }
  if ( v9 && !v12 )
  {
    a2 = *(_QWORD **)(v4 + 512);
LABEL_24:
    for ( i = a2; i; v5 += 256 )
      i = (_QWORD *)*i;
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v6 + 48) >= v5 )
    {
      for ( j = *(_QWORD *)(v6 + 40); a2; a2 = (_QWORD *)*a2 )
      {
        v15 = (_OWORD *)j;
        v16 = a2 + 6;
        v17 = 2LL;
        do
        {
          *v15 = *v16;
          v15[1] = v16[1];
          v15[2] = v16[2];
          v15[3] = v16[3];
          v15[4] = v16[4];
          v15[5] = v16[5];
          v15[6] = v16[6];
          v15 += 8;
          v18 = v16[7];
          v16 += 8;
          *(v15 - 1) = v18;
          --v17;
        }
        while ( v17 );
        v7 += 256;
        *(_DWORD *)(j + 152) = *a2 != 0LL ? v7 : 0;
        j += 256LL;
      }
      *(_DWORD *)(v6 + 52) = v7;
    }
    else
    {
      *(_DWORD *)(v6 + 56) = v5;
      *((_DWORD *)a1 + 10) = -1073676268;
    }
    goto LABEL_33;
  }
  if ( a2 && (*(_DWORD *)(v6 + 88) & 0x4000) == 0 && !v12 )
  {
    a2 = (_QWORD *)a2[90];
    goto LABEL_24;
  }
  if ( *(_QWORD *)a1 && v12 == 2 )
  {
    a2 = *(_QWORD **)(v2 + 976);
    goto LABEL_24;
  }
LABEL_34:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      0xBu,
      0x6Au,
      (struct _GUID *)&WPP_a3b719bb2b623bfc7123f0e495d6b1e1_Traceguids,
      v2,
      v4,
      v6,
      *((_DWORD *)a1 + 10));
  return v3;
}
