/*
 * XREFs of ?bParityViolatingXform@@YGHPAVDCOBJ@@@Z @ 0xAEC38
 * Callers:
 *     ?bGetNtoD_Win31@@YGHPAU_FD_XFORM@@PAUtagLOGFONTW@@AAVIFIOBJ@@PAVDCOBJ@@KQAU_POINTL@@H@Z @ 0x67D4A (-bGetNtoD_Win31@@YGHPAU_FD_XFORM@@PAUtagLOGFONTW@@AAVIFIOBJ@@PAVDCOBJ@@KQAU_POINTL@@H@Z.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall bParityViolatingXform(void *this)
{
  _DWORD *v1; // edx
  int v2; // eax
  int v4; // ecx
  int v5; // ecx
  BOOL v6; // ebx
  BOOL v7; // edx
  int v8; // eax
  bool v9; // sf
  BOOL v10; // ecx
  int v11; // ecx
  int v12; // ecx
  BOOL v13; // [esp+10h] [ebp-4h]
  BOOL v14; // [esp+10h] [ebp-4h]

  v1 = *(_DWORD **)this;
  v2 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)this + 1020) + 340);
  if ( (v2 & 2) != 0 )
  {
    if ( (v2 & 0x1000) != 0 )
      return 0;
    v4 = v1[60];
    v9 = v4 < 0;
    v13 = v4 > 0;
    v5 = v1[66];
    v6 = v9;
    v7 = v5 > 0;
    v8 = 0;
    v9 = v5 < 0;
    v10 = v13;
  }
  else
  {
    v11 = v1[117];
    v9 = v11 < 0;
    v14 = v11 > 0;
    v12 = v1[119];
    v6 = v9;
    v7 = v12 > 0;
    v8 = 0;
    v9 = v12 < 0;
    v10 = v14;
  }
  LOBYTE(v8) = v9;
  return v10 - v6 != v7 - v8;
}
