/*
 * XREFs of ApplyPathModalityToCdsRegistryStore @ 0x1C0097784
 * Callers:
 *     ApplyPathsModality @ 0x1C00B125C (ApplyPathsModality.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C008D744 (PALLOCMEM2.c)
 *     DrvUpdateDisplayDriverParameters @ 0x1C0097074 (DrvUpdateDisplayDriverParameters.c)
 */

__int64 __fastcall ApplyPathModalityToCdsRegistryStore(__int64 a1)
{
  __int64 v2; // rdx
  struct _devicemodeW *v3; // rsi
  __int64 v4; // r8
  wchar_t *v5; // rbx
  unsigned int v6; // r14d
  struct _devicemodeW *v7; // rbp
  __int64 v8; // rcx
  struct _devicemodeW *v9; // r9
  wchar_t *v10; // rcx
  __int64 v12; // rax
  _QWORD *v13; // rax

  v3 = (struct _devicemodeW *)PALLOCMEM2(0xDCuLL, 0x73726447u, 1);
  if ( v3 )
  {
    v5 = gpGraphicsDeviceList;
    v6 = 1;
    while ( v5 )
    {
      if ( (*((_DWORD *)v5 + 40) & 0x800000) != 0 )
      {
        v2 = 0LL;
        v7 = v3;
        if ( !*(_WORD *)(a1 + 20) )
          goto LABEL_12;
        while ( 1 )
        {
          v8 = 272LL * (unsigned int)v2;
          v9 = *(struct _devicemodeW **)(v8 + a1 + 272);
          if ( v9 )
          {
            if ( (*(_QWORD *)(v8 + a1 + 48) & 0x1000000000LL) == 0
              && *((_DWORD *)v5 + 62) == *(_DWORD *)(v8 + a1 + 64)
              && *((_DWORD *)v5 + 63) == *(_DWORD *)(v8 + a1 + 68)
              && *((_DWORD *)v5 + 64) == *(_DWORD *)(v8 + a1 + 72) )
            {
              break;
            }
          }
          v2 = (unsigned int)(v2 + 1);
          if ( (unsigned int)v2 >= *(unsigned __int16 *)(a1 + 20) )
            goto LABEL_12;
        }
        v7 = *(struct _devicemodeW **)(v8 + a1 + 272);
        if ( v9 == v3 )
LABEL_12:
          v4 = 1LL;
        else
          v4 = 0LL;
        v10 = gpGraphicsDeviceList;
        if ( !gpGraphicsDeviceList )
          goto LABEL_24;
        do
        {
          if ( v10 == v5 )
            break;
          v10 = (wchar_t *)*((_QWORD *)v10 + 16);
        }
        while ( v10 );
        if ( !v10 || (int)DrvUpdateDisplayDriverParameters((struct tagGRAPHICS_DEVICE *)v10, v7, v4, 0) < 0 )
        {
LABEL_24:
          v13 = (_QWORD *)WdLogNewEntry5_WdError(v10, v2, v4);
          v13[3] = v5;
          v13[6] = v7 == v3;
          v13[4] = a1;
          v13[5] = v7;
          WdLogEvent5_WdError(v13);
          v6 = 0;
        }
      }
      v5 = (wchar_t *)*((_QWORD *)v5 + 16);
    }
    Win32FreePool((__int64)v3, v2, v4);
    return v6;
  }
  else
  {
    v12 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v12 + 24) = 220LL;
    *(_QWORD *)(v12 + 32) = a1;
    WdLogEvent5_WdLowResource(v12);
    return 0LL;
  }
}
