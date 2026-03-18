/*
 * XREFs of ?GetFlickMap@@YGHPAUtagFLICK_MAP@@@Z @ 0x9CC9E
 * Callers:
 *     _ReadPointerDeviceSettingsFull@8 @ 0xF3780 (_ReadPointerDeviceSettingsFull@8.c)
 * Callees:
 *     ?AssignFlickActions@@YGXPAUtagFLICK_MAP@@@Z @ 0x9CE76 (-AssignFlickActions@@YGXPAUtagFLICK_MAP@@@Z.c)
 *     ?IsRealFlickId@@YGHU_GUID@@@Z @ 0x9CEDC (-IsRealFlickId@@YGHU_GUID@@@Z.c)
 *     ?ReadPointerDeviceCfgStringSetting@@YGJPAXPBGPAGK@Z @ 0x9CF2E (-ReadPointerDeviceCfgStringSetting@@YGJPAXPBGPAGK@Z.c)
 *     ?OpenDeviceCfgKey@@YGJKPAGKPAPAXH@Z @ 0x9CFD8 (-OpenDeviceCfgKey@@YGJKPAGKPAPAXH@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

BOOL __thiscall GetFlickMap(char *this)
{
  NTSTATUS PointerDeviceCfgStringSetting; // ebx
  int v3; // eax
  int v4; // ecx
  _DWORD *v5; // eax
  unsigned int *v6; // esi
  struct _GUID *v7; // edi
  GUID *v8; // esi
  unsigned int *v9; // edi
  void **v10; // [esp+0h] [ebp-188h]
  int v11; // [esp+4h] [ebp-184h]
  unsigned int v12; // [esp+4h] [ebp-184h]
  int v13; // [esp+10h] [ebp-178h]
  int v14; // [esp+14h] [ebp-174h]
  int v15; // [esp+18h] [ebp-170h]
  int v16; // [esp+1Ch] [ebp-16Ch]
  struct _UNICODE_STRING DestinationString; // [esp+20h] [ebp-168h] BYREF
  char *v18; // [esp+28h] [ebp-160h]
  GUID *v19; // [esp+2Ch] [ebp-15Ch]
  unsigned int v20; // [esp+30h] [ebp-158h]
  HANDLE Handle; // [esp+34h] [ebp-154h] BYREF
  GUID **v22; // [esp+38h] [ebp-150h]
  unsigned int *v23; // [esp+3Ch] [ebp-14Ch]
  _DWORD v24[15]; // [esp+44h] [ebp-144h] BYREF
  WCHAR SourceString[130]; // [esp+80h] [ebp-108h] BYREF

  Handle = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  v18 = this;
  if ( gFlickMapMonitor )
    goto LABEL_2;
  v24[0] = this;
  v24[2] = this + 16;
  v24[4] = this + 32;
  v24[6] = this + 48;
  v24[8] = this + 64;
  v24[10] = this + 80;
  v24[12] = this + 96;
  v24[14] = this + 112;
  v3 = RIMIsDefaultUILanguageRTL();
  v4 = dword_26600C;
  if ( v3 != dword_26600C )
  {
    v13 = dword_26637C[0];
    v14 = dword_26637C[1];
    v15 = dword_26637C[2];
    v16 = dword_26637C[3];
    dword_26637C[0] = dword_2663CC[0];
    dword_26637C[1] = dword_2663CC[1];
    dword_26637C[2] = dword_2663CC[2];
    dword_26637C[3] = dword_2663CC[3];
    dword_2663CC[0] = v13;
    dword_26600C = v4 == 0;
    dword_2663CC[1] = v14;
    dword_2663CC[2] = v15;
    dword_2663CC[3] = v16;
  }
  PointerDeviceCfgStringSetting = OpenDeviceCfgKey(0x20019u, (unsigned __int16 *)&Handle, 0, v10, v11);
  if ( PointerDeviceCfgStringSetting >= 0 )
  {
    v20 = 0;
    v5 = v24;
    v6 = dword_26637C;
    v22 = (GUID **)v24;
    v23 = dword_26637C;
    while ( PointerDeviceCfgStringSetting >= 0 )
    {
      *(v5 - 1) = SourceString;
      PointerDeviceCfgStringSetting = ReadPointerDeviceCfgStringSetting(
                                        SourceString,
                                        (const unsigned __int16 *)0x7D,
                                        (unsigned __int16 *)v10,
                                        v12);
      if ( PointerDeviceCfgStringSetting >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, SourceString);
        v19 = *v22;
        v7 = v19;
        PointerDeviceCfgStringSetting = RtlGUIDFromString(&DestinationString, v19);
        if ( PointerDeviceCfgStringSetting >= 0 )
        {
          if ( IsRealFlickId(*v7) )
          {
            v8 = v19;
            v9 = v23;
            *v23 = v19->Data1;
            v8 = (GUID *)((char *)v8 + 4);
            *++v9 = v8->Data1;
            *(_QWORD *)(v9 + 1) = *(_QWORD *)&v8->Data2;
          }
          v6 = v23;
        }
      }
      v6 += 5;
      v5 = v22 + 2;
      v20 += 20;
      v22 += 2;
      v23 = v6;
      if ( v20 >= 0xA0 )
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
    AssignFlickActions((struct tagFLICK_MAP *)v10);
  }
  return PointerDeviceCfgStringSetting >= 0;
}
