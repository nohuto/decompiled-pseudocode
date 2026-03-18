/*
 * XREFs of ?bCheckDestSurfaceOverlap@@YGHPAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x216945
 * Callers:
 *     _NtGdiEngStretchBlt@44 @ 0x218D88 (_NtGdiEngStretchBlt@44.c)
 *     _NtGdiEngStretchBltROP@52 @ 0x219109 (_NtGdiEngStretchBltROP@52.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     ??XERECTL@@QAEAAV0@ABU_RECTL@@@Z @ 0x4F46A (--XERECTL@@QAEAAV0@ABU_RECTL@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

BOOL __fastcall bCheckDestSurfaceOverlap(int a1, int *a2)
{
  int v2; // eax
  int v3; // esi
  int v5; // ecx
  int v6; // edi
  int v7; // eax
  ERECTL *v8; // ecx
  int v10[4]; // [esp+Ch] [ebp-24h] BYREF
  int v11; // [esp+1Ch] [ebp-14h] BYREF
  int v12; // [esp+20h] [ebp-10h]
  int v13; // [esp+24h] [ebp-Ch]
  int v14; // [esp+28h] [ebp-8h]

  v2 = *a2;
  v3 = a2[2];
  v5 = a2[3];
  v6 = a2[1];
  v11 = *a2;
  v12 = v6;
  v13 = v3;
  v14 = v5;
  if ( v5 < v6 )
  {
    v12 = v5;
    v14 = v6;
  }
  if ( v3 < v2 )
  {
    v11 = v3;
    v13 = v2;
  }
  v7 = *(_DWORD *)(a1 + 16);
  v10[0] = 0;
  v10[1] = 0;
  v10[2] = v7;
  v10[3] = *(_DWORD *)(a1 + 20);
  ERECTL::operator*=(&v11, v10);
  return !ERECTL::bEmpty(v8);
}
