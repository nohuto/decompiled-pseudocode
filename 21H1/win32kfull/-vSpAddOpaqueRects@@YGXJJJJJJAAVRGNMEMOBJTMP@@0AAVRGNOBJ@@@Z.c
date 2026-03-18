/*
 * XREFs of ?vSpAddOpaqueRects@@YGXJJJJJJAAVRGNMEMOBJTMP@@0AAVRGNOBJ@@@Z @ 0x1E0014
 * Callers:
 *     ?vSpComputeClipEffective@@YGXPAVSPRITE@@AAVRGNOBJ@@@Z @ 0x1E0F06 (-vSpComputeClipEffective@@YGXPAVSPRITE@@AAVRGNOBJ@@@Z.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

void __userpurge vSpAddOpaqueRects(
        LONG a1@<edx>,
        LONG a2@<ecx>,
        LONG a3,
        LONG a4,
        LONG a5,
        int a6,
        RGNOBJ *a7,
        RGNOBJ *a8,
        struct RGNMEMOBJTMP *a9,
        struct RGNMEMOBJTMP *a10,
        struct RGNOBJ *a11)
{
  LONG v11; // eax
  LONG v13; // edx
  RGNOBJ *v14; // ecx
  LONG v15; // eax
  LONG v17; // [esp+1Ch] [ebp-20h]
  struct _RECTL v18; // [esp+24h] [ebp-18h] BYREF

  v11 = a4;
  v13 = a3;
  v14 = a8;
  if ( a1 == a4 )
  {
    v15 = a2;
    v18.left = a3;
    goto LABEL_20;
  }
  if ( a3 )
  {
    v18.top = a4;
    v17 = a4 + 1;
    v18.bottom = a4 + 1;
    v18.left = a3;
    v18.right = a5;
    RGNOBJ::vSet(a8, &v18);
    if ( RGNOBJ::bMerge(a7, a9, a8, 0xEu) )
      RGNOBJ::vSwap(a7, a9);
    else
      RGNOBJ::vSet(a7);
    if ( a1 <= v17 )
    {
LABEL_16:
      v14 = a8;
      goto LABEL_17;
    }
    v11 = a4;
    v13 = a3;
LABEL_11:
    v18.left = 0;
    v18.right = a5;
    v18.bottom = a1;
    if ( v13 )
      v11 = v17;
    v18.top = v11;
    RGNOBJ::vSet(a8, &v18);
    if ( RGNOBJ::bMerge(a7, a9, a8, 0xEu) )
      RGNOBJ::vSwap(a7, a9);
    else
      RGNOBJ::vSet(a7);
    goto LABEL_16;
  }
  if ( a1 > a4 )
  {
    v17 = a4 + 1;
    goto LABEL_11;
  }
LABEL_17:
  v15 = a2;
  if ( a2 && a2 != a5 )
  {
    v18.left = 0;
LABEL_20:
    v18.right = v15;
    v18.bottom = a1 + 1;
    v18.top = a1;
    RGNOBJ::vSet(v14, &v18);
    if ( RGNOBJ::bMerge(a7, a9, a8, 0xEu) )
      RGNOBJ::vSwap(a7, a9);
    else
      RGNOBJ::vSet(a7);
  }
}
