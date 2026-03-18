/*
 * XREFs of ?MulAccumulateD3DDirtyRect@@YGHPAU_SURFOBJ@@PAUtagCDDDXGK_REDIRBITMAPPRESENTINFO@@@Z @ 0x20199F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall MulAccumulateD3DDirtyRect(struct _SURFOBJ *a1, struct tagCDDDXGK_REDIRBITMAPPRESENTINFO *a2)
{
  int v2; // edx
  int v3; // ecx
  int (__stdcall *v4)(int, struct tagCDDDXGK_REDIRBITMAPPRESENTINFO *); // eax

  v2 = 0;
  v3 = *(_DWORD *)(*((_DWORD *)a1->dhsurf + 1) + 4 * *((_DWORD *)a1->dhsurf + 2));
  v4 = *(int (__stdcall **)(int, struct tagCDDDXGK_REDIRBITMAPPRESENTINFO *))(*(_DWORD *)(v3 + 12) + 2292);
  if ( v4 )
    return v4(v3, a2);
  return v2;
}
