/*
 * XREFs of ?bSetHTSurfInfo@@YGHPAU_SURFOBJ@@PAU_HTSURFACEINFO@@J@Z @ 0x2270E6
 * Callers:
 *     _EngHTBlt@48 @ 0x2271FF (_EngHTBlt@48.c)
 * Callees:
 *     <none>
 */

int __userpurge bSetHTSurfInfo@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        struct _SURFOBJ *a3,
        struct _HTSURFACEINFO *a4,
        int a5)
{
  int v6; // edx
  __int16 v7; // ax
  int v8; // ecx
  __int16 v9; // si
  int v10; // eax
  int v12; // [esp+Ch] [ebp-8h]

  v6 = *(_DWORD *)(a2 + 36);
  v7 = *(_WORD *)(a2 + 50) & 1;
  v8 = *(_DWORD *)(a2 + 32);
  v12 = *(_DWORD *)(a2 + 16);
  v9 = v7;
  v10 = *(_DWORD *)(a2 + 20);
  *(_DWORD *)a1 = a2;
  *(_WORD *)(a1 + 4) = v9;
  *(_BYTE *)(a1 + 6) = (_BYTE)a3;
  *(_BYTE *)(a1 + 7) = 4;
  *(_DWORD *)(a1 + 8) = v12;
  *(_DWORD *)(a1 + 12) = v10;
  *(_DWORD *)(a1 + 16) = v6;
  *(_DWORD *)(a1 + 20) = v8;
  *(_DWORD *)(a1 + 24) = 0;
  return 1;
}
