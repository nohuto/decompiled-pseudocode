/*
 * XREFs of ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C024BA44
 * Callers:
 *     xxxDrawMenuBarUnderlines @ 0x1C0122314 (xxxDrawMenuBarUnderlines.c)
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C024BC0C (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 * Callees:
 *     GreGetTextExtentW @ 0x1C0024ECC (GreGetTextExtentW.c)
 *     GetDPIMetrics @ 0x1C0033368 (GetDPIMetrics.c)
 *     MNGetpItemIndex @ 0x1C00364B0 (MNGetpItemIndex.c)
 *     NtGdiPatBlt @ 0x1C00AF630 (NtGdiPatBlt.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     CALL_LPK @ 0x1C014E024 (CALL_LPK.c)
 *     xxxClientGetTextExtentPointW @ 0x1C014E388 (xxxClientGetTextExtentPointW.c)
 */

__int64 __fastcall xxxDrawItemUnderline(
        __int64 **a1,
        __int64 a2,
        HDC a3,
        int a4,
        int a5,
        unsigned __int16 *a6,
        unsigned int a7)
{
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r12
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 DPIMetrics; // rax
  unsigned int v23; // r15d
  WCHAR *v24; // r10
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  bool v30; // zf
  __int64 v31; // rax
  __int64 v32; // rax
  struct tagSIZE v33; // [rsp+30h] [rbp-28h] BYREF
  struct tagSIZE v34; // [rsp+38h] [rbp-20h] BYREF

  result = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v16 = result;
  if ( a7 == 0xFFFF )
    return result;
  if ( *(_DWORD *)(*(_QWORD *)a2 + 84LL) == 0x7FFFFFFF
    || (v13 = *(unsigned int *)(PsGetCurrentProcessWin32Process(v13, v12, v14) + 760), (v13 & 0xF) != 0) )
  {
    if ( a7 )
    {
      v33 = 0LL;
      if ( (unsigned int)CALL_LPK(v16) )
      {
        xxxClientGetTextExtentPointW(a3, a6, a7, &v33);
        v17 = (__int64)a1[2];
        if ( !v17 )
          v17 = **a1;
        result = MNGetpItemIndex(v17, a2);
        if ( (_DWORD)result == -1 )
          return result;
      }
      else
      {
        GreGetTextExtentW(a3, a6, a7, &v33, 1u);
      }
      DPIMetrics = GetDPIMetrics(v19, v18, v20, v21);
      v13 = (unsigned int)(v33.cx - *(_DWORD *)(DPIMetrics + 16));
      *(_DWORD *)(*(_QWORD *)a2 + 84LL) = v13;
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)a2 + 84LL) = 0;
    }
  }
  v23 = *(_DWORD *)(*(_QWORD *)a2 + 84LL) + a4;
  if ( *(_DWORD *)(*(_QWORD *)a2 + 88LL) )
  {
LABEL_21:
    v32 = GetDPIMetrics(v13, v12, v14, v15);
    return NtGdiPatBlt(a3, v23, *(_DWORD *)(v32 + 24) + a5, *(_DWORD *)(*(_QWORD *)a2 + 88LL), 1, 15728673);
  }
  v34 = 0LL;
  if ( (unsigned int)CALL_LPK(v16) )
  {
    xxxClientGetTextExtentPointW(a3, v24, 1, &v34);
    v25 = (__int64)a1[2];
    if ( !v25 )
      v25 = **a1;
    result = MNGetpItemIndex(v25, a2);
    v30 = (_DWORD)result == -1;
  }
  else
  {
    result = GreGetTextExtentW(a3, v24, 1u, &v34, 1u);
    v30 = (_DWORD)result == 0;
  }
  if ( !v30 )
  {
    v31 = GetDPIMetrics(v27, v26, v28, v29);
    v13 = (unsigned int)(v34.cx - *(_DWORD *)(v31 + 16));
    *(_DWORD *)(*(_QWORD *)a2 + 88LL) = v13;
    goto LABEL_21;
  }
  return result;
}
