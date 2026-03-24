/*
 * XREFs of KiAdjustTimer2DueTimes @ 0x14039E3F0
 * Callers:
 *     KiAdjustTimerDueTimes @ 0x14039E16C (KiAdjustTimerDueTimes.c)
 * Callees:
 *     KiRemoveTimer2 @ 0x14024B3E0 (KiRemoveTimer2.c)
 *     KiShouldActivateHRTimerClock @ 0x14024BB4C (KiShouldActivateHRTimerClock.c)
 *     RtlULongLongSub @ 0x1402606B8 (RtlULongLongSub.c)
 *     KiSendClockInterruptToClockOwner @ 0x140292B04 (KiSendClockInterruptToClockOwner.c)
 *     KiInsertTimer2 @ 0x140292CA0 (KiInsertTimer2.c)
 *     KiRequestTimer2Expiration @ 0x140293D24 (KiRequestTimer2Expiration.c)
 */

char __fastcall KiAdjustTimer2DueTimes(__int64 a1, __int64 a2, ULONGLONG *a3)
{
  __int64 v3; // r13
  __int64 v4; // r10
  _QWORD *v5; // rdi
  __int64 v6; // r14
  __int64 v7; // rax
  _QWORD *i; // rbx
  char v9; // bl
  __int64 v10; // rcx
  char result; // al
  __int64 v12; // r12
  _QWORD **v13; // rax
  _QWORD *v14; // r15
  _QWORD *v15; // rcx
  _QWORD *v16; // rcx
  char v17; // al
  ULONGLONG v18; // rcx
  signed __int64 v19; // rdx
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  _QWORD *v24; // r8
  ULONGLONG v25; // rcx
  _QWORD v26[2]; // [rsp+20h] [rbp-10h] BYREF
  char v28; // [rsp+78h] [rbp+48h] BYREF

  v3 = 0LL;
  v28 = 0;
  v4 = a1;
  v5 = v26;
  v26[1] = v26;
  v26[0] = v26;
  v6 = (__int64)KiTimer2Collections;
  do
  {
    v7 = *(_QWORD *)(v6 + 8);
    if ( (v7 & 1) != 0 )
    {
      if ( v7 == 1 )
        goto LABEL_5;
      i = (_QWORD *)(v7 ^ (v6 | 1));
    }
    else
    {
      i = *(_QWORD **)(v6 + 8);
    }
    if ( i )
    {
      v12 = 0LL;
      if ( v3 >= 2 )
        v12 = 24LL;
      do
      {
        v13 = (_QWORD **)i[1];
        v14 = &i[v12 / 0xFFFFFFFFFFFFFFF8uLL];
        v15 = i;
        if ( v13 )
        {
          v16 = *v13;
          for ( i = (_QWORD *)i[1]; v16; v16 = (_QWORD *)*v16 )
            i = v16;
        }
        else
        {
          while ( 1 )
          {
            i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !i || (_QWORD *)*i == v15 )
              break;
            v15 = i;
          }
        }
        v17 = *((_BYTE *)v14 + 104);
        if ( v17 != *(_BYTE *)v4 && (v17 || (*((_BYTE *)v14 + 105) & 2) == 0) )
        {
          KiRemoveTimer2((__int64)(v14 - 3), a2, (__int64)a3);
          v4 = a1;
          a3 = v14 + 6;
          v18 = v14[6];
          v19 = *(_QWORD *)(a1 + 24);
          if ( v19 >= 0 )
          {
            if ( RtlULongLongSub(v18, v19, a3) )
              *v24 = 0LL;
            a3 = v14 + 7;
            v25 = v14[7];
            if ( v25 != -1LL && RtlULongLongSub(v25, *(_QWORD *)(v4 + 24), a3) )
              *a3 = 0LL;
          }
          else
          {
            a2 = -v19;
            v20 = v18 + a2;
            if ( v18 + a2 < v18 || v20 == -1 )
              v20 = -2LL;
            v21 = v14[7];
            *a3 = v20;
            if ( v21 != -1LL )
            {
              v23 = v21 + a2;
              if ( v21 + a2 < v21 || v23 == -1 )
                v23 = -2LL;
              v14[7] = v23;
            }
          }
          v22 = v26[0];
          v5 = v14;
          if ( *(_QWORD **)(v26[0] + 8LL) != v26 )
            __fastfail(3u);
          *v14 = v26[0];
          v14[1] = v26;
          *(_QWORD *)(v22 + 8) = v14;
          v26[0] = v14;
        }
      }
      while ( i );
    }
LABEL_5:
    ++v3;
    v6 += 24LL;
  }
  while ( v6 < (__int64)&KiForceIdlePendingDpcCount );
  v9 = 0;
  if ( v5 != v26 )
  {
    do
    {
      v10 = (__int64)(v5 - 3);
      v5 = (_QWORD *)*v5;
      KiInsertTimer2(v10, 1, (__int64)&v28);
      if ( v28 )
        v9 = 1;
    }
    while ( v5 != v26 );
    if ( v9 )
      KiRequestTimer2Expiration();
  }
  result = KiShouldActivateHRTimerClock(MEMORY[0xFFFFF78000000008], qword_140C31C88);
  if ( result )
    return KiSendClockInterruptToClockOwner();
  return result;
}
