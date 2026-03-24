/*
 * XREFs of ?VidSchiIndependentVidPnAdaptiveVSync@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_VSYNC_COOKIE@@I_N2@Z @ 0x1C002B0AC
 * Callers:
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0005790 (VidSchiProcessDpcVSyncCookie.c)
 * Callees:
 *     ?NumberOfVSyncWaiter@DXGADAPTER@@QEAAKI@Z @ 0x1C0002758 (-NumberOfVSyncWaiter@DXGADAPTER@@QEAAKI@Z.c)
 */

void __fastcall VidSchiIndependentVidPnAdaptiveVSync(
        struct _VIDSCH_GLOBAL *a1,
        struct _VIDSCH_VSYNC_COOKIE *a2,
        unsigned int a3,
        char a4)
{
  __int64 v4; // r10
  __int64 v6; // r11
  int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // eax

  v4 = a3;
  if ( a4 )
  {
    *((_DWORD *)a1 + a3 + 564) = 0;
  }
  else if ( *((_BYTE *)a1 + 45) == 1 && *((_DWORD *)a1 + 581) )
  {
    if ( _InterlockedExchange((volatile __int32 *)a1 + a3 + 548, 0)
      || (unsigned int)DXGADAPTER::NumberOfVSyncWaiter(*((DXGADAPTER **)a1 + 2), a3)
      || *((_DWORD *)a1 + v4 + 183)
      || *((_DWORD *)a1 + 201)
      || *((_DWORD *)a1 + 4 * (unsigned int)v4 + 471) )
    {
      *((_DWORD *)a1 + v4 + 564) = 0;
    }
    else if ( (*(_BYTE *)(v6 + 104) & 1) == 0 )
    {
      v7 = *((_DWORD *)a1 + v4 + 564);
      if ( v7 != -1 )
      {
        v8 = v7 + 1;
        *((_DWORD *)a1 + v4 + 564) = v8;
        v9 = *((_DWORD *)a1 + 581);
        if ( v8 == v9 )
        {
          *((_DWORD *)a1 + 547) |= 1 << v4;
          if ( *((_DWORD *)a1 + 546) != 1 )
          {
            ExQueueWorkItem((PWORK_QUEUE_ITEM)((char *)a1 + 2152), CriticalWorkQueue);
            *((_DWORD *)a1 + 546) = 1;
          }
        }
        else if ( v8 > v9 )
        {
          *((_DWORD *)a1 + v4 + 564) = v9 + 1;
        }
      }
    }
  }
}
