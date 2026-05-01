/*
 * XREFs of sub_180032CE4 @ 0x180032CE4
 * Callers:
 *     sub_180032BA8 @ 0x180032BA8 (sub_180032BA8.c)
 *     sub_18006B240 @ 0x18006B240 (sub_18006B240.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     sub_180032E5C @ 0x180032E5C (sub_180032E5C.c)
 *     sub_180033028 @ 0x180033028 (sub_180033028.c)
 *     sub_1800332C4 @ 0x1800332C4 (sub_1800332C4.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memset @ 0x18004683A (memset.c)
 */

__int64 __fastcall sub_180032CE4(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  int v4; // ebx
  SIZE_T v5; // rbx
  __int64 v6; // rsi
  _DWORD *Heap; // rax
  _DWORD *v8; // rdi
  unsigned int v9; // ebx
  PVOID v10; // r14
  _DWORD *v11; // rcx
  int *v12; // rdx
  int v13; // eax
  unsigned int v14; // r9d
  __int64 v15; // r8
  __int64 v17; // rcx
  int v18; // r9d
  unsigned int v19; // [rsp+30h] [rbp-50h] BYREF
  PVOID P; // [rsp+38h] [rbp-48h] BYREF
  int v21; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+48h] [rbp-38h] BYREF
  int *v23; // [rsp+68h] [rbp-18h]
  int v24; // [rsp+70h] [rbp-10h]
  int v25; // [rsp+74h] [rbp-Ch]

  P = 0LL;
  v4 = sub_1800332C4(a1, a2, &P, &v19);
  if ( v4 >= 0 )
  {
    if ( v19 )
    {
      v5 = (unsigned __int64)v19 << 6;
      v6 = v19;
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
      v8 = Heap;
      if ( Heap )
      {
        memset(Heap, 0, v5);
        v9 = v19;
        v10 = P;
        if ( v19 )
        {
          v11 = v8;
          v12 = (int *)((char *)P + 8);
          do
          {
            v13 = *v12;
            v12 += 4;
            *v11 = v13;
            v11 += 16;
            --v6;
          }
          while ( v6 );
        }
        v14 = (2 * (a3 & 4)) | 1;
        if ( (a3 & 8) == 0 )
          v14 = 2 * (a3 & 4);
        v15 = v14 | 0x40;
        if ( (a3 & 0x20) == 0 )
          v15 = v14;
        if ( (unsigned int)sub_180033028(v8, v9, v15) )
        {
          if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
          {
            v25 = 0;
            v23 = &v21;
            v21 = v18;
            v24 = 4;
            sub_18002E278(v17, (unsigned __int8 *)dword_18009EAC1, 0LL, 0LL, 3u, &v22);
          }
          v4 = -1073741823;
        }
        else
        {
          sub_180032E5C(v10, v9, v8, a3);
          v4 = 0;
        }
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
      }
      else
      {
        v4 = -1073741801;
      }
    }
    else
    {
      v4 = 0;
    }
  }
  if ( P )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  return (unsigned int)v4;
}
