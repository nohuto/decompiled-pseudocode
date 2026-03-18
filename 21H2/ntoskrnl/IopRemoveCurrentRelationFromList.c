/*
 * XREFs of IopRemoveCurrentRelationFromList @ 0x1409583B0
 * Callers:
 *     PnpUnlinkDeviceRemovalRelations @ 0x140766258 (PnpUnlinkDeviceRemovalRelations.c)
 * Callees:
 *     PipDeviceObjectListElementAt @ 0x1406E3A88 (PipDeviceObjectListElementAt.c)
 *     PipDeviceObjectListRemove @ 0x14080BEDC (PipDeviceObjectListRemove.c)
 */

__int64 __fastcall IopRemoveCurrentRelationFromList(unsigned int **a1, __int64 a2, _DWORD *a3)
{
  unsigned int v5; // edi
  unsigned int **v6; // r11
  __int64 result; // rax
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0LL;
  if ( *a3 > 1u )
    return 3221225659LL;
  v5 = a3[1] - 1;
  PipDeviceObjectListElementAt(*a1, v5, &v8, 0LL, 0LL);
  if ( v8 != a2 )
    return 3221225486LL;
  result = PipDeviceObjectListRemove(*v6, v5);
  if ( *a3 > 1u )
    return 3221225659LL;
  a3[1] = v5;
  return result;
}
