/*
 * XREFs of _xxxGetComboBoxInfo@8 @ 0x1A6E35
 * Callers:
 *     _NtUserGetComboBoxInfo@8 @ 0x1625B6 (_NtUserGetComboBoxInfo@8.c)
 * Callees:
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _unsafe_cast_fnid_or_class_to_PCOMBOWND@4 @ 0x14375E (_unsafe_cast_fnid_or_class_to_PCOMBOWND@4.c)
 *     _unsafe_cast_fnid_or_class_to_PLBWND_COMBOLISTBOX@4 @ 0x1437B8 (_unsafe_cast_fnid_or_class_to_PLBWND_COMBOLISTBOX@4.c)
 */

int __fastcall xxxGetComboBoxInfo(_DWORD *a1, _DWORD *a2)
{
  int v3; // ebx
  int ***v4; // esi
  int v5; // eax
  int CurrentProcessWin32Process; // eax
  PRKPROCESS *v8; // ecx
  int **v9; // edx
  int v10; // eax
  int *v11; // ecx
  int v12; // esi
  int *v13; // ecx
  int v14; // eax
  int *v15; // ecx
  _DWORD v16[15]; // [esp+10h] [ebp-60h] BYREF
  int v17; // [esp+4Ch] [ebp-24h]
  int v18; // [esp+50h] [ebp-20h]
  _DWORD *v19; // [esp+54h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+58h] [ebp-18h]

  v19 = a2;
  v3 = 0;
  v18 = 0;
  v16[0] = 52;
  memset(&v16[1], 0, 0x30u);
  v16[14] = 0;
  v4 = (int ***)unsafe_cast_fnid_or_class_to_PCOMBOWND(a1);
  if ( v4 )
  {
    v5 = 0;
  }
  else
  {
    v5 = unsafe_cast_fnid_or_class_to_PLBWND_COMBOLISTBOX(a1);
    v18 = v5;
  }
  if ( !v4 && !v5 )
    return xxxSendMessage(a1, 0, (int)v19);
  if ( *v19 != 52 )
  {
    UserSetLastError((struct _NT_TIB *)0x57);
    return 0;
  }
  v17 = *(_DWORD *)(a1[2] + 232);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  v8 = (PRKPROCESS *)v17;
  if ( v17 == CurrentProcessWin32Process )
  {
    v17 = 0;
  }
  else
  {
    v17 = 1;
    KeAttachProcess(*v8);
  }
  ms_exc.registration.TryLevel = 0;
  if ( v4 )
  {
    v9 = *v4;
  }
  else
  {
    if ( !*(_DWORD *)v18 )
      goto LABEL_15;
    v9 = *(int ***)(*(_DWORD *)v18 + 116);
  }
  if ( v9 )
  {
    v10 = 0;
    if ( *v9 )
      v10 = **v9;
    v16[10] = v10;
    v11 = v9[14];
    v12 = 0;
    if ( v11 )
      v12 = *v11;
    v16[11] = *a1 != v12 ? v12 : 0;
    v13 = v9[15];
    v14 = 0;
    if ( v13 )
      v14 = *v13;
    v16[12] = v14;
    v16[1] = v9[2];
    v16[2] = v9[3];
    v16[3] = v9[4];
    v16[4] = v9[5];
    v16[5] = v9[6];
    v16[6] = v9[7];
    v16[7] = v9[8];
    v16[8] = v9[9];
    v16[9] = 0;
    v15 = v9[16];
    if ( ((unsigned __int8)v15 & 3) == 1 )
    {
      v3 = 0x8000;
      v16[9] = 0x8000;
    }
    if ( ((unsigned __int8)v15 & 0x20) != 0 )
      v16[9] = v3 | 8;
    ms_exc.registration.TryLevel = -2;
    qmemcpy(v19, v16, 0x34u);
    v3 = 1;
    goto LABEL_29;
  }
LABEL_15:
  ms_exc.registration.TryLevel = -2;
LABEL_29:
  if ( v17 )
    KeDetachProcess();
  return v3;
}
