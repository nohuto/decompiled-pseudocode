/*
 * XREFs of sub_18000EE78 @ 0x18000EE78
 * Callers:
 *     sub_18000CF38 @ 0x18000CF38 (sub_18000CF38.c)
 * Callees:
 *     sub_18000FAFC @ 0x18000FAFC (sub_18000FAFC.c)
 *     sub_1800120A0 @ 0x1800120A0 (sub_1800120A0.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 */

__int64 __fastcall sub_18000EE78(__int64 **a1, __int64 a2, __int64 a3, HSTRING *a4, __int64 a5)
{
  __int64 *v7; // rsi
  __int64 *v8; // rdi
  bool v9; // r13
  int v10; // r8d
  const WCHAR *StringRawBuffer; // rbx
  const WCHAR *v12; // rax
  int v13; // eax
  __int64 *v14; // rbx
  __int64 v15; // rcx
  __int64 result; // rax
  __int64 *v17; // rax
  __int64 *v18; // rax
  __int64 *v19; // rcx
  const WCHAR *v20; // rdi
  const WCHAR *v21; // rax
  int v22; // r8d
  __int64 v23; // rdi
  __int64 v24; // rcx
  BOOL bIgnoreCase; // [rsp+20h] [rbp-38h]
  BOOL bIgnoreCasea; // [rsp+20h] [rbp-38h]
  char v27; // [rsp+60h] [rbp+8h] BYREF
  HSTRING *v28; // [rsp+78h] [rbp+20h]

  v28 = a4;
  v7 = *a1;
  v8 = (__int64 *)(*a1)[1];
  v9 = 1;
  v10 = 0;
  if ( !*((_BYTE *)v8 + 25) )
  {
    do
    {
      v7 = v8;
      StringRawBuffer = WindowsGetStringRawBuffer((HSTRING)v8[4], 0LL);
      v12 = WindowsGetStringRawBuffer(*v28, 0LL);
      v13 = CompareStringOrdinal(v12, -1, StringRawBuffer, -1, 1);
      v9 = v13 == 1;
      if ( v13 == 1 )
        v8 = (__int64 *)*v8;
      else
        v8 = (__int64 *)v8[2];
      v10 = 0;
    }
    while ( !*((_BYTE *)v8 + 25) );
    a4 = v28;
  }
  try
  {
    v14 = v7;
    if ( v9 )
    {
      if ( v7 == (__int64 *)**a1 )
      {
        LOBYTE(v10) = 1;
        *(_QWORD *)a2 = *(_QWORD *)sub_18000FAFC((_DWORD)a1, (unsigned int)&v27, v10, (_DWORD)v7, bIgnoreCase, a5);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      if ( *((_BYTE *)v7 + 25) )
      {
        v14 = (__int64 *)v7[2];
      }
      else
      {
        v17 = (__int64 *)*v7;
        if ( *(_BYTE *)(*v7 + 25) )
        {
          v18 = (__int64 *)v7[1];
          if ( !*((_BYTE *)v18 + 25) )
          {
            v19 = v7;
            do
            {
              if ( v19 != (__int64 *)*v18 )
                break;
              v14 = v18;
              v18 = (__int64 *)v18[1];
              v19 = v14;
            }
            while ( !*((_BYTE *)v18 + 25) );
          }
          if ( !*((_BYTE *)v14 + 25) )
            v14 = v18;
        }
        else
        {
          do
          {
            v14 = v17;
            v17 = (__int64 *)v17[2];
          }
          while ( !*((_BYTE *)v17 + 25) );
        }
      }
    }
    v20 = WindowsGetStringRawBuffer(*a4, 0LL);
    v21 = WindowsGetStringRawBuffer((HSTRING)v14[4], 0LL);
    if ( CompareStringOrdinal(v21, -1, v20, -1, 1) == 1 )
    {
      LOBYTE(v22) = v9;
      *(_QWORD *)a2 = *(_QWORD *)sub_18000FAFC((_DWORD)a1, (unsigned int)&v27, v22, (_DWORD)v7, bIgnoreCasea, a5);
      *(_BYTE *)(a2 + 8) = 1;
      result = a2;
    }
    else
    {
      v23 = a5;
      v24 = *(_QWORD *)(a5 + 40);
      if ( v24 )
      {
        *(_QWORD *)(a5 + 40) = 0LL;
        sub_1800120A0(v24);
      }
      WindowsDeleteString(*(HSTRING *)(v23 + 32));
      *(_QWORD *)(v23 + 32) = 0LL;
      j_j__o_free(v23, 48LL);
      *(_QWORD *)a2 = v14;
      *(_BYTE *)(a2 + 8) = 0;
      result = a2;
    }
  }
  catch ( ... )
  {
    sub_18000F3E0(v15, a5);
    throw;
  }
  return result;
}
