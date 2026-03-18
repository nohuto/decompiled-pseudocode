/*
 * XREFs of CmpLockIXLockExclusive @ 0x14068E09C
 * Callers:
 *     CmSetValueKey @ 0x140619570 (CmSetValueKey.c)
 *     CmpSetKeySecurity @ 0x14068AE1C (CmpSetKeySecurity.c)
 *     CmDeleteKey @ 0x140692448 (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x1406941D8 (CmDeleteValueKey.c)
 *     CmpCreateChild @ 0x140696A68 (CmpCreateChild.c)
 *     CmpUndoDeleteKeyForTrans @ 0x140716F70 (CmpUndoDeleteKeyForTrans.c)
 *     CmRenameKey @ 0x140867FFC (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1408696D8 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140869B94 (CmSetLastWriteTimeKey.c)
 * Callees:
 *     CmEqualTrans @ 0x14068E7AC (CmEqualTrans.c)
 */

char __fastcall CmpLockIXLockExclusive(__int64 a1, _QWORD *a2, int a3)
{
  int v3; // eax

  v3 = *(_DWORD *)a1;
  if ( !*(_DWORD *)a1 )
  {
    *(_DWORD *)a1 = -2147483647;
    *(_QWORD *)(a1 + 8) = a2;
    if ( a3 )
    {
      if ( a3 == 1 )
        a2[3] = a1;
    }
    else
    {
      a2[2] = a1;
    }
    return 1;
  }
  if ( v3 >= 0 )
  {
    if ( v3 == 1 && (unsigned __int8)CmEqualTrans(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL), a2[7]) )
    {
      *(_DWORD *)a1 |= 0x80000000;
      return 1;
    }
  }
  else if ( (unsigned __int8)CmEqualTrans(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL), a2[7]) )
  {
    return 1;
  }
  return 0;
}
