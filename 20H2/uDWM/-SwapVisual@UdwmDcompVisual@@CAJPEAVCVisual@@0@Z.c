/*
 * XREFs of ?SwapVisual@UdwmDcompVisual@@CAJPEAVCVisual@@0@Z @ 0x1800BA7D0
 * Callers:
 *     ?ReinitializeDComp@UdwmDcompVisual@@AEAAJXZ @ 0x1800BA4E0 (-ReinitializeDComp@UdwmDcompVisual@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006658 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017394 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x1800242F0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18003B070 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?IsVisible@CVisual@@QEBA_NXZ @ 0x1800943D8 (-IsVisible@CVisual@@QEBA_NXZ.c)
 */

__int64 __fastcall UdwmDcompVisual::SwapVisual(struct CVisual *a1, struct CVisual *a2)
{
  __int64 v2; // rax
  VisualCollection *v5; // rsi
  int inserted; // ebx
  __int64 v7; // rdx
  volatile signed __int32 *v9; // rbx
  int v10; // eax
  unsigned int v11; // esi
  bool IsVisible; // al
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = *((_QWORD *)a1 + 3);
  if ( v2 )
  {
    v5 = (VisualCollection *)(v2 + 32);
    inserted = VisualCollection::InsertRelative((VisualCollection *)(v2 + 32), a2, a1, 0, 1);
    if ( inserted >= 0 )
    {
      inserted = VisualCollection::Remove(v5, a1);
      if ( inserted >= 0 )
        goto LABEL_13;
      v7 = 455LL;
    }
    else
    {
      v7 = 454LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"clientcore\\windows\\dwm\\udwm\\udwmdcompvisual.cpp",
      (const char *)(unsigned int)inserted);
    return (unsigned int)inserted;
  }
  else
  {
    while ( 1 )
    {
LABEL_13:
      if ( !*((_DWORD *)a1 + 18) )
        return 0LL;
      v9 = (volatile signed __int32 *)**((_QWORD **)a1 + 6);
      if ( v9 )
        _InterlockedIncrement(v9 + 2);
      v10 = VisualCollection::Remove((struct CVisual *)((char *)a1 + 32), (struct CVisual *)v9);
      v11 = v10;
      if ( v10 < 0 )
        break;
      IsVisible = CVisual::IsVisible((CVisual *)v9);
      v10 = VisualCollection::InsertRelative(
              (struct CVisual *)((char *)a2 + 32),
              (struct CVisual *)v9,
              0LL,
              0,
              IsVisible);
      v11 = v10;
      if ( v10 < 0 )
      {
        v13 = 463LL;
        goto LABEL_17;
      }
      if ( v9 )
        CBaseObject::Release((CBaseObject *)v9);
    }
    v13 = 462LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"clientcore\\windows\\dwm\\udwm\\udwmdcompvisual.cpp",
      (const char *)(unsigned int)v10);
    if ( v9 )
      CBaseObject::Release((CBaseObject *)v9);
    return v11;
  }
}
