/*
 * XREFs of ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1C024E320
 * Callers:
 *     xxxMNCompute @ 0x1C0034BC0 (xxxMNCompute.c)
 * Callees:
 *     GreGetTextExtentW @ 0x1C0024ECC (GreGetTextExtentW.c)
 *     GetDPIMetrics @ 0x1C0033368 (GetDPIMetrics.c)
 *     MNGetpItemFromIndex @ 0x1C00350E0 (MNGetpItemFromIndex.c)
 *     MNIsOwnerDrawItem @ 0x1C003583C (MNIsOwnerDrawItem.c)
 *     GetDpiForSystem @ 0x1C005DE40 (GetDpiForSystem.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     GetOemBitmapInfoForDpi @ 0x1C00FE61C (GetOemBitmapInfoForDpi.c)
 *     CALL_LPK @ 0x1C014E024 (CALL_LPK.c)
 *     xxxClientGetTextExtentPointW @ 0x1C014E388 (xxxClientGetTextExtentPointW.c)
 *     FindCharPosition @ 0x1C025DCAC (FindCharPosition.c)
 */

__int64 __fastcall xxxMNRecalcTabStrings(HDC a1, __int64 a2, unsigned int a3, unsigned int a4, int a5, int a6)
{
  unsigned int v6; // edi
  int v8; // r15d
  unsigned int v9; // ebp
  __int64 v11; // rcx
  int v12; // r13d
  unsigned int v13; // r12d
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // r8
  __int64 v17; // rcx
  int v18; // r8d
  int v19; // r11d
  int v20; // r9d
  __int64 v21; // rcx
  int v22; // r10d
  __int64 ThreadWin32Thread; // rax
  int v24; // eax
  unsigned int v25; // r8d
  __int64 v26; // r10
  WCHAR *v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 DPIMetrics; // rax
  __int64 v33; // rcx
  unsigned int v34; // eax
  unsigned int DpiForSystem; // eax
  __int64 v36; // r8
  char *OemBitmapInfoForDpi; // rbx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rcx
  __int64 v43; // rax
  int v44; // r8d
  struct tagSIZE v46; // [rsp+30h] [rbp-48h] BYREF
  __int64 v47; // [rsp+38h] [rbp-40h]
  int CharPosition; // [rsp+88h] [rbp+10h]

  v6 = a3;
  v8 = a6 + a5;
  v9 = 0;
  if ( a3 < *(_DWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 40LL) + 44LL) && a3 <= a4 )
  {
    v11 = *(_QWORD *)(a2 + 16);
    v12 = 0;
    v13 = a3;
    if ( !v11 )
      v11 = **(_QWORD **)a2;
    v15 = MNGetpItemFromIndex(v11, a3);
    if ( v6 < a4 )
    {
      while ( 1 )
      {
        if ( !v15 )
        {
LABEL_22:
          v6 = a3;
          goto LABEL_23;
        }
        v17 = *(_QWORD *)(a2 + 16);
        if ( !v17 )
          v17 = **(_QWORD **)a2;
        v18 = MNIsOwnerDrawItem(v17, (_DWORD **)v15, v16);
        v19 = 0;
        *(_DWORD *)(*(_QWORD *)v15 + 80LL) = v20;
        v21 = *(_QWORD *)(v15 + 24);
        v47 = v21;
        if ( v21 )
        {
          if ( *(_DWORD *)(*(_QWORD *)v15 + 48LL) )
            break;
        }
        if ( v18 )
          goto LABEL_28;
LABEL_17:
        v33 = *(_QWORD *)(a2 + 16);
        v34 = v19 + v8;
        if ( v19 + v8 <= (int)v9 )
          v34 = v9;
        ++v13;
        v9 = v34;
        if ( !v33 )
          v33 = **(_QWORD **)a2;
        v15 = MNGetpItemFromIndex(v33, v13);
        if ( v13 >= a4 )
          goto LABEL_22;
      }
      if ( !v18 )
      {
        v46 = 0LL;
        CharPosition = FindCharPosition(v21, 9LL);
        if ( CharPosition < v22 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          v24 = CALL_LPK(ThreadWin32Thread);
          v27 = (WCHAR *)(v26 + 2);
          if ( v24 )
            xxxClientGetTextExtentPointW(a1, v27, v25, &v46);
          else
            GreGetTextExtentW(a1, v27, v25, &v46, 1u);
          DPIMetrics = GetDPIMetrics(v29, v28, v30, v31);
          v19 = *(_DWORD *)(DPIMetrics + 8) + v46.cx;
        }
        goto LABEL_17;
      }
LABEL_28:
      ++v12;
      goto LABEL_17;
    }
LABEL_23:
    if ( v12 != a4 - v6 )
    {
      DpiForSystem = GetDpiForSystem(v14);
      OemBitmapInfoForDpi = GetOemBitmapInfoForDpi(63LL, DpiForSystem, v36);
      v9 += *(_DWORD *)(GetDPIMetrics(v39, v38, v40, v41) + 8) + *((__int16 *)OemBitmapInfoForDpi + 2);
    }
    v42 = *(_QWORD *)(a2 + 16);
    if ( !v42 )
      v42 = **(_QWORD **)a2;
    while ( 1 )
    {
      v43 = MNGetpItemFromIndex(v42, v6);
      if ( v6 >= a4 || !v43 )
        break;
      ++v6;
      *(_DWORD *)(*(_QWORD *)v43 + 72LL) = v44;
      v42 = *(_QWORD *)(a2 + 16);
      if ( !v42 )
        v42 = **(_QWORD **)a2;
    }
  }
  return v9;
}
