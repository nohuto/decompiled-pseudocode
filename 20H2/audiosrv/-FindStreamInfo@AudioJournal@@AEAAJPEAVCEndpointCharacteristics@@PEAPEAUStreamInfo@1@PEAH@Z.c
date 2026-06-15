/*
 * XREFs of ?FindStreamInfo@AudioJournal@@AEAAJPEAVCEndpointCharacteristics@@PEAPEAUStreamInfo@1@PEAH@Z @ 0x18001B8A0
 * Callers:
 *     ?StopStream@CVADServer@@UEAAJ_KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0002@@@Z @ 0x180017C70 (-StopStream@CVADServer@@UEAAJ_KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0002@@@Z.c)
 *     ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x1800192A0 (-Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PE.c)
 *     ?OnCreateStream@AudioJournal@@QEAAJJPEAVCEndpointCharacteristics@@@Z @ 0x1800F60E8 (-OnCreateStream@AudioJournal@@QEAAJJPEAVCEndpointCharacteristics@@@Z.c)
 *     ?OnStartStream@AudioJournal@@QEAAJJPEAVCEndpointCharacteristics@@@Z @ 0x1800F6228 (-OnStartStream@AudioJournal@@QEAAJJPEAVCEndpointCharacteristics@@@Z.c)
 *     ?OnStopStream@AudioJournal@@QEAAJJPEAVCEndpointCharacteristics@@N@Z @ 0x1800F6368 (-OnStopStream@AudioJournal@@QEAAJJPEAVCEndpointCharacteristics@@N@Z.c)
 * Callees:
 *     ?FormFactor@CEndpointCharacteristics@@QEAA?AW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@XZ @ 0x1800489D0 (-FormFactor@CEndpointCharacteristics@@QEAA-AW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x18007418F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall AudioJournal::FindStreamInfo(
        AudioJournal *this,
        struct CEndpointCharacteristics *a2,
        struct AudioJournal::StreamInfo **a3,
        int *a4)
{
  struct AudioJournal::StreamInfo *v5; // rax
  int v6; // esi
  int InstanceIdFromMMDeviceId; // ebx
  int v8; // r10d
  struct AudioJournal::StreamInfo *v9; // r11
  char *v10; // rcx
  char *v11; // r9
  int v12; // edx
  int v13; // r8d
  int i; // edx
  int v15; // r8d
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003 v16; // eax
  __int64 v17; // rbx
  unsigned __int64 v18; // rax
  void *Src; // [rsp+20h] [rbp-48h] BYREF
  LPVOID pv[5]; // [rsp+28h] [rbp-40h] BYREF
  char v22; // [rsp+50h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+30h]
  int v24; // [rsp+A0h] [rbp+38h] BYREF
  int v25; // [rsp+A4h] [rbp+3Ch]
  struct AudioJournal::StreamInfo *v26; // [rsp+A8h] [rbp+40h] BYREF
  struct AudioJournal::StreamInfo **v27; // [rsp+B0h] [rbp+48h] BYREF
  int *v28; // [rsp+B8h] [rbp+50h] BYREF

  v28 = a4;
  v27 = a3;
  v25 = HIDWORD(this);
  v26 = 0LL;
  v24 = 0;
  Src = 0LL;
  pv[1] = &v27;
  pv[2] = &v26;
  pv[3] = &v28;
  pv[4] = &v24;
  v22 = 1;
  if ( !a2 )
  {
    v9 = (struct AudioJournal::StreamInfo *)&unk_18019F420;
    v26 = (struct AudioJournal::StreamInfo *)&unk_18019F420;
LABEL_24:
    InstanceIdFromMMDeviceId = 0;
    goto LABEL_25;
  }
  if ( (*(unsigned int (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)a2 + 56LL))(a2) )
  {
    v5 = (struct AudioJournal::StreamInfo *)&unk_18019F290;
    v6 = 2;
  }
  else
  {
    v5 = (struct AudioJournal::StreamInfo *)&unk_18019F038;
    v6 = 3;
  }
  v26 = v5;
  Src = 0LL;
  pv[0] = 0LL;
  InstanceIdFromMMDeviceId = (*(__int64 (__fastcall **)(_QWORD, LPVOID *))(**((_QWORD **)a2 + 2) + 40LL))(
                               *((_QWORD *)a2 + 2),
                               pv);
  if ( InstanceIdFromMMDeviceId >= 0 )
    InstanceIdFromMMDeviceId = mmdDevGetInstanceIdFromMMDeviceId(pv[0], &Src);
  if ( pv[0] )
    CoTaskMemFree(pv[0]);
  if ( InstanceIdFromMMDeviceId >= 0 )
  {
    v24 = 0;
    v8 = 0;
    v9 = v26;
    while ( 1 )
    {
      v10 = (char *)v26 + 200 * v8;
      v11 = (char *)((_BYTE *)Src - v10);
      do
      {
        v12 = *(unsigned __int16 *)&v11[(_QWORD)v10];
        v13 = *(unsigned __int16 *)v10 - v12;
        if ( v13 )
          break;
        v10 += 2;
      }
      while ( v12 );
      if ( !v13 )
        goto LABEL_24;
      v24 = ++v8;
      if ( v8 >= v6 )
      {
        v24 = 0;
        for ( i = 0; i < v6; v24 = i )
        {
          v15 = i;
          if ( !*((_DWORD *)v26 + 50 * i + 37) )
            break;
          v15 = ++i;
        }
        if ( v15 >= v6 )
        {
          v24 = v6 - 1;
          *((_DWORD *)v26 + 50 * (unsigned int)v6 - 14) = 100;
          *((_WORD *)v26 + 100 * v24) = 0;
        }
        else
        {
          v16 = CEndpointCharacteristics::FormFactor(a2);
          *((_DWORD *)v26 + 50 * v24 + 36) = v16;
          v17 = -1LL;
          v18 = -1LL;
          do
            ++v18;
          while ( *((_WORD *)Src + v18) );
          if ( v18 >= 0x46 )
          {
            v17 = 70LL;
          }
          else
          {
            do
              ++v17;
            while ( *((_WORD *)Src + v17) );
          }
          memcpy_0((char *)v26 + 200 * v24, Src, 2 * v17);
          *((_WORD *)v26 + 100 * v24 + v17) = 0;
        }
        v9 = v26;
        goto LABEL_24;
      }
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xAA,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp",
    (const char *)(unsigned int)InstanceIdFromMMDeviceId,
    (int)Src);
  v9 = v26;
LABEL_25:
  *v27 = v9;
  *v28 = v24;
  if ( Src )
    CoTaskMemFree(Src);
  return (unsigned int)InstanceIdFromMMDeviceId;
}
