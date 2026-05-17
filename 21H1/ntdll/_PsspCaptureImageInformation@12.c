/*
 * XREFs of _PsspCaptureImageInformation@12 @ 0x4B3875C8
 * Callers:
 *     PsspCaptureVaSpaceInformation2 @ 0x4B3876A6 (PsspCaptureVaSpaceInformation2.c)
 * Callees:
 *     _NtReadVirtualMemory@20 @ 0x4B2F2D70 (_NtReadVirtualMemory@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

int __fastcall PsspCaptureImageInformation(_DWORD *a1, int a2, int a3)
{
  int result; // eax
  int v6; // eax
  _DWORD v7[6]; // [esp+10h] [ebp-144h] BYREF
  __int16 v8; // [esp+28h] [ebp-12Ch]
  int v9; // [esp+40h] [ebp-114h]
  int v10; // [esp+44h] [ebp-110h]
  int v11; // [esp+60h] [ebp-F4h]
  int v12; // [esp+68h] [ebp-ECh]
  _WORD v13[30]; // [esp+108h] [ebp-4Ch] BYREF
  int v14; // [esp+144h] [ebp-10h]

  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  result = NtReadVirtualMemory(a2, a3, (int)v13, 64, 0);
  if ( result >= 0 )
  {
    if ( v13[0] != 23117 )
      return -1073741521;
    result = NtReadVirtualMemory(a2, a3 + v14, (int)v7, 248, 0);
    if ( result >= 0 )
    {
      if ( v7[0] == 17744 )
      {
        if ( v8 == 267 )
        {
          v6 = v10;
          goto LABEL_10;
        }
        if ( v8 == 523 )
        {
          v6 = v9;
LABEL_10:
          a1[2] = v6;
          *a1 = v7[2];
          a1[1] = v11;
          a1[3] = v12;
          return 0;
        }
      }
      return -1073741701;
    }
  }
  return result;
}
