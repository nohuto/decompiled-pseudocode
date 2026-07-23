/*
 * XREFs of MiFindFreePageFileSpaceForward @ 0x1402362BC
 * Callers:
 *     MiFindFreePageFileSpace @ 0x1402586B4 (MiFindFreePageFileSpace.c)
 * Callees:
 *     RtlFindNextClearRunUlong @ 0x140236608 (RtlFindNextClearRunUlong.c)
 */

__int64 __fastcall MiFindFreePageFileSpaceForward(int *a1, int *a2, unsigned int a3, char a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // r13d
  unsigned int v8; // edi
  int v10; // r14d
  __int64 v11; // rax
  unsigned int NextClearRunUlong; // eax
  int v13; // r10d
  int v14; // esi
  int v15; // edx
  unsigned int v16; // eax
  __int64 result; // rax
  _DWORD v18[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v19; // [rsp+38h] [rbp-18h]
  __int128 v20; // [rsp+40h] [rbp-10h] BYREF
  int v21; // [rsp+90h] [rbp+40h]
  int v23; // [rsp+A8h] [rbp+58h] BYREF

  v4 = *a1;
  v18[1] = 0;
  v5 = 0;
  v23 = 0;
  v7 = *a2;
  v8 = a3;
  v10 = 0;
  v18[0] = v4;
  v11 = *((_QWORD *)a1 + 14);
  v20 = 0LL;
  v19 = *(_QWORD *)(v11 + 32);
  while ( 1 )
  {
    NextClearRunUlong = RtlFindNextClearRunUlong((unsigned int)v18, v7, a3, -1, (__int64)&v23);
    a3 = NextClearRunUlong;
    if ( !NextClearRunUlong )
      break;
    v7 = v23 + NextClearRunUlong;
    if ( NextClearRunUlong >= v5 && (NextClearRunUlong >= v8 || a4 >= 0) )
    {
      v13 = v23 & 0x1F;
      v14 = v23 - v13;
      v15 = v8;
      *((_QWORD *)&v20 + 1) = *(_QWORD *)(*((_QWORD *)a1 + 14) + 16LL)
                            + 4 * ((unsigned __int64)(unsigned int)(v23 - v13) >> 5);
      LODWORD(v20) = v13 + NextClearRunUlong;
      if ( v8 <= 0x20 )
        v15 = 32;
      v21 = v15;
      while ( 1 )
      {
        v16 = RtlFindNextClearRunUlong((unsigned int)&v20, v13, a3, v15, (__int64)&v23);
        if ( !v16 )
          break;
        v15 = v21;
        v13 = v23 + v16;
        if ( v16 > v5 )
        {
          v10 = v14 + v23;
          v5 = v16;
          if ( v16 > v8 )
            v5 = v8;
          if ( v5 == v8 )
            goto LABEL_13;
        }
      }
      if ( v5 == v8 )
        break;
    }
  }
LABEL_13:
  if ( a4 < 0 && v5 < v8 )
  {
    v5 = 0;
    v10 = 0;
  }
  result = v5;
  *a2 = v10;
  return result;
}
