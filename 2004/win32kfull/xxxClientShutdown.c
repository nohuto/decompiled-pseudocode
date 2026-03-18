/*
 * XREFs of xxxClientShutdown @ 0x1C00C07DC
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00ACEC8 (xxxRealDefWindowProc.c)
 * Callees:
 *     BuildHwndList @ 0x1C006B520 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C006CD90 (FreeHwndList.c)
 *     ?xxxClientShutdown2@@YAJPEAUtagBWL@@I_K@Z @ 0x1C00C0864 (-xxxClientShutdown2@@YAJPEAUtagBWL@@I_K@Z.c)
 */

__int64 __fastcall xxxClientShutdown(__int64 a1, unsigned __int64 a2)
{
  unsigned int v3; // ebx
  struct tagBWL *v4; // rax
  struct tagBWL *v5; // rdi

  v3 = 2;
  v4 = BuildHwndList(
         *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 448LL) + 8LL) + 24LL) + 112LL),
         2,
         *(_QWORD *)(a1 + 16));
  v5 = v4;
  if ( !v4 )
    return 1LL;
  if ( (a2 & 2) != 0 )
    v3 = xxxClientShutdown2(v4, 0x11u, a2);
  else
    xxxClientShutdown2(v4, 0x16u, a2);
  FreeHwndList(v5);
  return v3;
}
