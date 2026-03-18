/*
 * XREFs of ?xxxFW_DestroyAllChildren@@YGXPAUtagWND@@@Z @ 0x716C8
 * Callers:
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _UnredirectDCEs@4 @ 0x1BEB2 (_UnredirectDCEs@4.c)
 *     _SetVisible@8 @ 0x1C9DC (_SetVisible@8.c)
 *     _GetStyleWindow@8 @ 0x387E8 (_GetStyleWindow@8.c)
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 *     _UnlinkWindow@8 @ 0x72E1E (_UnlinkWindow@8.c)
 *     _xxxSetModernAppWindow@8 @ 0xC6BDE (_xxxSetModernAppWindow@8.c)
 *     ?PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0xF0F76 (-PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 */

void __thiscall xxxFW_DestroyAllChildren(_DWORD *this)
{
  int v2; // edi
  struct tagWND *v3; // ecx
  _DWORD *v4; // eax
  struct tagWND **v5; // esi
  int StyleWindow; // eax
  int v7; // [esp+0h] [ebp-20h]
  struct tagINPUT_MESSAGE_SOURCE *v8; // [esp+4h] [ebp-1Ch]
  int v9; // [esp+10h] [ebp-10h] BYREF
  struct tagWND **v10; // [esp+14h] [ebp-Ch]
  int v11; // [esp+18h] [ebp-8h]
  struct tagWND *v12; // [esp+1Ch] [ebp-4h]

  v9 = 0;
  v10 = 0;
  v11 = 0;
  v2 = 0;
  v3 = (struct tagWND *)_gptiCurrent;
  v4 = (_DWORD *)this[2];
  v12 = (struct tagWND *)_gptiCurrent;
  if ( (v4[172] & 0x40000) == 0 || (_DWORD *)v4[199] != this || !v4[200] )
    goto LABEL_6;
  xxxSetModernAppWindow(this, 0);
  while ( 1 )
  {
    v3 = v12;
LABEL_6:
    v5 = (struct tagWND **)this[15];
    if ( !v5 )
      break;
    v9 = *((_DWORD *)v3 + 57);
    *((_DWORD *)v3 + 57) = &v9;
    v10 = v5;
    HMLockObject(v5);
    if ( (*((_BYTE *)v5[5] + 23) & 0x10) != 0 )
      SetVisible(v5, 0);
    StyleWindow = GetStyleWindow((int)v5, 2848);
    if ( StyleWindow && (struct tagWND **)StyleWindow != v5 )
      v2 = 1;
    UnlinkWindow(v5, this);
    if ( v2 )
      UnredirectDCEs(v5);
    SetOrClrWF(1, (int)v5, 0x480u, 1);
    SetOrClrWF(1, (int)v5, 0x380u, 1);
    if ( v5[2] == v12 )
    {
      xxxFreeWindow(v5);
      v2 = 0;
    }
    else
    {
      v2 = 0;
      PostEventMessageEx((struct tagTHREADINFO *)8, 0, 0, *v5, 0, 0, v7, v8);
      ThreadUnlock1();
    }
  }
}
