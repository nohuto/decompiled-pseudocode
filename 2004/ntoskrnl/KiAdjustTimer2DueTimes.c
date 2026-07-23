/*
 * XREFs of KiAdjustTimer2DueTimes @ 0x14039B660
 * Callers:
 *     KiAdjustTimerDueTimes @ 0x14039B3DC (KiAdjustTimerDueTimes.c)
 * Callees:
 *     KiRemoveTimer2 @ 0x14027F880 (KiRemoveTimer2.c)
 *     KiShouldActivateHRTimerClock @ 0x14027FFEC (KiShouldActivateHRTimerClock.c)
 *     RtlULongLongSub @ 0x1402C9604 (RtlULongLongSub.c)
 *     KiRequestTimer2Expiration @ 0x14033F3D8 (KiRequestTimer2Expiration.c)
 *     KiInsertTimer2 @ 0x1403421AC (KiInsertTimer2.c)
 *     KiSendClockInterruptToClockOwner @ 0x14034B9F4 (KiSendClockInterruptToClockOwner.c)
 */

char __fastcall KiAdjustTimer2DueTimes(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // r10
  _QWORD *v3; // rdi
  __int64 v4; // r14
  __int64 v5; // rax
  _QWORD *i; // rbx
  char v7; // bl
  __int64 v8; // rcx
  char result; // al
  __int64 v10; // r12
  _QWORD **v11; // rax
  _QWORD *v12; // r15
  _QWORD *v13; // rcx
  _QWORD *v14; // rcx
  char v15; // al
  ULONGLONG *v16; // r8
  ULONGLONG v17; // rcx
  signed __int64 v18; // rdx
  signed __int64 v19; // rdx
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  _QWORD *v24; // r8
  ULONGLONG v25; // rcx
  _QWORD *v26; // r8
  _QWORD v27[2]; // [rsp+20h] [rbp-10h] BYREF
  char v29; // [rsp+78h] [rbp+48h] BYREF

  v1 = 0LL;
  v29 = 0;
  v2 = a1;
  v3 = v27;
  v27[1] = v27;
  v27[0] = v27;
  v4 = (__int64)KiTimer2Collections;
  do
  {
    v5 = *(_QWORD *)(v4 + 8);
    if ( (v5 & 1) != 0 )
    {
      if ( v5 == 1 )
        goto LABEL_5;
      i = (_QWORD *)(v5 ^ (v4 | 1));
    }
    else
    {
      i = *(_QWORD **)(v4 + 8);
    }
    if ( i )
    {
      v10 = 0LL;
      if ( v1 >= 2 )
        v10 = 24LL;
      do
      {
        v11 = (_QWORD **)i[1];
        v12 = &i[v10 / 0xFFFFFFFFFFFFFFF8uLL];
        v13 = i;
        if ( v11 )
        {
          v14 = *v11;
          for ( i = (_QWORD *)i[1]; v14; v14 = (_QWORD *)*v14 )
            i = v14;
        }
        else
        {
          while ( 1 )
          {
            i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !i || (_QWORD *)*i == v13 )
              break;
            v13 = i;
          }
        }
        v15 = *((_BYTE *)v12 + 104);
        if ( v15 != *(_BYTE *)v2 && (v15 || (*((_BYTE *)v12 + 105) & 2) == 0) )
        {
          KiRemoveTimer2((__int64)(v12 - 3));
          v2 = a1;
          v16 = v12 + 6;
          v17 = v12[6];
          v18 = *(_QWORD *)(a1 + 24);
          if ( v18 >= 0 )
          {
            if ( RtlULongLongSub(v17, v18, v16) )
              *v24 = 0LL;
            v25 = v12[7];
            if ( v25 != -1LL && RtlULongLongSub(v25, *(_QWORD *)(v2 + 24), v12 + 7) )
              *v26 = 0LL;
          }
          else
          {
            v19 = -v18;
            v20 = v17 + v19;
            if ( v17 + v19 < v17 || v20 == -1 )
              v20 = -2LL;
            v21 = v12[7];
            *v16 = v20;
            if ( v21 != -1LL )
            {
              v23 = v21 + v19;
              if ( v21 + v19 < v21 || v23 == -1 )
                v23 = -2LL;
              v12[7] = v23;
            }
          }
          v22 = v27[0];
          v3 = v12;
          if ( *(_QWORD **)(v27[0] + 8LL) != v27 )
            __fastfail(3u);
          *v12 = v27[0];
          v12[1] = v27;
          *(_QWORD *)(v22 + 8) = v12;
          v27[0] = v12;
        }
      }
      while ( i );
    }
LABEL_5:
    ++v1;
    v4 += 24LL;
  }
  while ( v4 < (__int64)&KiCpuSetLock );
  v7 = 0;
  if ( v3 != v27 )
  {
    do
    {
      v8 = (__int64)(v3 - 3);
      v3 = (_QWORD *)*v3;
      KiInsertTimer2(v8, 1, &v29);
      if ( v29 )
        v7 = 1;
    }
    while ( v3 != v27 );
    if ( v7 )
      KiRequestTimer2Expiration();
  }
  result = KiShouldActivateHRTimerClock(MEMORY[0xFFFFF78000000008], qword_140C31AA8);
  if ( result )
    return KiSendClockInterruptToClockOwner();
  return result;
}
