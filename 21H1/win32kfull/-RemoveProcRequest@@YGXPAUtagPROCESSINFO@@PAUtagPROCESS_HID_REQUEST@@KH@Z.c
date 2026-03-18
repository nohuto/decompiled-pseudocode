/*
 * XREFs of ?RemoveProcRequest@@YGXPAUtagPROCESSINFO@@PAUtagPROCESS_HID_REQUEST@@KH@Z @ 0x143E01
 * Callers:
 *     ?SetProcDeviceRequest@@YGHPAUtagPROCESSINFO@@PAUtagRAWINPUTDEVICE@@PAUtagPROCESS_HID_REQUEST@@KW4_REGISTER_RAW_INPUT_INTERNAL@@@Z @ 0xC9ACA (-SetProcDeviceRequest@@YGHPAUtagPROCESSINFO@@PAUtagRAWINPUTDEVICE@@PAUtagPROCESS_HID_REQUEST@@KW.c)
 * Callees:
 *     ?DerefIncludeRequest@@YGXPAUtagPROCESS_HID_REQUEST@@PAUtagPROCESS_HID_TABLE@@HH@Z @ 0xD2B5E (-DerefIncludeRequest@@YGXPAUtagPROCESS_HID_REQUEST@@PAUtagPROCESS_HID_TABLE@@HH@Z.c)
 *     ?DerefExcludeRequest@@YGXPAUtagPROCESS_HID_REQUEST@@HH@Z @ 0x143B43 (-DerefExcludeRequest@@YGXPAUtagPROCESS_HID_REQUEST@@HH@Z.c)
 *     ?DerefPageOnlyRequest@@YGXPAUtagPROCESS_HID_REQUEST@@PAUtagPROCESS_HID_TABLE@@H@Z @ 0x143B7C (-DerefPageOnlyRequest@@YGXPAUtagPROCESS_HID_REQUEST@@PAUtagPROCESS_HID_TABLE@@H@Z.c)
 */

void __userpurge RemoveProcRequest(
        _DWORD *a1@<edx>,
        int a2@<ecx>,
        struct tagPROCESSINFO *a3,
        struct tagPROCESS_HID_REQUEST *a4,
        unsigned int a5,
        int a6)
{
  int v8; // eax
  _DWORD *v9; // ecx
  struct tagPROCESS_HID_TABLE *v10; // [esp+0h] [ebp-8h]
  int v11; // [esp+4h] [ebp-4h]

  HMAssignmentUnlock(a1 + 5);
  if ( a3 == (struct tagPROCESSINFO *)1 )
  {
    DerefIncludeRequest(*(_DWORD *)(a2 + 472), (int)a1, a4, 0, (int)v10, v11);
  }
  else if ( a3 == (struct tagPROCESSINFO *)2 )
  {
    DerefPageOnlyRequest(*(_DWORD *)(a2 + 472), (int)a1, 0, v10, v11);
  }
  else if ( a3 == (struct tagPROCESSINFO *)3 )
  {
    DerefExcludeRequest((int)a4, (int)a1, 0, (int)v10, v11);
  }
  v8 = *a1;
  if ( *(_DWORD **)(*a1 + 4) != a1 || (v9 = (_DWORD *)a1[1], (_DWORD *)*v9 != a1) )
    __fastfail(3u);
  *v9 = v8;
  *(_DWORD *)(v8 + 4) = v9;
}
