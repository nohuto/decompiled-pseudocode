/*
 * XREFs of RecordCommandTimingHistory @ 0x1C001B7B0
 * Callers:
 *     NVMeCompletionDpcRoutine @ 0x1C0002270 (NVMeCompletionDpcRoutine.c)
 * Callees:
 *     GetSrbExtension @ 0x1C00044B4 (GetSrbExtension.c)
 *     CalculateTimeDurationIn100ns @ 0x1C000484C (CalculateTimeDurationIn100ns.c)
 */

void __fastcall RecordCommandTimingHistory(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned int v3; // r10d
  unsigned int v5; // r8d
  __int64 v6; // rbx
  __int64 v7; // rdx
  _QWORD *SrbExtension; // r10
  __int64 v9; // r11
  __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  int v13; // eax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  int v16; // eax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  int v19; // eax
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  int v22; // eax
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rax
  int v25; // eax
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rax
  int v28; // eax
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rax
  int v31; // eax
  __int64 v32; // r11

  v3 = *(_DWORD *)(a1 + 3844);
  if ( v3 )
  {
    if ( *(_QWORD *)(a1 + 3856) )
    {
      v5 = *(_DWORD *)(a1 + 3848);
      *(_DWORD *)(a1 + 3848) = v5 + 1 < v3 ? v5 + 1 : 0;
      v6 = 3LL * (v5 < v3 ? v5 : 0);
      SrbExtension = (_QWORD *)GetSrbExtension(a2);
      if ( SrbExtension[520] )
      {
        v10 = 60LL;
        if ( *(_BYTE *)(v7 + 2) != 40 )
          v10 = 16LL;
        *(_DWORD *)(v9 + 8 * v6) = *(_DWORD *)(v10 + v7);
        v11 = SrbExtension[521];
        v12 = SrbExtension[520];
        if ( v11 < v12 )
        {
          *(_DWORD *)(v9 + 8 * v6 + 4) = 195935983;
        }
        else
        {
          v13 = CalculateTimeDurationIn100ns(v11 - v12, a3);
          *(_DWORD *)(v9 + 8 * v6 + 4) = v13;
        }
        v14 = SrbExtension[522];
        if ( v14 )
        {
          v15 = SrbExtension[521];
          if ( v14 < v15 )
            v16 = v15 - v14 > 0x100 ? 0xBADBEEF : 0;
          else
            v16 = CalculateTimeDurationIn100ns(v14 - v15, a3);
          *(_DWORD *)(v9 + 8 * v6 + 8) = v16;
          v17 = SrbExtension[522];
          v18 = SrbExtension[520];
          if ( v17 < v18 )
            v19 = 195935983;
          else
            v19 = CalculateTimeDurationIn100ns(v17 - v18, a3);
          *(_DWORD *)(v9 + 8 * v6 + 12) = v19;
          v20 = SrbExtension[523];
          v21 = SrbExtension[522];
          if ( v20 < v21 )
          {
            v22 = v21 - v20 > 0x100 ? 0xBADBEEF : 0;
LABEL_26:
            *(_DWORD *)(v9 + 8 * v6 + 16) = v22;
            goto LABEL_28;
          }
        }
        else
        {
          v23 = SrbExtension[523];
          v24 = SrbExtension[521];
          if ( v23 < v24 )
            v25 = 195935983;
          else
            v25 = CalculateTimeDurationIn100ns(v23 - v24, a3);
          *(_DWORD *)(v9 + 8 * v6 + 8) = v25;
          v26 = SrbExtension[523];
          v27 = SrbExtension[520];
          if ( v26 < v27 )
            v28 = 195935983;
          else
            v28 = CalculateTimeDurationIn100ns(v26 - v27, a3);
          *(_DWORD *)(v9 + 8 * v6 + 12) = v28;
          v20 = SrbExtension[523];
          v21 = SrbExtension[521];
          if ( v20 < v21 )
          {
            *(_DWORD *)(v9 + 8 * v6 + 16) = 195935983;
LABEL_28:
            v29 = SrbExtension[524];
            v30 = SrbExtension[523];
            if ( v29 < v30 )
            {
              *(_DWORD *)(v9 + 8 * v6 + 20) = 195935983;
            }
            else
            {
              v31 = CalculateTimeDurationIn100ns(v29 - v30, a3);
              *(_DWORD *)(v32 + 8 * v6 + 20) = v31;
            }
            return;
          }
        }
        v22 = CalculateTimeDurationIn100ns(v20 - v21, a3);
        goto LABEL_26;
      }
    }
  }
}
