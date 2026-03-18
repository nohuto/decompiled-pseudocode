/*
 * XREFs of ?NeedsEndEllipsis@@YGHPAUHDC__@@PBGPAHPAUDRAWTEXTDATA@@I3H@Z @ 0x1B8097
 * Callers:
 *     ?AddEllipsisAndDrawLine@@YGHPAUHDC__@@HPAGHKPAUDRAWTEXTDATA@@H@Z @ 0x1B7AAC (-AddEllipsisAndDrawLine@@YGHPAUHDC__@@HPAGHKPAUDRAWTEXTDATA@@H@Z.c)
 * Callees:
 *     _GreGetTextExtentW@20 @ 0xE26D8 (_GreGetTextExtentW@20.c)
 *     ?DT_AdjustBreakForSurrogatesAndVariationSelectors@@YGHPBGHH@Z @ 0x1B7C0C (-DT_AdjustBreakForSurrogatesAndVariationSelectors@@YGHPBGHH@Z.c)
 *     ?DT_GetExtentMinusPrefixes@@YGHPAUHDC__@@PBGHIHPAUDRAWTEXTDATA@@H@Z @ 0x1B7D8B (-DT_GetExtentMinusPrefixes@@YGHPAUHDC__@@PBGHIHPAUDRAWTEXTDATA@@H@Z.c)
 */

int __userpurge NeedsEndEllipsis@<eax>(
        const WCHAR *a1@<edx>,
        HDC a2@<ecx>,
        unsigned __int16 **a3,
        const unsigned __int16 *a4,
        unsigned __int16 *a5,
        struct DRAWTEXTDATA *a6,
        unsigned int a7,
        struct DRAWTEXTDATA *a8,
        int a9)
{
  int v9; // ebx
  unsigned __int16 *v10; // edi
  LONG v11; // esi
  int v12; // ecx
  int v13; // esi
  LONG ExtentMinusPrefixes; // eax
  struct DRAWTEXTDATA *v16; // [esp+0h] [ebp-24h]
  struct DRAWTEXTDATA *v17; // [esp+0h] [ebp-24h]
  int v18; // [esp+4h] [ebp-20h]
  int v19; // [esp+4h] [ebp-20h]
  struct tagSIZE v20; // [esp+10h] [ebp-14h] BYREF
  const WCHAR *v21; // [esp+18h] [ebp-Ch]
  int v22; // [esp+1Ch] [ebp-8h]
  HDC v23; // [esp+20h] [ebp-4h]
  const unsigned __int16 *v24; // [esp+30h] [ebp+Ch]
  int v25; // [esp+30h] [ebp+Ch]

  v9 = 0;
  v21 = a1;
  v10 = *a3;
  v23 = a2;
  v20.cx = 0;
  v20.cy = 0;
  if ( !v10 )
    return 0;
  v11 = *((_DWORD *)a4 + 8);
  v24 = (const unsigned __int16 *)*((_DWORD *)a4 + 12);
  if ( DT_GetExtentMinusPrefixes(a1, a2, (HDC)v10, a5, (int)a2, (unsigned int)a6, -1, v16, v18) <= v11
    || !GreGetTextExtentW(v23, L"...", 3u, &v20, 1) )
  {
    return 0;
  }
  v22 = (int)v24 + v11 - v20.cx;
  v13 = 1;
  if ( v22 > 0 )
  {
    v13 = (int)v10;
    if ( (int)v10 > 0 )
    {
      do
      {
        v25 = (v13 + v9 + 1) / 2;
        ExtentMinusPrefixes = DT_GetExtentMinusPrefixes(v21, v23, (HDC)v25, a5, v12, (unsigned int)a6, -1, v17, v19);
        v12 = ExtentMinusPrefixes;
        if ( ExtentMinusPrefixes >= v22 )
        {
          v13 = (v13 + v9 + 1) / 2;
          if ( ExtentMinusPrefixes <= v22 )
            break;
          v13 = v25 - 1;
        }
        else
        {
          v9 = (v13 + v9 + 1) / 2;
        }
      }
      while ( v9 < v13 );
    }
    if ( v13 < 1 )
      v13 = 1;
  }
  *a3 = (unsigned __int16 *)DT_AdjustBreakForSurrogatesAndVariationSelectors(v13, v9, v10, (int)v17, v19);
  return 1;
}
