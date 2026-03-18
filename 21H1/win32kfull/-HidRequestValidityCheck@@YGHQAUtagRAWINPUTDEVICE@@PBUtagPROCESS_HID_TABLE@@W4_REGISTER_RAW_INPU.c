/*
 * XREFs of ?HidRequestValidityCheck@@YGHQAUtagRAWINPUTDEVICE@@PBUtagPROCESS_HID_TABLE@@W4_REGISTER_RAW_INPUT_INTERNAL@@@Z @ 0xC999E
 * Callers:
 *     __RegisterRawInputDevices@12 @ 0xC9866 (__RegisterRawInputDevices@12.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?IsLegacyDevice@@YGHGG@Z @ 0xC9DAA (-IsLegacyDevice@@YGHGG@Z.c)
 */

int __fastcall HidRequestValidityCheck(int a1, int a2, int a3)
{
  int v5; // ebx
  int v6; // edx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  int v13; // ecx
  unsigned __int16 v14; // [esp+0h] [ebp-Ch]
  unsigned __int16 v15; // [esp+4h] [ebp-8h]

  v5 = 0;
  if ( a3 == 2 )
  {
    v6 = 1;
  }
  else
  {
    v6 = 0;
    if ( (*(_DWORD *)(a1 + 4) & 0xFFFFC0CE) != 0 )
      goto LABEL_31;
  }
  if ( !*(_WORD *)a1 )
    goto LABEL_29;
  if ( a2 && *(_WORD *)a1 == 1 && *(_WORD *)(a1 + 2) == 6 )
  {
    if ( (*(_BYTE *)(a1 + 4) & 1) != 0 )
    {
      if ( ((*(_DWORD *)(a2 + 52) & 0x800) != 0) != v6 )
        goto LABEL_29;
    }
    else if ( (*(_DWORD *)(a2 + 52) & 0x800) != 0 )
    {
      goto LABEL_29;
    }
  }
  if ( a3 != 1 )
  {
    v7 = *(_DWORD *)(a1 + 8);
    if ( v7 )
      v5 = ValidateHwnd(v7);
  }
  v8 = *(_DWORD *)(a1 + 4);
  if ( (v8 & 0x200) != 0 )
  {
    if ( *(_WORD *)a1 != 1 )
      goto LABEL_31;
    if ( *(_WORD *)(a1 + 2) == 2 )
    {
      if ( (v8 & 0xF0) != 0x30 || !v5 || *(_DWORD *)(*(_DWORD *)(v5 + 8) + 232) != PsGetCurrentProcessWin32Process() )
        goto LABEL_31;
    }
    else if ( *(_WORD *)(a1 + 2) != 6 )
    {
      goto LABEL_31;
    }
  }
  v9 = *(_DWORD *)(a1 + 4);
  if ( (v9 & 0x400) != 0 )
  {
    if ( *(_WORD *)a1 != 1 )
      goto LABEL_31;
    if ( *(_WORD *)(a1 + 2) != 6 )
      goto LABEL_31;
    v10 = *(_DWORD *)(a1 + 4) & 0xF0;
    if ( v10 != 48 )
      goto LABEL_31;
  }
  else
  {
    v10 = *(_DWORD *)(a1 + 4) & 0xF0;
  }
  if ( (v9 & 1) == 0 )
    goto LABEL_12;
  if ( v10 == 16 || v10 == 48 )
  {
LABEL_31:
    v13 = 1004;
    goto LABEL_30;
  }
  if ( *(_DWORD *)(a1 + 8) )
    goto LABEL_29;
LABEL_12:
  switch ( v10 )
  {
    case 0:
      v11 = *(_DWORD *)(a1 + 4) & 0x1100;
LABEL_14:
      if ( !*(_WORD *)(a1 + 2) )
        goto LABEL_29;
      if ( v10 == 16 )
      {
        if ( v11 || *(_DWORD *)(a1 + 8) )
          goto LABEL_29;
        return 1;
      }
      break;
    case 16:
      v11 = *(_DWORD *)(a1 + 4) & 0x1100;
      if ( v11 )
        goto LABEL_29;
      goto LABEL_14;
    case 32:
      if ( *(_WORD *)(a1 + 2) )
        goto LABEL_29;
      break;
    default:
      if ( v10 != 48 || !IsLegacyDevice(v14, v15) )
        goto LABEL_29;
      break;
  }
  if ( a3 == 1 || !*(_DWORD *)(a1 + 8) )
  {
    if ( !v5 )
      goto LABEL_20;
  }
  else if ( !v5 )
  {
    goto LABEL_29;
  }
  if ( *(_DWORD *)(*(_DWORD *)(v5 + 8) + 232) == PsGetCurrentProcessWin32Process() )
  {
LABEL_20:
    if ( (*(_DWORD *)(a1 + 4) & 0x1100) != 0 && !v5 && (a3 != 1 || !*(_DWORD *)(a1 + 8)) )
      goto LABEL_29;
    return 1;
  }
LABEL_29:
  v13 = 87;
LABEL_30:
  UserSetLastError((struct _NT_TIB *)v13);
  return 0;
}
