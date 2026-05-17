/*
 * XREFs of _EtwpProcessNotification@20 @ 0x4B2AE63A
 * Callers:
 *     _EtwDeliverDataBlock@4 @ 0x4B2AE4B0 (_EtwDeliverDataBlock@4.c)
 * Callees:
 *     _EtwpUpdateEnableInfoAndCallback@8 @ 0x4B2B0D5F (_EtwpUpdateEnableInfoAndCallback@8.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _EtwProcessPrivateLoggerRequest@4 @ 0x4B2EFF20 (_EtwProcessPrivateLoggerRequest@4.c)
 */

char __fastcall EtwpProcessNotification(int a1, int a2, _QWORD *a3, int *a4, _BYTE *a5)
{
  char v7; // dl
  __int16 v8; // si
  __int16 v9; // si
  int v10; // eax
  int v12; // ecx
  int (__thiscall *v13)(_DWORD, int, int); // esi
  __int16 v14; // si
  int v15; // eax
  int v16; // [esp-4h] [ebp-10h]

  v7 = 0;
  v8 = *(_WORD *)(a1 + 54);
  if ( *(_DWORD *)a2 == 3 )
  {
    v9 = v8 & 0x3FFF;
    if ( v9 != 3 && v9 != 2 )
      return v7;
    if ( *(__int16 *)(a2 + 78) < 0 && PrivateLoggerNotificationEntry )
      v10 = *(_DWORD *)(PrivateLoggerNotificationEntry + 48);
    else
      v10 = *(_DWORD *)(a1 + 48);
    *a3 = v10;
    *(_QWORD *)(a2 + 24) = v10;
    EtwpUpdateEnableInfoAndCallback(a1, a2);
    goto LABEL_6;
  }
  if ( *(_DWORD *)a2 == 4 )
  {
    v14 = v8 & 0x3FFF;
    if ( v14 == 3 || v14 == 2 )
    {
      *a3 = *(int *)(a1 + 48);
      v15 = EtwProcessPrivateLoggerRequest((void *)a2);
      v7 = 1;
      *a4 = v15;
      *a5 = 1;
    }
  }
  else
  {
    if ( (v8 & 0x3FFF) == *(_DWORD *)a2 )
    {
      v12 = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(a2 + 24) = *(int *)(a1 + 48);
      v16 = *(_DWORD *)(a1 + 32);
      v13 = *(int (__thiscall **)(_DWORD, int, int))(a1 + 28);
      *a3 = v12;
      *a4 = v13(v13, a2, v16);
LABEL_6:
      *a5 = 1;
      return 0;
    }
    if ( (v8 & 0x3FFF) == 0xA && *(_DWORD *)a2 == 7 && *(void **)(a2 + 36) == NtCurrentTeb()->ClientId.UniqueProcess )
    {
      *a4 = (*(int (__thiscall **)(_DWORD, int, _DWORD))(a1 + 28))(*(_DWORD *)(a1 + 28), a2, *(_DWORD *)(a1 + 32));
      *a5 = 1;
      return 0;
    }
  }
  return v7;
}
