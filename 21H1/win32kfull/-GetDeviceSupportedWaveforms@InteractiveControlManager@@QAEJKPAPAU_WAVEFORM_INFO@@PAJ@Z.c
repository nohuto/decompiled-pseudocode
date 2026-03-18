/*
 * XREFs of ?GetDeviceSupportedWaveforms@InteractiveControlManager@@QAEJKPAPAU_WAVEFORM_INFO@@PAJ@Z @ 0x1ADDA6
 * Callers:
 *     _NtUserGetInteractiveCtrlSupportedWaveforms@12 @ 0x1632FE (_NtUserGetInteractiveCtrlSupportedWaveforms@12.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$03@@@Z @ 0x1AD82B (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@.c)
 */

int __thiscall InteractiveControlManager::GetDeviceSupportedWaveforms(
        InteractiveControlManager *this,
        unsigned int a2,
        struct _WAVEFORM_INFO **a3,
        int *a4)
{
  int v4; // esi
  InteractiveControlManager *v5; // eax
  struct _WAVEFORM_INFO *v6; // ebx
  int v7; // edi
  unsigned int v8; // edx
  int *v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // esi
  int v14; // [esp+10h] [ebp-10h] BYREF
  int v15; // [esp+14h] [ebp-Ch] BYREF
  int v16; // [esp+18h] [ebp-8h] BYREF
  int v17; // [esp+1Ch] [ebp-4h] BYREF

  v4 = 0;
  v5 = this;
  v6 = 0;
  v16 = (int)this;
  v7 = 0;
  if ( (unsigned int)dword_2662F8 > 4 )
  {
    v14 = a2;
    v15 = (int)"InteractiveControlManager::GetDeviceSupportedWaveforms entry";
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (int)&dword_2662F8,
      byte_256A8E,
      (int)this,
      (int)this,
      (const char **)&v15,
      (int)&v14);
    v5 = (InteractiveControlManager *)v16;
  }
  v8 = 0;
  v9 = (int *)((char *)v5 + 24);
  while ( 1 )
  {
    v10 = *v9;
    if ( *v9 )
    {
      v7 = 0;
      if ( a2 == *(_DWORD *)(v10 + 4) )
        break;
    }
    ++v8;
    ++v9;
    if ( v8 >= 5 )
      goto LABEL_11;
  }
  v11 = *(_DWORD *)(v10 + 304);
  if ( v11 )
  {
    v6 = *(struct _WAVEFORM_INFO **)(v11 + 44);
    v7 = *(_DWORD *)(v11 + 48);
  }
  v4 = 1;
LABEL_11:
  v12 = v4 != 0 ? 0 : -1073741667;
  if ( a3 )
    *a3 = v6;
  if ( a4 )
    *a4 = v7;
  if ( (unsigned int)dword_2662F8 > 4 )
  {
    v17 = v12;
    v16 = (int)"InteractiveControlManager::GetDeviceSupportedWaveforms exit";
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (int)&dword_2662F8,
      byte_256A55,
      (int)v9,
      (int)v9,
      (const char **)&v16,
      (int)&v17);
  }
  return v12;
}
