/*
 * XREFs of EtwpValidateFilterDescriptors @ 0x1407B84C0
 * Callers:
 *     EtwpValidateEnableNotification @ 0x1406B9FC0 (EtwpValidateEnableNotification.c)
 * Callees:
 *     EtwpAllocateFilter @ 0x1407B8678 (EtwpAllocateFilter.c)
 */

__int64 __fastcall EtwpValidateFilterDescriptors(_DWORD *a1, __int64 a2)
{
  unsigned int v3; // eax
  unsigned int v5; // ecx
  unsigned int v6; // ebx
  int v7; // ebp
  int v8; // esi
  __int64 v9; // r9
  unsigned __int64 v10; // r10
  int v11; // edx
  int v12; // eax
  __int64 v13; // rcx
  __int64 result; // rax
  __int64 v15; // rdx
  __int128 v16; // [rsp+20h] [rbp-28h] BYREF

  v16 = 0LL;
  v3 = a1[29];
  if ( v3 > 0xD )
    return 3221225485LL;
  v5 = a1[1];
  v6 = 16 * v3 + 120;
  if ( v6 > v5 )
    return 3221225485LL;
  v7 = 0;
  v8 = 0;
  if ( v3 )
  {
    while ( 1 )
    {
      v9 = (__int64)&a1[4 * v8 + 30];
      v10 = *(_QWORD *)v9;
      if ( *(_QWORD *)v9 < (unsigned __int64)v6 )
        return 3221225485LL;
      v11 = a1[20];
      if ( (v11 & 0x20) != 0 )
      {
        v12 = *(_DWORD *)(v9 + 12);
        if ( v12 == -2147479552
          || v12 == -2147483136
          || v12 == -2147482624
          || v12 == -2147475456
          || v12 == -2147483392
          || v12 == 0x80000000
          || v12 == -2147483646 )
        {
          return 3221225485LL;
        }
      }
      v13 = *(unsigned int *)(v9 + 12);
      if ( (v11 & 0x400) != 0 )
      {
        if ( (((_DWORD)v13 + 0x80000000) & 0xFFFFFEFD) == 0 && (_DWORD)v13 != -2147483390 )
          return 3221225485LL;
      }
      else if ( (_DWORD)v13 == -2147450880 )
      {
        return 3221225485LL;
      }
      v15 = *(unsigned int *)(v9 + 8);
      if ( (unsigned int)v15 > 0x400 )
      {
        if ( (_DWORD)v13 == -2147483392 )
          goto LABEL_23;
        if ( (_DWORD)v13 != -2147482624 )
          return 3221225485LL;
      }
      if ( (_DWORD)v13 == -2147483392 )
      {
LABEL_23:
        if ( (unsigned int)v15 > 0x1000 )
          return 3221225485LL;
      }
      if ( ((_DWORD)v13 == -2147482624 || (_DWORD)v13 == -2147475456) && (unsigned int)v15 > 0x1000
        || v10 + v15 < v10
        || v10 + v15 > (unsigned int)a1[1] )
      {
        return 3221225485LL;
      }
      v7 += v15;
      if ( (_DWORD)v13 == -2147483644 )
      {
        *(_QWORD *)(a2 + 80) = v9;
      }
      else if ( (_DWORD)v13 == -2147467264 )
      {
        *(_QWORD *)(a2 + 64) = v9;
      }
      else
      {
        *((_QWORD *)&v16 + 1) = __PAIR64__(v13, v15);
        *(_QWORD *)&v16 = (char *)a1 + v10;
        result = ((__int64 (__fastcall *)(__int64, __int128 *, __int64, _DWORD *))EtwpAllocateFilter)(
                   v13,
                   &v16,
                   a2,
                   a1 + 10);
        if ( (int)result < 0 )
          return result;
      }
      if ( (unsigned int)++v8 >= a1[29] )
      {
        v5 = a1[1];
        break;
      }
    }
  }
  if ( v6 + v7 == v5 )
    return 0LL;
  else
    return 3221225485LL;
}
