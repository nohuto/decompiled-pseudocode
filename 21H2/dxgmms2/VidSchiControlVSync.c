/*
 * XREFs of VidSchiControlVSync @ 0x1C007B390
 * Callers:
 *     VidSchiControlVSyncThread @ 0x1C0002600 (VidSchiControlVSyncThread.c)
 *     ?VidSchiControlIndependentVidPnVSyncThread@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C002A978 (-VidSchiControlIndependentVidPnVSyncThread@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     VidSchSetMonitorPowerState @ 0x1C0035340 (VidSchSetMonitorPowerState.c)
 *     VidSchIsVSyncEnabled @ 0x1C007BBA0 (VidSchIsVSyncEnabled.c)
 *     VidSchControlVSyncAdapter @ 0x1C008ADA0 (VidSchControlVSyncAdapter.c)
 * Callees:
 *     ?DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@EI@Z @ 0x1C0002730 (-DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@EI@Z.c)
 *     VidSchiSetVSyncSuspended @ 0x1C0002784 (VidSchiSetVSyncSuspended.c)
 *     VidSchiGetVSyncSuspended @ 0x1C0002EF4 (VidSchiGetVSyncSuspended.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0023FCC (McTemplateK0p_EtwWriteTransfer.c)
 */

__int64 __fastcall VidSchiControlVSync(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // edi
  __int64 v5; // rbp
  int v6; // r15d
  char v7; // si
  char v9; // r9
  bool v10; // al
  int v11; // eax
  __int64 j; // rcx
  __int64 v13; // r8
  int v14; // r14d
  __int64 v15; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  unsigned int v19; // r8d
  unsigned int i; // edx
  __int64 v21; // rcx
  __int64 v22; // rax
  const EVENT_DESCRIPTOR *v23; // rdx
  unsigned int v24; // ecx

  v4 = 0;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  if ( a1 )
  {
    v9 = *(_BYTE *)(a1 + 2132);
    if ( v9 )
    {
      if ( (_DWORD)v5 == -3 )
      {
        v19 = *(_DWORD *)(a1 + 40);
        LODWORD(a2) = 0;
        if ( v19 )
        {
          while ( *(_BYTE *)((unsigned int)a2 + a1 + 1792) == (v7 != 0) )
          {
            LODWORD(a2) = a2 + 1;
            if ( (unsigned int)a2 >= v19 )
              return 0;
          }
LABEL_5:
          if ( v7 )
          {
            if ( v9 )
            {
              if ( (_DWORD)v5 == -3 )
              {
                for ( i = 0; i < *(_DWORD *)(a1 + 40); ++i )
                {
                  v21 = i;
                  _InterlockedExchange((volatile __int32 *)(a1 + 4 * v21 + 2192), 1);
                }
              }
              else
              {
                _InterlockedExchange((volatile __int32 *)(a1 + 4 * v5 + 2192), 1);
              }
            }
            else
            {
              _InterlockedExchange((volatile __int32 *)(a1 + 2192), 1);
            }
            LODWORD(a2) = 0;
            if ( *(_DWORD *)(a1 + 40) )
            {
              do
              {
                v11 = *(_DWORD *)(a1 + 2128);
                if ( _bittest(&v11, a2) )
                {
                  if ( VidSchiGetVSyncSuspended(a1, a2) )
                    _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 8 * v17 + 3104) + 33232LL), 1);
                  *(_QWORD *)(*(_QWORD *)(a1 + 8 * v17 + 3104) + 33240LL) = 0LL;
                }
                LODWORD(a2) = a2 + 1;
              }
              while ( (unsigned int)a2 < *(_DWORD *)(a1 + 40) );
            }
          }
          v14 = DXGADAPTER::DdiControlInterrupt(*(DXGADAPTER **)(a1 + 16), (enum _DXGK_INTERRUPT_TYPE)a2);
          if ( v14 == -1073741822 )
            v14 = 0;
          if ( v14 < 0 )
            return (unsigned int)v14;
          if ( *(_BYTE *)(a1 + 2132) )
          {
            if ( (_DWORD)v5 == -3 )
            {
              for ( j = 0LL; (unsigned int)j < *(_DWORD *)(a1 + 40); *(_BYTE *)(v22 + a1 + 1792) = v7 != 0 )
              {
                v22 = (unsigned int)j;
                j = (unsigned int)(j + 1);
              }
            }
            else
            {
              LOBYTE(j) = v7 != 0;
              *(_BYTE *)(v5 + a1 + 1792) = v7 != 0;
            }
          }
          else
          {
            *(_BYTE *)(a1 + 1792) = v7 != 0;
          }
          if ( bTracingEnabled )
          {
            if ( v7 )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) == 0 )
                goto LABEL_27;
              v23 = (const EVENT_DESCRIPTOR *)&EventEnableVSync;
            }
            else
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) == 0 )
                goto LABEL_19;
              v23 = (const EVENT_DESCRIPTOR *)&EventDisableVSync;
            }
            McTemplateK0p_EtwWriteTransfer(j, v23, v13, *(_QWORD *)(a1 + 16));
          }
LABEL_27:
          if ( v7 )
          {
            VidSchiSetVSyncSuspended(a1, v5, 0);
            _InterlockedOr((volatile signed __int32 *)(a1 + 36), 0x10u);
LABEL_21:
            v15 = *(unsigned int *)(a1 + 6288);
            *(_QWORD *)(a1 + 8 * v15 + 6296) = MEMORY[0xFFFFF78000000320];
            *(_DWORD *)(a1 + 4 * v15 + 6328) = v6;
            *(_DWORD *)(a1 + 6288) = ((unsigned __int8)*(_DWORD *)(a1 + 6288) + 1) & 3;
            return (unsigned int)v14;
          }
LABEL_19:
          if ( *(_BYTE *)(a1 + 2132) == 1 && (_DWORD)v5 != -3 && (v24 = *(_DWORD *)(a1 + 40)) != 0 )
          {
            while ( *(_BYTE *)(v4 + a1 + 1792) != 1 )
            {
              if ( ++v4 >= v24 )
                goto LABEL_20;
            }
          }
          else
          {
LABEL_20:
            _InterlockedAnd((volatile signed __int32 *)(a1 + 36), 0xFFFFFFEF);
          }
          goto LABEL_21;
        }
        return 0;
      }
      if ( *(_BYTE *)(v5 + a1 + 1792) == ((_BYTE)a2 != 0) )
        return 0;
      v10 = 0;
    }
    else
    {
      v10 = *(_BYTE *)(a1 + 1792) == ((_BYTE)a2 != 0);
    }
    if ( !v10 )
      goto LABEL_5;
    return 0;
  }
  v18 = WdLogNewEntry5_WdAssertion(0LL, a2, a3);
  WdLogEvent5_WdAssertion(v18);
  return 0LL;
}
