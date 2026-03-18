/*
 * XREFs of ?_TTAdjustContactSide@@YGXJPAJ0J@Z @ 0x1B8521
 * Callers:
 *     _TouchTargetingCreateContact@16 @ 0x1B8BA5 (_TouchTargetingCreateContact@16.c)
 * Callees:
 *     __TTHmToPixels@8 @ 0x1B97AF (__TTHmToPixels@8.c)
 *     __TTPixelsToHm@8 @ 0x1B97F4 (__TTPixelsToHm@8.c)
 */

void __userpurge _TTAdjustContactSide(int *a1@<edx>, int a2@<ecx>, int *a3, int *a4, int *a5, int a6)
{
  int v6; // esi
  int v7; // ebx
  int v8; // edi
  int v9; // eax
  int v10; // ecx
  int v11; // ecx
  int v12; // esi
  int v13; // eax
  int v14; // [esp+Ch] [ebp-Ch]

  v6 = *a1;
  v7 = *a3 - *a1;
  v14 = *a3;
  v8 = v7;
  v9 = _TTPixelsToHm(v7, a4);
  if ( !v9 )
  {
    v10 = 700;
LABEL_5:
    v8 = _TTHmToPixels(v10, a4);
    goto LABEL_6;
  }
  v10 = 400;
  if ( v9 < 400 )
    goto LABEL_5;
  v10 = 1100;
  if ( v9 > 1100 )
    goto LABEL_5;
LABEL_6:
  if ( a2 == v14 || a2 == v6 )
  {
    v12 = a2;
    v13 = v8 / 2;
    goto LABEL_11;
  }
  if ( v7 != v8 )
  {
    v11 = a2 - v6;
    v12 = a2;
    v13 = v11 * (100 * v8 / v7) / 100;
LABEL_11:
    v6 = v12 - v13;
    *a1 = v6;
  }
  *a3 = v6 + v8;
}
