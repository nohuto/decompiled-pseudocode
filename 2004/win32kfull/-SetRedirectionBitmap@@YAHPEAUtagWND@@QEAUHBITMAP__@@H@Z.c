/*
 * XREFs of ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C0021474
 * Callers:
 *     SetRedirectedWindow @ 0x1C00210E8 (SetRedirectedWindow.c)
 *     UnsetRedirectedWindow @ 0x1C004F050 (UnsetRedirectedWindow.c)
 *     RecreateRedirectionBitmap @ 0x1C0051748 (RecreateRedirectionBitmap.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01E7E1C (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 *     UserRecreateRedirectionBitmap @ 0x1C01E8650 (UserRecreateRedirectionBitmap.c)
 * Callees:
 *     _GetProp @ 0x1C0022FD8 (_GetProp.c)
 *     InternalSetProp @ 0x1C002481C (InternalSetProp.c)
 *     GreAccNotifyWindow @ 0x1C002E2CC (GreAccNotifyWindow.c)
 */

__int64 __fastcall SetRedirectionBitmap(struct tagWND *a1, HBITMAP a2, int a3)
{
  unsigned int v5; // ebx
  __int64 Prop; // rdi
  __int64 v8; // rsi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // rdi

  v5 = 0;
  Prop = GetProp(a1, (unsigned __int16)atomLayer, 1LL);
  if ( !Prop && !a3 )
  {
    v10 = Win32AllocPoolZInit(48LL, 1919185493LL);
    Prop = v10;
    if ( v10 )
    {
      if ( !(unsigned int)InternalSetProp(a1, (unsigned __int16)atomLayer, v10, 1LL) )
      {
        Win32FreePool(Prop);
        Prop = 0LL;
      }
    }
  }
  if ( a2 )
  {
    if ( !Prop )
      return v5;
    DeleteMaybeSpecialRgn(*(_QWORD *)(Prop + 40));
    *(_QWORD *)(Prop + 40) = 0LL;
    *(_OWORD *)(Prop + 16) = 0LL;
    if ( *(HBITMAP *)Prop != a2 )
    {
      GreAccNotifyWindow(*(_QWORD *)Prop, 0LL);
      GreAccNotifyWindow(a2, *(_QWORD *)a1);
      *(_QWORD *)Prop = a2;
    }
  }
  else
  {
    if ( a3 )
    {
      v11 = (unsigned __int16)atomLayer;
      v12 = *((_QWORD *)a1 + 18);
      if ( atomLayer == word_1C033AF24 )
        *(_QWORD *)(*((_QWORD *)a1 + 5) + 312LL) = 0LL;
      v13 = (_QWORD *)RealInternalRemoveProp(v12, v11, 1LL);
      v14 = v13;
      if ( !v13 )
        return 1;
      v8 = *v13;
      DeleteMaybeSpecialRgn(v13[5]);
      Win32FreePool(v14);
      goto LABEL_6;
    }
    if ( Prop )
    {
      v8 = *(_QWORD *)Prop;
      *(_QWORD *)Prop = 0LL;
      *(_OWORD *)(Prop + 16) = 0LL;
      DeleteMaybeSpecialRgn(*(_QWORD *)(Prop + 40));
      *(_QWORD *)(Prop + 40) = 0LL;
LABEL_6:
      if ( v8 )
        GreAccNotifyWindow(v8, 0LL);
    }
  }
  return 1;
}
