/*
 * XREFs of _SnapshotWindowRects@8 @ 0x145D44
 * Callers:
 *     _SnapShotMonitorsAndWindowsRects@8 @ 0x145CF1 (_SnapShotMonitorsAndWindowsRects@8.c)
 * Callees:
 *     _FreeHwndList@4 @ 0x2D2D0 (_FreeHwndList@4.c)
 *     _BuildHwndList@12 @ 0x2D340 (_BuildHwndList@12.c)
 *     _IsNonImmersiveBand@4 @ 0x2D3DC (_IsNonImmersiveBand@4.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     _HasImmersiveAppRight@4 @ 0x7C7B4 (_HasImmersiveAppRight@4.c)
 */

int __fastcall SnapshotWindowRects(int a1, _DWORD *a2)
{
  int v3; // edx
  int v4; // edi
  int v5; // eax
  int v6; // eax
  int v7; // ebx
  unsigned int *v8; // esi
  _DWORD *v9; // eax
  int result; // eax
  unsigned int v11; // ecx
  _DWORD *v12; // ebx
  _DWORD *v13; // eax
  int v14; // edx
  int v15; // edx
  _DWORD *v16; // esi
  int BufferChainingDpc_low; // edx
  _DWORD *Prop; // eax
  int v19; // [esp+10h] [ebp-10h]
  int v20; // [esp+14h] [ebp-Ch]
  _DWORD *v21; // [esp+18h] [ebp-8h]
  unsigned int *v22; // [esp+1Ch] [ebp-4h]

  v3 = 0;
  v4 = 0;
  v21 = a2;
  *a2 = 0;
  if ( a1 )
  {
    v5 = *(_DWORD *)(a1 + 4);
    if ( v5 )
      v3 = *(_DWORD *)(v5 + 12);
  }
  v6 = BuildHwndList(*(_DWORD *)(v3 + 60), 2, 0);
  v7 = v6;
  if ( !v6 )
    return 0;
  v8 = (unsigned int *)(v6 + 16);
  v9 = (_DWORD *)(v6 + 16);
  v22 = (unsigned int *)(v7 + 16);
  if ( *(_DWORD *)(v7 + 16) == 1 )
    goto LABEL_23;
  do
  {
    ++v9;
    ++v4;
  }
  while ( *v9 != 1 );
  if ( !v4 || (result = Win32AllocPoolWithQuotaZInit(40 * v4, 2004054869), (v19 = result) == 0) )
  {
LABEL_23:
    FreeHwndList((struct tagBWL *)v7);
    return 0;
  }
  v11 = *v8;
  if ( *v8 != 1 )
  {
    v12 = (_DWORD *)(result + 32);
    do
    {
      v13 = (_DWORD *)HMValidateHandleNoSecure(v11, 1);
      v20 = (int)v13;
      if ( v13
        && *(char *)(v13[5] + 16) >= 0
        && IsNonImmersiveBand(v13)
        && !HasImmersiveAppRight(*(_DWORD **)(*(_DWORD *)(v14 + 8) + 232)) )
      {
        v12[1] = *v8;
        v16 = *(_DWORD **)(v15 + 20);
        BufferChainingDpc_low = LOWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc);
        v16 += 13;
        *(v12 - 8) = *v16++;
        *(v12 - 7) = *v16++;
        *(v12 - 6) = *v16;
        *(v12 - 5) = v16[1];
        Prop = (_DWORD *)_GetProp(v20, BufferChainingDpc_low, 1);
        if ( Prop )
        {
          *(v12 - 4) = *Prop;
          *(v12 - 3) = Prop[1];
          *(v12 - 2) = Prop[2];
          *(v12 - 1) = Prop[3];
          *v12 |= 1u;
        }
        else
        {
          *v12 &= ~1u;
        }
        v8 = v22;
        ++*v21;
        v12 += 10;
      }
      v22 = ++v8;
      v11 = *v8;
    }
    while ( *v8 != 1 );
    result = v19;
  }
  if ( !*v21 )
  {
    Win32FreePool(result);
    return 0;
  }
  return result;
}
