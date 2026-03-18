/*
 * XREFs of ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C00C52FC
 * Callers:
 *     GreExtCreateRegion @ 0x1C0076840 (GreExtCreateRegion.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0074EF0 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C00757F4 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C0075940 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C007A650 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C007F140 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C007FF20 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 */

__int64 __fastcall RGNMEMOBJ::iReduce(RGNMEMOBJ *this, struct RGNOBJ *a2)
{
  unsigned int v2; // ebx
  __int64 v6; // rcx
  __int64 v7; // rax
  struct _RECTL *v8; // [rsp+20h] [rbp-20h] BYREF
  int v9; // [rsp+28h] [rbp-18h]
  struct _RECTL v10; // [rsp+30h] [rbp-10h] BYREF

  v2 = 0;
  v9 = 0;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v8, 0x70u);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v8);
  v10.left = -134217728;
  v10.right = 0x7FFFFFF;
  v10.top = -134217728;
  v10.bottom = 0x7FFFFFF;
  if ( v8
    && (RGNOBJ::vSet(&v8, &v10),
        *(_DWORD *)(*(_QWORD *)this + 96LL) = 0x7FFFFFFF,
        *(_DWORD *)(*(_QWORD *)this + 100LL) = 0x7FFFFFFF,
        *(_DWORD *)(*(_QWORD *)this + 104LL) = 0x80000000,
        *(_DWORD *)(*(_QWORD *)this + 108LL) = 0x80000000,
        (unsigned int)RGNOBJ::bMerge(this, (struct RGNOBJ *)&v8, a2, 8u)) )
  {
    v2 = RGNOBJ::iComplexity(this);
  }
  else
  {
    v6 = *(_QWORD *)this;
    *(_DWORD *)(v6 + 80) = 16;
    *(_DWORD *)(v6 + 84) = 1;
    *(_QWORD *)(v6 + 96) = 0LL;
    *(_QWORD *)(v6 + 104) = 0LL;
    v7 = *(_QWORD *)(v6 + 88);
    *(_DWORD *)v7 = 0;
    *(_DWORD *)(v7 + 4) = 0x80000000;
    *(_QWORD *)(v7 + 8) = 0x7FFFFFFFLL;
    *(_QWORD *)(v6 + 40) = v7 + 16;
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v8);
  return v2;
}
