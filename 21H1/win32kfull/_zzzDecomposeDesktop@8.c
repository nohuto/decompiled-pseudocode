/*
 * XREFs of _zzzDecomposeDesktop@8 @ 0xCF042
 * Callers:
 *     _xxxCreateDesktopEx@24 @ 0x7E854 (_xxxCreateDesktopEx@24.c)
 *     _xxxDwmStopRedirection@4 @ 0xCEE26 (_xxxDwmStopRedirection@4.c)
 *     _zzzDwmStartRedirection@0 @ 0xE08D6 (_zzzDwmStartRedirection@0.c)
 * Callees:
 *     _ComposeWindow@8 @ 0x1BF3E (_ComposeWindow@8.c)
 *     _GreUpdateSpriteVisRgn@8 @ 0x363E0 (_GreUpdateSpriteVisRgn@8.c)
 *     _IsDesktopWindow@4 @ 0x72F74 (_IsDesktopWindow@4.c)
 *     _zzzEnableDwmPointerSupport@8 @ 0xB0B78 (_zzzEnableDwmPointerSupport@8.c)
 *     ?IsWindowComposedOnDesktop@@YGHQAUtagWND@@QAUtagDESKTOP@@@Z @ 0xCF190 (-IsWindowComposedOnDesktop@@YGHQAUtagWND@@QAUtagDESKTOP@@@Z.c)
 *     _GreTransferDwmStateToSpriteState@8 @ 0xCF1B4 (_GreTransferDwmStateToSpriteState@8.c)
 *     _GreRemoveDisplayDriverRealizations@4 @ 0xCF2AE (_GreRemoveDisplayDriverRealizations@4.c)
 *     _MagpDecomposeDesktop@8 @ 0xCF50C (_MagpDecomposeDesktop@8.c)
 *     ?BroadcastCompositionChange@@YGXPBUtagDESKTOP@@@Z @ 0xE110C (-BroadcastCompositionChange@@YGXPBUtagDESKTOP@@@Z.c)
 *     ?PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0xF0F76 (-PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 */

int __fastcall zzzDecomposeDesktop(int a1, int a2)
{
  int v3; // esi
  unsigned int v4; // edx
  int v5; // edi
  int v6; // ecx
  int v7; // edi
  _DWORD *v8; // ecx
  char v9; // dl
  struct tagWND *v11; // [esp+0h] [ebp-20h]
  struct tagINPUT_MESSAGE_SOURCE *v12; // [esp+4h] [ebp-1Ch]
  unsigned int v13; // [esp+14h] [ebp-Ch]
  int v14; // [esp+18h] [ebp-8h]
  int v15; // [esp+1Ch] [ebp-4h]

  if ( (*(_BYTE *)(**(_DWORD **)(a1 + 4) + 32) & 1) != 0 )
  {
    v3 = a2 != 0 ? 18 : 2;
    MagpDecomposeDesktop(_gMagnContext, a1);
    v4 = 0;
    v5 = 0;
    v6 = 0;
    v13 = 0;
    v15 = 0;
    v14 = 0;
    do
    {
      if ( *(_BYTE *)(_gSharedInfo[1] + v6 + 12) == 1 )
      {
        v7 = *(_DWORD *)(v5 + _gpKernelHandleTable);
        if ( IsWindowComposedOnDesktop(v11, v12) )
        {
          if ( IsDesktopWindow(v8) )
          {
            v9 = v3 | 4;
          }
          else
          {
            if ( (*(_BYTE *)(*(_DWORD *)(v7 + 20) + 23) & 1) != 0 )
              PostEventMessageEx((struct tagTHREADINFO *)0x10, (struct tagQ *)v7, 0, 0, 0, 0, (int)v11, v12);
            v9 = v3;
          }
          ComposeWindow((struct tagWND *)v7, v9);
        }
        v5 = v15;
        v4 = v13;
        v6 = v14;
      }
      ++v4;
      v6 += 16;
      v13 = v4;
      v5 += 12;
      v14 = v6;
      v15 = v5;
    }
    while ( v4 <= _giheLast );
    GreRemoveDisplayDriverRealizations(*(_DWORD *)(_gpDispInfo + 20));
    zzzEnableDwmPointerSupport(0, 0);
    GreTransferDwmStateToSpriteState(*(HDEV *)(_gpDispInfo + 20));
    *(_DWORD *)(**(_DWORD **)(a1 + 4) + 32) &= ~1u;
    GreLockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
    GreUpdateSpriteVisRgn(*(_DWORD *)(_gpDispInfo + 20), 0);
    GreUnlockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
    BroadcastCompositionChange(v11);
  }
  return 1;
}
