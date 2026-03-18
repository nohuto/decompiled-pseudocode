/*
 * XREFs of ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C0090CAC
 * Callers:
 *     SetRedirectedWindow @ 0x1C009100C (SetRedirectedWindow.c)
 *     UnsetRedirectedWindow @ 0x1C00C11EC (UnsetRedirectedWindow.c)
 *     RecreateRedirectionBitmap @ 0x1C00F9CD8 (RecreateRedirectionBitmap.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01E715C (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 *     UserRecreateRedirectionBitmap @ 0x1C01E7990 (UserRecreateRedirectionBitmap.c)
 * Callees:
 *     GreAccNotifyWindow @ 0x1C000E198 (GreAccNotifyWindow.c)
 *     _GetProp @ 0x1C004C9B4 (_GetProp.c)
 *     InternalSetProp @ 0x1C00C7238 (InternalSetProp.c)
 */

__int64 __fastcall SetRedirectionBitmap(void **a1, HBITMAP a2, int a3)
{
  unsigned int v5; // ebx
  __int64 Prop; // rdi
  __int64 v8; // rsi
  __int64 v10; // rax
  __int64 v11; // rdx
  void *v12; // rcx
  __int64 *v13; // rax
  __int64 *v14; // rdi

  v5 = 0;
  Prop = GetProp((__int64)a1, (unsigned __int16)atomLayer, 1LL);
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
      GreAccNotifyWindow((__int64)a2, *a1);
      *(_QWORD *)Prop = a2;
    }
  }
  else
  {
    if ( a3 )
    {
      v11 = (unsigned __int16)atomLayer;
      v12 = a1[18];
      if ( atomLayer == word_1C0339F54 )
        *((_QWORD *)a1[5] + 39) = 0LL;
      v13 = (__int64 *)RealInternalRemoveProp(v12, v11, 1LL);
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
