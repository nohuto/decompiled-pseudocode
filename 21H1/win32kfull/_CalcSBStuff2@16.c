/*
 * XREFs of _CalcSBStuff2@16 @ 0x6DB64
 * Callers:
 *     _xxxGetScrollBarInfo@12 @ 0x6D508 (_xxxGetScrollBarInfo@12.c)
 *     _CalcSBStuff@12 @ 0x6DA90 (_CalcSBStuff@12.c)
 *     _SBCtlSetup@4 @ 0x1A3664 (_SBCtlSetup@4.c)
 * Callees:
 *     _GetDpiForSystem@0 @ 0x3D2A0 (_GetDpiForSystem@0.c)
 *     _GetDpiDependentMetric@8 @ 0x6E48A (_GetDpiDependentMetric@8.c)
 */

int __fastcall CalcSBStuff2(int *a1, int *a2, int *a3, int a4)
{
  int *v4; // eax
  int v6; // ecx
  int v7; // ebx
  int v8; // edx
  int DpiForSystem; // eax
  int v10; // eax
  int v11; // edi
  int v12; // ecx
  int v13; // eax
  int v14; // ebx
  int v15; // edi
  INT v16; // ecx
  int v17; // ecx
  INT v18; // ecx
  int v19; // eax
  INT v20; // edi
  int v21; // ecx
  int result; // eax
  int v23; // [esp-4h] [ebp-1Ch]
  int c; // [esp+14h] [ebp-4h]
  int v25; // [esp+24h] [ebp+Ch]
  int v26; // [esp+24h] [ebp+Ch]

  v4 = a2 + 1;
  if ( a4 )
  {
    v6 = a2[2];
    v7 = *a2;
    v8 = a2[3];
    v23 = 10;
  }
  else
  {
    v7 = *v4;
    v6 = a2[3];
    v4 = a2;
    v8 = a2[2];
    v23 = 11;
  }
  a1[4] = *v4;
  a1[5] = v8;
  a1[6] = v7;
  a1[7] = v6;
  DpiForSystem = GetDpiForSystem();
  a1[8] = GetDpiDependentMetric(v23, DpiForSystem);
  v25 = a1[4];
  a1[3] = a3[3];
  a1[2] = a3[2];
  v10 = *a3;
  *a1 = *a3;
  v11 = a3[1];
  v12 = a1[5];
  a1[1] = v11;
  c = v11 - v10 + 1;
  v13 = a1[8];
  v14 = (v12 - v25) / 2;
  if ( v14 >= v13 )
    v14 = a1[8];
  a1[9] = v14 + v25;
  a1[10] = v12 - v14;
  v15 = c;
  if ( a3[2] )
  {
    v15 = c;
    if ( c )
    {
      v16 = EngMulDiv(v12 - v14 - (v14 + v25), a3[2], c);
      v13 = a1[8] / 2;
      if ( v13 <= v16 )
        v13 = v16;
      v25 = a1[4];
      v12 = a1[5];
      a1[8] = v13;
    }
  }
  v17 = v12 - (v14 + v25);
  a1[15] = v14 + v25;
  v26 = v14 + v25;
  v18 = v17 - v13 - v14;
  a1[14] = v18;
  v19 = a3[2];
  if ( !v19 )
    v19 = 1;
  v20 = v15 - v19;
  if ( v20 )
    v21 = a1[15] + EngMulDiv(a3[3] - *a3, v18, v20);
  else
    v21 = v26 - 1;
  a1[13] = v21;
  result = v21 + a1[8];
  a1[12] = result;
  return result;
}
