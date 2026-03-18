/*
 * XREFs of _FreeHidProcessRequest@12 @ 0xD2AF8
 * Callers:
 *     _DestroyThreadHidObjects@4 @ 0xA52E4 (_DestroyThreadHidObjects@4.c)
 *     __RegisterRawInputDevices@12 @ 0xC9866 (__RegisterRawInputDevices@12.c)
 *     _FreeProcessHidTable@4 @ 0xD2C18 (_FreeProcessHidTable@4.c)
 * Callees:
 *     ?IsLegacyDevice@@YGHGG@Z @ 0xC9DAA (-IsLegacyDevice@@YGHGG@Z.c)
 *     ?DerefIncludeRequest@@YGXPAUtagPROCESS_HID_REQUEST@@PAUtagPROCESS_HID_TABLE@@HH@Z @ 0xD2B5E (-DerefIncludeRequest@@YGXPAUtagPROCESS_HID_REQUEST@@PAUtagPROCESS_HID_TABLE@@HH@Z.c)
 *     ?DerefExcludeRequest@@YGXPAUtagPROCESS_HID_REQUEST@@HH@Z @ 0x143B43 (-DerefExcludeRequest@@YGXPAUtagPROCESS_HID_REQUEST@@HH@Z.c)
 *     ?DerefPageOnlyRequest@@YGXPAUtagPROCESS_HID_REQUEST@@PAUtagPROCESS_HID_TABLE@@H@Z @ 0x143B7C (-DerefPageOnlyRequest@@YGXPAUtagPROCESS_HID_REQUEST@@PAUtagPROCESS_HID_TABLE@@H@Z.c)
 */

int __fastcall FreeHidProcessRequest(int *a1, int a2, int a3)
{
  struct tagPROCESS_HID_REQUEST *v5; // ebx
  int *v6; // eax
  int **v7; // ecx
  struct tagPROCESS_HID_TABLE *v9; // [esp+0h] [ebp-Ch]
  int v10; // [esp+4h] [ebp-8h]

  v5 = (struct tagPROCESS_HID_REQUEST *)IsLegacyDevice(*((_WORD *)a1 + 4), *((_WORD *)a1 + 5));
  HMAssignmentUnlock(a1 + 5);
  a1[6] = 0;
  switch ( a2 )
  {
    case 1:
      DerefIncludeRequest(v5, (struct tagPROCESS_HID_TABLE *)1, (int)v9, v10);
      break;
    case 2:
      DerefPageOnlyRequest((struct tagPROCESS_HID_REQUEST *)1, v9, v10);
      break;
    case 3:
      DerefExcludeRequest((struct tagPROCESS_HID_REQUEST *)1, (int)v9, v10);
      break;
  }
  v6 = (int *)*a1;
  if ( *(int **)(*a1 + 4) != a1 || (v7 = (int **)a1[1], *v7 != a1) )
    __fastfail(3u);
  *v7 = v6;
  v6[1] = (int)v7;
  return Win32FreePool(a1);
}
