/*
 * XREFs of ?DerefPageOnlyRequest@@YGXPAUtagPROCESS_HID_REQUEST@@PAUtagPROCESS_HID_TABLE@@H@Z @ 0x143B7C
 * Callers:
 *     _FreeHidProcessRequest@12 @ 0xD2AF8 (_FreeHidProcessRequest@12.c)
 *     ?RemoveProcRequest@@YGXPAUtagPROCESSINFO@@PAUtagPROCESS_HID_REQUEST@@KH@Z @ 0x143E01 (-RemoveProcRequest@@YGXPAUtagPROCESSINFO@@PAUtagPROCESS_HID_REQUEST@@KH@Z.c)
 * Callees:
 *     ?SetHidPOCountToTLCInfo@@YGXGKH@Z @ 0x143E91 (-SetHidPOCountToTLCInfo@@YGXGKH@Z.c)
 */

void __userpurge DerefPageOnlyRequest(
        int a1@<edx>,
        int a2@<ecx>,
        struct tagPROCESS_HID_REQUEST *a3,
        struct tagPROCESS_HID_TABLE *a4,
        int a5)
{
  _DWORD *v7; // eax
  int v8; // edx
  _DWORD *v9; // ecx
  int v10; // eax
  unsigned int v11; // [esp+0h] [ebp-8h]
  int v12; // [esp+4h] [ebp-4h]

  --*(_DWORD *)(*(_DWORD *)(a2 + 16) + 12);
  SetHidPOCountToTLCInfo((unsigned __int16)a3, v11, v12);
  v7 = *(_DWORD **)(a2 + 16);
  if ( !v7[3] && a3 )
  {
    v8 = *v7;
    if ( *(_DWORD **)(*v7 + 4) != v7 || (v9 = (_DWORD *)v7[1], (_DWORD *)*v9 != v7) )
      __fastfail(3u);
    *v9 = v8;
    *(_DWORD *)(v8 + 4) = v9;
    Win32FreePool(v7);
    *(_DWORD *)(a2 + 16) = 0;
  }
  v10 = *(_DWORD *)(a2 + 12);
  if ( (v10 & 1) != 0 )
  {
    *(_DWORD *)(a2 + 12) = v10 & 0xFFFFFFFE;
    --*(_DWORD *)(a1 + 40);
    --_gHidCounters[2];
  }
}
