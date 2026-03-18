/*
 * XREFs of ?MulEndDxInterop@@YGHPAU_SURFOBJ@@HPAHPAX@Z @ 0x20340F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall MulEndDxInterop(struct _SURFOBJ *a1, int a2, int *a3, void *a4)
{
  int v4; // edx
  int v5; // ecx
  int (__stdcall *v6)(int, int, int *, void *); // eax

  v4 = 0;
  v5 = *(_DWORD *)(*((_DWORD *)a1->dhsurf + 1) + 4 * *((_DWORD *)a1->dhsurf + 2));
  v6 = *(int (__stdcall **)(int, int, int *, void *))(*(_DWORD *)(v5 + 12) + 2300);
  if ( v6 )
    return v6(v5, a2, a3, a4);
  return v4;
}
