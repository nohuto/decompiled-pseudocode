/*
 * XREFs of AccessFieldData @ 0x1C0031B7C
 * Callers:
 *     ReadFieldObj @ 0x1C0001400 (ReadFieldObj.c)
 *     WriteFieldObj @ 0x1C0024320 (WriteFieldObj.c)
 * Callees:
 *     AccessBaseField @ 0x1C0001970 (AccessBaseField.c)
 *     DereferenceObjectEx @ 0x1C00039E4 (DereferenceObjectEx.c)
 *     PushPreserveWriteObj @ 0x1C00240A0 (PushPreserveWriteObj.c)
 *     ReadBuffField @ 0x1C0024288 (ReadBuffField.c)
 *     GetFieldUnitRegionObj @ 0x1C0024698 (GetFieldUnitRegionObj.c)
 *     WriteBuffField @ 0x1C0024734 (WriteBuffField.c)
 *     PushAccFieldObj @ 0x1C00249B0 (PushAccFieldObj.c)
 */

__int64 __fastcall AccessFieldData(struct _SLIST_ENTRY *a1, __int64 a2, unsigned int *a3, __int64 *a4, char a5)
{
  __int64 v5; // rbx
  __int64 v9; // rdx
  __int64 *v11; // rcx
  __int64 v12; // r8
  __int64 (__fastcall *v13)(__int64, __int64, unsigned int); // rdx
  struct _SLIST_ENTRY *v14; // rcx
  unsigned int v15; // r11d
  unsigned int v16; // edx
  int v17; // eax
  __int64 v18; // r9
  char v19; // r10
  char v20; // cl
  unsigned int FieldUnitRegionObj; // edi
  unsigned int v23; // [rsp+20h] [rbp-28h]
  unsigned __int64 v24; // [rsp+58h] [rbp+10h] BYREF

  v5 = 0LL;
  if ( *(_WORD *)(a2 + 2) == 14 )
  {
    v9 = *(_QWORD *)(a2 + 32);
    if ( a5 )
      return (unsigned int)ReadBuffField((__int64)a1, v9, a3, a4);
    else
      return (unsigned int)WriteBuffField((__int64)a1, v9, a3);
  }
  v11 = *(__int64 **)(a2 + 32);
  v24 = 0LL;
  if ( *(_WORD *)(*v11 + 66) == 132 )
  {
    v12 = *(_QWORD *)(*v11 + 96);
    if ( a5 )
    {
      v13 = ReadFieldObj;
      v14 = a1;
    }
    else
    {
      v15 = a3[3];
      v16 = (v15 & 0xF) - 1;
      v17 = 1 << ((a3[3] & 0xF) - 1);
      v18 = ~((((1LL << a3[2]) & -(__int64)(a3[2] < 0x40)) - 1) << a3[1]);
      v19 = v17;
      if ( v16 > 3 )
        v17 = 1;
      if ( 8 * v17 < 64 )
      {
        v20 = 1;
        if ( v16 <= 3 )
          v20 = v19;
        v5 = 1LL << (8 * v20);
      }
      v14 = a1;
      if ( ((v5 - 1) & v18) != 0 && (v15 & 0x60) == 0 )
        return (unsigned int)PushPreserveWriteObj(a1, *(_QWORD *)(v12 + 8) + 64LL, *a4, v18);
      v13 = WriteFieldObj;
    }
    return (unsigned int)PushAccFieldObj(
                           v14,
                           (__int64)v13,
                           *(_QWORD *)(v12 + 8) + 64LL,
                           *(_QWORD *)(*(_QWORD *)(v12 + 8) + 96LL) + 8LL,
                           (__int64)a4,
                           4u);
  }
  FieldUnitRegionObj = GetFieldUnitRegionObj(v11, (__int64 *)&v24);
  if ( !FieldUnitRegionObj && v24 )
  {
    LOBYTE(v23) = a5;
    FieldUnitRegionObj = AccessBaseField((__int64)a1, v24, a3, a4, v23);
    DereferenceObjectEx(v24);
  }
  return FieldUnitRegionObj;
}
