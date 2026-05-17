/*
 * XREFs of _RtlpGetSetBootStatusData@24 @ 0x4B350EC6
 * Callers:
 *     _RtlGetSetBootStatusData@24 @ 0x4B350A70 (_RtlGetSetBootStatusData@24.c)
 * Callees:
 *     _NtReadFile@36 @ 0x4B2F29C0 (_NtReadFile@36.c)
 *     _NtWriteFile@36 @ 0x4B2F29E0 (_NtWriteFile@36.c)
 *     _RtlBootStatusItemInfo@12 @ 0x4B3507A8 (_RtlBootStatusItemInfo@12.c)
 *     _RtlpRecordBootStatusData@16 @ 0x4B350F8B (_RtlpRecordBootStatusData@16.c)
 */

int __fastcall RtlpGetSetBootStatusData(int a1, char a2, unsigned int a3, int a4, unsigned int a5, _DWORD *a6)
{
  int result; // eax
  unsigned int v9; // edi
  int File; // esi
  _BYTE v11[4]; // [esp+Ch] [ebp-18h] BYREF
  int v12; // [esp+10h] [ebp-14h]
  unsigned int v13; // [esp+14h] [ebp-10h] BYREF
  int v14; // [esp+18h] [ebp-Ch]
  unsigned int v15; // [esp+1Ch] [ebp-8h] BYREF
  unsigned int v16; // [esp+20h] [ebp-4h] BYREF

  v13 = 0;
  v14 = 0;
  result = NtReadFile(a1, 0, 0, 0, (int)v11, (int)&v15, 4, (int)&v13, 0);
  if ( result >= 0 )
  {
    result = RtlBootStatusItemInfo(a3, &v13, &v16);
    if ( result >= 0 )
    {
      v9 = v16;
      v14 = 0;
      if ( v13 + (unsigned __int64)v16 <= v15 )
      {
        if ( a5 >= v16 )
        {
          if ( a2 )
          {
            File = NtReadFile(a1, 0, 0, 0, (int)v11, a4, v16, (int)&v13, 0);
          }
          else
          {
            File = NtWriteFile(a1, 0, 0, 0, (int)v11, a4, v16, (int)&v13, 0);
            RtlpRecordBootStatusData(v13, v9);
          }
          if ( File >= 0 )
          {
            if ( a6 )
              *a6 = v12;
          }
          return File;
        }
        else
        {
          return -1073741789;
        }
      }
      else
      {
        return -1073741735;
      }
    }
  }
  return result;
}
