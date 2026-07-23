/*
 * XREFs of KiFindReadyThread @ 0x14029B920
 * Callers:
 *     KiSearchForNewThreadOnProcessor @ 0x1403520C0 (KiSearchForNewThreadOnProcessor.c)
 * Callees:
 *     KiCheckForMaxOverQuotaScb @ 0x14027AF28 (KiCheckForMaxOverQuotaScb.c)
 *     KiRemoveThreadFromSharedReadyQueue @ 0x14029BA58 (KiRemoveThreadFromSharedReadyQueue.c)
 *     KiRemoveThreadFromReadyQueue @ 0x14029BAB8 (KiRemoveThreadFromReadyQueue.c)
 *     KiConvertDynamicHeteroPolicy @ 0x14051F3E0 (KiConvertDynamicHeteroPolicy.c)
 */

_QWORD *__fastcall KiFindReadyThread(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // r12
  __int64 v5; // r13
  __int64 v7; // r11
  int v8; // esi
  unsigned int v9; // eax
  _QWORD **v10; // r14
  _QWORD *v11; // rbx
  unsigned int v12; // eax
  _QWORD *v13; // rdi
  __int64 v14; // rbp
  _QWORD *result; // rax
  __int64 v16; // rcx
  __int64 v17; // r11
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v21; // [rsp+78h] [rbp+10h]
  unsigned int v23; // [rsp+88h] [rbp+20h]

  v21 = a2;
  v4 = *(_QWORD *)(a1 + 200);
  v5 = a2 + 31872;
  if ( !a2 )
    v5 = a3 + 16;
  v7 = a1;
  v8 = 64;
LABEL_4:
  _BitScanReverse(&v9, a4);
  a4 ^= 1 << v9;
  v10 = (_QWORD **)(v5 + 16LL * v9);
  v23 = v9;
  v11 = *v10;
  while ( 1 )
  {
    v12 = *((unsigned __int8 *)v11 - 91);
    v13 = v11 - 27;
    v14 = v11[45];
    if ( v12 >= 5 )
    {
      v12 = KiConvertDynamicHeteroPolicy(v11 - 27, a2, v7);
      v7 = a1;
    }
    if ( v12 )
    {
      a2 = *(_QWORD *)(v7 + 192);
      v19 = v14 & *(_QWORD *)(a2 + 24LL * (int)v12 + 200);
      if ( v19 )
        v14 = v19;
    }
    if ( (v4 & v14) != 0 )
    {
      v16 = v13[13];
      if ( !v16 )
        break;
      v18 = *(unsigned int *)(v7 + 216) + v16;
      if ( !v18 || !KiCheckForMaxOverQuotaScb(v18) )
        break;
    }
    v11 = (_QWORD *)*v11;
    --v8;
    if ( v11 == v10 || !v8 )
    {
      if ( !a4 || !v8 )
        return 0LL;
      goto LABEL_4;
    }
  }
  if ( v21 )
    KiRemoveThreadFromReadyQueue(v21, v11, v23);
  else
    KiRemoveThreadFromSharedReadyQueue(a3, v11 - 27, v23);
  result = v11 - 27;
  *((_DWORD *)v13 + 134) = *(_DWORD *)(v17 + 36);
  return result;
}
