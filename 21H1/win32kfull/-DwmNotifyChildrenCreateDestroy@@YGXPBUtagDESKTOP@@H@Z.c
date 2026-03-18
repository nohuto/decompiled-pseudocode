/*
 * XREFs of ?DwmNotifyChildrenCreateDestroy@@YGXPBUtagDESKTOP@@H@Z @ 0xE1968
 * Callers:
 *     _DwmNotifyChildrenAddRemove@8 @ 0xE1756 (_DwmNotifyChildrenAddRemove@8.c)
 * Callees:
 *     _SendDwmIconChange@4 @ 0x1D802 (_SendDwmIconChange@4.c)
 *     _DwmAsyncTextChange@8 @ 0x1EC70 (_DwmAsyncTextChange@8.c)
 *     _IsMessageParentWindow@4 @ 0x21F92 (_IsMessageParentWindow@4.c)
 *     _DwmChildRectChange@4 @ 0x30F5A (_DwmChildRectChange@4.c)
 *     __IsTopLevelWindow@4 @ 0x38178 (__IsTopLevelWindow@4.c)
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     __GetWindowCompositionInfo@8 @ 0x6DCA6 (__GetWindowCompositionInfo@8.c)
 *     _IsMotherDesktopWindow@4 @ 0x72C60 (_IsMotherDesktopWindow@4.c)
 *     _IsDesktopWindow@4 @ 0x72F74 (_IsDesktopWindow@4.c)
 *     _DwmAsyncChildDestroy@8 @ 0x73C16 (_DwmAsyncChildDestroy@8.c)
 *     _DwmAsyncChildCreate@52 @ 0x999CC (_DwmAsyncChildCreate@52.c)
 *     _DwmGetClassStyle@4 @ 0xA4714 (_DwmGetClassStyle@4.c)
 */

void __fastcall DwmNotifyChildrenCreateDestroy(int a1, int a2)
{
  unsigned int v2; // esi
  unsigned int v3; // edi
  int *v4; // ebx
  int v5; // ebx
  _DWORD *v6; // ecx
  _DWORD *v7; // ecx
  int *DesktopWindow; // esi
  struct _KPROCESS *v9; // ecx
  int v10; // eax
  _DWORD *v11; // edi
  int v12; // ebx
  int v13; // esi
  int *v14; // esi
  void *v15; // eax
  void *v16; // eax
  void *v17; // eax
  int v18; // [esp-2Ch] [ebp-84h]
  int v19; // [esp-28h] [ebp-80h]
  int v20; // [esp-24h] [ebp-7Ch]
  int ClassStyle; // [esp-1Ch] [ebp-74h]
  int v22; // [esp-14h] [ebp-6Ch]
  HANDLE ProcessId; // [esp-Ch] [ebp-64h]
  __int64 ProcessSequenceNumber; // [esp-8h] [ebp-60h]
  unsigned int v25[9]; // [esp+Ch] [ebp-4Ch] BYREF
  int v26; // [esp+30h] [ebp-28h]
  int v27; // [esp+34h] [ebp-24h]
  int *v28; // [esp+38h] [ebp-20h]
  PEPROCESS Process; // [esp+3Ch] [ebp-1Ch]
  int v30; // [esp+40h] [ebp-18h]
  int v31; // [esp+44h] [ebp-14h]
  unsigned int v32; // [esp+48h] [ebp-10h]
  unsigned int v33; // [esp+4Ch] [ebp-Ch]
  int v34; // [esp+50h] [ebp-8h]
  int *v35; // [esp+54h] [ebp-4h]

  v2 = _gSharedInfo[1];
  v30 = a2;
  v34 = a1;
  v32 = v2;
  v33 = v2 + 16 * _giheLast;
  v35 = (int *)_gpKernelHandleTable;
  v3 = v33;
  if ( v2 <= v33 )
  {
    v4 = v35;
    do
    {
      if ( *(_BYTE *)(v2 + 12) == 1 )
      {
        v5 = *v4;
        v28 = (int *)v5;
        if ( *(_DWORD *)(v5 + 12) == a1 )
        {
          if ( !IsMotherDesktopWindow((void *)v5) )
          {
            if ( v30 )
            {
              if ( IsDesktopWindow(v6) )
              {
                DesktopWindow = 0;
              }
              else if ( IsMessageParentWindow(v7) )
              {
                DesktopWindow = (int *)_GetDesktopWindow((_DWORD *)v5);
              }
              else
              {
                DesktopWindow = *(int **)(v5 + 56);
              }
              memset(v25, 0, sizeof(v25));
              _GetWindowCompositionInfo(v5, v25);
              v9 = *(struct _KPROCESS **)(**(_DWORD **)(v5 + 8) + 336);
              Process = v9;
              if ( DesktopWindow )
                v31 = *DesktopWindow;
              else
                v31 = 0;
              v10 = *(_DWORD *)(v5 + 12);
              v11 = *(_DWORD **)(v5 + 20);
              v12 = v11[36];
              v13 = ***(_DWORD ***)(v10 + 4);
              v27 = v11[4];
              v26 = v11[5];
              ProcessSequenceNumber = PsGetProcessSequenceNumber(v9);
              ProcessId = PsGetProcessId(Process);
              v22 = v13;
              v14 = v28;
              ClassStyle = DwmGetClassStyle(v28);
              v20 = v27;
              v19 = v26;
              v18 = v31;
              v15 = (void *)ReferenceDwmApiPort();
              DwmAsyncChildCreate(
                v15,
                *v14,
                v18,
                v19,
                v20,
                v12,
                ClassStyle,
                v25,
                v22,
                v11 + 13,
                (int)ProcessId,
                ProcessSequenceNumber,
                SHIDWORD(ProcessSequenceNumber));
              DwmChildRectChange(v14);
              if ( (*(_BYTE *)(v14[5] + 18) & 8) != 0 )
              {
                if ( _IsTopLevelWindow(v14) )
                {
                  SendDwmIconChange(v14);
                  v17 = (void *)ReferenceDwmApiPort();
                  DwmAsyncTextChange(v17, *v14);
                }
              }
              v3 = v33;
              v2 = v32;
            }
            else
            {
              v16 = (void *)ReferenceDwmApiPort();
              DwmAsyncChildDestroy(v16, *(_DWORD *)v5);
            }
          }
          a1 = v34;
        }
        v4 = v35;
      }
      v2 += 16;
      v4 += 3;
      v32 = v2;
      v35 = v4;
    }
    while ( v2 <= v3 );
  }
}
