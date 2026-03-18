/*
 * XREFs of _NtGdiScaleViewportExtEx@24 @ 0x21DB0F
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QAE@PAUHDC__@@@Z @ 0x579AC (--0DCOBJ@@QAE@PAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QAE@XZ @ 0x5E67A (--1DCOBJ@@QAE@XZ.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     ?MirrorWindowOrg@DC@@QAEXXZ @ 0x21C7B3 (-MirrorWindowOrg@DC@@QAEXXZ.c)
 */

int __stdcall NtGdiScaleViewportExtEx(HDC a1, int a2, int a3, int a4, int a5, ULONG a6)
{
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  _DWORD *v9; // ecx
  int v10; // eax
  int v11; // edi
  int v12; // eax
  DC *v14[3]; // [esp+10h] [ebp-28h] BYREF
  int v15; // [esp+1Ch] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+20h] [ebp-18h]
  int v17; // [esp+48h] [ebp+10h]

  v15 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v14, a1);
  if ( v14[0] )
  {
    if ( a6 )
    {
      ms_exc.registration.TryLevel = 0;
      if ( (a6 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a6 >= _MmUserProbeAddress )
        *(_BYTE *)_MmUserProbeAddress = 0;
      *(_BYTE *)a6 = *(_BYTE *)a6;
      *(_BYTE *)(a6 + 4) = *(_BYTE *)(a6 + 4);
      v6 = *((_DWORD *)v14[0] + 255);
      v7 = *(_DWORD *)(v6 + 332);
      v8 = *(_DWORD *)(v6 + 336);
      *(_DWORD *)a6 = v7;
      *(_DWORD *)(a6 + 4) = v8;
      ms_exc.registration.TryLevel = -2;
    }
    v9 = (_DWORD *)*((_DWORD *)v14[0] + 255);
    if ( v9[36] <= 6u )
      goto LABEL_18;
    v10 = a2 * v9[83];
    v11 = a4 * v9[84];
    if ( a3 && a5 && (v10 != 0x80000000 || a3 != -1) && (v11 != 0x80000000 || a5 != -1) )
    {
      v17 = v10 / a3;
      v12 = v11 / a5;
      if ( v17 )
      {
        if ( v12 )
        {
          v9[83] = v17;
          *(_DWORD *)(*((_DWORD *)v14[0] + 255) + 336) = v12;
          DC::MirrorWindowOrg(v14[0]);
          *(_DWORD *)(*((_DWORD *)v14[0] + 255) + 340) |= 0x4090u;
LABEL_18:
          v15 = 1;
        }
      }
    }
  }
  DCOBJ::~DCOBJ((DCOBJ *)v14);
  return v15;
}
