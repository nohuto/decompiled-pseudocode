/*
 * XREFs of ?IsFeatureEnabled@CDesktopManager@@SA_NW4DwmFeature@1@@Z @ 0x18002A45C
 * Callers:
 *     ?ShouldShowTransition@CTopLevelWindow3D@@AEAA_NW4WindowAnimationType@1@@Z @ 0x18002A2C0 (-ShouldShowTransition@CTopLevelWindow3D@@AEAA_NW4WindowAnimationType@1@@Z.c)
 *     ?GetGlobalState@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETGLOBALSTATE@@@Z @ 0x180097C0C (-GetGlobalState@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETGLOBALSTATE@@@Z.c)
 *     ?IsLivePreviewAllowed@CDesktopManager@@SA_NXZ @ 0x1800985D8 (-IsLivePreviewAllowed@CDesktopManager@@SA_NXZ.c)
 * Callees:
 *     ?SLGetHelper@@YA_NPEBG@Z @ 0x18004EDC4 (-SLGetHelper@@YA_NPEBG@Z.c)
 */

char __fastcall CDesktopManager::IsFeatureEnabled(int a1)
{
  __int64 v1; // rbx
  _BYTE *v3; // rdi
  STRSAFE_PCNZWCH *v4; // rsi
  __int64 v5; // rbp

  v1 = a1;
  if ( !byte_1800E4E80 )
  {
    v3 = byte_1800E50B0;
    v4 = (STRSAFE_PCNZWCH *)off_1800C6428;
    v5 = 3LL;
    do
    {
      *v3++ = SLGetHelper(*v4++);
      --v5;
    }
    while ( v5 );
    byte_1800E4E80 = 1;
  }
  if ( (unsigned int)v1 >= 3 )
    return SLGetHelper(off_1800C6428[v1]);
  else
    return byte_1800E50B0[v1];
}
