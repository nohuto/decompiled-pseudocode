/*
 * XREFs of ?SysMmTestQueryAdapterInfo@@YAJPEAUSYSMM_ADAPTER@@W4_SYSMM_TEST_QUERYADAPTERINFO_TYPE@@PEAX_K@Z @ 0x1C00713F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SysMmTestQueryAdapterInfo(_DWORD *a1, int a2, int *a3, unsigned __int64 a4)
{
  int v4; // r10d
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // ecx

  v4 = 0;
  if ( a2 || a4 < 4 )
    return 3221225485LL;
  *a3 = 0;
  LOBYTE(v4) = dword_1C0130A48 == 2;
  *a3 = v4;
  v7 = v4 | (2 * (a1[19] & 1));
  *a3 = v7;
  v8 = v7 | a1[5] & 4;
  *a3 = v8;
  v9 = v8 | (a1[21] != 0 ? 8 : 0);
  *a3 = v9;
  v10 = v9 | (4 * (a1[19] & 4));
  *a3 = v10;
  *a3 = v10 | (32 * (a1[20] & 1));
  return 0LL;
}
