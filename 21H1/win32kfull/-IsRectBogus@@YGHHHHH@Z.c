/*
 * XREFs of ?IsRectBogus@@YGHHHHH@Z @ 0x13F8E6
 * Callers:
 *     ?FixBogusSWP@@YGXPAUtagWND@@PAH1HHI@Z @ 0x13F7B7 (-FixBogusSWP@@YGXPAUtagWND@@PAH1HHI@Z.c)
 * Callees:
 *     _GetMonitorWorkRect@4 @ 0xB498E (_GetMonitorWorkRect@4.c)
 *     _GetMonitorRect@4 @ 0xB49BE (_GetMonitorRect@4.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?TestRectBogus@@YGHUtagRECT@@HHHH@Z @ 0x13FB22 (-TestRectBogus@@YGHUtagRECT@@HHHH@Z.c)
 */

int __userpurge IsRectBogus@<eax>(int a1@<ecx>, __int64 a2, int a3, int a4)
{
  _DWORD *MonitorWorkRect; // eax
  _DWORD *MonitorRect; // eax
  int result; // eax
  struct tagRECT v7; // [esp-18h] [ebp-68h]
  struct tagRECT v8; // [esp-18h] [ebp-68h]
  int v9; // [esp+0h] [ebp-50h]
  int v10; // [esp+0h] [ebp-50h]
  int v11; // [esp+4h] [ebp-4Ch]
  int v12; // [esp+4h] [ebp-4Ch]
  int v13[4]; // [esp+10h] [ebp-40h] BYREF
  int v14[5]; // [esp+20h] [ebp-30h] BYREF
  __int64 v15; // [esp+34h] [ebp-1Ch]
  int v16; // [esp+3Ch] [ebp-14h]
  int v17; // [esp+40h] [ebp-10h]
  void *v18; // [esp+44h] [ebp-Ch]
  int v19; // [esp+48h] [ebp-8h]

  v19 = a1;
  v18 = *(void **)(GetDispInfo() + 52);
  MonitorWorkRect = GetMonitorWorkRect(v18, v14);
  v15 = *(_QWORD *)MonitorWorkRect;
  v16 = MonitorWorkRect[2];
  v17 = MonitorWorkRect[3];
  *(_QWORD *)&v7.left = a2;
  *(_QWORD *)&v7.right = v15;
  if ( TestRectBogus(v7, v16, v17, v9, v11) )
    return 1;
  MonitorRect = GetMonitorRect(v18, v13);
  v15 = *(_QWORD *)MonitorRect;
  v16 = MonitorRect[2];
  v17 = MonitorRect[3];
  *(_QWORD *)&v8.left = a2;
  *(_QWORD *)&v8.right = v15;
  result = TestRectBogus(v8, v16, v17, v10, v12);
  if ( result )
    return 1;
  return result;
}
