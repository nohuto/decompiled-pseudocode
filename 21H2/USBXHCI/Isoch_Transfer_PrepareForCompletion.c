/*
 * XREFs of Isoch_Transfer_PrepareForCompletion @ 0x1C0042AD8
 * Callers:
 *     Isoch_Transfer_Complete @ 0x1C0042730 (Isoch_Transfer_Complete.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x1C0042800 (Isoch_Transfer_CompleteCancelable.c)
 * Callees:
 *     WPP_RECORDER_SF_DDqdDDDD @ 0x1C0002890 (WPP_RECORDER_SF_DDqdDDDD.c)
 */

void __fastcall Isoch_Transfer_PrepareForCompletion(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v7; // r10
  unsigned __int16 v8; // ax
  __int64 v9; // rcx
  int v10; // edi
  __int64 v11; // r8
  unsigned int v12; // eax
  int v13; // eax
  int v14; // eax
  struct _MDL *v15; // rcx
  __int64 v16; // rdx
  unsigned __int16 v17; // ax
  struct _MDL *v18; // rax
  int v19; // [rsp+20h] [rbp-58h]

  v7 = *(_QWORD *)(a2 + 48);
  v8 = *(_WORD *)(v7 + 2);
  if ( v8 <= 0x38u || (v9 = 52LL, v8 > 0x3Au) )
    v9 = 36LL;
  v10 = 0;
  *(_DWORD *)(v7 + v9) = *(_DWORD *)(a2 + 84);
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
          v13 = -1073610752;
        }
      }
      else
      {
        *(_DWORD *)(v7 + 12 * v11 + 148) = a3;
        v13 = a3;
      }
      if ( v13 )
      {
        ++*(_DWORD *)(v7 + 136);
        ++*(_DWORD *)(a1 + 260);
      }
      else
      {
        ++v10;
      }
      ++*(_DWORD *)(a1 + 256);
      v11 = (unsigned int)(v11 + 1);
      v12 = *(_DWORD *)(a2 + 96);
    }
    while ( (unsigned int)v11 < v12 );
  }
  if ( (_DWORD)a4 == -1 )
  {
    a4 = 0LL;
    if ( *(_DWORD *)(v7 + 136) == v12 )
      a4 = 3221228288LL;
  }
  *(_DWORD *)(v7 + 4) = a4;
  if ( (int)a4 <= -1073738240 )
  {
    if ( (_DWORD)a4 == -1073738240 )
    {
      v14 = -1073741637;
      goto LABEL_33;
    }
    if ( (_DWORD)a4 == -2147483136
      || (_DWORD)a4 == -2147482880
      || (_DWORD)a4 == -2147482112
      || (_DWORD)a4 == -1073739264 )
    {
      v14 = -1073741811;
      goto LABEL_33;
    }
LABEL_29:
    v14 = -1073741823;
    goto LABEL_33;
  }
  switch ( (_DWORD)a4 )
  {
    case 0xC0001000:
      v14 = -1073741670;
      break;
    case 0xC0007000:
      v14 = -1073741810;
      break;
    case 0xC0010000:
      v14 = -1073741536;
      break;
    default:
      if ( (unsigned int)a4 <= 1 )
      {
        v14 = 0;
        break;
      }
      goto LABEL_29;
  }
LABEL_33:
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
      v19);
  v15 = *(struct _MDL **)(a2 + 72);
  if ( v15 )
  {
    v16 = *(_QWORD *)(a2 + 48);
    v17 = *(_WORD *)(v16 + 2);
    if ( v17 <= 0x38u || v17 > 0x3Au )
      v18 = *(struct _MDL **)(v16 + 48);
    else
      v18 = 0LL;
    if ( v15 != v18 )
    {
      IoFreeMdl(v15);
      *(_QWORD *)(a2 + 72) = 0LL;
    }
  }
  *(_BYTE *)(a2 + 16) = 0;
}
