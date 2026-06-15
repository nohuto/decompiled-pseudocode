/*
 * XREFs of sub_1800276E0 @ 0x1800276E0
 * Callers:
 *     sub_180075210 @ 0x180075210 (sub_180075210.c)
 *     sub_180075220 @ 0x180075220 (sub_180075220.c)
 *     sub_180075230 @ 0x180075230 (sub_180075230.c)
 *     sub_180075240 @ 0x180075240 (sub_180075240.c)
 *     sub_180075250 @ 0x180075250 (sub_180075250.c)
 * Callees:
 *     sub_180027D40 @ 0x180027D40 (sub_180027D40.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800276E0(_DWORD *a1, unsigned int *a2, _QWORD *a3)
{
  _QWORD **v3; // r10
  __int64 v4; // rax
  unsigned int *v5; // r9
  unsigned int v6; // ebx
  __int64 v7; // r8
  __int64 result; // rax
  __int64 v9; // rcx
  _QWORD *v10; // r11
  _QWORD *v11; // r11
  _QWORD *v12; // r11
  int v13; // eax
  __int64 v14; // r11

  v3 = (_QWORD **)a3;
  v4 = *(_QWORD *)a2 - 0x48EDFA194CEB0AABLL;
  v5 = a2;
  if ( *(_QWORD *)a2 == 0x48EDFA194CEB0AABLL )
    v4 = *((_QWORD *)a2 + 1) - 0x68B7E11A778757A8LL;
  if ( v4 || a1[18] )
  {
    v6 = 0;
    *a3 = 0LL;
    v7 = *a2;
    if ( !*(_QWORD *)a2 && a2[2] == 192 && a2[3] == 1174405120 )
    {
      *v3 = a1;
      (*(void (__fastcall **)(_DWORD *, unsigned int *, __int64, unsigned int *))(*(_QWORD *)a1 + 8LL))(a1, a2, v7, a2);
    }
    else
    {
      if ( (_DWORD)v7 == 1221972245 && a2[1] == 1111294007 && a2[2] == -1091250271 && a2[3] == -694309319
        || (a1 += 2, (_DWORD)v7 == -41997527) && a2[1] == 1264329936 && a2[2] == 744060849 && a2[3] == 281737529 )
      {
        *v3 = a1;
      }
      else
      {
        if ( (unsigned int)sub_180027D40(a2, &qword_18015B840) )
        {
          *v3 = v10;
          v13 = 0;
        }
        else
        {
          v11 = v10 + 1;
          if ( (_DWORD)v7 == 1290472107 && v5[1] == 1223555609 && v5[2] == 2005358504 && v5[3] == 1756881178 )
          {
            *v3 = v11;
            v13 = 0;
          }
          else
          {
            v12 = v11 + 1;
            if ( (_DWORD)v7 == 1776416671 && v5[1] == 1159163566 && v5[2] == -1441554498 && v5[3] == 335602576 )
            {
              *v3 = v12;
              v13 = 0;
            }
            else if ( (unsigned int)sub_180027D40(v9, &qword_18015C550) )
            {
              *v3 = (_QWORD *)(v14 + 8);
              v13 = 0;
            }
            else
            {
              v13 = -2147467262;
            }
          }
        }
        v6 = v13;
        if ( v13 < 0 )
          return v6;
      }
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, unsigned int *))(**v3 + 8LL))(*v3, **v3, v7, v5);
    }
    return v6;
  }
  result = 2147500034LL;
  *a3 = 0LL;
  return result;
}
