/*
 * XREFs of ?xxxTabletButtonExecuteAction@@YGXPAUtagTABLET_BUTTON_ACTION@@HPAU_devicemodeW@@@Z @ 0x147505
 * Callers:
 *     ?TabletButtonHandler@@YGXPAUDEVICEINFO@@@Z @ 0x147169 (-TabletButtonHandler@@YGXPAUDEVICEINFO@@@Z.c)
 *     ?xxxTabletButtonTimerCallback@@YGXPAUtagWND@@IIJ@Z @ 0x14757D (-xxxTabletButtonTimerCallback@@YGXPAUtagWND@@IIJ@Z.c)
 * Callees:
 *     ?TabletAdjustBrightness@@YGXH@Z @ 0x147066 (-TabletAdjustBrightness@@YGXH@Z.c)
 *     ?xxxTabletSetDisplayOrientation@@YGXJPAU_devicemodeW@@@Z @ 0x147613 (-xxxTabletSetDisplayOrientation@@YGXJPAU_devicemodeW@@@Z.c)
 */

void __userpurge xxxTabletButtonExecuteAction(
        int a1@<edx>,
        int *a2@<ecx>,
        struct tagTABLET_BUTTON_ACTION *a3,
        int a4,
        struct _devicemodeW *a5)
{
  int *v5; // edi
  int v6; // edi
  int v7; // ecx
  int v8; // [esp+0h] [ebp-10h]
  struct _devicemodeW *v9; // [esp+4h] [ebp-Ch]

  v5 = a2 + 2;
  if ( !a1 )
    v5 = a2;
  v6 = *v5;
  if ( v6 == -2147483636 )
  {
    v7 = 1;
    goto LABEL_7;
  }
  if ( v6 == -2147483635 )
  {
    v7 = 0;
LABEL_7:
    TabletAdjustBrightness((void *)v7);
  }
  if ( (PVOID)_grpdeskRitInput == grpdeskLogon && (v6 == -2147483642 || v6 == -2147483637) )
    xxxTabletSetDisplayOrientation(v8, v9);
}
