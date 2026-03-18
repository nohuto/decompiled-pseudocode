/*
 * XREFs of GetNextNameSegment @ 0x1C0023768
 * Callers:
 *     CreateNativeNameSpaceObject @ 0x1C0022D64 (CreateNativeNameSpaceObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetNextNameSegment(__int64 a1, int *a2, unsigned __int64 *a3)
{
  unsigned int v3; // r9d
  __int64 v6; // r11
  int *v7; // r8
  unsigned int v8; // edx
  __int64 v9; // rbx
  __int64 v10; // rsi
  unsigned __int64 v11; // rax
  int v13; // [rsp+8h] [rbp+8h] BYREF

  v3 = 0;
  v6 = a1;
  if ( a1 )
  {
    v7 = &v13;
    v13 = 1600085855;
    v8 = 0;
    v9 = a1 - (_QWORD)&v13;
    do
    {
      LOBYTE(a1) = *((_BYTE *)v7 + v9);
      if ( !(_BYTE)a1 || (_BYTE)a1 == 46 )
        break;
      if ( (unsigned __int8)(a1 - 48) <= 0x2Fu )
      {
        v10 = 0x87FFFFFE03FFLL;
        if ( _bittest64(&v10, (unsigned int)(a1 - 48)) )
          continue;
      }
      if ( (unsigned __int8)(a1 - 97) > 0x19u )
        return (unsigned int)-1073741811;
      *(_BYTE *)v7 = a1;
      ++v8;
      v7 = (int *)((char *)v7 + 1);
    }
    while ( v8 < 4 );
    if ( !v8 )
      return (unsigned int)-1073741197;
    *a2 = v13;
    v11 = v6 + v8;
    if ( *(_BYTE *)v11 == 46 )
      *a3 = v11 + 1;
    else
      *a3 = v11 & -(__int64)(*(_BYTE *)v11 != 0);
  }
  else
  {
    return (unsigned int)-1073741197;
  }
  return v3;
}
