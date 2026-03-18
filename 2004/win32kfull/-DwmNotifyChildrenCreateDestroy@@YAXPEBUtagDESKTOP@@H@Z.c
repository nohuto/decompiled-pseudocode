/*
 * XREFs of ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C000E8BC
 * Callers:
 *     DwmNotifyChildrenAddRemove @ 0x1C000E464 (DwmNotifyChildrenAddRemove.c)
 * Callees:
 *     IsMotherDesktopWindow @ 0x1C000EB48 (IsMotherDesktopWindow.c)
 *     DwmAsyncChildCreate @ 0x1C000EB74 (DwmAsyncChildCreate.c)
 *     DwmGetClassStyle @ 0x1C000ECB8 (DwmGetClassStyle.c)
 *     DwmAsyncChildDestroy @ 0x1C000ED30 (DwmAsyncChildDestroy.c)
 *     IsDesktopWindow @ 0x1C0020E80 (IsDesktopWindow.c)
 *     IsMessageParentWindow @ 0x1C0020EE0 (IsMessageParentWindow.c)
 *     DwmAsyncTextChange @ 0x1C002A50C (DwmAsyncTextChange.c)
 *     SendDwmIconChange @ 0x1C002A5A0 (SendDwmIconChange.c)
 *     _GetWindowCompositionInfo @ 0x1C006D108 (_GetWindowCompositionInfo.c)
 *     _IsTopLevelWindow @ 0x1C006EA50 (_IsTopLevelWindow.c)
 *     _GetDesktopWindow @ 0x1C006F290 (_GetDesktopWindow.c)
 *     DwmChildRectChange @ 0x1C00A5C78 (DwmChildRectChange.c)
 */

void __fastcall DwmNotifyChildrenCreateDestroy(const struct tagDESKTOP *a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rdi
  _QWORD *v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rcx
  unsigned int ProcessId; // eax
  __int64 v9; // rdi
  int v10; // r13d
  int v11; // r14d
  int v12; // r15d
  __int64 v13; // rbp
  __int64 ProcessSequenceNumber; // rbx
  int ClassStyle; // esi
  void *v16; // rax
  void *v17; // rax
  void *v18; // rax
  unsigned __int64 v19; // [rsp+60h] [rbp-98h]
  struct _KPROCESS *v20; // [rsp+70h] [rbp-88h]
  __int64 v21; // [rsp+78h] [rbp-80h]
  __int64 v22[2]; // [rsp+80h] [rbp-78h] BYREF
  __int128 v23; // [rsp+90h] [rbp-68h]
  __int64 v24; // [rsp+A0h] [rbp-58h]
  const struct tagDESKTOP *v25; // [rsp+100h] [rbp+8h]
  unsigned int v26; // [rsp+108h] [rbp+10h]
  _QWORD *v27; // [rsp+110h] [rbp+18h]
  unsigned __int64 v28; // [rsp+118h] [rbp+20h]

  v26 = a2;
  v25 = a1;
  v2 = (unsigned int)a2;
  v3 = gSharedInfo[1];
  v19 = v3;
  v28 = v3 + 32LL * giheLast;
  v27 = (_QWORD *)gpKernelHandleTable;
  v4 = v28;
  if ( v3 <= v28 )
  {
    v5 = (_QWORD *)gpKernelHandleTable;
    do
    {
      if ( *(_BYTE *)(v3 + 24) == 1 )
      {
        v6 = *v5;
        v21 = v6;
        if ( *(const struct tagDESKTOP **)(v6 + 24) == a1 )
        {
          if ( !(unsigned int)IsMotherDesktopWindow(v6, a2, v2) )
          {
            if ( (_DWORD)v2 )
            {
              if ( !(unsigned int)IsDesktopWindow() && (unsigned int)IsMessageParentWindow() )
                GetDesktopWindow(v7);
              *(_OWORD *)v22 = 0LL;
              v24 = 0LL;
              v23 = 0LL;
              GetWindowCompositionInfo(v6, v22);
              v20 = *(struct _KPROCESS **)(**(_QWORD **)(v6 + 16) + 544LL);
              ProcessId = (unsigned int)PsGetProcessId(v20);
              v9 = *(_QWORD *)(v6 + 40);
              v10 = ProcessId;
              v11 = *(_DWORD *)(v9 + 232);
              v12 = *(_DWORD *)(v9 + 24);
              v13 = ***(_QWORD ***)(*(_QWORD *)(v6 + 24) + 8LL);
              ProcessSequenceNumber = PsGetProcessSequenceNumber(v20);
              ClassStyle = DwmGetClassStyle(v6);
              v16 = (void *)ReferenceDwmApiPort();
              DwmAsyncChildCreate(v16, v12, v11, ClassStyle, (__int64)v22, v13, v9 + 88, v10, ProcessSequenceNumber);
              DwmChildRectChange(v21);
              if ( (*(_BYTE *)(*(_QWORD *)(v21 + 40) + 26LL) & 8) != 0 )
              {
                if ( (unsigned int)IsTopLevelWindow(v21) )
                {
                  SendDwmIconChange(v21);
                  v18 = (void *)ReferenceDwmApiPort();
                  DwmAsyncTextChange(v18);
                }
              }
              v3 = v19;
              v4 = v28;
            }
            else
            {
              v17 = (void *)ReferenceDwmApiPort();
              DwmAsyncChildDestroy(v17);
            }
            v2 = v26;
          }
          a1 = v25;
        }
        v5 = v27;
      }
      v3 += 32LL;
      v5 += 3;
      v19 = v3;
      v27 = v5;
    }
    while ( v3 <= v4 );
  }
}
