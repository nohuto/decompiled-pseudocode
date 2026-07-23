/*
 * XREFs of RtlpGenerateInheritAcl @ 0x1405E4D50
 * Callers:
 *     RtlpInheritAcl2 @ 0x1406046A0 (RtlpInheritAcl2.c)
 * Callees:
 *     RtlFindAceByType @ 0x140257F00 (RtlFindAceByType.c)
 *     RtlpGenerateInheritedAce @ 0x1405E4F20 (RtlpGenerateInheritedAce.c)
 */

__int64 __fastcall RtlpGenerateInheritAcl(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        PGENERIC_MAPPING a8,
        __int64 a9,
        int a10,
        int a11,
        char a12,
        _DWORD *a13,
        PACL Acl,
        _BYTE *a15)
{
  int v15; // edi
  unsigned __int16 *v16; // rbx
  unsigned int v17; // esi
  unsigned int v19; // ebp
  ACL *v20; // r15
  int v21; // r12d
  __int64 v22; // r13
  __int64 result; // rax
  char v24; // [rsp+70h] [rbp-58h]
  __int64 v25[10]; // [rsp+74h] [rbp-54h] BYREF
  __int64 v26; // [rsp+D0h] [rbp+8h] BYREF
  char v27; // [rsp+D8h] [rbp+10h]
  char v28; // [rsp+E0h] [rbp+18h]
  __int64 v29; // [rsp+E8h] [rbp+20h]

  v29 = a4;
  v28 = a3;
  v27 = a2;
  v15 = 0;
  v16 = (unsigned __int16 *)(a1 + 8);
  v17 = 0;
  v25[0] = 0LL;
  v19 = 0;
  LOBYTE(v26) = 0;
  v24 = 0;
  *a15 = 0;
  if ( *(_WORD *)(a1 + 4) )
  {
    v20 = Acl;
    v21 = a10;
    v22 = a9;
    while ( 1 )
    {
      if ( *(_BYTE *)v16 == 17 )
      {
        if ( a11 == 3 )
        {
          if ( RtlFindAceByType(v20, 0x11u, 0LL) )
          {
LABEL_13:
            if ( !v24 )
              break;
LABEL_21:
            result = 3221225507LL;
            *a13 = v17 + v15;
            return result;
          }
LABEL_5:
          result = RtlpGenerateInheritedAce(
                     v16,
                     a5,
                     a6,
                     a7,
                     a8,
                     v22,
                     v21,
                     (__int64)v25,
                     (__int64)v20,
                     (__int64)v25 + 4,
                     (__int64)&v26);
          if ( (_DWORD)result == -1073741789 )
          {
            v24 = 1;
          }
          else if ( (int)result < 0 )
          {
            return result;
          }
          if ( (_BYTE)v26 )
            *a15 = 1;
          v15 += LODWORD(v25[0]);
          if ( LODWORD(v25[0]) > v17 || (v17 -= LODWORD(v25[0]), v17 <= HIDWORD(v25[0])) )
            v17 = HIDWORD(v25[0]);
        }
      }
      else if ( a11 != 3 )
      {
        goto LABEL_5;
      }
      ++v19;
      v16 = (unsigned __int16 *)((char *)v16 + v16[1]);
      if ( v19 >= *(unsigned __int16 *)(a1 + 4) )
        goto LABEL_13;
    }
  }
  if ( a12 )
    goto LABEL_21;
  *a13 = v15;
  return 0LL;
}
