/*
 * XREFs of WppTraceCallback @ 0x1C00794F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001B1C0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C001B200 (memmove.c)
 *     memset @ 0x1C001B4C0 (memset.c)
 *     WppInitGlobalLogger @ 0x1C00790A0 (WppInitGlobalLogger.c)
 */

__int64 __fastcall WppTraceCallback(
        unsigned __int8 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int *a4,
        __int64 a5,
        unsigned int *a6)
{
  unsigned int *v6; // r12
  __int64 v8; // rdi
  unsigned int v9; // ebx
  __int64 v10; // rax
  const void **v11; // r14
  unsigned int v12; // ebx
  unsigned int v13; // ebp
  unsigned int v14; // r15d
  _WORD *v15; // rcx
  __int64 v16; // rcx
  _DWORD *v17; // rsi
  __int64 v18; // rdx
  __int128 v19; // xmm0
  __int64 v20; // rdi
  _DWORD *v21; // rdx
  bool v22; // zf
  __int64 v24; // [rsp+30h] [rbp-38h]
  int v25; // [rsp+70h] [rbp+8h] BYREF

  v6 = a6;
  *a6 = 0;
  if ( a1 <= 3u )
    return (unsigned int)-1073741808;
  if ( a1 > 5u )
  {
    if ( a1 <= 7u )
      return 0;
    if ( a1 == 8 )
    {
      v8 = a5;
      v9 = 0;
      v10 = a5;
      v11 = *(const void ***)(a5 + 32);
      do
      {
        v10 = *(_QWORD *)(v10 + 16);
        ++v9;
      }
      while ( v10 );
      if ( v9 > 0x3F )
        return (unsigned int)-1073741811;
      v13 = 32 * v9 + 24;
      if ( v11 )
      {
        v14 = 32 * v9 + 24;
        v13 += *(unsigned __int16 *)v11 + 2;
      }
      else
      {
        v14 = 0;
      }
      if ( v13 > a3 )
      {
        v12 = -1073741789;
        if ( a3 >= 4 )
        {
          *a4 = v13;
          *v6 = 4;
        }
      }
      else
      {
        memset(a4, 0, a3);
        *a4 = v13;
        a4[2] = v14;
        a4[4] = v9;
        if ( v11 )
        {
          v15 = (_WORD *)((char *)a4 + v14);
          *v15 = *(_WORD *)v11;
          memmove(v15 + 1, v11[1], *(unsigned __int16 *)v11);
        }
        v16 = v8;
        if ( v9 )
        {
          v17 = a4 + 10;
          v18 = v9;
          do
          {
            v19 = *(_OWORD *)*(_QWORD *)(v16 + 8);
            *v17 = 528384;
            v17 += 8;
            *((_OWORD *)v17 - 3) = v19;
            *(_DWORD *)(v16 + 44) = 0;
            *(_BYTE *)(v16 + 41) = 0;
            v16 = *(_QWORD *)(v16 + 16);
            --v18;
          }
          while ( v18 );
        }
        v12 = 0;
        *v6 = v13;
      }
      do
      {
        WppInitGlobalLogger(*(const GUID **)(v8 + 8), (_QWORD *)(v8 + 24), (int *)(v8 + 44), (_BYTE *)(v8 + 41));
        v8 = *(_QWORD *)(v8 + 16);
      }
      while ( v8 );
      return v12;
    }
    return (unsigned int)-1073741808;
  }
  v25 = 0;
  LODWORD(a6) = 0;
  v20 = a5;
  if ( !a5 )
    return (unsigned int)-1073741163;
  if ( a3 < 0x30 )
    return (unsigned int)-1073741811;
  do
  {
    v21 = *(_DWORD **)(v20 + 8);
    if ( *v21 == a4[6] && v21[1] == a4[7] && v21[2] == a4[8] && v21[3] == a4[9] )
      break;
    v20 = *(_QWORD *)(v20 + 16);
  }
  while ( v20 );
  if ( !v20 )
    return (unsigned int)-1073741163;
  v12 = 0;
  if ( a1 == 5 )
  {
    *(_DWORD *)(v20 + 44) = 0;
    *(_QWORD *)(v20 + 24) = 0LL;
    *(_BYTE *)(v20 + 41) = 0;
  }
  else
  {
    v22 = WPPTraceSuite == 2;
    v24 = *((_QWORD *)a4 + 1);
    *(_QWORD *)(v20 + 24) = v24;
    if ( v22 )
    {
      if ( !(unsigned int)((__int64 (__fastcall *)(__int64, int *, __int64, unsigned int **, unsigned int *))pfnWppQueryTraceInformation)(
                            3LL,
                            &v25,
                            4LL,
                            &a6,
                            a4) )
        *(_BYTE *)(v20 + 41) = v25;
      return (unsigned int)((__int64 (__fastcall *)(__int64, __int64, __int64, unsigned int **, unsigned int *))pfnWppQueryTraceInformation)(
                             2LL,
                             v20 + 44,
                             4LL,
                             &a6,
                             a4);
    }
    else
    {
      *(_DWORD *)(v20 + 44) = HIDWORD(v24);
      *(_BYTE *)(v20 + 41) = BYTE2(v24);
    }
  }
  return v12;
}
