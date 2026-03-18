/*
 * XREFs of ?ProcessRoundTripRequest@CComposition@@AEAA_NXZ @ 0x1800813E4
 * Callers:
 *     ?PostPresent@CComposition@@QEAAJ_N@Z @ 0x18007DDA4 (-PostPresent@CComposition@@QEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x1800E7C58 (-NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z.c)
 *     McTemplateU0qqx_EventWriteTransfer @ 0x180193918 (McTemplateU0qqx_EventWriteTransfer.c)
 */

char __fastcall CComposition::ProcessRoundTripRequest(CComposition *this, unsigned int a2)
{
  char v2; // bp
  unsigned int i; // esi
  __int64 v6; // rbx
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  _QWORD *v9; // rax
  int v10; // eax
  __int64 v11; // r9
  unsigned int v12; // r8d
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  _BYTE v17[20]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v18; // [rsp+44h] [rbp-14h]

  v2 = 0;
  for ( i = 0; i < *((_DWORD *)this + 150); ++i )
  {
    v6 = *((_QWORD *)this + 72) + 16LL * i;
    LODWORD(v7) = *(_DWORD *)(v6 + 4);
    if ( (_DWORD)v7 )
    {
      LODWORD(v7) = v7 - 1;
      if ( (_DWORD)v7 )
      {
        if ( (_DWORD)v7 == 1 )
        {
          v8 = *((_QWORD *)this + 61);
          if ( !v8
            || (v9 = *(_QWORD **)(v8 + 8), v7 = *(_QWORD *)(v6 + 8), v9[11] >= v7)
            || v9[7] > v7 && *(_QWORD *)((char *)v9 + 76) < v7 )
          {
            *(_DWORD *)v17 = 8;
            v18 = 0LL;
            v10 = *(_DWORD *)v6;
            *(_OWORD *)&v17[4] = 0LL;
            *(_DWORD *)&v17[8] = v10;
            CComposition::NotifyHelper(this, (struct MIL_MESSAGE *)v17);
            *(_DWORD *)(v6 + 4) = 0;
            *(_QWORD *)(v6 + 8) = 0LL;
            v7 = *((unsigned int *)this + 150);
            *(_OWORD *)v17 = *(_OWORD *)v6;
            if ( i >= (unsigned int)v7 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, -2147024809, 0x19Cu);
            }
            else
            {
              v11 = *((_QWORD *)this + 72);
              v12 = i;
              if ( i < (int)v7 - 1 )
              {
                do
                {
                  a2 = v12 + 1;
                  v16 = 2LL * v12;
                  v7 = 2LL * (v12 + 1);
                  v12 = a2;
                  *(_OWORD *)(v11 + 8 * v16) = *(_OWORD *)(v11 + 8 * v7);
                  LODWORD(v7) = *((_DWORD *)this + 150);
                }
                while ( a2 < (int)v7 - 1 );
              }
              *((_DWORD *)this + 150) = v7 - 1;
            }
            if ( i )
              --i;
            goto LABEL_20;
          }
        }
      }
      else
      {
        *(_DWORD *)(v6 + 4) = 2;
        v13 = *((_QWORD *)this + 61);
        if ( v13 )
        {
          v14 = *(_QWORD *)(v13 + 8);
          if ( *((_DWORD *)this + 118) == 1 )
            v15 = *(_QWORD *)(v14 + 88);
          else
            v15 = *(_QWORD *)(v14 + 76);
          *(_QWORD *)(v6 + 8) = v15 + 1;
        }
      }
    }
    *(_OWORD *)v17 = *(_OWORD *)v6;
LABEL_20:
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0qqx_EventWriteTransfer(v7, a2, *(_DWORD *)&v17[4], *(_DWORD *)v17, v17[8]);
    v2 |= *(_DWORD *)(v6 + 4) == 2;
  }
  return v2;
}
