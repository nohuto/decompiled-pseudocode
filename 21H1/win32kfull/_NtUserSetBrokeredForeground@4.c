/*
 * XREFs of _NtUserSetBrokeredForeground@4 @ 0xE7570
 * Callers:
 *     <none>
 * Callees:
 *     _IsWindowBeingDestroyed@4 @ 0x1F28E (_IsWindowBeingDestroyed@4.c)
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     __IsTopLevelWindow@4 @ 0x38178 (__IsTopLevelWindow@4.c)
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _IsMessageOnlyWindow@4 @ 0xADBD2 (_IsMessageOnlyWindow@4.c)
 *     _InternalSetProp@16 @ 0xB4FE8 (_InternalSetProp@16.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall NtUserSetBrokeredForeground(int a1)
{
  int v1; // ebx
  _DWORD *v2; // eax
  _DWORD *v3; // esi
  int v4; // eax
  int v5; // eax
  int v7; // [esp-4h] [ebp-18h]
  _BYTE v8[8]; // [esp+Ch] [ebp-8h] BYREF

  v1 = 0;
  EnterCrit(0, 1);
  _gbValidateHandleForIL = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v8);
  if ( !a1 )
    goto LABEL_14;
  v2 = (_DWORD *)ValidateHwnd(a1);
  v3 = v2;
  if ( !v2
    || !_IsTopLevelWindow(v2)
    || v3[16]
    || IsWindowBeingDestroyed(v3)
    || (*(_BYTE *)(v3[5] + 23) & 0x10) != 0
    || IsMessageOnlyWindow((int)v3)
    || _GetProp((int)v3, (unsigned __int16)WPP_MAIN_CB.DeviceQueue.Type, 1) )
  {
    goto LABEL_14;
  }
  v4 = *(_DWORD *)(v3[5] + 148);
  if ( v4 != 14 && v4 != 4 )
  {
    UserSetLastError((struct _NT_TIB *)5);
LABEL_14:
    v7 = 87;
LABEL_15:
    UserSetLastError((struct _NT_TIB *)v7);
    goto LABEL_13;
  }
  v5 = IsImmersiveBroker(*(_DWORD *)(_gptiCurrent + 232));
  v7 = 5;
  if ( !v5 || _gptiCurrent != v3[2] )
    goto LABEL_15;
  v1 = InternalSetProp((int)v3, (unsigned __int16)WPP_MAIN_CB.DeviceQueue.Type, _gptiCurrent, 5);
LABEL_13:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v8);
  UserSessionSwitchLeaveCrit();
  return v1;
}
