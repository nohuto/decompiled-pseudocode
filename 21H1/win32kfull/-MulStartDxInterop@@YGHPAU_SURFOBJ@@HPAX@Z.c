/*
 * XREFs of ?MulStartDxInterop@@YGHPAU_SURFOBJ@@HPAX@Z @ 0x203EA8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall MulStartDxInterop(struct _SURFOBJ *a1, int a2, void *a3)
{
  int v3; // edx
  int v4; // ecx
  int (__stdcall *v5)(int, int, void *); // eax

  v3 = 0;
  v4 = *(_DWORD *)(*((_DWORD *)a1->dhsurf + 1) + 4 * *((_DWORD *)a1->dhsurf + 2));
  v5 = *(int (__stdcall **)(int, int, void *))(*(_DWORD *)(v4 + 12) + 2296);
  if ( v5 )
    return v5(v4, a2, a3);
  return v3;
}
