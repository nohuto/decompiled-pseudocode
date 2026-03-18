/*
 * XREFs of CmpLockIXLockExclusive @ 0x14067E9B8
 * Callers:
 *     CmpUndoDeleteKeyForTransEx @ 0x140657ADC (CmpUndoDeleteKeyForTransEx.c)
 *     CmpSetKeySecurity @ 0x140677810 (CmpSetKeySecurity.c)
 *     CmDeleteKey @ 0x14067E1BC (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x140714E58 (CmDeleteValueKey.c)
 *     CmpCreateChild @ 0x140719278 (CmpCreateChild.c)
 *     CmSetValueKey @ 0x140720260 (CmSetValueKey.c)
 *     CmSetKeyFlags @ 0x140913964 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140913E28 (CmSetLastWriteTimeKey.c)
 * Callees:
 *     CmEqualTrans @ 0x140721FD0 (CmEqualTrans.c)
 */

char __fastcall CmpLockIXLockExclusive(__int64 a1, _QWORD *a2, __int64 a3)
{
  int v3; // eax

  v3 = *(_DWORD *)a1;
  if ( !*(_DWORD *)a1 )
  {
    *(_DWORD *)a1 = -2147483647;
    *(_QWORD *)(a1 + 8) = a2;
    if ( (_DWORD)a3 )
    {
      if ( (_DWORD)a3 == 1 )
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
    if ( v3 == 1 && (unsigned __int8)CmEqualTrans(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL), a2[7], a3) )
    {
      *(_DWORD *)a1 |= 0x80000000;
      return 1;
    }
  }
  else if ( (unsigned __int8)CmEqualTrans(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL), a2[7], a3) )
  {
    return 1;
  }
  return 0;
}
