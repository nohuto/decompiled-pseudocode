/*
 * XREFs of ?AddError@AudioJournal@@AEAAXJPEAUErrorInfo@1@@Z @ 0x1800F5DC4
 * Callers:
 *     ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x1800192A0 (-Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PE.c)
 *     ?OnCreateStream@AudioJournal@@QEAAJJPEAVCEndpointCharacteristics@@@Z @ 0x1800F60E8 (-OnCreateStream@AudioJournal@@QEAAJJPEAVCEndpointCharacteristics@@@Z.c)
 *     ?OnStartStream@AudioJournal@@QEAAJJPEAVCEndpointCharacteristics@@@Z @ 0x1800F6228 (-OnStartStream@AudioJournal@@QEAAJJPEAVCEndpointCharacteristics@@@Z.c)
 *     ?OnStopStream@AudioJournal@@QEAAJJPEAVCEndpointCharacteristics@@N@Z @ 0x1800F6368 (-OnStopStream@AudioJournal@@QEAAJJPEAVCEndpointCharacteristics@@N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall AudioJournal::AddError(AudioJournal *this, int a2, struct AudioJournal::ErrorInfo *a3)
{
  int v3; // eax
  struct AudioJournal::ErrorInfo *i; // rcx

  v3 = 0;
  for ( i = a3; *(_DWORD *)i != a2; i = (struct AudioJournal::ErrorInfo *)((char *)i + 8) )
  {
    if ( !*(_DWORD *)i )
    {
      *((_DWORD *)a3 + 2 * v3) = a2;
      *((_DWORD *)a3 + 2 * v3 + 1) = 1;
      return;
    }
    if ( ++v3 >= 3 )
      return;
  }
  ++*((_DWORD *)a3 + 2 * v3 + 1);
}
