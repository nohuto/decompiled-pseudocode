/*
 * XREFs of ?TemplateWindow@CWindow@@QAE_NPAUtagWND@@W4TemplateWindowOptions@@@Z @ 0x19F569
 * Callers:
 *     ?_TemplateWindow@CWindowGroup@@AAE_NPAVCWindow@@0W4TemplateWindowOptions@@@Z @ 0x19F7A9 (-_TemplateWindow@CWindowGroup@@AAE_NPAVCWindow@@0W4TemplateWindowOptions@@@Z.c)
 * Callees:
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     ?GetRootOwner@@YGPAUtagWND@@PAU1@@Z @ 0x979A6 (-GetRootOwner@@YGPAUtagWND@@PAU1@@Z.c)
 *     ?CloneWindowPosAndArrangementAsync@@YG_NPAUtagWND@@PBU1@1W4CloneWindowPosOptions@@@Z @ 0x13F438 (-CloneWindowPosAndArrangementAsync@@YG_NPAUtagWND@@PBU1@1W4CloneWindowPosOptions@@@Z.c)
 */

char __thiscall CWindow::TemplateWindow(unsigned int *this, int a2, char a3)
{
  int v3; // eax
  struct tagWND *v4; // ebx
  char v6; // cl
  int *v7; // esi
  int v8; // edx
  int v9; // edi
  int *v10; // edi
  int v11; // ecx
  int v12; // [esp+10h] [ebp-8h]
  char v13; // [esp+17h] [ebp-1h]

  v3 = HMValidateHandleNoSecure(this[2], 1);
  v4 = (struct tagWND *)v3;
  if ( !v3 )
    return 0;
  if ( v3 == a2 )
    return 1;
  v6 = a3;
  v7 = 0;
  if ( (a3 & 1) != 0 )
  {
    v8 = *(_DWORD *)(v3 + 20);
    v9 = *(_DWORD *)(a2 + 20);
    v13 = *(_BYTE *)(v8 + 16) & 8;
    if ( v13 == (*(_BYTE *)(v9 + 16) & 8) )
    {
      v12 = *(_DWORD *)(v8 + 148);
      if ( v12 == *(_DWORD *)(v9 + 148) )
      {
        if ( *(char *)(v8 + 12) >= 0 )
        {
          v7 = (int *)v3;
        }
        else
        {
          v10 = *(int **)(v3 + 52);
          if ( v10 )
          {
            while ( 1 )
            {
              if ( GetRootOwner((struct tagWND *)v10) == v4 )
              {
                v7 = 0;
              }
              else if ( !v7 )
              {
                v7 = v10;
              }
              v11 = v10[5];
              if ( v13 != (*(_BYTE *)(v11 + 16) & 8) || v12 != *(_DWORD *)(v11 + 148) )
                break;
              v10 = (int *)v10[13];
              if ( !v10 )
              {
                v6 = a3;
                return CloneWindowPosAndArrangementAsync((struct tagQ *)a2, (int)v4, v7, (v6 & 2) != 0);
              }
            }
            v6 = a3;
            if ( !v7 )
              v7 = v10;
          }
        }
      }
    }
  }
  return CloneWindowPosAndArrangementAsync((struct tagQ *)a2, (int)v4, v7, (v6 & 2) != 0);
}
