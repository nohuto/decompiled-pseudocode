/*
 * XREFs of ?DerefPageOnlyRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@H@Z @ 0x1C0006D10
 * Callers:
 *     FreeHidProcessRequest @ 0x1C00FEFBC (FreeHidProcessRequest.c)
 *     ?RemoveProcRequest@@YAXPEAUtagPROCESSINFO@@PEAUtagPROCESS_HID_REQUEST@@KH@Z @ 0x1C01D49DC (-RemoveProcRequest@@YAXPEAUtagPROCESSINFO@@PEAUtagPROCESS_HID_REQUEST@@KH@Z.c)
 * Callees:
 *     ?SetHidPOCountToTLCInfo@@YAXGKH@Z @ 0x1C0006DB0 (-SetHidPOCountToTLCInfo@@YAXGKH@Z.c)
 */

void __fastcall DerefPageOnlyRequest(struct tagPROCESS_HID_REQUEST *a1, struct tagPROCESS_HID_TABLE *a2, int a3)
{
  __int64 *v6; // rcx
  __int64 *v7; // rdx
  __int64 **v8; // rax
  int v9; // eax

  SetHidPOCountToTLCInfo(*((_WORD *)a1 + 8), --*(_DWORD *)(*((_QWORD *)a1 + 3) + 20LL), a3);
  v6 = (__int64 *)*((_QWORD *)a1 + 3);
  if ( !*((_DWORD *)v6 + 5) && a3 )
  {
    v7 = (__int64 *)*v6;
    if ( *(__int64 **)(*v6 + 8) != v6 || (v8 = (__int64 **)v6[1], *v8 != v6) )
      __fastfail(3u);
    *v8 = v7;
    v7[1] = (__int64)v8;
    Win32FreePool(v6);
    *((_QWORD *)a1 + 3) = 0LL;
  }
  v9 = *((_DWORD *)a1 + 5);
  if ( (v9 & 1) != 0 )
  {
    *((_DWORD *)a1 + 5) = v9 & 0xFFFFFFFE;
    --*((_DWORD *)a2 + 20);
    --gHidCounters[2];
  }
}
