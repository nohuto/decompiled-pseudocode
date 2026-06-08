/*
 * XREFs of GetHwpPerfControlHandler @ 0x1C00069F0
 * Callers:
 *     <none>
 * Callees:
 *     IsHwpFastMsrSupported @ 0x1C0006D58 (IsHwpFastMsrSupported.c)
 *     IsHwpIdleOptimizationSupported @ 0x1C0006E74 (IsHwpIdleOptimizationSupported.c)
 *     IsHwpPackageControlSupported @ 0x1C0006F14 (IsHwpPackageControlSupported.c)
 */

__int64 __fastcall GetHwpPerfControlHandler(
        __int64 a1,
        _QWORD *a2,
        __int64 (__fastcall **a3)(),
        unsigned __int64 *a4,
        _QWORD *a5,
        bool *a6,
        int *a7)
{
  __int64 v7; // rax
  __int64 v8; // r10
  __int64 v9; // r11
  unsigned int v10; // edi
  __int64 (__fastcall *v11)(); // rax
  int v12; // ebx

  v7 = *(_QWORD *)(a1 + 112);
  v8 = 0LL;
  v9 = 0LL;
  v10 = -1073741637;
  if ( *(_BYTE *)(a1 + 93) )
  {
    if ( *(_BYTE *)(v7 + 128) != 127 || *(_BYTE *)(v7 + 129) != 8 || *(_BYTE *)(v7 + 130) != 16 )
      return v10;
    v8 = *(_QWORD *)(v7 + 132);
    v9 = 16711680LL;
  }
  if ( *(_BYTE *)(a1 + 94) )
  {
    if ( *(_BYTE *)(v7 + 152) != 127 || *(_BYTE *)(v7 + 153) != 8 || *(_BYTE *)(v7 + 154) )
      return v10;
    if ( v8 )
    {
      if ( v8 != *(_QWORD *)(v7 + 156) )
        return v10;
    }
    else
    {
      v8 = *(_QWORD *)(v7 + 156);
    }
    v9 |= 0xFFuLL;
  }
  if ( *(_BYTE *)(a1 + 95) )
  {
    if ( *(_BYTE *)(v7 + 176) != 127 || *(_BYTE *)(v7 + 177) != 8 || *(_BYTE *)(v7 + 178) != 8 )
      return v10;
    if ( v8 )
    {
      if ( v8 != *(_QWORD *)(v7 + 180) )
        return v10;
    }
    else
    {
      v8 = *(_QWORD *)(v7 + 180);
    }
    v9 |= 0xFF00uLL;
  }
  if ( *(_BYTE *)(a1 + 96) )
  {
    if ( *(_BYTE *)(v7 + 416) != 127 || *(_BYTE *)(v7 + 417) != 8 || *(_BYTE *)(v7 + 418) != 24 )
      return v10;
    if ( v8 )
    {
      if ( v8 != *(_QWORD *)(v7 + 420) )
        return v10;
    }
    else
    {
      v8 = *(_QWORD *)(v7 + 420);
    }
    v9 |= 0xFF000000uLL;
  }
  if ( *(_BYTE *)(a1 + 97) )
  {
    if ( *(_BYTE *)(v7 + 392) != 127 || *(_BYTE *)(v7 + 393) != 10 || *(_BYTE *)(v7 + 394) != 32 )
      return v10;
    if ( v8 )
    {
      if ( v8 != *(_QWORD *)(v7 + 396) )
        return v10;
    }
    else
    {
      v8 = *(_QWORD *)(v7 + 396);
    }
    v9 |= 0x3FF00000000uLL;
  }
  if ( !*(_BYTE *)(a1 + 98) && ((v8 - 1906) & 0xFFFFFFFFFFFFFFFDuLL) == 0 )
  {
    v10 = 0;
    *(_QWORD *)(a1 + 144) = v9;
    *a5 = PerfSelectionHwp;
    *a2 = PerfControlHwp;
    v11 = PerfControlHwpHidden;
    if ( dword_1C001CC18 == 1 )
      v11 = PerfControlHwpHv;
    *a3 = v11;
    *a4 = (unsigned __int64)PerfControlHwpPackage & -(__int64)((unsigned __int8)IsHwpPackageControlSupported() != 0);
    v12 = (unsigned __int8)IsHwpFastMsrSupported() != 0 ? 500 : 1000;
    *a6 = (unsigned __int8)IsHwpIdleOptimizationSupported() == 0;
    *a7 = v12;
  }
  return v10;
}
