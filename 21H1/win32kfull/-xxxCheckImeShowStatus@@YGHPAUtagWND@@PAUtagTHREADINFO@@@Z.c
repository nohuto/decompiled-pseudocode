/*
 * XREFs of ?xxxCheckImeShowStatus@@YGHPAUtagWND@@PAUtagTHREADINFO@@@Z @ 0x92932
 * Callers:
 *     _xxxCheckImeShowStatusInThread@4 @ 0x92906 (_xxxCheckImeShowStatusInThread@4.c)
 *     ?xxxNotifyImeShowStatus@@YGXPAUtagWND@@@Z @ 0xC38A2 (-xxxNotifyImeShowStatus@@YGXPAUtagWND@@@Z.c)
 * Callees:
 *     _FreeHwndList@4 @ 0x2D2D0 (_FreeHwndList@4.c)
 *     _BuildHwndList@12 @ 0x2D340 (_BuildHwndList@12.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     __PostMessage@16 @ 0x6DA60 (__PostMessage@16.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __fastcall xxxCheckImeShowStatus(_DWORD *a1, int a2)
{
  int v3; // eax
  unsigned int v4; // edi
  _DWORD *v5; // esi
  _DWORD *v6; // eax
  unsigned int v7; // edi
  int v8; // edi
  ULONG *v9; // edi
  PRKPROCESS *v10; // ecx
  ULONG v11; // edi
  ULONG v12; // eax
  int v13; // esi
  int v14; // eax
  struct tagBWL *v15; // [esp+14h] [ebp-3Ch]
  PKTHREAD CurrentThread; // [esp+20h] [ebp-30h]
  int v18; // [esp+20h] [ebp-30h]
  int v19; // [esp+24h] [ebp-2Ch]
  unsigned int *i; // [esp+30h] [ebp-20h]
  char v22; // [esp+37h] [ebp-19h]

  v19 = 0;
  if ( *(char *)(a1[5] + 12) < 0 )
    return 0;
  v3 = BuildHwndList(*(_DWORD *)(a1[14] + 60), 2, 0);
  v15 = (struct tagBWL *)v3;
  if ( v3 )
  {
    v19 = 1;
    for ( i = (unsigned int *)(v3 + 16); ; ++i )
    {
      v4 = *i;
      if ( *i == 1 )
        break;
      v5 = 0;
      CurrentThread = KeGetCurrentThread();
      if ( !IsThreadCrossSessionAttached() )
        PsGetThreadWin32Thread(CurrentThread);
      if ( (unsigned int)(unsigned __int16)v4 < *(_DWORD *)(_gpsi + 4) )
      {
        v18 = _gSharedInfo[1] + (unsigned __int16)v4 * _gSharedInfo[2];
        v6 = (_DWORD *)HMPkheFromPhe(v18);
        v7 = HIWORD(v4);
        if ( ((_WORD)v7 == *(_WORD *)(v18 + 14) || !(_WORD)v7 || (_WORD)v7 == 0xFFFF)
          && (*(_BYTE *)(v18 + 13) & 1) == 0
          && *(_BYTE *)(v18 + 12) == 1 )
        {
          v5 = (_DWORD *)*v6;
        }
      }
      if ( v5 && a1 != v5 )
      {
        if ( **(_WORD **)(v5[19] + 4) == *(_WORD *)(_gpsi + 498) )
        {
          v8 = v5[5];
          v9 = *(_DWORD *)(v8 + 160) ? (ULONG *)v5[41] : *(ULONG **)(v8 + 192);
        }
        else
        {
          v9 = 0;
        }
        if ( v9 && *(char *)(v5[5] + 12) >= 0 && (!a2 || a2 == v5[2]) )
        {
          v22 = 0;
          v10 = *(PRKPROCESS **)(v5[2] + 232);
          if ( v10 != *(PRKPROCESS **)(_gptiCurrent + 232) )
          {
            KeAttachProcess(*v10);
            v22 = 1;
          }
          v11 = *v9;
          if ( !v11 || v11 == -1 )
          {
            if ( v22 )
              KeDetachProcess();
          }
          else
          {
            v12 = _MmUserProbeAddress;
            if ( v11 < _MmUserProbeAddress )
              v12 = v11;
            if ( (*(_BYTE *)(v12 + 24) & 1) != 0 )
            {
              v13 = HMValidateHandleNoSecure(*(_DWORD *)(v11 + 8), 1);
              if ( v13 )
                *(_DWORD *)(v11 + 24) &= ~1u;
            }
            else
            {
              v13 = 0;
            }
            if ( v22 )
              KeDetachProcess();
            if ( v13 )
            {
              v14 = *(_DWORD *)(v13 + 8);
              if ( v14 )
              {
                if ( (*(_BYTE *)(v14 + 264) & 1) == 0 )
                  _PostMessage(v13, 642, 1, 0);
              }
            }
          }
        }
      }
    }
    FreeHwndList(v15);
  }
  return v19;
}
