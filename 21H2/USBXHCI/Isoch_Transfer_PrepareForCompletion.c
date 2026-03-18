/*
 * XREFs of Isoch_Transfer_PrepareForCompletion @ 0x1C00434E4
 * Callers:
 *     Isoch_Transfer_Complete @ 0x1C004313C (Isoch_Transfer_Complete.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x1C004320C (Isoch_Transfer_CompleteCancelable.c)
 * Callees:
 *     WPP_RECORDER_SF_DDqdDDDD @ 0x1C0007770 (WPP_RECORDER_SF_DDqdDDDD.c)
 */

void __fastcall Isoch_Transfer_PrepareForCompletion(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v7; // r10
  unsigned __int16 v8; // ax
  _DWORD *v9; // rcx
  int v10; // edi
  __int64 v11; // r8
  unsigned int v12; // eax
  int v13; // eax
  int v14; // eax
  struct _MDL *v15; // rcx
  __int64 v16; // rdx
  unsigned __int16 v17; // ax
  int v18; // [rsp+20h] [rbp-58h]

  v7 = *(_QWORD *)(a2 + 48);
  v8 = *(_WORD *)(v7 + 2);
  if ( v8 <= 0x38u || (v9 = (_DWORD *)(v7 + 52), v8 > 0x3Au) )
    v9 = (_DWORD *)(v7 + 36);
  v10 = 0;
  *v9 = *(_DWORD *)(a2 + 84);
  v11 = 0LL;
  v12 = *(_DWORD *)(a2 + 96);
  if ( v12 )
  {
    do
    {
      if ( a3 == -1 )
      {
        v13 = *(_DWORD *)(v7 + 12 * v11 + 148);
        if ( v13 == -1 )
        {
          *(_DWORD *)(v7 + 12 * v11 + 148) = -1073610752;
          goto LABEL_8;
        }
      }
      else
      {
        *(_DWORD *)(v7 + 12 * v11 + 148) = a3;
        v13 = a3;
      }
      if ( !v13 )
      {
        ++v10;
        goto LABEL_12;
      }
LABEL_8:
      ++*(_DWORD *)(v7 + 136);
      ++*(_DWORD *)(a1 + 260);
LABEL_12:
      ++*(_DWORD *)(a1 + 256);
      v11 = (unsigned int)(v11 + 1);
      v12 = *(_DWORD *)(a2 + 96);
    }
    while ( (unsigned int)v11 < v12 );
  }
  if ( (_DWORD)a4 == -1 )
  {
    if ( *(_DWORD *)(v7 + 136) == v12 )
    {
      *(_DWORD *)(v7 + 4) = -1073739008;
LABEL_32:
      v14 = -1073741823;
      goto LABEL_35;
    }
    *(_DWORD *)(v7 + 4) = 0;
  }
  else
  {
    *(_DWORD *)(v7 + 4) = a4;
    if ( (int)a4 <= -1073738240 )
    {
      if ( (_DWORD)a4 == -1073738240 )
      {
        v14 = -1073741637;
        goto LABEL_35;
      }
      if ( (_DWORD)a4 == -2147483136
        || (_DWORD)a4 == -2147482880
        || (_DWORD)a4 == -2147482112
        || (_DWORD)a4 == -1073739264 )
      {
        v14 = -1073741811;
        goto LABEL_35;
      }
      goto LABEL_32;
    }
    switch ( (_DWORD)a4 )
    {
      case 0xC0001000:
        v14 = -1073741670;
        goto LABEL_35;
      case 0xC0007000:
        v14 = -1073741810;
        goto LABEL_35;
      case 0xC0010000:
        v14 = -1073741536;
        goto LABEL_35;
    }
    if ( (unsigned int)a4 > 1 )
      goto LABEL_32;
  }
  v14 = 0;
LABEL_35:
  *(_DWORD *)(a2 + 68) = v14;
  ++*(_DWORD *)(a1 + 240);
  *(_QWORD *)(a1 + 248) += *(unsigned int *)(a2 + 84);
  if ( *(int *)(a2 + 68) < 0 )
    ++*(_DWORD *)(a1 + 244);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDqdDDDD(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
      v11,
      a4,
      v18);
  v15 = *(struct _MDL **)(a2 + 72);
  if ( v15 )
  {
    if ( (v16 = *(_QWORD *)(a2 + 48), v17 = *(_WORD *)(v16 + 2), v17 > 0x38u) && v17 <= 0x3Au
      || v15 != *(struct _MDL **)(v16 + 48) )
    {
      IoFreeMdl(v15);
      *(_QWORD *)(a2 + 72) = 0LL;
    }
  }
  *(_BYTE *)(a2 + 16) = 0;
}
