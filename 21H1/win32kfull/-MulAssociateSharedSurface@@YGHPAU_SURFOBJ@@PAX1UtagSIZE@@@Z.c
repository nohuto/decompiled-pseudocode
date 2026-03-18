/*
 * XREFs of ?MulAssociateSharedSurface@@YGHPAU_SURFOBJ@@PAX1UtagSIZE@@@Z @ 0x201F64
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall MulAssociateSharedSurface(struct _SURFOBJ *a1, void *a2, void *a3, struct tagSIZE a4)
{
  int v4; // edx
  int v5; // ecx
  int (__stdcall *v6)(int, void *, void *, LONG, LONG); // eax

  v4 = 0;
  v5 = *(_DWORD *)(*((_DWORD *)a1->dhsurf + 1) + 4 * *((_DWORD *)a1->dhsurf + 2));
  v6 = *(int (__stdcall **)(int, void *, void *, LONG, LONG))(*(_DWORD *)(v5 + 12) + 2284);
  if ( v6 )
    return v6(v5, a2, a3, a4.cx, a4.cy);
  return v4;
}
