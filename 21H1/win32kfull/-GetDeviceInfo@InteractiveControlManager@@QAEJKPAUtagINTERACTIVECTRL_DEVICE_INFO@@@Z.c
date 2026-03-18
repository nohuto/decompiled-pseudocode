/*
 * XREFs of ?GetDeviceInfo@InteractiveControlManager@@QAEJKPAUtagINTERACTIVECTRL_DEVICE_INFO@@@Z @ 0x1ADC2F
 * Callers:
 *     _NtUserGetInteractiveControlDeviceInfo@8 @ 0x163102 (_NtUserGetInteractiveControlDeviceInfo@8.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$03@@@Z @ 0x1AD82B (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@.c)
 *     ?FindDevice@InteractiveControlManager@@AAEJKPAXPAPAVInteractiveControlDevice@@PAK@Z @ 0x1ADBE0 (-FindDevice@InteractiveControlManager@@AAEJKPAXPAPAVInteractiveControlDevice@@PAK@Z.c)
 */

int __thiscall InteractiveControlManager::GetDeviceInfo(
        InteractiveControlManager *this,
        unsigned int a2,
        struct tagINTERACTIVECTRL_DEVICE_INFO *a3)
{
  int Device; // eax
  struct InteractiveControlDevice *v5; // ecx
  int v6; // ebx
  int v7; // edx
  int v8; // eax
  int v9; // eax
  int v10; // edx
  _DWORD *v11; // esi
  int v12; // edx
  int v13; // eax
  struct InteractiveControlDevice *v15; // [esp+10h] [ebp-18h] BYREF
  int v16; // [esp+14h] [ebp-14h] BYREF
  int v17[2]; // [esp+18h] [ebp-10h] BYREF
  int v18; // [esp+20h] [ebp-8h] BYREF
  int v19; // [esp+24h] [ebp-4h]

  v15 = 0;
  v18 = 0;
  v19 = 0;
  if ( (unsigned int)dword_2662F8 > 4 )
  {
    v16 = a2;
    v17[0] = (int)"InteractiveControlManager::GetDeviceInfo entry";
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (int)&dword_2662F8,
      byte_256A8E,
      (int)this,
      (int)this,
      (const char **)v17,
      (int)&v16);
  }
  Device = InteractiveControlManager::FindDevice(this, a2, 0, &v15, 0);
  v6 = Device;
  if ( Device >= 0 )
  {
    v5 = v15;
    *(_DWORD *)a3 = *((_DWORD *)v15 + 1);
    *((_DWORD *)a3 + 5) = *((_DWORD *)v5 + 32);
    *((_DWORD *)a3 + 6) = *((_DWORD *)v5 + 30);
    v7 = *((_DWORD *)v5 + 76);
    v8 = 1;
    if ( v7 )
      v8 = *(_DWORD *)(v7 + 40);
    *((_DWORD *)a3 + 8) = v8;
    v9 = 0;
    v10 = *((_DWORD *)v5 + 76);
    if ( v10 )
      v9 = *(_DWORD *)(v10 + 48);
    *((_DWORD *)a3 + 9) = v9;
    v11 = (_DWORD *)((char *)v5 + 164);
    v12 = *((_DWORD *)v5 + 47);
    if ( v12 )
    {
      v17[0] = *((_DWORD *)v5 + 43) - *v11;
      v17[1] = *((_DWORD *)v5 + 44) - *((_DWORD *)v5 + 42);
      RIMTransformDimensionFromDigitizer(v12, 0, v17, &v18);
      *((_DWORD *)a3 + 3) = v18;
      v13 = v19;
      *((_DWORD *)a3 + 1) = 0;
      *((_DWORD *)a3 + 2) = 0;
      *((_DWORD *)a3 + 4) = v13;
    }
    else
    {
      *((_DWORD *)a3 + 1) = *v11;
      *((_DWORD *)a3 + 2) = *((_DWORD *)v5 + 42);
      *((_DWORD *)a3 + 3) = *((_DWORD *)v5 + 43);
      *((_DWORD *)a3 + 4) = *((_DWORD *)v5 + 44);
    }
  }
  else if ( (unsigned int)dword_2662F8 > 2 )
  {
    v17[0] = Device;
    v16 = (int)"Function failed.";
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (int)&dword_2662F8,
      byte_256AC8,
      (int)v5,
      (int)v5,
      (const char **)&v16,
      (int)v17);
  }
  if ( (unsigned int)dword_2662F8 > 4 )
  {
    v17[0] = v6;
    v16 = (int)"InteractiveControlManager::GetDeviceInfo exit";
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (int)&dword_2662F8,
      byte_256A55,
      (int)v5,
      (int)v5,
      (const char **)&v16,
      (int)v17);
  }
  return v6;
}
