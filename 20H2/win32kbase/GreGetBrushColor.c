/*
 * XREFs of GreGetBrushColor @ 0x1C013E150
 * Callers:
 *     <none>
 * Callees:
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C001C198 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C001C1DC (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     GreReleaseHmgrSemaphore @ 0x1C003D970 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C005EA20 (GreAcquireHmgrSemaphore.c)
 */

__int64 __fastcall GreGetBrushColor(HBRUSH a1, int a2, int a3)
{
  unsigned int v4; // edi
  __int64 v5; // rdx
  int v6; // ecx
  int v7; // r8d
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = -1;
  GreAcquireHmgrSemaphore((__int64)a1, a2, a3);
  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v9, a1);
  if ( v9[0] && (unsigned int)(*(_DWORD *)(v9[0] + 80LL) - 6) <= 1 )
    v4 = *(_DWORD *)(v9[0] + 76LL);
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v9);
  GreReleaseHmgrSemaphore(v6, v5, v7);
  return v4;
}
