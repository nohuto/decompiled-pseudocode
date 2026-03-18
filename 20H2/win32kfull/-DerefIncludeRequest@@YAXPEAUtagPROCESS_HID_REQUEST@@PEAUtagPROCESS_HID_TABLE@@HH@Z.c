/*
 * XREFs of ?DerefIncludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@HH@Z @ 0x1C0100218
 * Callers:
 *     FreeHidProcessRequest @ 0x1C00FEFBC (FreeHidProcessRequest.c)
 *     ?RemoveProcRequest@@YAXPEAUtagPROCESSINFO@@PEAUtagPROCESS_HID_REQUEST@@KH@Z @ 0x1C01D49DC (-RemoveProcRequest@@YAXPEAUtagPROCESSINFO@@PEAUtagPROCESS_HID_REQUEST@@KH@Z.c)
 * Callees:
 *     FreeHidTLCInfo @ 0x1C01D4E70 (FreeHidTLCInfo.c)
 */

void __fastcall DerefIncludeRequest(struct tagPROCESS_HID_REQUEST *a1, struct tagPROCESS_HID_TABLE *a2, int a3, int a4)
{
  int v7; // eax
  int v8; // eax
  __int64 v9; // rax
  bool v10; // zf

  if ( a3 )
  {
    v7 = *((_DWORD *)a2 + 25);
    if ( (v7 & 0x100) != 0 && *((_WORD *)a1 + 8) == 1 && *((_WORD *)a1 + 9) == 2 )
    {
      v7 &= ~0x100u;
      *((_DWORD *)a2 + 25) = v7;
    }
    if ( (v7 & 0x200) != 0 && *((_WORD *)a1 + 8) == 1 && *((_WORD *)a1 + 9) == 6 )
    {
      v7 &= ~0x200u;
      *((_DWORD *)a2 + 25) = v7;
    }
    if ( (v7 & 0x400) != 0 && *((_WORD *)a1 + 8) == 1 && *((_WORD *)a1 + 9) == 6 )
    {
      v7 &= ~0x400u;
      *((_DWORD *)a2 + 25) = v7;
    }
    if ( (v7 & 0x800) != 0 && *((_WORD *)a1 + 8) == 1 && *((_WORD *)a1 + 9) == 6 )
      *((_DWORD *)a2 + 25) = v7 & 0xFFFFF7FF;
  }
  else
  {
    v9 = *((_QWORD *)a1 + 3);
    v10 = (*(_DWORD *)(v9 + 24))-- == 1;
    if ( v10
      && a4
      && !(*(_DWORD *)(*((_QWORD *)a1 + 3) + 20LL) | *(_DWORD *)(*((_QWORD *)a1 + 3) + 24LL) | *(_DWORD *)(*((_QWORD *)a1 + 3) + 32LL) | *(_DWORD *)(*((_QWORD *)a1 + 3) + 36LL)) )
    {
      FreeHidTLCInfo();
    }
  }
  v8 = *((_DWORD *)a1 + 5);
  if ( (v8 & 1) != 0 )
  {
    *((_DWORD *)a1 + 5) = v8 & 0xFFFFFFFE;
    if ( !a3 )
    {
      --*((_DWORD *)a2 + 20);
      --gHidCounters[2];
    }
  }
}
