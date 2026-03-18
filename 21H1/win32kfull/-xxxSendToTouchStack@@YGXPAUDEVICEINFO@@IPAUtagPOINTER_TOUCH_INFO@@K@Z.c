/*
 * XREFs of ?xxxSendToTouchStack@@YGXPAUDEVICEINFO@@IPAUtagPOINTER_TOUCH_INFO@@K@Z @ 0x149ACB
 * Callers:
 *     ?xxxSendLastFrameTouchUp@@YGXPAUtagINJECTED_CONTACT@@PAUDEVICEINFO@@IK@Z @ 0x1499B8 (-xxxSendLastFrameTouchUp@@YGXPAUtagINJECTED_CONTACT@@PAUDEVICEINFO@@IK@Z.c)
 *     _xxxInjectTouchInput@8 @ 0x14A084 (_xxxInjectTouchInput@8.c)
 * Callees:
 *     _CreateTouchInputBuffer@20 @ 0x14B172 (_CreateTouchInputBuffer@20.c)
 */

void __userpurge xxxSendToTouchStack(
        unsigned int a1@<edx>,
        _DWORD *a2@<ecx>,
        struct DEVICEINFO *a3,
        unsigned int a4,
        struct tagPOINTER_TOUCH_INFO *a5,
        unsigned int a6)
{
  unsigned int v8; // ecx
  int v9; // eax
  int v10; // esi
  int CurrentProcessWin32Process; // eax
  unsigned int v12; // [esp+Ch] [ebp-4h]

  v8 = 0;
  v12 = 0;
  v9 = a2[69];
  a2[38] = 0;
  for ( a2[39] = *(unsigned __int16 *)(v9 + 24); v8 < a1; v12 = v8 )
  {
    CreateTouchInputBuffer((int)a3, v8, v8 == 0 ? a4 : 0);
    v10 = *(_DWORD *)(*(_DWORD *)(PsGetCurrentProcessWin32Process() + 508) + 80);
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
    RIMInjectInput(
      v10,
      *(_DWORD *)(*(_DWORD *)(CurrentProcessWin32Process + 508) + 84),
      0,
      *(_DWORD *)(a2[69] + 12),
      *(unsigned __int16 *)(a2[69] + 24));
    v8 = v12 + 4;
  }
}
