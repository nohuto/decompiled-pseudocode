/*
 * XREFs of ?GetFlickMap@@YAHPEAUtagFLICK_MAP@@@Z @ 0x1C002F6B8
 * Callers:
 *     ReadPointerDeviceSettingsFull @ 0x1C00330A4 (ReadPointerDeviceSettingsFull.c)
 * Callees:
 *     ?OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z @ 0x1C007AB20 (-OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z.c)
 *     ?ReadPointerDeviceCfgStringSetting@@YAJPEAXPEBGPEAGK@Z @ 0x1C0122F98 (-ReadPointerDeviceCfgStringSetting@@YAJPEAXPEBGPEAGK@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

_BOOL8 __fastcall GetFlickMap(struct tagFLICK_MAP *a1)
{
  unsigned int v1; // r15d
  NTSTATUS PointerDeviceCfgStringSetting; // ebx
  __int128 *v5; // rsi
  GUID **v6; // r14
  const WCHAR *v7; // rdx
  HANDLE v8; // rcx
  GUID *v9; // r12
  __int128 v10; // xmm1
  __int64 v11; // rcx
  __int128 v12; // xmm0
  HANDLE Handle; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  GUID v15; // [rsp+50h] [rbp-B0h]
  __int128 v16; // [rsp+60h] [rbp-A0h]
  _QWORD v17[15]; // [rsp+78h] [rbp-88h] BYREF
  WCHAR SourceString[128]; // [rsp+F0h] [rbp-10h] BYREF

  Handle = 0LL;
  v1 = 0;
  DestinationString = 0LL;
  if ( gFlickMapMonitor )
    goto LABEL_2;
  v17[0] = a1;
  v17[2] = (char *)a1 + 16;
  v17[4] = (char *)a1 + 32;
  v17[6] = (char *)a1 + 48;
  v17[8] = (char *)a1 + 64;
  v17[10] = (char *)a1 + 80;
  v17[12] = (char *)a1 + 96;
  v17[14] = (char *)a1 + 112;
  if ( (unsigned int)RIMIsDefaultUILanguageRTL() != dword_1C032A024 )
  {
    v12 = xmmword_1C032A738;
    xmmword_1C032A738 = xmmword_1C032A6D8;
    dword_1C032A024 = dword_1C032A024 == 0;
    xmmword_1C032A6D8 = v12;
  }
  PointerDeviceCfgStringSetting = OpenDeviceCfgKey(
                                    0x7Cu,
                                    L"\\Software\\Microsoft\\Wisp\\Pen\\SysEventParameters\\FlickCommands",
                                    0x20019u,
                                    &Handle,
                                    0);
  if ( PointerDeviceCfgStringSetting >= 0 )
  {
    v5 = &xmmword_1C032A6D8;
    v6 = (GUID **)v17;
    while ( PointerDeviceCfgStringSetting >= 0 )
    {
      v7 = (const WCHAR *)*((_QWORD *)v5 - 1);
      v8 = Handle;
      *(v6 - 1) = (GUID *)SourceString;
      PointerDeviceCfgStringSetting = ReadPointerDeviceCfgStringSetting(v8, v7, SourceString, 0x7Du);
      if ( PointerDeviceCfgStringSetting >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, SourceString);
        v9 = *v6;
        PointerDeviceCfgStringSetting = RtlGUIDFromString(&DestinationString, *v6);
        if ( PointerDeviceCfgStringSetting >= 0 )
        {
          v10 = (__int128)*v9;
          v15 = *v9;
          v16 = 0LL;
          v11 = -*(_QWORD *)&v15.Data1;
          if ( !*(_QWORD *)&v15.Data1 )
            v11 = *((_QWORD *)&v16 + 1) - *(_QWORD *)v15.Data4;
          if ( v11 )
            *v5 = v10;
        }
      }
      ++v1;
      v6 += 2;
      v5 = (__int128 *)((char *)v5 + 24);
      if ( v1 >= 8 )
      {
        if ( PointerDeviceCfgStringSetting >= 0 )
          gFlickMapMonitor = 1;
        break;
      }
    }
    ZwClose(Handle);
  }
  if ( gFlickMapMonitor )
  {
LABEL_2:
    PointerDeviceCfgStringSetting = 0;
    *(_OWORD *)a1 = xmmword_1C032A6D8;
    *((_OWORD *)a1 + 1) = xmmword_1C032A6F0;
    *((_OWORD *)a1 + 2) = xmmword_1C032A708;
    *((_OWORD *)a1 + 3) = xmmword_1C032A720;
    *((_OWORD *)a1 + 4) = xmmword_1C032A738;
    *((_OWORD *)a1 + 5) = xmmword_1C032A750;
    *((_OWORD *)a1 + 6) = xmmword_1C032A768;
    *((_OWORD *)a1 + 7) = xmmword_1C032A780;
  }
  return PointerDeviceCfgStringSetting >= 0;
}
