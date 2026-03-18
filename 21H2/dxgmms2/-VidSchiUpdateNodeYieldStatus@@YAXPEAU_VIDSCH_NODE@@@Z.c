/*
 * XREFs of ?VidSchiUpdateNodeYieldStatus@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C00181D8
 * Callers:
 *     VidSchiSelectContext @ 0x1C0009E90 (VidSchiSelectContext.c)
 * Callees:
 *     ?VidSchiStopNodeYield@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C001757C (-VidSchiStopNodeYield@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     VidSchiStartNodeYield @ 0x1C00182B0 (VidSchiStartNodeYield.c)
 *     VidSchiMonitorRefreshPeriodFromNode @ 0x1C001836C (VidSchiMonitorRefreshPeriodFromNode.c)
 *     McTemplateK0pqxxxx_EtwWriteTransfer @ 0x1C0037D74 (McTemplateK0pqxxxx_EtwWriteTransfer.c)
 */

void __fastcall VidSchiUpdateNodeYieldStatus(struct _VIDSCH_NODE *a1)
{
  __int64 v1; // rbp
  int v3; // ecx
  int v4; // esi
  LARGE_INTEGER v5; // rdx
  LARGE_INTEGER v6; // rdi
  LARGE_INTEGER v7; // r8
  LARGE_INTEGER v8; // r9
  __int64 v9; // rax
  unsigned int v10; // eax
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rax
  union _LARGE_INTEGER v13; // [rsp+60h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 3);
  v3 = *(_DWORD *)(v1 + 200);
  v13.QuadPart = 0LL;
  v4 = ~((1 << (v3 + 1)) - 1);
  v6 = KeQueryPerformanceCounter(&v13);
  v9 = *((_QWORD *)a1 + 250);
  if ( (v4 & *((_DWORD *)a1 + 443)) != 0 )
  {
    if ( v9 )
    {
      v11 = v6.QuadPart - v9;
      v12 = *((_QWORD *)a1 + 251);
      if ( v11 >= v12 )
      {
        VidSchiStopNodeYield((unsigned __int64)a1, v5.QuadPart, v7.QuadPart);
      }
      else
      {
        *((_QWORD *)a1 + 250) = 0LL;
        *((_QWORD *)a1 + 251) = v12 - v11;
      }
    }
    if ( *((_BYTE *)a1 + 2024) && (byte_1C006E941 & 1) != 0 )
      McTemplateK0pqxxxx_EtwWriteTransfer(
        *((_DWORD *)a1 + 443) & v4,
        v5.LowPart,
        v7.LowPart,
        *(_QWORD *)(v1 + 16),
        0,
        *((_WORD *)a1 + 2),
        *((_BYTE *)a1 + 1772) & v4,
        0,
        0);
  }
  else if ( !v9 )
  {
    v10 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))VidSchiMonitorRefreshPeriodFromNode)(
            a1,
            (LARGE_INTEGER)v5.QuadPart,
            (LARGE_INTEGER)v7.QuadPart,
            (LARGE_INTEGER)v8.QuadPart);
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))VidSchiStartNodeYield)(
      a1,
      (LARGE_INTEGER)v6.QuadPart,
      (union _LARGE_INTEGER)v13.QuadPart,
      v10);
  }
}
