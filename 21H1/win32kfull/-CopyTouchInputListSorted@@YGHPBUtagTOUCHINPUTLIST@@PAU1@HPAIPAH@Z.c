/*
 * XREFs of ?CopyTouchInputListSorted@@YGHPBUtagTOUCHINPUTLIST@@PAU1@HPAIPAH@Z @ 0x149084
 * Callers:
 *     ?CreateValidTouchInputInfo@@YGPAUHTOUCHINPUT__@@PAUtagTHREADINFO@@IIQAUtagTOUCHINPUT@@@Z @ 0x149228 (-CreateValidTouchInputInfo@@YGPAUHTOUCHINPUT__@@PAUtagTHREADINFO@@IIQAUtagTOUCHINPUT@@@Z.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     ?TouchMessageFromState@@YGIW4TOUCHSTATE@@@Z @ 0x149520 (-TouchMessageFromState@@YGIW4TOUCHSTATE@@@Z.c)
 */

int __userpurge CopyTouchInputListSorted@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        const struct tagTOUCHINPUTLIST *a3,
        struct tagTOUCHINPUTLIST *a4,
        int a5,
        unsigned int *a6,
        int *a7)
{
  char *v7; // edi
  int v8; // eax
  int v9; // ebx
  int v10; // ecx
  int v11; // eax
  int v12; // edx
  ULONG v13; // ecx
  int v14; // edx
  int i; // ecx
  char *v16; // edi
  int v17; // ecx
  int v18; // edi
  int v19; // edx
  _DWORD v21[10]; // [esp+10h] [ebp-5Ch] BYREF
  int v22; // [esp+40h] [ebp-2Ch]
  char *v23; // [esp+44h] [ebp-28h]
  int v24; // [esp+48h] [ebp-24h]
  int v25; // [esp+4Ch] [ebp-20h]
  int v26; // [esp+50h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+54h] [ebp-18h]

  v26 = a1;
  memset(v21, 0, sizeof(v21));
  v7 = *(char **)(a2 + 8);
  v8 = *(_DWORD *)(a2 + 4);
  v9 = 1;
  while ( 2 )
  {
    v24 = v8;
    v23 = v7;
    if ( v8 )
    {
      qmemcpy(v21, v7, sizeof(v21));
      ms_exc.registration.TryLevel = -2;
      if ( (v21[4] & 0xFFFFFF00) != 0 || (v21[5] & 0xFFFFFFF8) != 0 )
      {
        v13 = 1004;
        goto LABEL_30;
      }
      switch ( v21[4] & 0xF )
      {
        case 4:
          v10 = 3;
          break;
        case 5:
          goto LABEL_18;
        case 9:
          v10 = 2;
          goto LABEL_12;
        case 10:
          v10 = 1;
          goto LABEL_12;
        default:
          if ( (v21[4] & 0xFu) - 11 < 2 )
          {
LABEL_18:
            v13 = RtlNtStatusToDosError(-1073741811);
LABEL_30:
            UserSetLastError((struct _NT_TIB *)v13);
            return 0;
          }
          v10 = -1;
          break;
      }
      if ( v10 == -1 )
        goto LABEL_18;
LABEL_12:
      v11 = TouchMessageFromState(v10);
      if ( v9 != v11 )
      {
        if ( v9 == 1 )
        {
          v9 = v11;
        }
        else if ( v11 != 1 )
        {
          goto LABEL_18;
        }
      }
      v22 = *(_DWORD *)(v12 + 4);
      v14 = v22;
      for ( i = 40 * v22; ; i = v25 - 40 )
      {
        v25 = i;
        if ( !v14 )
          goto LABEL_28;
        v16 = (char *)(i + *(_DWORD *)(v26 + 8));
        if ( v21[2] >= *((_DWORD *)v16 - 8) && (v21[2] != *((_DWORD *)v16 - 8) || v21[3] >= *((_DWORD *)v16 - 7)) )
          break;
        qmemcpy(v16, v16 - 40, 0x28u);
        --v14;
      }
      v17 = *(_DWORD *)(v26 + 8);
      if ( v21[2] != *(_DWORD *)(40 * v14 + v17 - 32) || v21[3] != *(_DWORD *)(40 * v14 + v17 - 28) )
      {
LABEL_28:
        v18 = 40 * v14;
        v19 = v26;
        qmemcpy((void *)(*(_DWORD *)(v26 + 8) + v18), v21, 0x28u);
        *(_DWORD *)(v19 + 4) = v22 + 1;
        v8 = v24 - 1;
        v7 = v23 + 40;
        continue;
      }
      goto LABEL_18;
    }
    break;
  }
  if ( a4 )
    *(_DWORD *)a4 = v9;
  return 1;
}
