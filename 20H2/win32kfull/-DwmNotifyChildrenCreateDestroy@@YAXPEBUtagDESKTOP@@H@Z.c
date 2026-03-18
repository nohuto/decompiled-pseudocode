/*
 * XREFs of ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C00816D4
 * Callers:
 *     DwmNotifyChildrenAddRemove @ 0x1C0081314 (DwmNotifyChildrenAddRemove.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C0046F20 (_GetDesktopWindow.c)
 *     _IsTopLevelWindow @ 0x1C0046FA0 (_IsTopLevelWindow.c)
 *     _GetWindowCompositionInfo @ 0x1C0048CE4 (_GetWindowCompositionInfo.c)
 *     IsMotherDesktopWindow @ 0x1C0081960 (IsMotherDesktopWindow.c)
 *     DwmAsyncChildCreate @ 0x1C008198C (DwmAsyncChildCreate.c)
 *     DwmGetClassStyle @ 0x1C0081AD0 (DwmGetClassStyle.c)
 *     DwmAsyncChildDestroy @ 0x1C0081B48 (DwmAsyncChildDestroy.c)
 *     IsDesktopWindow @ 0x1C0091BB0 (IsDesktopWindow.c)
 *     IsMessageParentWindow @ 0x1C0091C10 (IsMessageParentWindow.c)
 *     SendDwmIconChange @ 0x1C00C4E60 (SendDwmIconChange.c)
 *     DwmAsyncTextChange @ 0x1C00C4FB0 (DwmAsyncTextChange.c)
 *     DwmChildRectChange @ 0x1C00CB830 (DwmChildRectChange.c)
 */

void __fastcall DwmNotifyChildrenCreateDestroy(const struct tagDESKTOP *a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rdi
  __int64 *v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned int ProcessId; // eax
  __int64 v10; // rdi
  int v11; // r13d
  int v12; // r14d
  int v13; // r15d
  __int64 v14; // rbp
  __int64 ProcessSequenceNumber; // rbx
  int ClassStyle; // esi
  __int64 v17; // rcx
  void *v18; // rax
  void *v19; // rax
  __int64 v20; // rcx
  void *v21; // rax
  unsigned __int64 v22; // [rsp+60h] [rbp-98h]
  struct _KPROCESS *v23; // [rsp+70h] [rbp-88h]
  __int64 v24; // [rsp+78h] [rbp-80h]
  __int64 v25[2]; // [rsp+80h] [rbp-78h] BYREF
  __int128 v26; // [rsp+90h] [rbp-68h]
  __int64 v27; // [rsp+A0h] [rbp-58h]
  const struct tagDESKTOP *v28; // [rsp+100h] [rbp+8h]
  unsigned int v29; // [rsp+108h] [rbp+10h]
  __int64 *v30; // [rsp+110h] [rbp+18h]
  unsigned __int64 v31; // [rsp+118h] [rbp+20h]

  v29 = a2;
  v28 = a1;
  v2 = (unsigned int)a2;
  v3 = gSharedInfo[1];
  v22 = v3;
  v31 = v3 + 32LL * giheLast;
  v30 = (__int64 *)gpKernelHandleTable;
  v4 = v31;
  if ( v3 <= v31 )
  {
    v5 = (__int64 *)gpKernelHandleTable;
    do
    {
      if ( *(_BYTE *)(v3 + 24) == 1 )
      {
        v6 = *v5;
        v24 = v6;
        if ( *(const struct tagDESKTOP **)(v6 + 24) == a1 )
        {
          if ( !(unsigned int)IsMotherDesktopWindow(v6, a2, v2) )
          {
            if ( (_DWORD)v2 )
            {
              if ( !(unsigned int)IsDesktopWindow(v7) && (unsigned int)IsMessageParentWindow() )
                GetDesktopWindow(v8);
              *(_OWORD *)v25 = 0LL;
              v27 = 0LL;
              v26 = 0LL;
              GetWindowCompositionInfo(v6, (__int64)v25);
              v23 = *(struct _KPROCESS **)(**(_QWORD **)(v6 + 16) + 544LL);
              ProcessId = (unsigned int)PsGetProcessId(v23);
              v10 = *(_QWORD *)(v6 + 40);
              v11 = ProcessId;
              v12 = *(_DWORD *)(v10 + 232);
              v13 = *(_DWORD *)(v10 + 24);
              v14 = ***(_QWORD ***)(*(_QWORD *)(v6 + 24) + 8LL);
              ProcessSequenceNumber = PsGetProcessSequenceNumber(v23);
              ClassStyle = DwmGetClassStyle(v6);
              v18 = (void *)ReferenceDwmApiPort(v17);
              DwmAsyncChildCreate(v18, v13, v12, ClassStyle, (__int64)v25, v14, v10 + 88, v11, ProcessSequenceNumber);
              DwmChildRectChange(v24);
              if ( (*(_BYTE *)(*(_QWORD *)(v24 + 40) + 26LL) & 8) != 0 )
              {
                if ( (unsigned int)IsTopLevelWindow(v24) )
                {
                  SendDwmIconChange(v24);
                  v21 = (void *)ReferenceDwmApiPort(v20);
                  DwmAsyncTextChange(v21);
                }
              }
              v3 = v22;
              v4 = v31;
            }
            else
            {
              v19 = (void *)ReferenceDwmApiPort(v7);
              DwmAsyncChildDestroy(v19);
            }
            v2 = v29;
          }
          a1 = v28;
        }
        v5 = v30;
      }
      v3 += 32LL;
      v5 += 3;
      v22 = v3;
      v30 = v5;
    }
    while ( v3 <= v4 );
  }
}
