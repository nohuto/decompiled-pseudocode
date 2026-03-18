/*
 * XREFs of GreGetNearestColor @ 0x1C00A4250
 * Callers:
 *     SetSysColor @ 0x1C00A6AF4 (SetSysColor.c)
 * Callees:
 *     ulIndexToRGB @ 0x1C001B900 (ulIndexToRGB.c)
 *     ulGetNearestIndexFromColorref @ 0x1C00322B0 (ulGetNearestIndexFromColorref.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0071D3C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C007BEC0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00873F0 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5238 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00A57E0 (-vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C00A58A8 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetNearestColor(HDC a1, unsigned int a2)
{
  __int64 v3; // r14
  __int64 v4; // rdx
  int v5; // r8d
  SURFACE *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rbx
  int v9; // ecx
  __int64 v10; // rax
  tagPALETTEENTRY NearestIndexFromColorref; // eax
  _QWORD v13[2]; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v14[32]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v15; // [rsp+50h] [rbp-30h] BYREF
  char v16; // [rsp+60h] [rbp-20h]

  DCOBJ::DCOBJ((DCOBJ *)v13, a1);
  v3 = v13[0];
  if ( v13[0] )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v14);
    DEVLOCKOBJ::vLockNoDrawing((DEVLOCKOBJ *)v14, (struct XDCOBJ *)v13);
    v6 = *(SURFACE **)(v3 + 496);
    v7 = *(_QWORD *)(v3 + 88);
    if ( !v6 )
      v6 = SURFACE::pdibDefault;
    if ( (*(_DWORD *)(v3 + 32) & 0xFFFFFFFD) != 0 )
      v8 = *((_QWORD *)v6 + 16);
    else
      v8 = *(_QWORD *)(*(_QWORD *)(v3 + 48) + 1808LL);
    v9 = *(_DWORD *)(v3 + 120);
    if ( (v9 & 1) == 0 || !*(_QWORD *)(*(_QWORD *)(v3 + 976) + 248LL) || (v9 & 0x10000000) == 0 )
    {
      if ( (a2 & 0x1000000) != 0 || !v8 || *(_DWORD *)(v8 + 28) )
      {
        NearestIndexFromColorref = ulGetNearestIndexFromColorref(v8, *(_QWORD *)(v3 + 88), (tagPALETTEENTRY)a2, 1u);
        a2 = ulIndexToRGB((struct _ERESOURCE *)v8, v7, *(_DWORD *)&NearestIndexFromColorref);
      }
      else
      {
        a2 &= 0xFFFFFFu;
      }
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v14, v4, v5);
    v10 = v15;
    if ( v15 )
    {
      if ( v16 )
      {
        *(_DWORD *)(v15 + 40) &= ~2u;
        v10 = v15;
        v16 = 0;
      }
      if ( v10 )
        XDCOBJ::vUnlockFast((XDCOBJ *)&v15);
    }
  }
  else
  {
    a2 = -1;
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v13);
  return a2;
}
