/*
 * XREFs of ?SetRedirectionBitmap@@YGHPAUtagWND@@QAUHBITMAP__@@H@Z @ 0x20C0E
 * Callers:
 *     _UnsetRedirectedWindow@8 @ 0x1BE12 (_UnsetRedirectedWindow@8.c)
 *     _SetRedirectedWindow@8 @ 0x1FBFA (_SetRedirectedWindow@8.c)
 *     _RecreateRedirectionBitmap@24 @ 0x23D22 (_RecreateRedirectionBitmap@24.c)
 *     ?RestoreOldRedirectionBitmap@@YGHPAUtagWND@@PAUHBITMAP__@@@Z @ 0x1534DB (-RestoreOldRedirectionBitmap@@YGHPAUtagWND@@PAUHBITMAP__@@@Z.c)
 *     _UserRecreateRedirectionBitmap@4 @ 0x1539FA (_UserRecreateRedirectionBitmap@4.c)
 * Callees:
 *     _GreAccNotifyWindow@8 @ 0x20D36 (_GreAccNotifyWindow@8.c)
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     _InternalSetProp@16 @ 0xB4FE8 (_InternalSetProp@16.c)
 *     _InternalRemoveProp@12 @ 0xB50F2 (_InternalRemoveProp@12.c)
 */

int __userpurge SetRedirectionBitmap@<eax>(int a1@<edx>, _DWORD *a2@<ecx>, struct tagWND *a3, HBITMAP a4, int a5)
{
  int v6; // ebx
  _DWORD *Prop; // esi
  int v9; // ebx
  _DWORD *v10; // eax
  _DWORD *v11; // eax
  _DWORD *v12; // esi
  int v14; // [esp+10h] [ebp-8h]

  v6 = 0;
  Prop = (_DWORD *)_GetProp(1);
  if ( !Prop && !a3 )
  {
    v10 = (_DWORD *)Win32AllocPoolZInit(32, 1919185493);
    Prop = v10;
    if ( v10 )
    {
      if ( !InternalSetProp(v10, 1) )
      {
        Win32FreePool(Prop);
        Prop = 0;
      }
    }
  }
  if ( !a1 )
  {
    if ( a3 )
    {
      v11 = (_DWORD *)InternalRemoveProp(1);
      v12 = v11;
      if ( v11 )
      {
        v9 = *v11;
        DeleteMaybeSpecialRgn(v11[7]);
        Win32FreePool(v12);
LABEL_11:
        if ( v9 )
          GreAccNotifyWindow(v9, 0);
      }
    }
    else if ( Prop )
    {
      v14 = *Prop;
      *Prop = 0;
      Prop[2] = 0;
      Prop[3] = 0;
      Prop[4] = 0;
      Prop[5] = 0;
      DeleteMaybeSpecialRgn(Prop[7]);
      Prop[7] = 0;
      v9 = v14;
      goto LABEL_11;
    }
    return 1;
  }
  if ( Prop )
  {
    DeleteMaybeSpecialRgn(Prop[7]);
    Prop[7] = 0;
    Prop[2] = 0;
    Prop[3] = 0;
    Prop[4] = 0;
    Prop[5] = 0;
    if ( *Prop != a1 )
    {
      GreAccNotifyWindow(*Prop, 0);
      GreAccNotifyWindow(a1, *a2);
      *Prop = a1;
    }
    return 1;
  }
  return v6;
}
