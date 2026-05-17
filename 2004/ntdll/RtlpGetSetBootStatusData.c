/*
 * XREFs of RtlpGetSetBootStatusData @ 0x1800EE1A4
 * Callers:
 *     RtlGetSetBootStatusData @ 0x1800EDC70 (RtlGetSetBootStatusData.c)
 * Callees:
 *     NtReadFile @ 0x18009CED0 (NtReadFile.c)
 *     NtWriteFile @ 0x18009CF10 (NtWriteFile.c)
 *     RtlBootStatusItemInfo @ 0x1800ED90C (RtlBootStatusItemInfo.c)
 *     RtlpRecordBootStatusData @ 0x1800EE2D4 (RtlpRecordBootStatusData.c)
 */

__int64 __fastcall RtlpGetSetBootStatusData(
        __int64 a1,
        char a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        _DWORD *a6)
{
  __int64 result; // rax
  __int64 v10; // rdi
  int File; // ebx
  int v12; // eax
  __int64 v13; // rcx
  _DWORD v14[2]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v15; // [rsp+58h] [rbp-18h] BYREF
  int v16; // [rsp+68h] [rbp-8h]

  v15 = 0LL;
  result = NtReadFile();
  if ( (int)result >= 0 )
  {
    result = RtlBootStatusItemInfo(a3, &v15, v14);
    if ( (int)result >= 0 )
    {
      HIDWORD(v15) = 0;
      v10 = v14[0];
      if ( v14[0] + (unsigned __int64)(unsigned int)v15 <= v14[1] )
      {
        if ( a5 >= v14[0] )
        {
          if ( a2 )
          {
            File = NtReadFile();
          }
          else
          {
            v12 = NtWriteFile();
            LOBYTE(v13) = 1;
            File = v12;
            RtlpRecordBootStatusData(v13, a4, v15, v10);
          }
          if ( File >= 0 )
          {
            if ( a6 )
              *a6 = v16;
          }
          return (unsigned int)File;
        }
        else
        {
          return 3221225507LL;
        }
      }
      else
      {
        return 3221225561LL;
      }
    }
  }
  return result;
}
