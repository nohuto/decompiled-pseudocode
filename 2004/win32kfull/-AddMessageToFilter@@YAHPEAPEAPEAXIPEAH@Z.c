/*
 * XREFs of ?AddMessageToFilter@@YAHPEAPEAPEAXIPEAH@Z @ 0x1C0037C04
 * Callers:
 *     _ChangeWindowMessageFilterEx @ 0x1C0037408 (_ChangeWindowMessageFilterEx.c)
 *     _ChangeWindowMessageFilter @ 0x1C00375A0 (_ChangeWindowMessageFilter.c)
 * Callees:
 *     ?MsgLookupTableAlloc@@YAPEAXI@Z @ 0x1C0037D2C (-MsgLookupTableAlloc@@YAPEAXI@Z.c)
 */

__int64 __fastcall AddMessageToFilter(void ***a1, unsigned int a2, int *a3)
{
  void **v3; // rbx
  unsigned int v4; // edi
  unsigned __int64 v5; // rsi
  _BYTE *v7; // rbp
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // r14
  _QWORD *v10; // rsi
  __int64 v11; // r15
  __int64 v12; // r13
  int v13; // r8d
  int v14; // eax
  char v16; // [rsp+68h] [rbp+10h]

  v16 = a2;
  v3 = *a1;
  v4 = 0;
  v5 = a2;
  v7 = 0LL;
  if ( !*a1 )
  {
    v3 = (void **)MsgLookupTableAlloc(0);
    if ( !v3 )
      goto LABEL_14;
  }
  v8 = v5;
  v9 = v5 >> 13;
  v10 = v3[v5 >> 13];
  if ( !v10 )
  {
    v10 = MsgLookupTableAlloc(1u);
    if ( !v10 )
      goto LABEL_23;
  }
  v11 = (v8 >> 9) & 0xF;
  v7 = (_BYTE *)v10[v11];
  if ( !v7 )
  {
    v7 = MsgLookupTableAlloc(2u);
    if ( !v7 )
    {
      if ( v10 != v3[v9] )
        Win32FreePool(v10);
LABEL_23:
      if ( v3 && v3 != *a1 )
        Win32FreePool(v3);
      goto LABEL_14;
    }
  }
  v12 = (v8 >> 3) & 0x3F;
  v13 = (unsigned __int8)v7[v12];
  v14 = v13 & (1 << (v16 & 7));
  if ( !v14 )
    v7[v12] = v13 | (1 << (v16 & 7));
  if ( a3 )
    *a3 = v14;
  if ( v7 != (_BYTE *)v10[v11] )
    v10[v11] = v7;
  if ( v10 != v3[v9] )
    v3[v9] = v10;
  if ( v3 != *a1 )
    *a1 = v3;
LABEL_14:
  LOBYTE(v4) = v7 != 0LL;
  return v4;
}
