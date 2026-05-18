/*
 * XREFs of sub_1800CEC50 @ 0x1800CEC50
 * Callers:
 *     sub_1800CF05C @ 0x1800CF05C (sub_1800CF05C.c)
 * Callees:
 *     sub_1800CE3A0 @ 0x1800CE3A0 (sub_1800CE3A0.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800CEC50(_QWORD *a1, __int64 a2, char a3, int *a4, _QWORD *a5)
{
  _QWORD *v9; // rdx
  _QWORD *v10; // r9
  __int64 *v11; // rax
  char v12; // r8
  int v13; // ecx
  _QWORD *v14; // rbx
  __int64 result; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // rcx
  volatile signed __int32 *v19; // rdi
  _QWORD *v20; // [rsp+30h] [rbp-48h]
  __int64 v22; // [rsp+48h] [rbp-30h] BYREF
  __int64 v23[5]; // [rsp+50h] [rbp-28h] BYREF

  v9 = (_QWORD *)*a1;
  v10 = (_QWORD *)*a1;
  v11 = *(__int64 **)(*a1 + 8LL);
  v12 = 1;
  if ( !*((_BYTE *)v11 + 25) )
  {
    v13 = *a4;
    do
    {
      v10 = v11;
      if ( a3 )
        v12 = *((_DWORD *)v11 + 8) >= v13;
      else
        v12 = v13 < *((_DWORD *)v11 + 8);
      if ( v12 )
        v11 = (__int64 *)*v11;
      else
        v11 = (__int64 *)v11[2];
    }
    while ( !*((_BYTE *)v11 + 25) );
  }
  try
  {
    v14 = v10;
    v20 = v10;
    if ( v12 )
    {
      if ( v10 == (_QWORD *)*v9 )
      {
        *(_QWORD *)a2 = *sub_1800CE3A0(a1, &v22, 1, v10, (int)a4, a5);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      if ( *((_BYTE *)v10 + 25) )
      {
        v14 = (_QWORD *)v10[2];
      }
      else
      {
        v16 = *v10;
        if ( *(_BYTE *)(*v10 + 25LL) )
        {
          v17 = v10[1];
          if ( !*(_BYTE *)(v17 + 25) )
          {
            v18 = v10;
            do
            {
              if ( v18 != *(_QWORD **)v17 )
                break;
              v14 = (_QWORD *)v17;
              v20 = (_QWORD *)v17;
              v17 = *(_QWORD *)(v17 + 8);
              v18 = v14;
            }
            while ( !*(_BYTE *)(v17 + 25) );
          }
          if ( !*((_BYTE *)v14 + 25) )
          {
            v14 = (_QWORD *)v17;
            v20 = (_QWORD *)v17;
          }
          goto LABEL_25;
        }
        do
        {
          v14 = (_QWORD *)v16;
          v16 = *(_QWORD *)(v16 + 16);
        }
        while ( !*(_BYTE *)(v16 + 25) );
      }
      v20 = v14;
    }
LABEL_25:
    if ( *((_DWORD *)v14 + 8) >= *a4 )
    {
      v19 = (volatile signed __int32 *)a5[6];
      if ( v19 )
      {
        if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
          if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
        }
        v14 = v20;
      }
      j_j__o_free(a5);
      *(_QWORD *)a2 = v14;
      *(_BYTE *)(a2 + 8) = 0;
      result = a2;
    }
    else
    {
      *(_QWORD *)a2 = *sub_1800CE3A0(a1, v23, v12, v10, (int)a4, a5);
      *(_BYTE *)(a2 + 8) = 1;
      result = a2;
    }
  }
  catch ( ... )
  {
    sub_1800CF568(a1, a5);
    throw;
  }
  return result;
}
