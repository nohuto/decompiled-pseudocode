/*
 * XREFs of MNEraseBackground @ 0x1C024C35C
 * Callers:
 *     xxxMenuWindowProc @ 0x1C023B6E0 (xxxMenuWindowProc.c)
 *     xxxMNInvertItem @ 0x1C024C7E0 (xxxMNInvertItem.c)
 * Callees:
 *     GetDPIMetrics @ 0x1C0033368 (GetDPIMetrics.c)
 *     MNGetpItemFromIndex @ 0x1C00350E0 (MNGetpItemFromIndex.c)
 *     GreSetBrushOrg @ 0x1C0037A28 (GreSetBrushOrg.c)
 *     NtGdiPatBlt @ 0x1C00AF630 (NtGdiPatBlt.c)
 *     GreGetBrushOrg @ 0x1C0152D8C (GreGetBrushOrg.c)
 */

__int64 __fastcall MNEraseBackground(HDC a1, __int64 a2, unsigned int a3, int a4, int a5, int a6)
{
  int v10; // r14d
  int v11; // edi
  int v12; // ecx
  unsigned int v13; // edx
  int v14; // r8d
  __int64 *v15; // rax
  int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rbx
  __int64 v22; // [rsp+68h] [rbp+10h] BYREF

  v22 = 0LL;
  v10 = 1;
  GreGetBrushOrg(a1, &v22);
  v11 = 3;
  v12 = *(_DWORD *)(*(_QWORD *)(a2 + 40) + 40LL) & 8;
  if ( (*(_DWORD *)(a2 + 124) & 3) != 0 )
  {
    v13 = *(_DWORD *)(a2 + 116);
    if ( v12 )
    {
      v11 = 0;
      LODWORD(v22) = 0;
      v14 = -*(_DWORD *)(*(_QWORD *)MNGetpItemFromIndex(a2, v13) + 68LL);
    }
    else
    {
      v11 = -3;
      LODWORD(v22) = -3;
      v15 = (__int64 *)MNGetpItemFromIndex(a2, v13);
      v16 = *(_DWORD *)(*v15 + 68);
      v14 = -3 - *(_DWORD *)(GetDPIMetrics(*v15, v17, v18, v19) + 28) - v16;
    }
    HIDWORD(v22) = v14;
    goto LABEL_8;
  }
  if ( v12 )
  {
    v22 = 0x300000003LL;
    v14 = 3;
LABEL_8:
    GreSetBrushOrg(a1, v11, v14, &v22);
    goto LABEL_10;
  }
  v10 = 0;
LABEL_10:
  v20 = GreSelectBrush(a1, *(_QWORD *)(*(_QWORD *)(a2 + 40) + 24LL));
  NtGdiPatBlt(a1, a3, a4, a5, a6, 15728673);
  if ( v10 )
    GreSetBrushOrg(a1, v22, SHIDWORD(v22), 0LL);
  return GreSelectBrush(a1, v20);
}
