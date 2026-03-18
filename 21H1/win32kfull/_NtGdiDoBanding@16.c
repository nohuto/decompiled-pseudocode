/*
 * XREFs of _NtGdiDoBanding@16 @ 0x1D932A
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     ?GreDoBanding@@YGHPAUHDC__@@HPAU_POINTL@@PAUtagSIZE@@@Z @ 0x1D7212 (-GreDoBanding@@YGHPAUHDC__@@HPAU_POINTL@@PAUtagSIZE@@@Z.c)
 */

int __stdcall NtGdiDoBanding(HDC a1, int a2, ULONG a3, ULONG a4)
{
  int v4; // edx
  struct _POINTL *v6; // [esp+0h] [ebp-38h]
  struct tagSIZE *v7; // [esp+4h] [ebp-34h]
  int v8; // [esp+10h] [ebp-28h] BYREF
  int v9; // [esp+14h] [ebp-24h]
  struct HDC__ v10; // [esp+18h] [ebp-20h] BYREF
  int v11; // [esp+1Ch] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+20h] [ebp-18h]

  v10.unused = 0;
  v11 = 0;
  v8 = 0;
  v9 = 0;
  v4 = GreDoBanding(a2, a1, &v10, &v8, v6, v7);
  if ( v4 )
  {
    ms_exc.registration.TryLevel = 0;
    if ( (a3 & 3) != 0 )
      goto LABEL_9;
    if ( a3 >= _MmUserProbeAddress )
      *(_BYTE *)_MmUserProbeAddress = 0;
    *(_BYTE *)a3 = *(_BYTE *)a3;
    *(_BYTE *)(a3 + 4) = *(_BYTE *)(a3 + 4);
    *(_DWORD *)(struct HDC__ *)a3 = v10;
    *(_DWORD *)(a3 + 4) = v11;
    if ( (a4 & 3) != 0 )
LABEL_9:
      ExRaiseDatatypeMisalignment();
    if ( a4 >= _MmUserProbeAddress )
      *(_BYTE *)_MmUserProbeAddress = 0;
    *(_BYTE *)a4 = *(_BYTE *)a4;
    *(_BYTE *)(a4 + 4) = *(_BYTE *)(a4 + 4);
    *(_DWORD *)a4 = v8;
    *(_DWORD *)(a4 + 4) = v9;
    ms_exc.registration.TryLevel = -2;
  }
  return v4;
}
