/*
 * XREFs of _PsspCaptureImageInformation@12 @ 0x4B3875C8
 * Callers:
 *     PsspCaptureVaSpaceInformation2 @ 0x4B3876A6 (PsspCaptureVaSpaceInformation2.c)
 * Callees:
 *     _NtReadVirtualMemory@20 @ 0x4B2F2D70 (_NtReadVirtualMemory@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall PsspCaptureImageInformation(_DWORD *a1, void *a2, char *BaseAddress)
{
  NTSTATUS result; // eax
  int v6; // eax
  ULONG_PTR *v7; // [esp+0h] [ebp-154h]
  ULONG_PTR *v8; // [esp+0h] [ebp-154h]
  _DWORD v9[6]; // [esp+10h] [ebp-144h] BYREF
  __int16 v10; // [esp+28h] [ebp-12Ch]
  int v11; // [esp+40h] [ebp-114h]
  int v12; // [esp+44h] [ebp-110h]
  int v13; // [esp+60h] [ebp-F4h]
  int v14; // [esp+68h] [ebp-ECh]
  _WORD Buffer[30]; // [esp+108h] [ebp-4Ch] BYREF
  int v16; // [esp+144h] [ebp-10h]

  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  result = NtReadVirtualMemory(a2, BaseAddress, Buffer, 0x40uLL, v7);
  if ( result >= 0 )
  {
    if ( Buffer[0] != 23117 )
      return -1073741521;
    result = NtReadVirtualMemory(a2, &BaseAddress[v16], v9, 0xF8uLL, v8);
    if ( result >= 0 )
    {
      if ( v9[0] == 17744 )
      {
        if ( v10 == 267 )
        {
          v6 = v12;
          goto LABEL_10;
        }
        if ( v10 == 523 )
        {
          v6 = v11;
LABEL_10:
          a1[2] = v6;
          *a1 = v9[2];
          a1[1] = v13;
          a1[3] = v14;
          return 0;
        }
      }
      return -1073741701;
    }
  }
  return result;
}
