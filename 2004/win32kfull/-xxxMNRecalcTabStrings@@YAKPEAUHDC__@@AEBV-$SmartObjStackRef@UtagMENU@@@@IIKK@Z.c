/*
 * XREFs of ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1C024F928
 * Callers:
 *     xxxMNCompute @ 0x1C00641D8 (xxxMNCompute.c)
 * Callees:
 *     GreGetTextExtentW @ 0x1C000C3CC (GreGetTextExtentW.c)
 *     GetDPIMetrics @ 0x1C00608B0 (GetDPIMetrics.c)
 *     MNGetpItemFromIndex @ 0x1C00646F8 (MNGetpItemFromIndex.c)
 *     GetDpiForSystem @ 0x1C00A4C48 (GetDpiForSystem.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     MNIsOwnerDrawItem @ 0x1C00AECA0 (MNIsOwnerDrawItem.c)
 *     GetOemBitmapInfoForDpi @ 0x1C0101EAC (GetOemBitmapInfoForDpi.c)
 *     CALL_LPK @ 0x1C014B814 (CALL_LPK.c)
 *     xxxClientGetTextExtentPointW @ 0x1C014BB78 (xxxClientGetTextExtentPointW.c)
 *     FindCharPosition @ 0x1C025F2C0 (FindCharPosition.c)
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
  __int64 v17; // r9
  __int64 v18; // rcx
  int v19; // r8d
  int v20; // r11d
  int v21; // r9d
  __int64 v22; // rcx
  int v23; // r10d
  __int64 ThreadWin32Thread; // rax
  int v25; // eax
  unsigned int v26; // r8d
  __int64 v27; // r10
  WCHAR *v28; // rdx
  __int64 v29; // rcx
  __int64 DPIMetrics; // rax
  __int64 v31; // rcx
  unsigned int v32; // eax
  unsigned int DpiForSystem; // eax
  char *OemBitmapInfoForDpi; // rbx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rax
  int v38; // r8d
  struct tagSIZE v40; // [rsp+30h] [rbp-48h] BYREF
  __int64 v41; // [rsp+38h] [rbp-40h]
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
        v18 = *(_QWORD *)(a2 + 16);
        if ( !v18 )
          v18 = **(_QWORD **)a2;
        v19 = MNIsOwnerDrawItem(v18, (_DWORD **)v15, v16, v17);
        v20 = 0;
        *(_DWORD *)(*(_QWORD *)v15 + 80LL) = v21;
        v22 = *(_QWORD *)(v15 + 24);
        v41 = v22;
        if ( v22 )
        {
          if ( *(_DWORD *)(*(_QWORD *)v15 + 48LL) )
            break;
        }
        if ( v19 )
          goto LABEL_28;
LABEL_17:
        v31 = *(_QWORD *)(a2 + 16);
        v32 = v20 + v8;
        if ( v20 + v8 <= (int)v9 )
          v32 = v9;
        ++v13;
        v9 = v32;
        if ( !v31 )
          v31 = **(_QWORD **)a2;
        v15 = MNGetpItemFromIndex(v31, v13);
        if ( v13 >= a4 )
          goto LABEL_22;
      }
      if ( !v19 )
      {
        v40 = 0LL;
        CharPosition = FindCharPosition(v22, 9LL);
        if ( CharPosition < v23 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          v25 = CALL_LPK(ThreadWin32Thread);
          v28 = (WCHAR *)(v27 + 2);
          if ( v25 )
            xxxClientGetTextExtentPointW(a1, v28, v26, &v40);
          else
            GreGetTextExtentW(a1, v28, v26, &v40, 1u);
          DPIMetrics = GetDPIMetrics(v29);
          v20 = *(_DWORD *)(DPIMetrics + 8) + v40.cx;
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
      OemBitmapInfoForDpi = GetOemBitmapInfoForDpi(63LL, DpiForSystem);
      v9 += *(_DWORD *)(GetDPIMetrics(v35) + 8) + *((__int16 *)OemBitmapInfoForDpi + 2);
    }
    v36 = *(_QWORD *)(a2 + 16);
    if ( !v36 )
      v36 = **(_QWORD **)a2;
    while ( 1 )
    {
      v37 = MNGetpItemFromIndex(v36, v6);
      if ( v6 >= a4 || !v37 )
        break;
      ++v6;
      *(_DWORD *)(*(_QWORD *)v37 + 72LL) = v38;
      v36 = *(_QWORD *)(a2 + 16);
      if ( !v36 )
        v36 = **(_QWORD **)a2;
    }
  }
  return v9;
}
