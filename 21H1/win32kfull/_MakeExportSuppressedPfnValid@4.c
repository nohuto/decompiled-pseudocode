/*
 * XREFs of _MakeExportSuppressedPfnValid@4 @ 0x148AE
 * Callers:
 *     ?xxxGetEventProc@@YGP6GXPAUHWINEVENTHOOK__@@KPAUHWND__@@JJKK@ZPAUtagEVENTHOOK@@@Z @ 0x147EA (-xxxGetEventProc@@YGP6GXPAUHWINEVENTHOOK__@@KPAUHWND__@@JJKK@ZPAUtagEVENTHOOK@@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall MakeExportSuppressedPfnValid(int a1)
{
  NTSTATUS result; // eax
  _DWORD v3[9]; // [esp+8h] [ebp-40h] BYREF
  _DWORD v4[2]; // [esp+2Ch] [ebp-1Ch] BYREF
  _DWORD v5[2]; // [esp+34h] [ebp-14h] BYREF
  int ProcessInformation; // [esp+3Ch] [ebp-Ch] BYREF
  int v7; // [esp+40h] [ebp-8h]
  int v8; // [esp+44h] [ebp-4h] BYREF

  ProcessInformation = 7;
  v7 = 0;
  v3[5] = 0;
  v8 = 0;
  result = ZwQueryInformationProcess((HANDLE)0xFFFFFFFF, ProcessCookie|ProcessUserModeIOPL, &ProcessInformation, 8u, 0);
  if ( result >= 0 && (v7 & 2) != 0 )
  {
    v4[1] = 4096;
    v5[1] = 4;
    v4[0] = a1 & 0xFFFFF000;
    v3[1] = 0;
    v3[2] = &v8;
    v3[0] = 1;
    v3[3] = v5;
    v5[0] = a1 & 0xFFF;
    v3[4] = 0;
    v3[6] = 0;
    v3[7] = 0;
    return ZwSetInformationVirtualMemory(-1, 2, 1, v4, v3, 32);
  }
  return result;
}
