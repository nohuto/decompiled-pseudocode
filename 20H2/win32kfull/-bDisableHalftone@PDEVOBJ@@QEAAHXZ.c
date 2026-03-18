/*
 * XREFs of ?bDisableHalftone@PDEVOBJ@@QEAAHXZ @ 0x1C0117328
 * Callers:
 *     PDEVOBJ_bDisableHalftoneWrap @ 0x1C0117310 (PDEVOBJ_bDisableHalftoneWrap.c)
 * Callees:
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C006D308 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     HT_DestroyDeviceHalftoneInfo @ 0x1C0117418 (HT_DestroyDeviceHalftoneInfo.c)
 */

__int64 __fastcall PDEVOBJ::bDisableHalftone(PDEVOBJ *this)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx
  _QWORD *v4; // r14
  __int64 i; // rbx
  _QWORD *v6; // rcx
  unsigned int v7; // edi
  char v8; // bp
  bool v9; // bl
  bool v10; // al
  __int64 v11; // rcx
  bool v12; // al
  __int64 ThreadWin32Thread; // r15
  bool v15; // bl
  int v16; // eax

  v2 = PDEVOBJ::pDevHTInfo(this);
  v3 = *(_QWORD *)this;
  v4 = v2;
  if ( (*(_DWORD *)(*(_QWORD *)this + 40LL) & 0x100) != 0 )
  {
    for ( i = 1456LL; i < 1504; i += 8LL )
      bDeleteSurface(*(_QWORD *)(i + *(_QWORD *)this));
    v3 = *(_QWORD *)this;
  }
  v6 = *(_QWORD **)(v3 + 1512);
  v7 = 1;
  v8 = 1;
  if ( v6 )
  {
    v9 = (unsigned int)bDeletePalette(*v6, 0LL, 0LL) != 0;
    v10 = (unsigned int)HT_DestroyDeviceHalftoneInfo(*(_QWORD *)(*(_QWORD *)this + 1512LL)) != 0;
    if ( !v9 || !v10 )
      v8 = 0;
  }
  v11 = *(_QWORD *)this;
  v12 = 1;
  if ( v4 != *(_QWORD **)(*(_QWORD *)this + 1512LL) )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v15 = (unsigned int)bDeletePalette(*v4, 0LL, 0LL) != 0;
    v16 = HT_DestroyDeviceHalftoneInfo(v4);
    v12 = v15 && v16;
    *(_QWORD *)(ThreadWin32Thread + 288) = 0LL;
    v11 = *(_QWORD *)this;
  }
  *(_QWORD *)(v11 + 1512) = 0LL;
  if ( !v8 || !v12 )
    return 0;
  return v7;
}
