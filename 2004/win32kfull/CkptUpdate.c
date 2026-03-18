/*
 * XREFs of CkptUpdate @ 0x1C00257AC
 * Callers:
 *     CkptRestore @ 0x1C00256D4 (CkptRestore.c)
 *     _GetWindowPlacement @ 0x1C00278AC (_GetWindowPlacement.c)
 * Callees:
 *     _MonitorFromRect @ 0x1C0024B70 (_MonitorFromRect.c)
 *     _GetDesktopWindow @ 0x1C006F290 (_GetDesktopWindow.c)
 *     GetMonitorMaxArea @ 0x1C00E7954 (GetMonitorMaxArea.c)
 */

char __fastcall CkptUpdate(__int64 a1, struct tagRECT *a2, struct tagRECT *a3)
{
  __int64 MonitorMaxArea; // rax
  char v7; // cl
  char v8; // cl
  struct tagRECT v9; // xmm0
  int v10; // edx
  __int64 v11; // r8
  __int64 v12; // rax
  __int128 v13; // xmm0
  _BYTE v15[24]; // [rsp+20h] [rbp-18h] BYREF

  MonitorMaxArea = *(_QWORD *)(a1 + 40);
  v7 = *(_BYTE *)(MonitorMaxArea + 31);
  if ( (v7 & 0x20) != 0 )
  {
    a3[3].left |= 0x20u;
    a3[2].left = a2->left;
    LODWORD(MonitorMaxArea) = a2->top;
    a3[2].top = MonitorMaxArea;
  }
  else if ( (v7 & 1) != 0 )
  {
    a3[3].left |= 0x40u;
    if ( *(_QWORD *)(a1 + 104) == GetDesktopWindow(a1) )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 19LL) & 0x40) != 0 )
      {
        LODWORD(MonitorMaxArea) = -1;
        *(_DWORD *)(v11 + 48) = v10 & 0xFFFFFFBF;
        *(_DWORD *)(v11 + 40) = -1;
      }
      else
      {
        v12 = MonitorFromRect(a2, 1LL, 0);
        MonitorMaxArea = GetMonitorMaxArea(v15, a1, v12);
        v13 = *(_OWORD *)MonitorMaxArea;
        a3[2].right = a2->left - *(_OWORD *)MonitorMaxArea;
        LODWORD(MonitorMaxArea) = a2->top - DWORD1(v13);
      }
    }
    else
    {
      *(_DWORD *)(v11 + 40) = a2->left;
      LODWORD(MonitorMaxArea) = a2->top;
    }
    a3[2].bottom = MonitorMaxArea;
  }
  else
  {
    v8 = *(_BYTE *)(MonitorMaxArea + 233);
    v9 = *a2;
    LOBYTE(MonitorMaxArea) = v8 & 3;
    if ( (v8 & 3) == 3 || (v8 & 1) != 0 || (v8 & 2) != 0 )
      a3[1] = v9;
    else
      *a3 = v9;
  }
  return MonitorMaxArea;
}
