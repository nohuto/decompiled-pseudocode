/*
 * XREFs of ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C007A854
 * Callers:
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C007A854 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     GreExtCreateRegion @ 0x1C007C1C0 (GreExtCreateRegion.c)
 * Callees:
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C007A854 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C007B580 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C00809E0 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0080B34 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0081350 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1C0084160 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C00860F0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 */

__int64 __fastcall RGNOBJ::bSet(RGNOBJ *this, unsigned int a2, struct _RECTL *a3)
{
  __int64 v4; // rdi
  unsigned int v6; // esi
  int v7; // r14d
  int right; // ecx
  LONG top; // edx
  LONG bottom; // r8d
  unsigned int v12; // r14d
  unsigned int v13; // edi
  __int64 v14; // [rsp+20h] [rbp-30h] BYREF
  int v15; // [rsp+28h] [rbp-28h]
  __int64 v16; // [rsp+30h] [rbp-20h] BYREF
  int v17; // [rsp+38h] [rbp-18h]
  __int64 v18; // [rsp+40h] [rbp-10h] BYREF
  int v19; // [rsp+48h] [rbp-8h]

  v17 = 0;
  v4 = a2;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v16, 0x70u);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v16);
  v15 = 0;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v14, 0x70u);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v14);
  if ( !v16 || !v14 )
    goto LABEL_21;
  v6 = 1;
  if ( (unsigned int)v4 >= 0x14 )
  {
    v19 = 0;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v18, 0x70u);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v18);
    v12 = (unsigned int)v4 >> 1;
    v13 = v4 - ((unsigned int)v4 >> 1);
    if ( v18
      && (unsigned int)RGNOBJ::bSet((RGNOBJ *)&v16, v12, a3)
      && (unsigned int)RGNOBJ::bSet((RGNOBJ *)&v14, v13, &a3[v12]) )
    {
      RGNOBJ::iCombine((RGNOBJ *)&v18, (struct RGNOBJ *)&v14, (struct RGNOBJ *)&v16, 2);
      RGNOBJ::vSwap(this, (struct RGNOBJ *)&v18);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v18);
      goto LABEL_14;
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v18);
LABEL_21:
    v6 = 0;
    goto LABEL_14;
  }
  v7 = 0;
  if ( (_DWORD)v4 )
  {
    do
    {
      right = a3->right;
      if ( a3->left < right )
      {
        top = a3->top;
        bottom = a3->bottom;
        if ( top < bottom && a3->left >= -134217728 && right <= 0x7FFFFFF && top >= -134217728 && bottom <= 0x7FFFFFF )
        {
          if ( v7 )
          {
            RGNOBJ::vSet((RGNOBJ *)&v16, a3);
            RGNOBJ::iCombine((RGNOBJ *)&v14, this, (struct RGNOBJ *)&v16, 2);
            RGNOBJ::vSwap(this, (struct RGNOBJ *)&v14);
          }
          else
          {
            RGNOBJ::vSet(this, a3);
            v7 = 1;
          }
        }
      }
      ++a3;
      --v4;
    }
    while ( v4 );
  }
LABEL_14:
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v14);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v16);
  return v6;
}
