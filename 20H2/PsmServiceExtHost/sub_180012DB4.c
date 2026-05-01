/*
 * XREFs of sub_180012DB4 @ 0x180012DB4
 * Callers:
 *     sub_180007F50 @ 0x180007F50 (sub_180007F50.c)
 *     sub_180010990 @ 0x180010990 (sub_180010990.c)
 *     sub_180015340 @ 0x180015340 (sub_180015340.c)
 *     sub_18002785C @ 0x18002785C (sub_18002785C.c)
 * Callees:
 *     sub_18000476C @ 0x18000476C (sub_18000476C.c)
 *     sub_18001E830 @ 0x18001E830 (sub_18001E830.c)
 *     sub_180034650 @ 0x180034650 (sub_180034650.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 *     sub_180073964 @ 0x180073964 (sub_180073964.c)
 */

__int64 __fastcall sub_180012DB4(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD *v4; // r12
  __int64 v5; // r15
  _QWORD *i; // rbx
  _QWORD *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // edi
  __int64 v11; // rdx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v4 = (_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL);
  v5 = a1;
  for ( i = (_QWORD *)*v4; i != v4; i = (_QWORD *)*i )
  {
    v7 = (_QWORD *)i[2];
    if ( a2 == v7[167] )
    {
      if ( (*(_BYTE *)(a2 + 836) & 1) != 0 )
      {
        sub_180034650(a2 + 64, 0LL);
        v10 = (*(_QWORD *)(a2 + 712) & 0x2000000000LL) == 0 && (*(char *)(a2 + 1244) < 0 || *(_DWORD *)(a2 + 624) != 2);
        sub_18001E830(v9, v8, 1LL);
        RtlReleaseSRWLockShared(a2 + 64);
      }
      else
      {
        v10 = (*(unsigned __int16 *)(a2 + 1162) >> 2) & 1;
      }
      if ( v10 && (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v7 + 56LL))(v7) )
      {
        LODWORD(a1) = 3;
        while ( 1 )
        {
          result = (unsigned int)a1 + 3LL;
          if ( LODWORD(v7[3 * result]) == (_DWORD)a1 && !BYTE5(v7[3 * result + 2]) )
            break;
          a1 = (unsigned int)(a1 + 1);
          if ( (unsigned int)a1 > 0x31 )
          {
            if ( *((_DWORD *)v7 + 320) == 1 )
              goto LABEL_7;
            break;
          }
        }
        result = (*(__int64 (__fastcall **)(_QWORD *))(*v7 + 64LL))(v7);
      }
      else
      {
        sub_18000476C(a1, 2, 0x32u, (__int64)(v7 + 9), a2);
        v11 = 3LL;
        result = (__int64)(v7 + 20);
        while ( 1 )
        {
          if ( *(_BYTE *)(result + 5) && *(_DWORD *)result == 101 )
          {
            a1 = *((unsigned int *)v7 + 320);
            if ( (_DWORD)a1 == 2 && *(_QWORD *)(result - 8) )
            {
              result = sub_180073964(v7, 0LL);
              goto LABEL_7;
            }
            if ( (_DWORD)a1 == 1 )
              break;
          }
          ++v11;
          result += 24LL;
          if ( v11 >= 50 )
            goto LABEL_7;
        }
        result = (*(__int64 (__fastcall **)(_QWORD *))(*v7 + 48LL))(v7);
      }
    }
LABEL_7:
    ;
  }
  if ( (*(_BYTE *)(v5 + 160) & 2) == 0 )
    return TpPostWork(*(_QWORD *)(v5 + 152));
  return result;
}
