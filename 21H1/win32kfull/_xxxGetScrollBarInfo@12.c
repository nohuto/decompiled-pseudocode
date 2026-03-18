/*
 * XREFs of _xxxGetScrollBarInfo@12 @ 0x6D508
 * Callers:
 *     _NtUserGetScrollBarInfo@12 @ 0x6C254 (_NtUserGetScrollBarInfo@12.c)
 *     _xxxSBWndProc@16 @ 0x1A3EEF (_xxxSBWndProc@16.c)
 * Callees:
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 *     _unsafe_cast_fnid_or_class_to_PSBWND@4 @ 0x6D726 (_unsafe_cast_fnid_or_class_to_PSBWND@4.c)
 *     _CalcSBStuff@12 @ 0x6DA90 (_CalcSBStuff@12.c)
 *     _CalcSBStuff2@16 @ 0x6DB64 (_CalcSBStuff2@16.c)
 *     _GetRect@12 @ 0x6E5F2 (_GetRect@12.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __fastcall xxxGetScrollBarInfo(int BugCheckParameter2, int a2, _DWORD *a3)
{
  int v3; // ebx
  int v5; // eax
  int *v6; // edx
  int v7; // edi
  int v8; // eax
  bool v9; // zf
  int v10; // eax
  int v11; // ecx
  int *v12; // eax
  int v13; // edx
  int v14; // ecx
  int v15; // eax
  int v16; // edx
  int v17; // ecx
  int v19; // ecx
  _DWORD *v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  int v24; // edi
  int v25; // eax
  char v26; // [esp+Fh] [ebp-61h]
  int v27; // [esp+10h] [ebp-60h]
  int v28; // [esp+14h] [ebp-5Ch]
  int v29; // [esp+14h] [ebp-5Ch]
  int v31; // [esp+18h] [ebp-58h]
  _DWORD v33[16]; // [esp+30h] [ebp-40h] BYREF

  LOBYTE(v3) = 0;
  memset(v33, 0, sizeof(v33));
  if ( *a3 == 60 )
  {
    v5 = unsafe_cast_fnid_or_class_to_PSBWND(BugCheckParameter2);
    v28 = v5;
    if ( a2 == -4 && !v5 )
    {
      _InterlockedIncrement(&glSendMessage);
      return xxxSendTransformableMessageTimeout(BugCheckParameter2, 0xEBu, 0, (int)a3, 0, 0, 0, 1u, 1);
    }
    v6 = a3 + 9;
    memset(a3 + 9, 0, 0x18u);
    switch ( a2 )
    {
      case -4:
        v7 = BugCheckParameter2;
        v3 = *(_DWORD *)(v5 + 8);
        v27 = *(_DWORD *)(v5 + 4);
        GetRect(17);
        CalcSBStuff2(v28 + 12, *(_DWORD *)(v28 + 4));
        goto LABEL_18;
      case -5:
        v7 = BugCheckParameter2;
        v27 = 1;
        v8 = *(_DWORD *)(BugCheckParameter2 + 20);
        if ( (*(_BYTE *)(v8 + 22) & 0x20) != 0 )
        {
          v9 = (*(_BYTE *)(v8 + 8) & 2) == 0;
          goto LABEL_7;
        }
        goto LABEL_11;
      case -6:
        v7 = BugCheckParameter2;
        v27 = 0;
        v10 = *(_DWORD *)(BugCheckParameter2 + 20);
        if ( (*(_BYTE *)(v10 + 22) & 0x10) != 0 )
        {
          v9 = (*(_BYTE *)(v10 + 8) & 4) == 0;
LABEL_7:
          if ( v9 )
            *v6 |= 0x10000u;
LABEL_12:
          v11 = *v6;
          if ( (*v6 & 0x8000) != 0 )
            return 1;
          v12 = *(int **)(v7 + 84);
          if ( v12 )
          {
            v13 = v27;
            v3 = *v12;
            if ( v27 )
              v3 >>= 2;
            LOBYTE(v3) = v3 & 3;
          }
          else
          {
            UserSetLastError(1447);
            v11 = a3[9];
            v13 = v27;
          }
          if ( (v11 & 0x10000) == 0 )
          {
            CalcSBStuff(v13);
            v19 = *(_DWORD *)(v7 + 20);
            if ( (*(_BYTE *)(v19 + 18) & 0x40) != 0 )
            {
              v25 = *(_DWORD *)(v19 + 60) - *(_DWORD *)(v19 + 52);
              if ( !v27 )
              {
                v16 = v25 - v33[5];
                v31 = v25 - v33[4];
                v15 = v33[7];
                v29 = v33[6];
                goto LABEL_20;
              }
              v14 = v25 - v33[7];
              v15 = v25 - v33[6];
LABEL_19:
              v16 = v33[4];
              v29 = v14;
              v31 = v33[5];
LABEL_20:
              if ( (v3 & 1) != 0 )
              {
                a3[10] |= 1u;
                a3[11] |= 1u;
              }
              if ( (v3 & 2) != 0 )
              {
                a3[14] |= 1u;
                a3[13] |= 1u;
              }
              if ( (v3 & 3) == 3 )
                a3[9] |= 1u;
              v17 = *(_DWORD *)(v7 + 20);
              v26 = *(_BYTE *)(v17 + 14);
              if ( (v26 & 0x10) != 0 && (a2 != -5 || (v26 & 0x20) != 0) )
              {
                if ( (v26 & 1) != 0 )
                {
                  a3[10] |= 8u;
                  v17 = *(_DWORD *)(v7 + 20);
                }
                if ( (*(_BYTE *)(v17 + 14) & 2) != 0 )
                {
                  a3[11] |= 8u;
                  v17 = *(_DWORD *)(v7 + 20);
                }
                if ( (*(_BYTE *)(v17 + 14) & 4) != 0 )
                {
                  a3[13] |= 8u;
                  v17 = *(_DWORD *)(v7 + 20);
                }
                if ( (*(_BYTE *)(v17 + 14) & 8) != 0 )
                  a3[14] |= 8u;
              }
              if ( (a3[9] & 0x10000) == 0 )
              {
                if ( v27 )
                {
                  a3[1] = v29;
                  a3[2] = v16;
                  a3[3] = v15;
                  a3[4] = v31;
                }
                else
                {
                  a3[2] = v29;
                  a3[1] = v16;
                  a3[3] = v31;
                  a3[4] = v15;
                }
                v20 = *(_DWORD **)(v7 + 20);
                if ( a2 == -4 )
                {
                  v21 = v20[18];
                  v22 = v20[17];
                }
                else
                {
                  v21 = v20[14];
                  v22 = v20[13];
                }
                a3[1] += v22;
                a3[3] += v22;
                a3[4] += v21;
                a3[2] += v21;
                v23 = v33[9];
                v24 = v33[12];
                a3[5] = v33[9] - v16;
                a3[6] = v33[13] - v16;
                a3[7] = v24 - v16;
                if ( v33[13] == v23 )
                  a3[11] |= 0x8000u;
                if ( v24 == v33[10] )
                  a3[13] |= 0x8000u;
              }
              return 1;
            }
          }
LABEL_18:
          v14 = v33[6];
          v15 = v33[7];
          goto LABEL_19;
        }
LABEL_11:
        *v6 |= 0x8000u;
        goto LABEL_12;
    }
  }
  UserSetLastError(87);
  return 0;
}
