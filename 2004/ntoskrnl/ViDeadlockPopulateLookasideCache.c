/*
 * XREFs of ViDeadlockPopulateLookasideCache @ 0x1409DC7A0
 * Callers:
 *     VfDeadlockInitialize @ 0x1409DAED0 (VfDeadlockInitialize.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140269FBC (ExFreeToNPagedLookasideList.c)
 *     ExAllocateFromNPagedLookasideList @ 0x14026E044 (ExAllocateFromNPagedLookasideList.c)
 */

void __fastcall ViDeadlockPopulateLookasideCache(PNPAGED_LOOKASIDE_LIST Lookaside, __int16 a2)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // rax
  _QWORD *v6; // rbx

  v4 = 0LL;
  do
  {
    v5 = ExAllocateFromNPagedLookasideList(Lookaside);
    if ( !v5 )
      break;
    *v5 = v4;
    v4 = v5;
    --a2;
  }
  while ( a2 );
  if ( v4 )
  {
    do
    {
      v6 = (_QWORD *)*v4;
      ExFreeToNPagedLookasideList(Lookaside, v4);
      v4 = v6;
    }
    while ( v6 );
  }
}
