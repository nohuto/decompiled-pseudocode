/*
 * XREFs of ?VidSchiUpdateNodeYieldStatus@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C0012FE4
 * Callers:
 *     VidSchiSelectContext @ 0x1C000A960 (VidSchiSelectContext.c)
 * Callees:
 *     VidSchiStartNodeYield @ 0x1C00130C0 (VidSchiStartNodeYield.c)
 *     VidSchiMonitorRefreshPeriodFromNode @ 0x1C001317C (VidSchiMonitorRefreshPeriodFromNode.c)
 *     ?VidSchiStopNodeYield@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C0013384 (-VidSchiStopNodeYield@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     McTemplateK0pqxxxx_EtwWriteTransfer @ 0x1C002E95C (McTemplateK0pqxxxx_EtwWriteTransfer.c)
 */

void __fastcall VidSchiUpdateNodeYieldStatus(struct _VIDSCH_NODE *a1)
{
  __int64 v1; // rbp
  int v3; // ecx
  int v4; // esi
  int v5; // edx
  LARGE_INTEGER v6; // rdi
  int v7; // r8d
  __int64 v8; // rax
  unsigned int refreshed; // eax
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rax
  union _LARGE_INTEGER v12; // [rsp+60h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 3);
  v3 = *(_DWORD *)(v1 + 192);
  v12.QuadPart = 0LL;
  v4 = ~((1 << (v3 + 1)) - 1);
  v6 = KeQueryPerformanceCounter(&v12);
  v8 = *((_QWORD *)a1 + 249);
  if ( (v4 & *((_DWORD *)a1 + 441)) != 0 )
  {
    if ( v8 )
    {
      v10 = v6.QuadPart - v8;
      v11 = *((_QWORD *)a1 + 250);
      if ( v10 >= v11 )
      {
        VidSchiStopNodeYield(a1);
      }
      else
      {
        *((_QWORD *)a1 + 249) = 0LL;
        *((_QWORD *)a1 + 250) = v11 - v10;
      }
    }
    if ( *((_BYTE *)a1 + 2016) && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0pqxxxx_EtwWriteTransfer(
        *((_DWORD *)a1 + 441) & v4,
        v5,
        v7,
        *(_QWORD *)(v1 + 16),
        0,
        *((_WORD *)a1 + 2),
        *((_BYTE *)a1 + 1764) & v4,
        0,
        0);
  }
  else if ( !v8 )
  {
    refreshed = VidSchiMonitorRefreshPeriodFromNode(a1);
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))VidSchiStartNodeYield)(
      a1,
      (LARGE_INTEGER)v6.QuadPart,
      (union _LARGE_INTEGER)v12.QuadPart,
      refreshed);
  }
}
