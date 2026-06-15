/*
 * XREFs of sub_180014660 @ 0x180014660
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800050D0 @ 0x1800050D0 (sub_1800050D0.c)
 *     sub_180022FD8 @ 0x180022FD8 (sub_180022FD8.c)
 */

__int64 __fastcall sub_180014660(_DWORD *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // ebx
  _DWORD pvData[6]; // [rsp+40h] [rbp-18h] BYREF
  DWORD pcbData; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  if ( qword_18004FE70 )
  {
    v3 = sub_180022FD8(a1, a1 - 4, a2, a3);
    if ( v3 && !a3 )
    {
      v3 = 1;
      if ( !a1[109] && !a1[121] && !a1[122] )
      {
        pcbData = 4;
        if ( RegGetValueW(
               HKEY_LOCAL_MACHINE,
               L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
               L"AllowClassicOffload",
               0x18u,
               0LL,
               pvData,
               &pcbData)
          || !pvData[0] )
        {
          return 0;
        }
      }
    }
  }
  else if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
         && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
         && *((_BYTE *)off_18004F000 + 25) >= 3u )
  {
    sub_1800050D0(*((_QWORD *)off_18004F000 + 2), 0x29u, &stru_180043390);
  }
  return v3;
}
