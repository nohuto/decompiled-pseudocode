/*
 * XREFs of NVMeIoPollingDpcRoutine @ 0x1C0018470
 * Callers:
 *     <none>
 * Callees:
 *     NVMeCompletionDpcRoutine @ 0x1C0002270 (NVMeCompletionDpcRoutine.c)
 */

__int64 __fastcall NVMeIoPollingDpcRoutine(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 v4; // r8
  __int64 v6; // rdx
  int v8; // eax
  __int64 *v9; // rax
  __int64 result; // rax
  __int64 *v11; // r8
  __int64 v12; // rdx
  unsigned int v13; // r8d
  unsigned int v14; // r9d
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // [rsp+28h] [rbp-58h]
  __int64 v18; // [rsp+30h] [rbp-50h]
  int v19; // [rsp+38h] [rbp-48h]
  __int64 v20; // [rsp+40h] [rbp-40h] BYREF
  __int64 v21; // [rsp+48h] [rbp-38h]
  __int128 v22; // [rsp+50h] [rbp-30h]
  __int64 v23; // [rsp+60h] [rbp-20h] BYREF
  __int64 v24; // [rsp+68h] [rbp-18h]
  __int128 v25; // [rsp+70h] [rbp-10h]
  __int64 vars0; // [rsp+80h] [rbp+0h]
  __int64 vars8; // [rsp+88h] [rbp+8h]
  int v28; // [rsp+A8h] [rbp+28h] BYREF

  v21 = 0LL;
  v4 = 4LL;
  v24 = 0LL;
  v20 = 4LL;
  v6 = *a2;
  v22 = 0LL;
  v23 = 5LL;
  v25 = 0LL;
  v8 = *(_DWORD *)(v6 + 3812);
  if ( (v8 & 0x20) == 0 )
  {
    if ( (v8 & 2) != 0 )
    {
      v9 = &v23;
      v4 = 5LL;
    }
    else
    {
      v9 = &v20;
    }
    StorPortExtendedFunction(
      93LL,
      v6,
      v4,
      a2[1] + 96,
      (_DWORD)v9,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22,
      *((_QWORD *)&v22 + 1),
      v23,
      v24,
      v25,
      *((_QWORD *)&v25 + 1),
      vars0,
      vars8);
  }
  NVMeCompletionDpcRoutine(a1, *a2, a2[1], ((unsigned int)~*(_DWORD *)(*a2 + 3812) >> 3) & 1);
  result = *(unsigned int *)(*a2 + 3812);
  if ( (result & 0x20) == 0 )
  {
    v11 = &v20;
    if ( (result & 2) != 0 )
      v11 = &v23;
    result = StorPortNotification(4100LL, *a2, v11);
  }
  v12 = a2[1];
  v13 = 0;
  v14 = *(_DWORD *)(v12 + 180);
  if ( v14 )
  {
    while ( 1 )
    {
      result = v13;
      if ( *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 192) + 8LL * v13) + 128LL) )
        break;
      if ( ++v13 >= v14 )
        return result;
    }
    v15 = *a2;
    result = *(unsigned int *)(*a2 + 24);
    if ( (result & 0x10) == 0 )
    {
      v16 = *(_QWORD *)(v12 + 208);
      if ( v16 )
      {
        LOBYTE(v28) = 0;
        return StorPortExtendedFunction(
                 89LL,
                 v15,
                 *(_QWORD *)(v16 + 8LL * a3),
                 -10LL * *(unsigned int *)(v12 + 204),
                 0,
                 0LL,
                 &v28,
                 v19,
                 v20,
                 v21,
                 v22,
                 *((_QWORD *)&v22 + 1),
                 v23,
                 v24,
                 v25,
                 *((_QWORD *)&v25 + 1),
                 vars0,
                 vars8);
      }
      else
      {
        v28 = 0;
        return StorPortNotification(4098LL, v15, v12 + 216);
      }
    }
  }
  return result;
}
