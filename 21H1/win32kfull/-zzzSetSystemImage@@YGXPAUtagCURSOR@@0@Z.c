/*
 * XREFs of ?zzzSetSystemImage@@YGXPAUtagCURSOR@@0@Z @ 0xD9236
 * Callers:
 *     _xxxUpdateSystemIconsFromRegistry@4 @ 0xD8AEE (_xxxUpdateSystemIconsFromRegistry@4.c)
 *     ?zzzInternalSetSystemCursor@@YGXPAUtagCURSOR@@IPAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0xD8F80 (-zzzInternalSetSystemCursor@@YGXPAUtagCURSOR@@IPAU_UNICODE_STRING@@W4InputTracing_SetSystemCurso.c)
 * Callees:
 *     _zzzUpdateCursorImage@0 @ 0x745FA (_zzzUpdateCursorImage@0.c)
 *     ?_DestroyCursor@@YG_NPAUtagCURSOR@@K@Z @ 0x785EE (-_DestroyCursor@@YG_NPAUtagCURSOR@@K@Z.c)
 */

void __fastcall zzzSetSystemImage(int a1, _DWORD *a2)
{
  int v2; // ebx
  _DWORD *v3; // eax
  bool v4; // zf
  int v5; // edi
  int v6; // ebx
  int v7; // esi
  _DWORD *v8; // edx
  void *v9; // edi
  int v10; // eax
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // eax
  int i; // eax
  int v16; // edi
  int v17; // ebx
  int v18; // esi
  _BYTE v19[48]; // [esp+10h] [ebp-40h] BYREF
  int v20; // [esp+40h] [ebp-10h]
  int v21; // [esp+44h] [ebp-Ch]
  _DWORD *v22; // [esp+48h] [ebp-8h]
  char v23; // [esp+4Fh] [ebp-1h]

  v2 = a1;
  v3 = a2;
  v22 = a2;
  v4 = *(_DWORD *)(a1 + 12) == 0;
  v21 = a1;
  if ( v4 )
  {
    v23 = 0;
  }
  else
  {
    v23 = 1;
    v5 = a1;
    do
    {
      if ( (*(_BYTE *)(v5 + 44) & 8) != 0 )
      {
        v20 = 0;
        if ( *(int *)(v5 + 48) > 0 )
        {
          v6 = v20;
          do
          {
            v7 = *(_DWORD *)(*(_DWORD *)(v5 + 56) + 4 * v6);
            HMChangeOwnerProcess(v7, _gptiRit);
            *(_DWORD *)(v7 + 12) = 0;
            ++v6;
          }
          while ( v6 < *(_DWORD *)(v5 + 48) );
          v2 = v21;
        }
      }
      if ( v5 == v2 )
      {
        if ( (*(_BYTE *)(v2 + 44) & 8) == 0 )
        {
          if ( *(_DWORD *)(v5 + 52) )
          {
            GreDecQuotaCount(*(_DWORD *)(v5 + 12));
            GreIncQuotaCount(*(_DWORD *)(_gptiRit + 232));
          }
          if ( *(_DWORD *)(v5 + 56) )
          {
            GreDecQuotaCount(*(_DWORD *)(v5 + 12));
            GreIncQuotaCount(*(_DWORD *)(_gptiRit + 232));
          }
          if ( *(_DWORD *)(v5 + 80) )
          {
            GreDecQuotaCount(*(_DWORD *)(v5 + 12));
            GreIncQuotaCount(*(_DWORD *)(_gptiRit + 232));
          }
        }
      }
      else
      {
        HMChangeOwnerProcess(v5, _gptiRit);
        *(_DWORD *)(v5 + 12) = 0;
      }
      v5 = *(_DWORD *)(v5 + 20);
    }
    while ( v5 );
    v3 = v22;
  }
  v8 = v22;
  qmemcpy(v19, (const void *)(v2 + 48), sizeof(v19));
  qmemcpy((void *)(v2 + 48), v3 + 12, 0x30u);
  v9 = v3 + 12;
  v10 = v8[11];
  qmemcpy(v9, v19, 0x30u);
  v11 = *(_DWORD *)(v2 + 44);
  *(_DWORD *)(v2 + 44) = v11 ^ ((unsigned __int8)v11 ^ (unsigned __int8)v10) & 8;
  LOBYTE(v10) = v11 ^ v8[11];
  v12 = v8[10];
  v8[11] ^= v10 & 8;
  v8[10] = *(_DWORD *)(v2 + 40);
  *(_DWORD *)(v2 + 40) = v12;
  v13 = *(_DWORD *)(v2 + 20);
  *(_DWORD *)(v2 + 20) = v8[5];
  v14 = v8[6];
  v8[5] = v13;
  while ( v14 )
  {
    *(_DWORD *)(v14 + 24) = v8;
    v14 = *(_DWORD *)(v14 + 20);
  }
  for ( i = *(_DWORD *)(v2 + 24); i; i = *(_DWORD *)(i + 20) )
    *(_DWORD *)(i + 24) = v2;
  if ( v23 )
  {
    v16 = v2;
    do
    {
      if ( v16 == v2 )
      {
        if ( (*(_BYTE *)(v2 + 44) & 8) == 0 )
        {
          if ( *(_DWORD *)(v16 + 52) )
          {
            GreDecQuotaCount(*(_DWORD *)(_gptiRit + 232));
            GreIncQuotaCount(*(_DWORD *)(v16 + 12));
          }
          if ( *(_DWORD *)(v16 + 56) )
          {
            GreDecQuotaCount(*(_DWORD *)(_gptiRit + 232));
            GreIncQuotaCount(*(_DWORD *)(v16 + 12));
          }
          if ( *(_DWORD *)(v16 + 80) )
          {
            GreDecQuotaCount(*(_DWORD *)(_gptiRit + 232));
            GreIncQuotaCount(*(_DWORD *)(v16 + 12));
          }
        }
      }
      else
      {
        HMChangeOwnerProcess(v16, _gptiCurrent);
        *(_DWORD *)(v16 + 12) = PsGetCurrentProcessWin32Process();
      }
      if ( (*(_BYTE *)(v16 + 44) & 8) != 0 )
      {
        v20 = 0;
        if ( *(int *)(v16 + 48) > 0 )
        {
          v17 = v20;
          do
          {
            v18 = *(_DWORD *)(*(_DWORD *)(v16 + 56) + 4 * v17);
            HMChangeOwnerProcess(v18, _gptiCurrent);
            ++v17;
            *(_DWORD *)(v18 + 12) = *(_DWORD *)(v16 + 12);
          }
          while ( v17 < *(_DWORD *)(v16 + 48) );
          v2 = v21;
        }
      }
      v16 = *(_DWORD *)(v16 + 20);
    }
    while ( v16 );
    if ( gpcurLogCurrent == *(struct tagCURSOR **)(v2 + 24) )
    {
      gpcurLogCurrent = 0;
      gpcurPhysCurrent = 0;
      zzzUpdateCursorImage();
    }
    _DestroyCursor((_DWORD *)v2, 2);
    v8 = v22;
  }
  if ( gpcurLogCurrent == (struct tagCURSOR *)v8[6] )
  {
    gpcurLogCurrent = 0;
    gpcurPhysCurrent = 0;
    zzzUpdateCursorImage();
  }
}
