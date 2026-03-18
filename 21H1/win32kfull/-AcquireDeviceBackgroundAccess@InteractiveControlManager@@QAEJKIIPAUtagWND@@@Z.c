/*
 * XREFs of ?AcquireDeviceBackgroundAccess@InteractiveControlManager@@QAEJKIIPAUtagWND@@@Z @ 0xD6454
 * Callers:
 *     _NtUserAcquireInteractiveControlBackgroundAccess@12 @ 0xD63AE (_NtUserAcquireInteractiveControlBackgroundAccess@12.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$03@@@Z @ 0x1AD82B (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$03@@444@Z @ 0x1AD944 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6GJPBU_tlgPr.c)
 *     ?SetBackgroundAccessor@InteractiveControlDevice@@QAEXPAUtagWND@@I@Z @ 0x1B26CF (-SetBackgroundAccessor@InteractiveControlDevice@@QAEXPAUtagWND@@I@Z.c)
 */

int __fastcall InteractiveControlManager::AcquireDeviceBackgroundAccess(
        InteractiveControlManager *this,
        int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        struct tagWND *a6)
{
  unsigned int v6; // ebx
  unsigned int v8; // esi
  int v9; // eax
  struct tagWND **v10; // ebx
  struct tagWND *v11; // ecx
  int v13; // [esp+10h] [ebp-18h] BYREF
  unsigned int v14; // [esp+14h] [ebp-14h] BYREF
  int v15; // [esp+18h] [ebp-10h] BYREF
  int v16; // [esp+1Ch] [ebp-Ch] BYREF
  const char *v17; // [esp+20h] [ebp-8h] BYREF
  InteractiveControlManager *v18; // [esp+24h] [ebp-4h]

  v6 = a4;
  v8 = 0;
  v18 = this;
  if ( (unsigned int)dword_2662F8 > 4 )
  {
    v13 = (int)a6;
    v14 = a5;
    v16 = a3;
    v15 = a4;
    v17 = "InteractiveControlManager::AcquireDeviceBackgroundAccess entry";
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      this,
      this,
      &v17,
      &v16,
      &v15,
      &v14,
      &v13);
  }
  while ( v6 <= a5 )
    v8 |= 1 << (v6++ + 24);
  v9 = 5;
  v10 = (struct tagWND **)((char *)this + 24);
  v13 = 5;
  do
  {
    v11 = *v10;
    if ( *v10 && (!a3 || a3 == *((_DWORD *)v11 + 1)) )
    {
      InteractiveControlDevice::SetBackgroundAccessor(v11, a6, v8);
      v9 = v13;
    }
    ++v10;
    v13 = --v9;
  }
  while ( v9 );
  if ( !a3 )
  {
    v11 = a6;
    if ( a6 == *((struct tagWND **)v18 + 2) )
    {
      *((_DWORD *)v18 + 3) |= v8;
    }
    else
    {
      *((_DWORD *)v18 + 3) = v8;
      HMAssignmentLock(a6, a2);
    }
  }
  if ( (unsigned int)dword_2662F8 > 4 )
  {
    v16 = 0;
    v15 = (int)"InteractiveControlManager::AcquireDeviceBackgroundAccess exit";
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (int)&dword_2662F8,
      (int)&unk_256A55,
      (int)v11,
      (int)v11,
      (int)&v15,
      (int)&v16);
  }
  return 0;
}
