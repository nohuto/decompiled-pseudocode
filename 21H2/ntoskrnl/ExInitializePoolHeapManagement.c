/*
 * XREFs of ExInitializePoolHeapManagement @ 0x1403C3D54
 * Callers:
 *     MiInitNucleus @ 0x140A43F34 (MiInitNucleus.c)
 * Callees:
 *     ExCreateHeap @ 0x14039D898 (ExCreateHeap.c)
 *     RtlpDynamicLookasideInitialize @ 0x1403C4100 (RtlpDynamicLookasideInitialize.c)
 *     ExpDetermineLargePagePolicy @ 0x1403C4178 (ExpDetermineLargePagePolicy.c)
 *     RtlHpKInitializeHeapManager @ 0x1403C4218 (RtlHpKInitializeHeapManager.c)
 *     ExInitializePoolTracker @ 0x140A69AF4 (ExInitializePoolTracker.c)
 */

__int64 __fastcall ExInitializePoolHeapManagement(unsigned int a1)
{
  __int64 result; // rax
  unsigned int v3; // esi
  __int128 v4; // xmm6
  __int64 v5; // rdx
  __int64 *v6; // r14
  bool v7; // zf
  __int64 v8; // rdi
  __int64 v9; // xmm0_8
  __int64 v10; // rax
  __int64 v11; // rax
  __int128 v12; // [rsp+28h] [rbp-59h]
  __int128 v13; // [rsp+38h] [rbp-49h]
  __int128 v14; // [rsp+48h] [rbp-39h] BYREF
  __int128 v15; // [rsp+58h] [rbp-29h] BYREF
  __int128 v16; // [rsp+68h] [rbp-19h] BYREF
  __int128 v17; // [rsp+78h] [rbp-9h] BYREF
  __int128 v18; // [rsp+88h] [rbp+7h] BYREF
  __int64 v19; // [rsp+98h] [rbp+17h]
  __int64 v20; // [rsp+F0h] [rbp+6Fh] BYREF

  v20 = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  result = RtlHpKInitializeHeapManager();
  if ( (int)result >= 0 )
  {
    RtlpHpLfhPerfFlags = 1279;
    ExpDetermineLargePagePolicy(&v18);
    v3 = 0;
    if ( dword_140C580D0 )
    {
      v4 = v18;
      while ( 1 )
      {
        v5 = 0LL;
        v12 = 0LL;
        LOWORD(v12) = 259;
        v6 = &qword_140C58100[1048 * v3];
        BYTE2(v12) = v3;
        v14 = v12;
        if ( *((_QWORD *)&v18 + 1) )
          v5 = 0x4000000LL;
        result = ExCreateHeap(&v14, v5, &v20);
        if ( (int)result < 0 )
          break;
        v7 = *((_QWORD *)&v18 + 1) == 0LL;
        v8 = v20;
        v6[1] = v20;
        if ( !v7 )
        {
          v9 = v19;
          *(_OWORD *)(v8 + 192) = v4;
          *(_QWORD *)(v8 + 208) = v9;
          *(_BYTE *)(v8 + 269) = *(_BYTE *)(v8 + 269) & 0xF8 | 1;
          *(_BYTE *)(v8 + 461) = *(_BYTE *)(v8 + 461) & 0xF8 | 1;
        }
        RtlpDynamicLookasideInitialize(v6 + 528);
        *(_QWORD *)(v8 + 40) = v6 + 528;
        v15 = v12;
        result = ExCreateHeap(&v15, 0x40000000LL, &v20);
        if ( (int)result < 0 )
          break;
        ++v3;
        *v6 = v20;
        if ( v3 >= dword_140C580D0 )
          goto LABEL_11;
      }
    }
    else
    {
LABEL_11:
      v13 = 0LL;
      *(_WORD *)((char *)&v13 + 1) = 1;
      LOBYTE(v13) = 3;
      v16 = v13;
      result = ExCreateHeap(&v16, 0LL, &v20);
      if ( (int)result >= 0 )
      {
        v10 = v20;
        v17 = v13;
        *(_DWORD *)(v20 + 816) |= 2u;
        *(_BYTE *)(v10 + 269) |= 8u;
        *(_BYTE *)(v10 + 461) |= 8u;
        qword_140CDB108 = v10;
        result = ExCreateHeap(&v17, 0x40000000LL, &v20);
        if ( (int)result >= 0 )
        {
          v11 = v20;
          *(_DWORD *)(v20 + 816) |= 2u;
          *(_BYTE *)(v11 + 269) |= 8u;
          *(_BYTE *)(v11 + 461) |= 8u;
          qword_140CDB100[0] = v11;
          result = ExInitializePoolTracker();
          if ( (int)result >= 0 )
            _InterlockedOr(&ExpPoolFlags, a1);
        }
      }
    }
  }
  return result;
}
